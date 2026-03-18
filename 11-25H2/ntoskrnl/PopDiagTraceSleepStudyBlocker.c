/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x14049A2E8
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1404863F4 (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098210C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 8u, UserData);
  }
}
