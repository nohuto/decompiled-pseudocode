/*
 * XREFs of ?GetDisplayAdapterLuid@COverlaySwapChain@@UEBA?AU_LUID@@XZ @ 0x1801F8A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall COverlaySwapChain::GetDisplayAdapterLuid(COverlaySwapChain *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 52);
  return (struct _LUID)a2;
}
