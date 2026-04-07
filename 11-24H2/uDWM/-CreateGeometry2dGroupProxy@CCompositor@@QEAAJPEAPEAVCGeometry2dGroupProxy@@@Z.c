/*
 * XREFs of ?CreateGeometry2dGroupProxy@CCompositor@@QEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x1800119CC
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800117E8 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800D9C18 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateGeometry2dGroupProxy(CCompositor *this, struct CGeometry2dGroupProxy **a2)
{
  return CCompositor::CreateProxy<CGeometry2dGroupProxy>(this, a2);
}
