/*
 * XREFs of ZwPrepareEnlistment @ 0x1406A9BD0
 * Callers:
 *     DifZwPrepareEnlistmentWrapper @ 0x140641F20 (DifZwPrepareEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
