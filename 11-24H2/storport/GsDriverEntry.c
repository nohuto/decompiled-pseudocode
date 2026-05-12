/*
 * XREFs of GsDriverEntry @ 0x1401C3010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x14006DD10 (DriverEntry.c)
 *     __security_init_cookie @ 0x1401C3044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
