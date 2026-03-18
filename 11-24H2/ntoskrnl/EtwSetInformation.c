/*
 * XREFs of EtwSetInformation @ 0x140AA4AB0
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     BapdWriteEtwEvents @ 0x1404A4884 (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x1404A4CF8 (BapdRegisterEtwProvider.c)
 *     HvlpEtwRegister @ 0x14058B1A4 (HvlpEtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagInitialize @ 0x140C2EEA0 (PopDiagInitialize.c)
 * Callees:
 *     EtwpSetProviderTraitsKm @ 0x140A889E8 (EtwpSetProviderTraitsKm.c)
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
