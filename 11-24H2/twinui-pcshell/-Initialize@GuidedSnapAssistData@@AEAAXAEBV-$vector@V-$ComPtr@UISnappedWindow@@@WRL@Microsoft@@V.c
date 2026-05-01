/*
 * XREFs of ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802BBE7C
 * Callers:
 *     ??$make_shared@VGuidedSnapAssistData@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@AEAH@std@@YA?AV?$shared_ptr@VGuidedSnapAssistData@@@0@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@0@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@0@AEBUCRect@Geometry@@AEAH@Z @ 0x1802BBDB8 (--$make_shared@VGuidedSnapAssistData@@AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180209CC4 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1802C4058 (-_Tidy@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USna.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?A_T$$QEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x1805BCBB4 (--$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vector@USnapAs.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___ @ 0x1805BCBFC (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windo_ea_1805BCBFC.c)
 *     ??4?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805BCCA4 (--4-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GuidedSnapAssistData::Initialize(__int64 a1, __int64 a2, _QWORD *a3, int *a4, char a5)
{
  unsigned int v9; // r15d
  unsigned int v10; // xmm3_4
  unsigned int v11; // xmm2_4
  float v12; // xmm1_4
  __int64 v13; // rbx
  __int64 v14; // r12
  int *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // r14
  char *v19; // rdi
  char *v20; // rbx
  int v21; // r14d
  int v22; // r15d
  int v23; // r12d
  int v24; // r13d
  float *v25; // r9
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // r8d
  char v30; // r8
  __int64 v31; // r9
  HWND v32; // rcx
  bool v33; // zf
  float *v34; // r11
  float v35; // xmm0_4
  float v36; // xmm1_4
  int v37; // ecx
  __int128 v39; // [rsp+20h] [rbp-81h] BYREF
  __int128 v40; // [rsp+30h] [rbp-71h]
  __int128 v41; // [rsp+40h] [rbp-61h] BYREF
  __int64 v42; // [rsp+50h] [rbp-51h]
  __int128 v43; // [rsp+58h] [rbp-49h] BYREF
  __int128 v44; // [rsp+68h] [rbp-39h]
  _OWORD v45[2]; // [rsp+78h] [rbp-29h] BYREF
  void *pvAttribute[2]; // [rsp+98h] [rbp-9h] BYREF
  int v47; // [rsp+A8h] [rbp+7h] BYREF
  int v48; // [rsp+ACh] [rbp+Bh]
  int v49; // [rsp+B0h] [rbp+Fh]
  int v50; // [rsp+B4h] [rbp+13h]

  v41 = 0LL;
  v42 = 0LL;
  v9 = 1;
  *(_QWORD *)&v39 = 0LL;
  *(float *)&v10 = (float)(a4[3] - a4[1]);
  *(float *)&v11 = (float)(a4[2] - *a4);
  v12 = (float)a4[1];
  *((float *)&v39 + 2) = (float)*a4;
  *((float *)&v39 + 3) = v12;
  v40 = __PAIR64__(v10, v11);
  v43 = v39;
  v44 = __PAIR64__(v10, v11);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
    &v41,
    &v43);
  v13 = a3[3];
  v14 = v13 + a3[4];
  while ( v13 != v14 )
  {
    v15 = *(int **)(a3[1] + 8 * (v13 & (a3[2] - 1LL)));
    v16 = v9++;
    *(_QWORD *)&v39 = v16;
    *((float *)&v39 + 2) = (float)*v15;
    *((float *)&v39 + 3) = (float)v15[1];
    *(float *)&v40 = (float)(v15[2] - *v15);
    *((float *)&v40 + 1) = (float)(v15[3] - v15[1]);
    *((_QWORD *)&v40 + 1) = 1LL;
    v43 = v39;
    v44 = v40;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      &v41,
      &v43);
    ++v13;
  }
  v17 = *(_QWORD **)(a2 + 8);
  v18 = *(_QWORD **)a2;
  v19 = (char *)*((_QWORD *)&v41 + 1);
  v20 = (char *)v41;
  while ( v18 != v17 )
  {
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v18 + 56LL))(*v18, &v47);
    *(_QWORD *)&v39 = &v47;
    *((_QWORD *)&v39 + 1) = &a5;
    ((void (__fastcall *)(void **, char *, char *, __int128 *))std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___)(
      pvAttribute,
      v20,
      v19,
      &v39);
    if ( pvAttribute[0] != v19 )
    {
      if ( !*((_DWORD *)pvAttribute[0] + 6) )
        goto LABEL_11;
      if ( pvAttribute[0] != v19 )
      {
        memmove_0(pvAttribute[0], (char *)pvAttribute[0] + 32, v19 - ((char *)pvAttribute[0] + 32));
        *((_QWORD *)&v41 + 1) = v19 - 32;
      }
    }
    *(_QWORD *)&v43 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 80LL))(*v18);
    *((float *)&v43 + 2) = (float)v47;
    *((float *)&v43 + 3) = (float)v48;
    *(float *)&v44 = (float)(v49 - v47);
    *((float *)&v44 + 1) = (float)(v50 - v48);
    *((_QWORD *)&v44 + 1) = 2LL;
    v45[0] = v43;
    v45[1] = v44;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      &v41,
      v45);
    v19 = (char *)*((_QWORD *)&v41 + 1);
    v20 = (char *)v41;
LABEL_11:
    ++v18;
  }
  *(_OWORD *)pvAttribute = *(_OWORD *)a4;
  v21 = HIDWORD(pvAttribute[1]);
  v22 = (int)pvAttribute[1];
  v23 = HIDWORD(pvAttribute[0]);
  v24 = (int)pvAttribute[0];
  if ( v20 != v19 )
  {
    v25 = (float *)(v20 + 12);
    do
    {
      if ( *((_DWORD *)v25 + 3) != 2 )
      {
        v26 = (int)(float)(*v25 + v25[2]);
        v27 = (int)(float)(*(v25 - 1) + v25[1]);
        v28 = (int)*v25;
        v29 = (int)*(v25 - 1);
        if ( v21 > v26 )
          v26 = v21;
        v21 = v26;
        if ( v22 > v27 )
          v27 = v22;
        v22 = v27;
        if ( v23 < v28 )
          v28 = v23;
        v23 = v28;
        if ( v24 < v29 )
          v29 = v24;
        v24 = v29;
      }
      v25 += 8;
    }
    while ( v25 - 3 != (float *)v19 );
  }
  *(_QWORD *)(a1 + 40) = GetForegroundWindow();
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v30,
    v31);
  v32 = *(HWND *)(a1 + 40);
  if ( v32 )
  {
    *(_OWORD *)pvAttribute = 0LL;
    if ( DwmGetWindowAttribute(v32, 9u, pvAttribute, 0x10u) < 0 )
      GetWindowRect(*(HWND *)(a1 + 40), (LPRECT)pvAttribute);
    v33 = v20 == v19;
    if ( v20 != v19 )
    {
      v34 = (float *)(v20 + 12);
      do
      {
        if ( *((_DWORD *)v34 + 3) <= 1u )
        {
          v35 = *v34 + v34[2];
          v36 = *(v34 - 1) + v34[1];
          v37 = (int)*v34;
          v47 = (int)*(v34 - 1);
          v48 = v37;
          v49 = (int)v36;
          v50 = (int)v35;
          if ( Geometry::CRect::Intersects((Geometry::CRect *)&v47, (const struct tagRECT *)pvAttribute) )
            break;
        }
        v20 += 32;
        v34 += 8;
      }
      while ( v20 != v19 );
      v33 = v20 == v19;
    }
    *(_BYTE *)(a1 + 48) = !v33;
  }
  *(float *)(a1 + 24) = (float)v24;
  *(float *)(a1 + 28) = (float)v23;
  *(float *)(a1 + 32) = (float)(v22 - v24);
  *(float *)(a1 + 36) = (float)(v21 - v23);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::operator=(a1, &v41);
  return std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy(&v41);
}
