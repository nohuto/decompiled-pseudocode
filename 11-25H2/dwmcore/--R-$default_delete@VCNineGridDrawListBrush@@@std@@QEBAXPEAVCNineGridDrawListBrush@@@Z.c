/*
 * XREFs of ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18011A3A0
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119350 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180119988 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18011A380 (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18011A8EC (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801251D0 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180126C54 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180129940 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180044720 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x180125658 (--1CNineGridDrawListBrush@@UEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x180126ED4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 */

void __fastcall std::default_delete<CNineGridDrawListBrush>::operator()(__int64 a1, CNineGridDrawListBrush *a2)
{
  struct CNineGridDrawListBrush *v3; // rcx
  CObjectCache *ObjectCache; // rax

  if ( a2 )
  {
    CNineGridDrawListBrush::~CNineGridDrawListBrush(a2);
    ObjectCache = CThreadContext::GetObjectCache(v3);
    CObjectCache::Free(ObjectCache, a2);
  }
}
