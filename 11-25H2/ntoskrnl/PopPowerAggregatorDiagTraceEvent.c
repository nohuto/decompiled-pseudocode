/*
 * XREFs of PopPowerAggregatorDiagTraceEvent @ 0x140A3D584
 * Callers:
 *     PopPowerAggregatorDozeTimerArm @ 0x14074CE84 (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x14074CF60 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopNotifyCsStateExited @ 0x140A3D360 (PopNotifyCsStateExited.c)
 *     PopPowerAggregatorWorker @ 0x140A3D3B0 (PopPowerAggregatorWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
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
