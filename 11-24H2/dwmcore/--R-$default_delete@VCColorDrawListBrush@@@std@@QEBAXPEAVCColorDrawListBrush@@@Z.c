/*
 * XREFs of ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x180172FF8
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18006C70C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ??1?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180172FD8 (--1-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@X.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1802162FC (--1-$out_param_t@V-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@st.c)
 * Callees:
 *     ?Free@CObjectCache@@QEAAXPEAX@Z @ 0x180171E40 (-Free@CObjectCache@@QEAAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x180172C8C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 */

void __fastcall std::default_delete<CColorDrawListBrush>::operator()(struct CColorDrawListBrush *a1, _QWORD *a2)
{
  CObjectCache *ObjectCache; // rax

  if ( a2 )
  {
    ObjectCache = CThreadContext::GetObjectCache(a1);
    CObjectCache::Free(ObjectCache, a2);
  }
}
