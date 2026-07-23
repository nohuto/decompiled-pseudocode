/*
 * XREFs of ZwRecoverEnlistment @ 0x1406AA2B0
 * Callers:
 *     CmpRecoverEnlistment @ 0x1407E0794 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
