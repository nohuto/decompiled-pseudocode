/*
 * XREFs of ?WorldTransformChangedInCurrentFrame@CTreeData@@IEBA_NXZ @ 0x18025D820
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTreeData::WorldTransformChangedInCurrentFrame(CTreeData *this)
{
  char v1; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 15) )
    return *((_QWORD *)this + 28) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 888LL);
  return v1;
}
