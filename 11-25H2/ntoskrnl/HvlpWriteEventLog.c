/*
 * XREFs of HvlpWriteEventLog @ 0x1405880D4
 * Callers:
 *     HvlPhase2Initialize @ 0x14057F3D0 (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x1405879F0 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x140587B7C (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x140587E14 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x14058800C (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 */

NTSTATUS __fastcall HvlpWriteEventLog(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = (int)EventDescriptor;
  if ( HvlGlobalSystemEventsHandle )
    return EtwWriteEx(HvlGlobalSystemEventsHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  return result;
}
