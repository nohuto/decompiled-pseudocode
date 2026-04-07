/*
 * XREFs of ?CreateMeshGeometry2dProxy@CCompositor@@QEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18001195C
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800117E8 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800D9C18 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateMeshGeometry2dProxy(CCompositor *this, struct CMeshGeometry2dProxy **a2)
{
  return CCompositor::CreateProxy<CMeshGeometry2dProxy>(this, a2);
}
