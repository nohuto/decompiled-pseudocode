/*
 * XREFs of ?EvtCompleteTransmittedNblsThunk@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003B3C (--$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 */

void __fastcall NdisPoll::EvtCompleteTransmittedNblsThunk(__int64 a1, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  NdisPoll::CompleteTransmittedNblsInner<0>(a1, (__int64)a2);
}
