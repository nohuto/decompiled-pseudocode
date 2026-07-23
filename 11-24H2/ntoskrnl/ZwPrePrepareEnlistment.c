/*
 * XREFs of ZwPrePrepareEnlistment @ 0x1406A9B90
 * Callers:
 *     DifZwPrePrepareEnlistmentWrapper @ 0x140641C40 (DifZwPrePrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrePrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
