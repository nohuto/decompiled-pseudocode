/*
 * XREFs of ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x18003B800
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A0D70 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800B0870 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x1801859C0 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x1801862D0 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1801B25FC (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeede.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180257014 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CPreWalkVisual::DirtyBoundsForTransformParentChild(
        struct CVisual *a1,
        const struct CVisualTree *a2,
        bool *a3)
{
  char *v5; // rcx
  _BYTE *v6; // rcx
  CVisual *v7; // rbx
  _BYTE *v8; // rdi
  const struct CVisual *v9; // rdi
  bool *v10; // r8
  const struct CVisual *TransformParent; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  CVisual *v14; // rdi
  struct CTreeData *v15; // rbx
  __int64 v16; // rax
  HANDLE ProcessHeap; // rax
  const struct CVisual *v18; // [rsp+20h] [rbp-248h] BYREF
  _BYTE *v19; // [rsp+28h] [rbp-240h] BYREF
  _BYTE *v20; // [rsp+30h] [rbp-238h]
  __int64 *v21; // [rsp+38h] [rbp-230h]
  _BYTE v22[512]; // [rsp+40h] [rbp-228h] BYREF
  __int64 v23; // [rsp+240h] [rbp-28h] BYREF

  if ( !CVisual::GetTransformParent(a1, a2, a3) || (*((_BYTE *)a1 + 96) & 1) != 0 )
    return;
  v5 = (char *)a2 + 80;
  if ( a1 != *((struct CVisual **)a2 + 9) )
    v5 = (char *)a1 + 152;
  if ( (unsigned __int8)TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::IsInfinite(v5) )
    return;
  v6 = v22;
  v7 = (CVisual *)*((_QWORD *)a1 + 11);
  v8 = v22;
  v19 = v22;
  v20 = v22;
  v21 = &v23;
  v18 = v7;
  if ( v7 )
  {
    v9 = v7;
    while ( 1 )
    {
      detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        &v19,
        &v18);
      if ( v9 == *((const struct CVisual **)a2 + 9) )
        break;
      TransformParent = CVisual::GetTransformParent(v7, a2, v10);
      if ( TransformParent )
      {
        v7 = TransformParent;
        v18 = TransformParent;
        v9 = TransformParent;
      }
      else
      {
        v7 = (CVisual *)*((_QWORD *)v7 + 11);
        v18 = v7;
        v9 = v7;
        if ( !v7 )
          break;
      }
    }
    v6 = v20;
    v8 = v19;
  }
  v12 = (v6 - v8) >> 3;
  v13 = (int)v12;
  if ( (int)v12 <= 0 )
    goto LABEL_18;
  while ( 1 )
  {
    v14 = *(CVisual **)&v8[8 * v13 - 8];
    v15 = CVisual::EnsureTreeData(v14, a2);
    CVisual::EnsureLayoutSize(v14);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
      break;
    if ( CVisual::EnsureWorldTransform(v14, a2, v15) )
      goto LABEL_16;
LABEL_27:
    v8 = v19;
    if ( --v13 <= 0 )
      goto LABEL_17;
  }
  CVisual::EnsureWorldTransform(v14, a2, v15);
  if ( !*((_BYTE *)v15 + 15) || *((_QWORD *)v15 + 28) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 31) + 24LL) + 888LL) )
    goto LABEL_27;
LABEL_16:
  CVisual::PropagateFlags(a1, 1LL);
  v8 = v19;
LABEL_17:
  v6 = v20;
LABEL_18:
  v16 = (v6 - v8) >> 3;
  if ( v16 )
    v20 = &v6[-8 * v16];
  v19 = 0LL;
  if ( v8 == v22 )
    v8 = 0LL;
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8);
  }
}
