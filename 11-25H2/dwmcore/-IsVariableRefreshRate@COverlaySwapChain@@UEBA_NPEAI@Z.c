/*
 * XREFs of ?IsVariableRefreshRate@COverlaySwapChain@@UEBA_NPEAI@Z @ 0x1802298B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall COverlaySwapChain::IsVariableRefreshRate(COverlaySwapChain *this, unsigned int *a2)
{
  if ( a2 )
    *a2 = *((_DWORD *)this + 32);
  return *((_QWORD *)this + 14) != 0LL;
}
