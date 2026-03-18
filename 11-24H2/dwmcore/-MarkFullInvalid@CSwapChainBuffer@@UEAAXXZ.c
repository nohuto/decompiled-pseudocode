/*
 * XREFs of ?MarkFullInvalid@CSwapChainBuffer@@UEAAXXZ @ 0x1802285A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwapChainBuffer::MarkFullInvalid(CSwapChainBuffer *this)
{
  CRegion::SetRectangle((CSwapChainBuffer *)((char *)this + 32), (CSwapChainBuffer *)((char *)this + 16));
}
