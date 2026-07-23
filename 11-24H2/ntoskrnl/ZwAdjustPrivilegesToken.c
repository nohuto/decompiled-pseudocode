/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1406A7BD0
 * Callers:
 *     DifZwAdjustPrivilegesTokenWrapper @ 0x140639CA0 (DifZwAdjustPrivilegesTokenWrapper.c)
 *     BiAdjustPrivilege @ 0x1409A7390 (BiAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x1409A82D4 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140A4850C (RtlReleasePrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
