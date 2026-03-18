/*
 * XREFs of ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0
 * Callers:
 *     ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800828A0 (-CalcOcclusion@CVisualTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CalcOcclusion@CDesktopTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x180082900 (-CalcOcclusion@CDesktopTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x18013E090 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x180008780 (-push_back@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUn.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180097B10 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x18009FE10 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B7830 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800B8300 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x1800CC750 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180119D40 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180127840 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x18013D6E4 (-insert@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?reset@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAXPEAVCVisualTreePath@@@Z @ 0x1801D87A0 (-reset@-$unique_ptr@VCVisualTreePath@@U-$default_delete@VCVisualTreePath@@@std@@@std@@QEAAXPEAVC.c)
 *     ??R?$default_delete@VCVisualTreePath@@@std@@QEBAXPEAVCVisualTreePath@@@Z @ 0x1801DED24 (--R-$default_delete@VCVisualTreePath@@@std@@QEBAXPEAVCVisualTreePath@@@Z.c)
 *     ??$?4U?$default_delete@VCVisualTreePath@@@std@@$0A@@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801DEE3C (--$-4U-$default_delete@VCVisualTreePath@@@std@@$0A@@-$unique_ptr@VCVisualTreePath@@U-$default_de.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil@@QEAA_NXZ @ 0x1802862F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MinMPOSize@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::Compute(
        struct COcclusionContext *a1,
        CVisual **a2,
        _QWORD *a3,
        float a4,
        _QWORD *a5)
{
  int v8; // r12d
  __int64 v9; // rax
  bool v10; // r14
  _DWORD *v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD *v18; // rbx
  float v19; // xmm13_4
  _OWORD *v20; // rsi
  float v21; // xmm8_4
  float v22; // xmm9_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  __int128 v25; // xmm0
  bool v26; // cc
  float v27; // xmm1_4
  float v28; // xmm7_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  float v32; // xmm5_4
  const struct CRegion *v33; // r14
  struct CThreadContext **v34; // rbx
  struct CThreadContext **i; // rsi
  CVisual *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r10
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rcx
  unsigned __int64 *v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  HANDLE ProcessHeap; // rax
  struct CThreadContext *v45; // rax
  struct CThreadContext *v46; // rbx
  int v47; // eax
  CTreeData *v48; // rax
  struct COcclusionInfo *OcclusionInfo; // r8
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  COverlayContext **v54; // rbx
  COverlayContext **j; // rsi
  COverlayContext **v56; // rbx
  COverlayContext **k; // rsi
  __int64 v58; // rax
  void *v59; // rbx
  HANDLE v60; // rax
  __int128 v61; // [rsp+30h] [rbp-D0h] BYREF
  struct CThreadContext *v62; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v63; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v64; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID lpMem; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v66[18]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v67[16]; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT *v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  _QWORD **v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v63 = a5;
  v8 = 0;
  v9 = 0LL;
  v10 = COERCE_FLOAT(LODWORD(a4) & _xmm) < 0.0000011920929;
  if ( g_pComposition )
    v9 = *((_QWORD *)g_pComposition + 111);
  if ( *((_QWORD *)a1 + 3) == v9 )
    return 1LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(g_pComposition, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, a2, 0LL);
  v12 = (_DWORD *)*((_QWORD *)a1 + 57);
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 1) = a2;
  *v12 = 0;
  *((_QWORD *)a1 + 76) = 0LL;
  *((_QWORD *)a1 + 75) = 0LL;
  *((_BYTE *)a1 + 1566) = 0;
  *((_BYTE *)a1 + 1570) = 0;
  *((_DWORD *)a1 + 160) = 0;
  *((_QWORD *)a1 + 214) = 0LL;
  *((_DWORD *)a1 + 430) = 0;
  *((_WORD *)a1 + 784) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)a1 + 616, 48LL);
  v13 = (_QWORD *)((char *)a1 + 1800);
  *((_DWORD *)a1 + 427) = 0;
  v14 = (__int64)(*((_QWORD *)a1 + 226) - *((_QWORD *)a1 + 225)) >> 3;
  if ( v14 )
    *((_QWORD *)a1 + 226) -= 8 * v14;
  COcclusionContext::SetDeviceTransform(a1, 0LL);
  v18 = (_OWORD *)a3[1];
  v19 = 0.0;
  v20 = &v18[*a3];
  v61 = *((_OWORD *)a2 + 5);
  if ( v18 == v20 )
    goto LABEL_30;
  v21 = *((float *)&v61 + 1);
  v22 = *((float *)&v61 + 2);
  v23 = *(float *)&v61;
  v24 = *((float *)&v61 + 3);
  do
  {
    v25 = *v18;
    v26 = v23 <= COERCE_FLOAT(*v18);
    v61 = *v18;
    if ( !v26 )
    {
      *(float *)&v25 = v23;
      *(float *)&v61 = v23;
    }
    v27 = *((float *)&v61 + 1);
    v28 = *((float *)&v61 + 1);
    if ( v21 > *((float *)&v61 + 1) )
    {
      v27 = v21;
      v28 = v21;
      *((float *)&v61 + 1) = v21;
    }
    v29 = *((float *)&v61 + 2);
    v30 = *((float *)&v61 + 2);
    if ( *((float *)&v61 + 2) > v22 )
    {
      v29 = v22;
      v30 = v22;
      *((float *)&v61 + 2) = v22;
    }
    v31 = *((float *)&v61 + 3);
    v32 = *((float *)&v61 + 3);
    if ( *((float *)&v61 + 3) > v24 )
    {
      v31 = v24;
      v32 = v24;
      *((float *)&v61 + 3) = v24;
    }
    if ( v30 <= *(float *)&v25 || v32 <= v28 )
    {
      v31 = 0.0;
      v29 = 0.0;
      v27 = 0.0;
      v61 = 0uLL;
      LODWORD(v25) = 0;
      v30 = 0.0;
      v32 = 0.0;
    }
    if ( v30 > *(float *)&v25 && v32 > v27 )
    {
      if ( !v10 )
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v61, v15, v16, v17);
        v29 = *((float *)&v61 + 2);
        v27 = *((float *)&v61 + 1);
        LODWORD(v25) = v61;
        v31 = *((float *)&v61 + 3);
      }
      v19 = v19 + (float)((float)(v31 - v27) * (float)(v29 - *(float *)&v25));
      PixelAlign(&v64, &v61);
      CRegion::AddRectangle((const struct FastRegion::Internal::CRgnData **)a1 + 57, &v64);
    }
    ++v18;
  }
  while ( v18 != v20 );
  v13 = (_QWORD *)((char *)a1 + 1800);
  if ( v19 <= 0.0 )
LABEL_30:
    v33 = 0LL;
  else
    v33 = (struct COcclusionContext *)((char *)a1 + 456);
  lpMem = v66;
  v66[0] = 0;
  v34 = (struct CThreadContext **)v63[1];
  for ( i = &v34[*v63]; v34 != i; ++v34 )
  {
    v62 = *v34;
    if ( COverlayContext::BeginOverlayCandidateCollection(v62, v33, (struct CRegion *)&lpMem) )
    {
      *(_QWORD *)&v64.left = v13[1];
      detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>::insert(
        v13,
        &v61,
        &v64,
        &v62);
    }
  }
  CRegion::Union((struct COcclusionContext *)((char *)a1 + 456), (const struct CRegion *)&lpMem);
  CRegion::Copy((struct COcclusionContext *)((char *)a1 + 528), (struct COcclusionContext *)((char *)a1 + 456));
  v36 = a2[9];
  if ( **((_DWORD **)a1 + 57) )
  {
    v37 = *((_QWORD *)a1 + 194);
    if ( v37 )
    {
      v36 = *(CVisual **)(v37 + 2064);
    }
    else if ( (!(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MinMPOSize>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MinMPOSize>::GetImpl'::`2'::impl)
            || *((_BYTE *)a1 + 1565))
           && v13[1] != *v13
           && (*((_DWORD *)v36 + 24) & 0x8000) != 0 )
    {
      *((_BYTE *)a1 + 1566) = 1;
    }
    v62 = 0LL;
    if ( (int)CThreadContext::GetCurrent(&v62) >= 0
      && ((v38 = *((_QWORD *)v62 + 4), (v38 & 2) == 0)
        ? (v39 = v38 & 1)
        : (v39 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL)),
          v40 = 0LL,
          v39) )
    {
      v41 = (unsigned __int64 *)((v38 & 0xFFFFFFFFFFFFFFFCuLL) + 16);
      while ( 1 )
      {
        v42 = (*((_QWORD *)v62 + 4) & 2LL) != 0 ? *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL) : v38 & 1;
        if ( v40 >= v42 )
          v43 = 0LL;
        else
          v43 = v42 == 1 ? v38 & 0xFFFFFFFFFFFFFFFCuLL : *v41;
        if ( v36 == (CVisual *)v43 )
          break;
        ++v40;
        ++v41;
        if ( v40 >= v39 )
          goto LABEL_59;
      }
      v8 = -2147467260;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467260, 0x114u, 0LL);
    }
    else
    {
LABEL_59:
      *((float *)a1 + 385) = fminf(v19 * 0.25, 75000.0);
      ProcessHeap = GetProcessHeap();
      v45 = (struct CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
      v46 = v45;
      if ( !v45 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      *(_QWORD *)&v61 = 0LL;
      *(_QWORD *)v45 = (char *)v45 + 24;
      *((_QWORD *)v45 + 1) = (char *)v45 + 24;
      *((_QWORD *)v45 + 2) = (char *)v45 + 56;
      *((_QWORD *)&v61 + 1) = a2;
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
        v45,
        &v61);
      v62 = v46;
      std::unique_ptr<CVisualTreePath>::operator=<std::default_delete<CVisualTreePath>,0>((char *)a1 + 16, &v62);
      if ( v62 )
        std::default_delete<CVisualTreePath>::operator()();
      *((_QWORD *)a1 + 14) = a2;
      v47 = CVisualTreeIterator::WalkSubtree<COcclusionContext>((char *)a1 + 56, a2[9], v36, a1);
      v8 = v47;
      if ( v47 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x105u, 0LL);
      if ( *((_QWORD *)a1 + 194) )
      {
        if ( !*((_BYTE *)a1 + 1570) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x10Eu, 0LL);
          if ( v8 >= 0 )
            v8 = -2147418113;
        }
      }
    }
  }
  else
  {
    v48 = CVisual::EnsureTreeData(a2[9], (const struct CVisualTree *)a2);
    OcclusionInfo = CTreeData::GetOcclusionInfo(v48, *((_DWORD *)a1 + 384), 1);
    v50 = 0LL;
    if ( g_pComposition )
      v50 = *((_QWORD *)g_pComposition + 111);
    v51 = *(_QWORD *)OcclusionInfo;
    *((_QWORD *)OcclusionInfo + 2) = v50;
    *((_DWORD *)OcclusionInfo + 9) = 0;
    (*(void (__fastcall **)(struct COcclusionInfo *, _QWORD))(v51 + 8))(OcclusionInfo, 0LL);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( v8 >= 0 )
    {
      v53 = 0LL;
      if ( g_pComposition )
        v53 = *((_QWORD *)g_pComposition + 111);
      *((_QWORD *)a1 + 3) = v53;
    }
    v54 = (COverlayContext **)v63[1];
    for ( j = &v54[*v63]; v54 != j; ++v54 )
      COverlayContext::EndOverlayCandidateCollection(*v54, a1, (const struct CVisualTree *)a2);
  }
  else
  {
    v56 = (COverlayContext **)v63[1];
    for ( k = &v56[*v63]; v56 != k; ++v56 )
      COverlayContext::EndOverlayCandidateCollection(*v56, a1, (const struct CVisualTree *)a2);
    if ( v8 >= 0 )
    {
      v58 = 0LL;
      if ( g_pComposition )
        v58 = *((_QWORD *)g_pComposition + 111);
      *((_QWORD *)a1 + 3) = v58;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    LODWORD(v63) = 0;
    v68 = &v64;
    *(_QWORD *)&v64.left = a2;
    v70 = &v63;
    v69 = 8LL;
    v71 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop,
      v52,
      3LL,
      v67);
  }
  *((_DWORD *)a1 + 10) = 0;
  *((_DWORD *)a1 + 34) = 0;
  *((_DWORD *)a1 + 40) = 0;
  CLightStack::Clear((struct COcclusionContext *)((char *)a1 + 224));
  std::unique_ptr<CVisualTreePath>::reset((char *)a1 + 16, 0LL);
  **((_DWORD **)a1 + 57) = 0;
  v59 = lpMem;
  if ( v66 != lpMem )
  {
    if ( lpMem )
    {
      v60 = GetProcessHeap();
      HeapFree(v60, 0, v59);
    }
  }
  return (unsigned int)v8;
}
