/*
 * XREFs of ZwOpenEvent @ 0x1406A6C10
 * Callers:
 *     DifZwOpenEventWrapper @ 0x1406416F0 (DifZwOpenEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess);
}
