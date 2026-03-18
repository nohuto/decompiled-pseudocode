/*
 * XREFs of ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18003B380
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z @ 0x180033570 (-GetTransformParentForValidation@CVisual@@IEAAPEAV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A0D70 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x1801859C0 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x1801862D0 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801BB930 (-clear_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansio.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1802027F4 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180257014 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CPreWalkVisual::CalcTransform(
        CPreWalkVisual *this,
        struct CVisual *a2,
        CVisual **a3,
        unsigned __int64 a4)
{
  CVisual *v4; // rsi
  CVisual *v8; // r15
  struct CVisual *TransformParentForValidation; // rax
  struct CVisual *v10; // rcx
  CVisual **v11; // rcx
  CVisual **v12; // rdi
  CVisual **i; // rbx
  CVisual *v14; // rdx
  CVisual *v15; // r8
  CVisual *v16; // rcx
  CVisual *v17; // rax
  CVisual *v18; // rcx
  CVisual *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // r8
  CVisual *v23; // r9
  CVisual *v24; // rcx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rsi
  CVisual *v29; // rdi
  struct CTreeData *v30; // rbx
  CVisual *v31; // rcx
  __int64 v32; // rax
  CVisual **v33; // rbx
  bool v34; // zf
  HANDLE ProcessHeap; // rax
  bool v36[8]; // [rsp+28h] [rbp-E0h] BYREF
  CVisual *v37; // [rsp+30h] [rbp-D8h] BYREF
  CVisual **v38; // [rsp+38h] [rbp-D0h] BYREF
  CVisual **v39; // [rsp+40h] [rbp-C8h]
  __int64 *v40; // [rsp+48h] [rbp-C0h]
  _BYTE v41[512]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+250h] [rbp+148h] BYREF

  v4 = a2;
  v38 = (CVisual **)v41;
  v39 = (CVisual **)v41;
  v37 = a2;
  v40 = &v42;
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
    &v38,
    &v37);
  if ( v4 )
  {
    while ( 1 )
    {
      if ( *((_QWORD *)CVisual::EnsureTreeData(v4, (const struct CVisualTree *)a3) + 28) >= a4 )
        goto LABEL_70;
      v8 = v37;
      v36[0] = 0;
      TransformParentForValidation = CVisual::GetTransformParentForValidation(v37, a3, v36);
      v37 = TransformParentForValidation;
      v4 = TransformParentForValidation;
      if ( !TransformParentForValidation )
        goto LABEL_22;
      if ( !v36[0] )
      {
        v14 = v8;
        if ( v8 )
        {
          v15 = a3[9];
          v16 = v8;
          v17 = v8;
          while ( v16 != v15 )
          {
            if ( !v17
              || (v17 = (CVisual *)*((_QWORD *)v17 + 11)) == 0LL
              || v16 != v17 && (v17 = (CVisual *)*((_QWORD *)v17 + 11), v16 != v17) )
            {
              v16 = (CVisual *)*((_QWORD *)v16 + 11);
              if ( v16 )
                continue;
            }
            goto LABEL_12;
          }
          v18 = v4;
          v19 = v4;
          while ( v18 != v15 )
          {
            if ( !v19
              || (v19 = (CVisual *)*((_QWORD *)v19 + 11)) == 0LL
              || v18 != v19 && (v19 = (CVisual *)*((_QWORD *)v19 + 11), v18 != v19) )
            {
              v18 = (CVisual *)*((_QWORD *)v18 + 11);
              if ( v18 )
                continue;
            }
            goto LABEL_12;
          }
          if ( v8 != v4 )
          {
            v22 = 1;
            v20 = *((_QWORD *)v8 + 11);
            if ( !v20 || *(_DWORD *)(v20 + 112) != 1 )
            {
              if ( *((_DWORD *)v8 + 28) != 1
                || ((v21 = *((_QWORD *)v8 + 10), (v21 & 2) == 0)
                  ? (LODWORD(v21) = v21 & 1)
                  : (v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL)),
                    !(_DWORD)v21) )
              {
                v22 = 0;
              }
            }
            v23 = a3[9];
            if ( v8 != v23 )
            {
              do
              {
                v24 = (CVisual *)*((_QWORD *)v14 + 11);
                v26 = 1;
                if ( !v24 || *((_DWORD *)v24 + 28) != 1 )
                {
                  if ( *((_DWORD *)v14 + 28) != 1
                    || ((v25 = *((_QWORD *)v14 + 10), (v25 & 2) == 0)
                      ? (LODWORD(v25) = v25 & 1)
                      : (v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL)),
                        !(_DWORD)v25) )
                  {
                    v26 = 0;
                  }
                }
                if ( v22 != v26 )
                  break;
                if ( v24 == v4 )
                  goto LABEL_22;
                v14 = (CVisual *)*((_QWORD *)v14 + 11);
              }
              while ( v24 != v23 );
            }
          }
        }
LABEL_12:
        CVisual::InvalidateTransformParent(v8, (const struct CVisualTree *)a3);
        v11 = v39;
        v4 = 0LL;
LABEL_24:
        if ( v8 == a3[9] )
          goto LABEL_27;
        v4 = (CVisual *)*((_QWORD *)v8 + 11);
        v37 = v4;
        if ( !v4 )
          goto LABEL_27;
        goto LABEL_26;
      }
      v10 = TransformParentForValidation;
      while ( v10 != a3[9] )
      {
        if ( !TransformParentForValidation
          || (TransformParentForValidation = (struct CVisual *)*((_QWORD *)TransformParentForValidation + 11)) == 0LL
          || v10 != TransformParentForValidation
          && (TransformParentForValidation = (struct CVisual *)*((_QWORD *)TransformParentForValidation + 11),
              v10 != TransformParentForValidation) )
        {
          v10 = (struct CVisual *)*((_QWORD *)v10 + 11);
          if ( v10 )
            continue;
        }
        goto LABEL_12;
      }
      v12 = v38;
      v11 = v39;
      while ( v12 != v39 && *v12 != v4 )
        ++v12;
      if ( v12 != v39 )
        break;
LABEL_23:
      if ( !v4 )
        goto LABEL_24;
LABEL_26:
      detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        &v38,
        &v37);
      v11 = v39;
LABEL_27:
      v37 = v4;
      if ( !v4 )
        goto LABEL_71;
    }
    for ( i = v12; i != v11; ++i )
    {
      CVisual::InvalidateTransformParent(*i, (const struct CVisualTree *)a3);
      v11 = v39;
    }
    detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::clear_region(
      &v38,
      v12 - v38,
      v11 - 1 - v12);
LABEL_22:
    v11 = v39;
    goto LABEL_23;
  }
LABEL_70:
  v11 = v39;
LABEL_71:
  v27 = v11 - v38;
  v28 = (int)v27;
  if ( (int)v27 <= 0 )
    goto LABEL_81;
  do
  {
    v37 = v38[v28 - 1];
    v29 = v37;
    v30 = CVisual::EnsureTreeData(v37, (const struct CVisualTree *)a3);
    CVisual::EnsureLayoutSize(v29);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
    {
      if ( !CVisual::EnsureWorldTransform(v29, (const struct CVisualTree *)a3, v30) )
        goto LABEL_79;
      v31 = v29;
      goto LABEL_78;
    }
    CVisual::EnsureWorldTransform(v29, (const struct CVisualTree *)a3, v30);
    if ( *((_BYTE *)v30 + 15) && *((_QWORD *)v30 + 28) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 31) + 24LL) + 888LL) )
    {
      v31 = v37;
LABEL_78:
      *((_BYTE *)this + 27) = 1;
      CVisual::PropagateFlags(v31, 5LL);
      *((_BYTE *)v30 + 137) = 1;
    }
LABEL_79:
    --v28;
  }
  while ( v28 > 0 );
  v11 = v39;
LABEL_81:
  v32 = v11 - v38;
  if ( v32 )
    v39 = &v11[-v32];
  v33 = v38;
  v34 = v38 == (CVisual **)v41;
  v38 = 0LL;
  if ( v34 )
    v33 = 0LL;
  if ( v33 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v33);
  }
}
