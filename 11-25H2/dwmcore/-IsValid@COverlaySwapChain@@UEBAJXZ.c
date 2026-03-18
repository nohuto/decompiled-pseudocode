/*
 * XREFs of ?IsValid@COverlaySwapChain@@UEBAJXZ @ 0x1801FCE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlaySwapChain::IsValid(COverlaySwapChain *this)
{
  return *(_DWORD *)(*((_QWORD *)this + 5) + 1112LL) != 0 ? 0x8898008D : 0;
}
