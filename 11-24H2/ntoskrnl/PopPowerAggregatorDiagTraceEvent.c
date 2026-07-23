/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x1409A0774
 * Callers:
 *     PopPowerAggregatorDozeTimerArm @ 0x1407575AC (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x140757680 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopNotifyCsStateExited @ 0x1409A0550 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorWorker @ 0x1409A05A0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
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
