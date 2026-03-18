/*
 * XREFs of NtOpenProcessToken @ 0x140855380
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x1408541D0 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
