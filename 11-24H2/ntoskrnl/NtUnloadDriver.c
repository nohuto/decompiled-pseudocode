/*
 * XREFs of NtUnloadDriver @ 0x140AA4050
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 */

NTSTATUS __cdecl NtUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  return IopUnloadDriver(DriverServiceName, 0LL);
}
