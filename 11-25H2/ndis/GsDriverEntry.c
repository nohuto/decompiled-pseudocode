/*
 * XREFs of GsDriverEntry @ 0x140196010
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x140196044 (__security_init_cookie.c)
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
