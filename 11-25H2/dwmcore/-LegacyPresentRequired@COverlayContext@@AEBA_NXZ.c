/*
 * XREFs of ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1800847F4
 * Callers:
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x180085CF0 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::LegacyPresentRequired(COverlayContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 1618) == *((_QWORD *)this + 1617)
    && *((_BYTE *)this + 19472)
    && !*((_BYTE *)this + 19473)
    && (*((int *)this + 4938) < 2200 || *((_BYTE *)this + 19771) || (*((_DWORD *)this + 13) & 0x40000) == 0) )
  {
    return 1;
  }
  return v1;
}
