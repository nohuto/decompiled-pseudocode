/*
 * XREFs of PopDiagTraceSleepStudyBlockerData @ 0x140755FA4
 * Callers:
 *     PopFxLogSocSubsystemMetadata @ 0x14096E27C (PopFxLogSocSubsystemMetadata.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 */

void __fastcall PopDiagTraceSleepStudyBlockerData(ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
  }
}
