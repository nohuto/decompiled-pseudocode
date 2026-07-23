/*
 * XREFs of EtwSetInformation @ 0x140AD9290
 * Callers:
 *     BapdWriteEtwEvents @ 0x14049F614 (BapdWriteEtwEvents.c)
 *     BapdRegisterEtwProvider @ 0x14049FA88 (BapdRegisterEtwProvider.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     HvlpEtwRegister @ 0x140588494 (HvlpEtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagInitialize @ 0x140C30FC0 (PopDiagInitialize.c)
 * Callees:
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     EtwpTrackProviderBinaryKm @ 0x1407AA9F0 (EtwpTrackProviderBinaryKm.c)
 *     EtwpSetProviderTraitsKm @ 0x1409F66EC (EtwpSetProviderTraitsKm.c)
 */

NTSTATUS __stdcall EtwSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  NTSTATUS v4; // ebx
  __int64 v10; // rdx

  v4 = 0;
  if ( !RegHandle )
    return -1073741816;
  switch ( InformationClass )
  {
    case EventProviderBinaryTrackInfo:
      goto LABEL_26;
    case EventProviderSetTraits:
      if ( EventInformation && InformationLength - 3 <= 0x7FFC )
        return EtwpSetProviderTraitsKm(RegHandle, EventInformation, InformationLength);
      return -1073741811;
    case EventProviderUseDescriptorType:
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
    case EventProviderSetReserved2:
LABEL_26:
      if ( !(unsigned int)Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline() )
        return -1073741808;
      if ( !EventInformation && !InformationLength )
        return EtwpTrackProviderBinaryKm(RegHandle, v10, InformationClass == EventProviderSetReserved2);
      return -1073741811;
  }
  return -1073741808;
}
