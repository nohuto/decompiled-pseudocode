/*
 * XREFs of ZwCommitEnlistment @ 0x1406A8710
 * Callers:
 *     DifZwCommitEnlistmentWrapper @ 0x14063B6B0 (DifZwCommitEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCommitEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
