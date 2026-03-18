/*
 * XREFs of GsDriverEntry @ 0x1400C6330
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x1400C6364 (__security_init_cookie.c)
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
