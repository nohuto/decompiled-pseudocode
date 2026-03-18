/*
 * XREFs of TmReadOnlyEnlistment @ 0x1404FC5B0
 * Callers:
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReadOnlyEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmReadOnlyEnlistment(Enlistment, TmVirtualClock);
}
