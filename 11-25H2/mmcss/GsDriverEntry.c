/*
 * XREFs of GsDriverEntry @ 0x1C000F750
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x1C000F010 (DriverEntry.c)
 *     __security_init_cookie @ 0x1C000F784 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
