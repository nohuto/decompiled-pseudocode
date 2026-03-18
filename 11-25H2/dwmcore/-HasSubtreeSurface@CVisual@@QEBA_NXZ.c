/*
 * XREFs of ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18007D3C4
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 * Callees:
 *     ?GetTreeEffect@CLayerVisual@@UEBAPEAVCTreeEffect@@XZ @ 0x18007D410 (-GetTreeEffect@CLayerVisual@@UEBAPEAVCTreeEffect@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::HasSubtreeSurface(CVisual *this)
{
  __int64 (*v1)(void); // rax
  struct CTreeEffect *TreeEffect; // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)this + 224LL);
  if ( (char *)v1 == (char *)CLayerVisual::GetTreeEffect )
    TreeEffect = CLayerVisual::GetTreeEffect(this);
  else
    TreeEffect = (struct CTreeEffect *)v1();
  if ( TreeEffect )
    LOBYTE(TreeEffect) = *((_QWORD *)TreeEffect + 1) != 0LL;
  return (char)TreeEffect;
}
