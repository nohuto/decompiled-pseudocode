/*
 * XREFs of ?GetSurfaceManager@@YAPEAVCSurfaceManager@@XZ @ 0x1801A4510
 * Callers:
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1801A159C (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1801A4240 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURF.c)
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
