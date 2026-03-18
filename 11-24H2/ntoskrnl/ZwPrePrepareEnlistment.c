/*
 * XREFs of ZwPrePrepareEnlistment @ 0x1406A8BF0
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x140643680 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
