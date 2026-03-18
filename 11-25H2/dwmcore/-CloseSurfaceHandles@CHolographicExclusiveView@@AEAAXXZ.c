/*
 * XREFs of ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x1802DAFDC
 * Callers:
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802DB048 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1802DB324 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CHolographicExclusiveView::CloseSurfaceHandles(HANDLE *this)
{
  __int64 i; // rsi

  if ( *((_BYTE *)this + 89) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 40); i = (unsigned int)(i + 1) )
    {
      CloseHandle(this[i + 21]);
      this[i + 21] = 0LL;
    }
    *((_DWORD *)this + 40) = 0;
    *((_BYTE *)this + 89) = 0;
  }
}
