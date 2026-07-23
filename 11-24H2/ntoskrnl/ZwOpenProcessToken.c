/*
 * XREFs of ZwOpenProcessToken @ 0x1406A9A10
 * Callers:
 *     DifZwOpenProcessTokenWrapper @ 0x140640940 (DifZwOpenProcessTokenWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
