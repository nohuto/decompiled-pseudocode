/*
 * XREFs of ?SetScanoutPresentCount@CSwapChainBuffer@@UEAAXI@Z @ 0x1802C5C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwapChainBuffer::SetScanoutPresentCount(CSwapChainBuffer *this, int a2)
{
  *((_DWORD *)this + 27) = a2;
}
