/*
 * XREFs of ?MarkFullValid@CSwapChainBuffer@@UEAAXXZ @ 0x180063F60
 * Callers:
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x180063B90 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSwapChainBuffer::MarkFullValid(CSwapChainBuffer *this)
{
  **((_DWORD **)this + 4) = 0;
}
