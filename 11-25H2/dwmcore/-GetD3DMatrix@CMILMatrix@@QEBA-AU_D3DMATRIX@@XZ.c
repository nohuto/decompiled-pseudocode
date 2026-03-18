/*
 * XREFs of ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1801AFF50
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1801AFE54 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801BBF60 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z @ 0x180201220 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x1802A9AF0 (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1802A9C1C (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DMATRIX *__fastcall CMILMatrix::GetD3DMatrix(struct _D3DMATRIX *this, struct _D3DMATRIX *__return_ptr retstr)
{
  *retstr = *this;
  return retstr;
}
