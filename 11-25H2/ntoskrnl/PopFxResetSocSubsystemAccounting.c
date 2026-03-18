/*
 * XREFs of PopFxResetSocSubsystemAccounting @ 0x1407433A0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14098280C (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 */

__int64 __fastcall PopFxResetSocSubsystemAccounting(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( PopFxLookupSocSubsystemsByPlatformIdleState(a1) )
  {
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(38LL) )
      PopFxBugCheck(0x605uLL, 0x26uLL, PopFxProcessorPlugin, 0LL);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v1;
}
