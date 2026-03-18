/*
 * XREFs of EtwSetInformation @ 0x140A9F290
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     BapdWriteEtwEvents @ 0x1404A4354 (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x1404A47C8 (BapdRegisterEtwProvider.c)
 *     HvlpEtwRegister @ 0x140587B34 (HvlpEtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagInitialize @ 0x140C1DDA4 (PopDiagInitialize.c)
 * Callees:
 *     EtwpSetProviderTraitsKm @ 0x140A83EEC (EtwpSetProviderTraitsKm.c)
 */

NTSTATUS __stdcall EtwSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  NTSTATUS v4; // r10d
  __int32 v6; // edx

  v4 = 0;
  if ( !RegHandle )
    return -1073741816;
  v6 = InformationClass - 2;
  if ( !v6 )
  {
    if ( EventInformation && InformationLength - 3 <= 0x7FFC )
      return EtwpSetProviderTraitsKm(RegHandle, EventInformation, InformationLength);
    return -1073741811;
  }
  if ( v6 == 1 )
  {
    if ( EventInformation && InformationLength == 1 )
    {
      if ( *(_BYTE *)EventInformation == 1 )
      {
        _InterlockedOr16((volatile signed __int16 *)(RegHandle + 98), 0x100u);
        return v4;
      }
      if ( !*(_BYTE *)EventInformation )
      {
        _InterlockedAnd16((volatile signed __int16 *)(RegHandle + 98), 0xFEFFu);
        return v4;
      }
    }
    return -1073741811;
  }
  return -1073741808;
}
