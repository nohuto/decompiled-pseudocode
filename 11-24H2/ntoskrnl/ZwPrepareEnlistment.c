/*
 * XREFs of ZwPrepareEnlistment @ 0x1406A8C30
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x140643960 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
