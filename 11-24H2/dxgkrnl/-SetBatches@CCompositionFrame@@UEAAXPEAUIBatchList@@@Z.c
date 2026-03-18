/*
 * XREFs of ?SetBatches@CCompositionFrame@@UEAAXPEAUIBatchList@@@Z @ 0x140045830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionFrame::SetBatches(CCompositionFrame *this, struct IBatchList *a2)
{
  *((_QWORD *)this + 26) = a2;
}
