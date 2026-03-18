/*
 * XREFs of FxDriverEntry @ 0x1400566D0
 * Callers:
 *     <none>
 * Callees:
 *     FxDriverEntryWorker @ 0x140056704 (FxDriverEntryWorker.c)
 *     __security_init_cookie @ 0x140085008 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return FxDriverEntryWorker(DriverObject, RegistryPath);
}
