/*
 * XREFs of ?Update@CMeshGeometry2dProxy@@QEAAJHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z @ 0x180011968
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800117E8 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800D9C18 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMeshGeometry2dProxy::Update(
        CMeshGeometry2dProxy *this,
        __int64 a2,
        const struct D2D_POINT_3F *a3,
        const struct D2D_POINT_2F *a4,
        unsigned int a5,
        const unsigned int *a6,
        unsigned int a7)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct D2D_POINT_3F *, const struct D2D_POINT_2F *, unsigned int, const unsigned int *, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 528LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           255LL,
           a3,
           a4,
           a5,
           a6,
           a7);
}
