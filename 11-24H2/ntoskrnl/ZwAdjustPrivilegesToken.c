/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1406A6C30
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x14063B6E0 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     BiAdjustPrivilege @ 0x1409C0D40 (BiAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x1409C1C84 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140A5134C (RtlReleasePrivilege.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAdjustPrivilegesToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
