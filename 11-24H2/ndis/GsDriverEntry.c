/*
 * XREFs of GsDriverEntry @ 0x14018B010
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x14018B044 (__security_init_cookie.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return DriverEntry(DriverObject, RegistryPath);
}
