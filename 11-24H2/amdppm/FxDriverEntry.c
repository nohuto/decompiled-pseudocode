/*
 * XREFs of FxDriverEntry @ 0x1400051C0
 * Callers:
 *     <none>
 * Callees:
 *     FxDriverEntryWorker @ 0x1400051F4 (FxDriverEntryWorker.c)
 *     __security_init_cookie @ 0x140043008 (__security_init_cookie.c)
 */

NTSTATUS __stdcall FxDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  _security_init_cookie();
  return FxDriverEntryWorker(DriverObject, RegistryPath);
}
