/*
 * XREFs of ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1802027F4
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18003B380 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180033C70 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A0D70 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

void __fastcall CVisual::InvalidateTransformParent(CVisual *this, CVisual **a2)
{
  void **v3; // r10
  void ***v4; // rdi
  bool v5; // zf
  void **v6; // rcx

  if ( this != a2[9] && CVisual::GetTransformParentDataInternal(this) )
  {
    v4 = CVisual::EnsureTreeData(this, v3);
    v5 = *((_BYTE *)v4 + 13) == 0;
    v6 = v4[31];
    *((_BYTE *)v4 + 12) = 0;
    v4[29] = (void **)*((_QWORD *)v6[3] + 111);
    if ( !v5 )
    {
      CVisual::PropagateFlags((__int64)this, 5u);
      *((_BYTE *)v4 + 137) = 1;
    }
  }
}
