/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18002A860
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180028BD0 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CDxHandleBitmapRealization::GetSize(CDxHandleBitmapRealization *this, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 37);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 72) + 88LL))(v2 + 72);
  else
    *a2 = 0LL;
  return (struct D2D_SIZE_U)a2;
}
