/*
 * XREFs of ZwRollbackEnlistment @ 0x1406AA550
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x140645E50 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
