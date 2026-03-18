/*
 * XREFs of ?GetComputeScribbleData@CSwapChainBuffer@@UEAAPEAVCComputeScribbleFramebuffer@@XZ @ 0x180212270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CComputeScribbleFramebuffer *__fastcall CSwapChainBuffer::GetComputeScribbleData(CSwapChainBuffer *this)
{
  return (struct CComputeScribbleFramebuffer *)*((_QWORD *)this + 14);
}
