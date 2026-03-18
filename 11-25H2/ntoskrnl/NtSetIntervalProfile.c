/*
 * XREFs of NtSetIntervalProfile @ 0x1407B25E0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x140ABE5E4 (KeSetIntervalProfile.c)
 */

__int64 __fastcall NtSetIntervalProfile(unsigned int a1, unsigned int a2)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  KeSetIntervalProfile(a1, a2);
  return 0LL;
}
