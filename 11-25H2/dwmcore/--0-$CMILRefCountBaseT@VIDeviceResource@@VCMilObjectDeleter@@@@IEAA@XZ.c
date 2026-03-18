/*
 * XREFs of ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70
 * Callers:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D58 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x180046710 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 *     ??0CSpringAccelerator@@QEAA@XZ @ 0x1800F10D8 (--0CSpringAccelerator@@QEAA@XZ.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x1800F10FC (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x1800F920C (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NK@Z @ 0x1800FB438 (-Initialize@CManipulationContext@@QEAAJ_NK@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800FBF74 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18010EE70 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z @ 0x18010F630 (--0CCommonRenderingEffect@@QEAA@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18010F900 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x180128BA0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180128F70 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 *     ??0CClockBase@@IEAA@XZ @ 0x1801C1424 (--0CClockBase@@IEAA@XZ.c)
 *     ??0CFrictionAccelerator@@QEAA@M@Z @ 0x1802A99DC (--0CFrictionAccelerator@@QEAA@M@Z.c)
 *     ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x1802A9A0C (--0CGravityBounceAccelerator@@QEAA@MM@Z.c)
 *     ??0CNaturalAnimationScalarForceAdapater@@QEAA@XZ @ 0x1802A9A84 (--0CNaturalAnimationScalarForceAdapater@@QEAA@XZ.c)
 *     ??0CSpringAccelerator@@QEAA@MM@Z @ 0x1802A9AA8 (--0CSpringAccelerator@@QEAA@MM@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1802B944C (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}
