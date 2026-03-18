/*
 * XREFs of ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180101DE0 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18005F0C0 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800B708C (-terminate@details@gsl@@YAXXZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x180101A90 (-insert@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18010288C (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x180188FFC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1801BA4D0 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?clear_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801BBA10 (-clear_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00V.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x180232A20 (-HasRevokablePlanes@COverlayContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267FA4 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfiguration(_QWORD *a1)
{
  _QWORD **v1; // rbx
  unsigned int v3; // edi
  _QWORD **i; // rsi
  _BYTE *v5; // rax
  char v6; // di
  __int64 v7; // rax
  char *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  COverlayContext **v14; // rbx
  COverlayContext **j; // rsi
  COverlayContext **v16; // rbx
  COverlayContext **v17; // rsi
  __int64 v18; // rax
  gsl::details *v19; // rbx
  bool v20; // zf
  HANDLE ProcessHeap; // rax
  __int64 v22; // rax
  char *v23; // rbx
  HANDLE v24; // rax
  unsigned __int8 v26; // [rsp+30h] [rbp-D0h]
  char *v27; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v29[2]; // [rsp+48h] [rbp-B8h] BYREF
  gsl::details *v30; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v31[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  char v33[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  gsl::details *v35; // [rsp+80h] [rbp-80h] BYREF
  char *v36; // [rsp+88h] [rbp-78h]
  char **v37; // [rsp+90h] [rbp-70h]
  _BYTE v38[32]; // [rsp+98h] [rbp-68h] BYREF
  char *v39; // [rsp+B8h] [rbp-48h] BYREF
  char *v40; // [rsp+C0h] [rbp-40h]
  __int64 *v41; // [rsp+C8h] [rbp-38h]
  _BYTE v42[128]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v43; // [rsp+150h] [rbp+50h] BYREF

  v1 = (_QWORD **)a1[1];
  v39 = v42;
  v40 = v42;
  v3 = 0;
  v41 = &v43;
  v35 = (gsl::details *)v38;
  v36 = v38;
  v37 = &v39;
  for ( i = &v1[*a1]; v1 != i; ++v1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)**v1 + 48LL))(**v1) )
      *(_QWORD *)detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   &v39,
                   (v40 - v39) >> 3) = *v1;
  }
  while ( v40 != v39 )
  {
    v5 = (_BYTE *)*((_QWORD *)v40 - 1);
    v6 = v5[19577];
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 280LL))(*(_QWORD *)v5);
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v7 + 216LL))(v7, v28);
    v27 = v36;
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::insert(
      (detail::liberal_expansion_policy *)&v35,
      &v32,
      &v27,
      (_QWORD *)v40 - 1);
    v27 = v40 - 8;
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
      &v39,
      v33,
      &v27);
    if ( !v6 )
    {
      v8 = v39;
      while ( v8 != v40 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)v8 + 19577LL)
          && (v9 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)v8 + 280LL))(**(_QWORD **)v8),
              (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 216LL))(v9, v29),
              v29[0] == v28[0])
          && v29[1] == v28[1] )
        {
          v27 = v36;
          detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::insert(
            (detail::liberal_expansion_policy *)&v35,
            &v34,
            &v27,
            v8);
          v10 = (v8 - v39) >> 3;
          detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::clear_region(
            &v39,
            v10,
            1LL);
          v8 = &v39[8 * v10];
        }
        else
        {
          v8 += 8;
        }
      }
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      v27 = v36;
      v30 = v35;
      std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
        &v30,
        &v27,
        (v36 - (char *)v35) >> 3,
        v26);
    }
    v11 = (v36 - (char *)v35) >> 3;
    v31[0] = v11;
    if ( v11 == -1 || (v31[1] = v35) == 0LL && v11 )
    {
      gsl::details::terminate(v35);
      JUMPOUT(0x180102537LL);
    }
    v12 = COverlayContext::ComputeOverlayConfigurationForAdapter(v31);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x126u, 0LL);
      v14 = (COverlayContext **)a1[1];
      for ( j = &v14[*a1]; v14 != j; ++v14 )
        COverlayContext::Reset(*v14);
      goto LABEL_31;
    }
    v13 = (v36 - (char *)v35) >> 3;
    if ( v13 )
      v36 -= 8 * v13;
  }
  if ( *a1 )
  {
    v16 = (COverlayContext **)a1[1];
    v17 = &v16[*a1];
    if ( v16 != v17 )
    {
      while ( !COverlayContext::HasRevokablePlanes(*v16) )
      {
        if ( ++v16 == v17 )
          goto LABEL_31;
      }
      CComposition::ScheduleCompositionPass((__int64)g_pComposition, 0x1388u, 0x10000u);
    }
  }
LABEL_31:
  v18 = (v36 - (char *)v35) >> 3;
  if ( v18 )
    v36 -= 8 * v18;
  v19 = v35;
  v20 = v35 == (gsl::details *)v38;
  v35 = 0LL;
  if ( v20 )
    v19 = 0LL;
  if ( v19 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v19);
  }
  v22 = (v40 - v39) >> 3;
  if ( v22 )
    v40 -= 8 * v22;
  v23 = v39;
  v20 = v39 == v42;
  v39 = 0LL;
  if ( v20 )
    v23 = 0LL;
  if ( v23 )
  {
    v24 = GetProcessHeap();
    HeapFree(v24, 0, v23);
  }
  return v3;
}
