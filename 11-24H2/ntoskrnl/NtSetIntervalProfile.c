/*
 * XREFs of NtSetIntervalProfile @ 0x1407C43E0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     KeSetIntervalProfile @ 0x140AC23D4 (KeSetIntervalProfile.c)
 */

__int64 __fastcall NtSetIntervalProfile(unsigned int a1, unsigned int a2)
{
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    return 3221225569LL;
  KeSetIntervalProfile(a1, a2);
  return 0LL;
}
