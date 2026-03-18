/*
 * XREFs of TmReferenceEnlistmentKey @ 0x1404FC630
 * Callers:
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmReferenceEnlistmentKey(PKENLISTMENT Enlistment, PVOID *Key)
{
  return __imp_TmReferenceEnlistmentKey(Enlistment, Key);
}
