/*
 * XREFs of ?IsCompositionThread@@YA_NXZ @ 0x180154EF8
 * Callers:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18004CFCC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 * Callees:
 *     ?IsCompositionThread@CComposition@@QEBA_NXZ @ 0x180154F30 (-IsCompositionThread@CComposition@@QEBA_NXZ.c)
 */

char __fastcall IsCompositionThread(CComposition *a1)
{
  char v1; // bl

  v1 = 0;
  if ( g_pComposition )
    return CComposition::IsCompositionThread(a1);
  return v1;
}
