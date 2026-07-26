/*
 * XREFs of ?EvtCompleteTransmittedNblsThunkWithVerifier@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CompleteTransmittedNblsInner@$00@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003960 (--$CompleteTransmittedNblsInner@$00@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 */

void __fastcall NdisPoll::EvtCompleteTransmittedNblsThunkWithVerifier(
        __int64 a1,
        struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  NdisPoll::CompleteTransmittedNblsInner<1>(a1, (__int64)a2);
}
