/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x1409BA124
 * Callers:
 *     PopPowerAggregatorDozeTimerArm @ 0x14075914C (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x140759220 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopNotifyCsStateExited @ 0x1409B9F00 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorWorker @ 0x1409B9F50 (PopPowerAggregatorWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 */

void __fastcall PopPowerAggregatorDiagTraceEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(PopDiagHandle, EventDescriptor, 0LL, UserDataCount, UserData);
  }
}
