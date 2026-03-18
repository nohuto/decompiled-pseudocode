/*
 * XREFs of TmCommitComplete @ 0x1404FC350
 * Callers:
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmCommitComplete(Enlistment, TmVirtualClock);
}
