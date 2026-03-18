/*
 * XREFs of ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1801E057C
 * Callers:
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800584AC (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x180233400 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::LegacyPresentRequired(COverlayContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 1586) == *((_QWORD *)this + 1585)
    && *((_BYTE *)this + 19088)
    && !*((_BYTE *)this + 19089)
    && (*((int *)this + 4880) < 2200 || *((_BYTE *)this + 19580) || (*((_DWORD *)this + 13) & 0x40000) == 0) )
  {
    return 1;
  }
  return v1;
}
