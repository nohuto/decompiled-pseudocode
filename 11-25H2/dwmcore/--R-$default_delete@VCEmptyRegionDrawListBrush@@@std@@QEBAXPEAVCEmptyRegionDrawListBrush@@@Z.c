/*
 * XREFs of ??R?$default_delete@VCEmptyRegionDrawListBrush@@@std@@QEBAXPEAVCEmptyRegionDrawListBrush@@@Z @ 0x18020D744
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x1800446E4 (--1CEmptyRegionDrawListBrush@@UEAA@XZ.c)
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180044720 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x18004573C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 */

void __fastcall std::default_delete<CEmptyRegionDrawListBrush>::operator()(__int64 a1, CEmptyRegionDrawListBrush *a2)
{
  struct CEmptyRegionDrawListBrush *v3; // rcx
  CObjectCache *ObjectCache; // rax

  if ( a2 )
  {
    CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(a2);
    ObjectCache = CThreadContext::GetObjectCache(v3);
    CObjectCache::Free(ObjectCache, a2);
  }
}
