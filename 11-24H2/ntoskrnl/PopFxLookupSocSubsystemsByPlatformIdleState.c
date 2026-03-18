/*
 * XREFs of PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1409863B0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14074F470 (PopFxResetSocSubsystemAccounting.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140985A6C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098600C (PopFxLogSocSubsystemBlockingTimes.c)
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
