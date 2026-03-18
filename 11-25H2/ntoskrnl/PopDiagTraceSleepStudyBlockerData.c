/*
 * XREFs of PopDiagTraceSleepStudyBlockerData @ 0x14074BA70
 * Callers:
 *     PopFxLogSocSubsystemMetadata @ 0x14098283C (PopFxLogSocSubsystemMetadata.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 */

void __fastcall PopDiagTraceSleepStudyBlockerData(ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR UserData)
{
  if ( PopDiagSleepStudyHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
      EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
  }
}
