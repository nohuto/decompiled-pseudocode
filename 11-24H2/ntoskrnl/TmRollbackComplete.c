/*
 * XREFs of TmRollbackComplete @ 0x1404FC690
 * Callers:
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackComplete(Enlistment, TmVirtualClock);
}
