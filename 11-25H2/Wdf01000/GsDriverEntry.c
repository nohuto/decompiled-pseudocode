/*
 * XREFs of GsDriverEntry @ 0x1400E5010
 * Callers:
 *     <none>
 * Callees:
 *     DriverEntry @ 0x140085A60 (DriverEntry.c)
 *     __security_init_cookie @ 0x1400E5044 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
