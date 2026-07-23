/*
 * XREFs of ZwOpenEvent @ 0x1406A7BB0
 * Callers:
 *     DifZwOpenEventWrapper @ 0x14063FCB0 (DifZwOpenEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x1407731D4 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
