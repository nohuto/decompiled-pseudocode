/*
 * XREFs of ?WorkCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801226A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWorkFifo::WorkCallback(PTP_CALLBACK_INSTANCE Instance, wil::details **Context, PTP_WORK Work)
{
  CWorkFifo::ProcessWorkItem(Context);
}
