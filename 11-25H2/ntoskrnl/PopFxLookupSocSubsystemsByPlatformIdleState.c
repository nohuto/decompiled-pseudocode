/*
 * XREFs of PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14098280C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140741BC8 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1407433A0 (PopFxResetSocSubsystemAccounting.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098210C (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14098283C (PopFxLogSocSubsystemMetadata.c)
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
