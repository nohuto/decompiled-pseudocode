/*
 * XREFs of PopDiagTraceSleepStudyBlockerData @ 0x140757B24
 * Callers:
 *     PopFxLogSocSubsystemMetadata @ 0x140985A6C (PopFxLogSocSubsystemMetadata.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 */

void __fastcall PopDiagTraceSleepStudyBlockerData(ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
  }
}
