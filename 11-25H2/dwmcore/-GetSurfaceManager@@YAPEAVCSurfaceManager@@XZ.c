/*
 * XREFs of ?GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ @ 0x180103EA0
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180103B80 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x180113838 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct CSurfaceManager *GetSurfaceManager(void)
{
  struct CSurfaceManager *result; // rax

  result = 0LL;
  if ( g_pComposition )
    return (struct CSurfaceManager *)*((_QWORD *)g_pComposition + 78);
  return result;
}
