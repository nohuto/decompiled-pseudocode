/*
 * XREFs of PopDiagTraceSleepStudyBlocker @ 0x14049A5A8
 * Callers:
 *     PpmIdleCaptureCsVetoAccounting @ 0x1404AFDBC (PpmIdleCaptureCsVetoAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098600C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 */

void __fastcall PopDiagTraceSleepStudyBlocker(PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER) )
      EtwWriteEx(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER, 0LL, 0, 0LL, 0LL, 8u, UserData);
  }
}
