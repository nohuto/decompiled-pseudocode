/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18013DBE0
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x18013D890 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18002CA40 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$insert@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@1@Z @ 0x18013D0F0 (--$insert@V-$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@-$vector_facade@PEAVCOverlayCont.c)
 *     ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x18013D540 (-insert@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18013E3F0 (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18019C774 (-terminate@details@gsl@@YAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1801C8990 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?clear_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801CD380 (-clear_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00V.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020F4BC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x18023D270 (-HasRevokablePlanes@COverlayContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273C54 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac1.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OccludedMPO@@@details@wil@@QEAA_NXZ @ 0x180277C60 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_OccludedMPO@@@details@wil@@QEAA_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(__int64 *a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  __int64 v4; // rax
  _QWORD **v5; // rbx
  _QWORD **i; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rax
  char v11; // di
  __int64 v12; // rax
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  COverlayContext **v19; // rbx
  COverlayContext **j; // rsi
  COverlayContext **v21; // rbx
  COverlayContext **v22; // rsi
  __int64 v23; // rax
  gsl::details *v24; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v26; // rax
  char *v27; // rbx
  HANDLE v28; // rax
  unsigned __int8 v30; // [rsp+30h] [rbp-D0h]
  char *v31; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  detail::liberal_expansion_policy *v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  __m128i v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  char v40[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  gsl::details *v42; // [rsp+B8h] [rbp-48h] BYREF
  char *v43; // [rsp+C0h] [rbp-40h]
  char **v44; // [rsp+C8h] [rbp-38h]
  _BYTE v45[32]; // [rsp+D0h] [rbp-30h] BYREF
  char *v46; // [rsp+F0h] [rbp-10h] BYREF
  char *v47; // [rsp+F8h] [rbp-8h]
  __int64 *v48; // [rsp+100h] [rbp+0h]
  _BYTE v49[128]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v50; // [rsp+188h] [rbp+88h] BYREF

  v46 = v49;
  v2 = 0;
  v47 = v49;
  v48 = &v50;
  v42 = (gsl::details *)v45;
  v43 = v45;
  v44 = &v46;
  v3 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_OccludedMPO>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_OccludedMPO>::GetImpl'::`2'::impl) == 0;
  v4 = *a1;
  if ( v3 )
  {
    v7 = a1[1];
    v8 = v7 + 8 * v4;
    v9 = (v47 - v46) >> 3;
    if ( v9 )
      v47 -= 8 * v9;
    v32 = (__int64)v46;
    v35.m128i_i64[0] = v7;
    v35.m128i_i64[1] = v8;
    v36 = v8;
    v37.m128i_i64[0] = v7;
    v37.m128i_i64[1] = v8;
    v38 = v7;
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<COverlayContext *>,void>(
      (__int64 *)&v46,
      v34,
      &v32,
      &v37,
      &v35);
  }
  else
  {
    v5 = (_QWORD **)a1[1];
    for ( i = &v5[v4]; v5 != i; ++v5 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)**v5 + 48LL))(**v5) )
        *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                     &v46,
                     (v47 - v46) >> 3,
                     1LL) = *v5;
    }
  }
  while ( v47 != v46 )
  {
    v10 = (_BYTE *)*((_QWORD *)v47 - 1);
    v11 = v10[19768];
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 280LL))(*(_QWORD *)v10);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 216LL))(v12, &v33);
    v31 = v43;
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::insert(
      (detail::liberal_expansion_policy *)&v42,
      &v39,
      &v31,
      (_QWORD *)v47 - 1);
    v31 = v47 - 8;
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
      &v46,
      v40,
      &v31);
    if ( !v11 )
    {
      v13 = v46;
      while ( v13 != v47 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v13 + 19768LL)
          || (v14 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)v13 + 280LL))(**(_QWORD **)v13),
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 216LL))(v14, &v32),
              v32 != v33) )
        {
          v13 += 8;
        }
        else
        {
          v31 = v43;
          detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::insert(
            (detail::liberal_expansion_policy *)&v42,
            &v41,
            &v31,
            v13);
          v15 = (v13 - v46) >> 3;
          detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::clear_region(
            &v46,
            v15,
            1LL);
          v13 = &v46[8 * v15];
        }
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      v31 = v43;
      v34[0] = v42;
      std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___(
        v34,
        &v31,
        (v43 - (char *)v42) >> 3,
        v30);
    }
    v16 = (v43 - (char *)v42) >> 3;
    v35.m128i_i64[0] = v16;
    if ( v16 == -1 || (v35.m128i_i64[1] = (__int64)v42) == 0 && v16 )
    {
      gsl::details::terminate(v42);
      JUMPOUT(0x18013E07ALL);
    }
    v17 = COverlayContext::ComputeOverlayConfigurationForAdapter(&v35);
    v2 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x10Au, 0LL);
      v19 = (COverlayContext **)a1[1];
      for ( j = &v19[*a1]; v19 != j; ++v19 )
        COverlayContext::Reset(*v19);
      goto LABEL_35;
    }
    v18 = (v43 - (char *)v42) >> 3;
    if ( v18 )
      v43 -= 8 * v18;
  }
  if ( *a1 )
  {
    v21 = (COverlayContext **)a1[1];
    v22 = &v21[*a1];
    if ( v21 != v22 )
    {
      while ( !COverlayContext::HasRevokablePlanes(*v21) )
      {
        if ( ++v21 == v22 )
          goto LABEL_35;
      }
      CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0x1388u, 0x10000u);
    }
  }
LABEL_35:
  v23 = (v43 - (char *)v42) >> 3;
  if ( v23 )
    v43 -= 8 * v23;
  v24 = v42;
  v3 = v42 == (gsl::details *)v45;
  v42 = 0LL;
  if ( v3 )
    v24 = 0LL;
  if ( v24 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v24);
  }
  v26 = (v47 - v46) >> 3;
  if ( v26 )
    v47 -= 8 * v26;
  v27 = v46;
  v3 = v46 == v49;
  v46 = 0LL;
  if ( v3 )
    v27 = 0LL;
  if ( v27 )
  {
    v28 = GetProcessHeap();
    HeapFree(v28, 0, v27);
  }
  return v2;
}
