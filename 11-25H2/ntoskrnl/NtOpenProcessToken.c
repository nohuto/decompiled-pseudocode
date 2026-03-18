/*
 * XREFs of NtOpenProcessToken @ 0x1409D8830
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenProcessTokenEx @ 0x1409D8850 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __stdcall NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  return NtOpenProcessTokenEx(ProcessHandle, DesiredAccess, 0, TokenHandle);
}
