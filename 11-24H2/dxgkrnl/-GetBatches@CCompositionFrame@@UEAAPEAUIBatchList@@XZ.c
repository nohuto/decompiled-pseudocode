/*
 * XREFs of ?GetBatches@CCompositionFrame@@UEAAPEAUIBatchList@@XZ @ 0x14003E080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IBatchList *__fastcall CCompositionFrame::GetBatches(CCompositionFrame *this)
{
  struct IBatchList *result; // rax

  result = (struct IBatchList *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  return result;
}
