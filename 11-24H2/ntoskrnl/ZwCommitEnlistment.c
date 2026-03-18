/*
 * XREFs of ZwCommitEnlistment @ 0x1406A7770
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x14063D0F0 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, TmVirtualClock);
}
