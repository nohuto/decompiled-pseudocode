/*
 * XREFs of ?GetBitmap@CBitmapRenderStrategy@@SAXPEBVCSurfaceBrush@@PEAPEAVIBitmapResource@@@Z @ 0x1800D0820
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800CF300 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0440 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D0590 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800D10D0 (-IsEmptyDrawing@CBrush@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800D1450 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 * Callees:
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x1800D0D50 (--8@YA_NAEBU_GUID@@0@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBitmapRenderStrategy::GetBitmap(const struct CSurfaceBrush *a1, struct IBitmapResource **a2)
{
  __int64 (__fastcall ***v2)(CMaskBrush *, const struct _GUID *, void **); // rdi
  __int64 (__fastcall *v4)(CMaskBrush *, const struct _GUID *, void **); // rax

  v2 = (__int64 (__fastcall ***)(CMaskBrush *, const struct _GUID *, void **))*((_QWORD *)a1 + 16);
  v4 = **v2;
  if ( v4 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
  {
    if ( a2 )
    {
      if ( (unsigned __int8)operator==(
                              &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
                              &GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc) )
      {
        *a2 = (struct IBitmapResource *)v2;
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 1));
      }
      else
      {
        CMILCOMBaseT<IUnknownWeakRefSource,IUnknownWeakRefSource,CResourceDeleter>::InternalQueryInterface((CMaskBrush *)v2);
      }
    }
  }
  else
  {
    v4((CMaskBrush *)v2, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, (void **)a2);
  }
}
