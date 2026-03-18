/*
 * XREFs of GsDriverEntry @ 0x140433010
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x140433044 (__security_init_cookie.c)
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
