/*
 * XREFs of PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14096EBC0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074BFC8 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14074D7A0 (PopFxResetSocSubsystemAccounting.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14096E27C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14096E81C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxLookupSocSubsystemsByPlatformIdleState(int a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = SocSubsystemsList;
  result = 0LL;
  while ( (__int64 *)v1 != &SocSubsystemsList )
  {
    result = v1;
    if ( !v1 || *(_DWORD *)(v1 + 16) == a1 )
      break;
    v1 = *(_QWORD *)v1;
  }
  return result;
}
