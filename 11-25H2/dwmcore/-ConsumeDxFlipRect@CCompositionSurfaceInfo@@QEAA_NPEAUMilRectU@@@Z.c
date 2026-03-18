/*
 * XREFs of ?ConsumeDxFlipRect@CCompositionSurfaceInfo@@QEAA_NPEAUMilRectU@@@Z @ 0x1801FBBBC
 * Callers:
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801C07C0 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceInfo::ConsumeDxFlipRect(CCompositionSurfaceInfo *this, struct MilRectU *a2)
{
  bool result; // al

  if ( *((_DWORD *)this + 14) <= *((_DWORD *)this + 12) || *((_DWORD *)this + 15) <= *((_DWORD *)this + 13) )
    return 0;
  result = 1;
  *(_OWORD *)a2 = *((_OWORD *)this + 3);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  return result;
}
