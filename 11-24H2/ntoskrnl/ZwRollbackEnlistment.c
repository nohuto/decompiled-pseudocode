/*
 * XREFs of ZwRollbackEnlistment @ 0x1406A95B0
 * Callers:
 *     DifZwRollbackEnlistmentWrapper @ 0x140647890 (DifZwRollbackEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRollbackEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
