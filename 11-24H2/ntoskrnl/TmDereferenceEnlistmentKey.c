/*
 * XREFs of TmDereferenceEnlistmentKey @ 0x1404F9CB0
 * Callers:
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmDereferenceEnlistmentKey(PKENLISTMENT Enlistment, PBOOLEAN LastReference)
{
  return __imp_TmDereferenceEnlistmentKey(Enlistment, LastReference);
}
