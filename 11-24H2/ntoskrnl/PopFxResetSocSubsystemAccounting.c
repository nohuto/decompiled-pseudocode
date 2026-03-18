/*
 * XREFs of PopFxResetSocSubsystemAccounting @ 0x14074F470
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1409863B0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 */

__int64 __fastcall PopFxResetSocSubsystemAccounting(__int64 a1)
{
  int v1; // ecx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v6; // [rsp+40h] [rbp+18h] BYREF
  int v7; // [rsp+44h] [rbp+1Ch]

  v4 = 0;
  if ( PopFxLookupSocSubsystemsByPlatformIdleState(a1) )
  {
    v6 = v1;
    v7 = 0;
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(38LL, &v6, v2, v3) )
      PopFxBugCheck(0x605uLL, 0x26uLL, PopFxProcessorPlugin, 0LL);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v4;
}
