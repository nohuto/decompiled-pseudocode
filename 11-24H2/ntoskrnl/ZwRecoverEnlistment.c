/*
 * XREFs of ZwRecoverEnlistment @ 0x1406A9310
 * Callers:
 *     CmpRecoverEnlistment @ 0x1407E0244 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, EnlistmentKey);
}
