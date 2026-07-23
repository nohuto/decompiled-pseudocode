/*
 * XREFs of NtUnloadDriver @ 0x140AA3F10
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0LL);
}
