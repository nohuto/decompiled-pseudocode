/*
 * XREFs of ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980
 * Callers:
 *     ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800F7870 (-CalcOcclusion@CVisualTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CalcOcclusion@CDesktopTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800F78D0 (-CalcOcclusion@CDesktopTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180102540 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x180007E90 (-push_back@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUn.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180018090 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18003BC30 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A0D70 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800A0FC0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x1800D11F0 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x180101C34 (-insert@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180146AC0 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 *     ?reset@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAXPEAVCVisualTreePath@@@Z @ 0x1801C96B0 (-reset@-$unique_ptr@VCVisualTreePath@@U-$default_delete@VCVisualTreePath@@@std@@@std@@QEAAXPEAVC.c)
 *     ??R?$default_delete@VCVisualTreePath@@@std@@QEBAXPEAVCVisualTreePath@@@Z @ 0x1801D0F04 (--R-$default_delete@VCVisualTreePath@@@std@@QEBAXPEAVCVisualTreePath@@@Z.c)
 *     ??$?4U?$default_delete@VCVisualTreePath@@@std@@$0A@@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D108C (--$-4U-$default_delete@VCVisualTreePath@@@std@@$0A@@-$unique_ptr@VCVisualTreePath@@U-$default_de.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1802317DC (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::Compute(COcclusionContext *this, CVisual **a2, _QWORD *a3, float a4, _QWORD *a5)
{
  int v8; // r12d
  __int64 v9; // rax
  bool v10; // r14
  _DWORD *v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // rax
  _OWORD *v15; // rbx
  float v16; // xmm13_4
  _OWORD *v17; // rsi
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm10_4
  double v21; // xmm11_8
  __int128 v22; // xmm0
  bool v23; // cc
  float v24; // xmm1_4
  float v25; // xmm7_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  double v28; // xmm2_8
  float v29; // xmm5_4
  const struct CRegion *v30; // r14
  struct CThreadContext **v31; // rbx
  struct CThreadContext **i; // rsi
  CVisual *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r10
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rcx
  unsigned __int64 *v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  float v41; // xmm13_4
  HANDLE ProcessHeap; // rax
  struct CThreadContext *v43; // rax
  struct CThreadContext *v44; // rbx
  int v45; // eax
  void ***v46; // rax
  struct COcclusionInfo *OcclusionInfo; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  COverlayContext **v52; // rbx
  COverlayContext **j; // rsi
  COverlayContext **v54; // rbx
  COverlayContext **k; // rsi
  __int64 v56; // rax
  void *v57; // rbx
  HANDLE v58; // rax
  bool v59; // [rsp+20h] [rbp-E0h]
  __int128 v60; // [rsp+30h] [rbp-D0h] BYREF
  struct CThreadContext *v61; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v62; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v63; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID lpMem; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v65[18]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT *v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  _QWORD **v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v62 = a5;
  v8 = 0;
  v9 = 0LL;
  v10 = COERCE_FLOAT(LODWORD(a4) & _xmm) < 0.0000011920929;
  if ( g_pComposition )
    v9 = *((_QWORD *)g_pComposition + 111);
  if ( *((_QWORD *)this + 3) == v9 )
    return 1LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(g_pComposition, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, a2, 0LL);
  v12 = (_DWORD *)*((_QWORD *)this + 57);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 1) = a2;
  *v12 = 0;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_BYTE *)this + 1566) = 0;
  *((_BYTE *)this + 1570) = 0;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 214) = 0LL;
  *((_DWORD *)this + 430) = 0;
  *((_WORD *)this + 784) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 616, 0x30u);
  v13 = (_QWORD *)((char *)this + 1800);
  *((_DWORD *)this + 427) = 0;
  v14 = (__int64)(*((_QWORD *)this + 226) - *((_QWORD *)this + 225)) >> 3;
  if ( v14 )
    *((_QWORD *)this + 226) -= 8 * v14;
  COcclusionContext::SetDeviceTransform(this, 0LL);
  v15 = (_OWORD *)a3[1];
  v16 = 0.0;
  v17 = &v15[*a3];
  v60 = *((_OWORD *)a2 + 5);
  if ( v15 == v17 )
    goto LABEL_30;
  v18 = *((float *)&v60 + 1);
  v19 = *((float *)&v60 + 2);
  v20 = *(float *)&v60;
  *(_QWORD *)&v21 = HIDWORD(v60);
  do
  {
    v22 = *v15;
    v23 = v20 <= COERCE_FLOAT(*v15);
    v60 = *v15;
    if ( !v23 )
    {
      *(float *)&v22 = v20;
      *(float *)&v60 = v20;
    }
    v24 = *((float *)&v60 + 1);
    v25 = *((float *)&v60 + 1);
    if ( v18 > *((float *)&v60 + 1) )
    {
      v24 = v18;
      v25 = v18;
      *((float *)&v60 + 1) = v18;
    }
    v26 = *((float *)&v60 + 2);
    v27 = *((float *)&v60 + 2);
    if ( *((float *)&v60 + 2) > v19 )
    {
      v26 = v19;
      v27 = v19;
      *((float *)&v60 + 2) = v19;
    }
    *(_QWORD *)&v28 = HIDWORD(v60);
    v29 = *((float *)&v60 + 3);
    if ( *((float *)&v60 + 3) > *(float *)&v21 )
    {
      v28 = v21;
      v29 = *(float *)&v21;
      HIDWORD(v60) = LODWORD(v21);
    }
    if ( v27 <= *(float *)&v22 || v29 <= v25 )
    {
      v28 = 0.0;
      v26 = 0.0;
      v24 = 0.0;
      v60 = 0uLL;
      LODWORD(v22) = 0;
      v27 = 0.0;
      v29 = 0.0;
    }
    if ( v27 > *(float *)&v22 && v29 > v24 )
    {
      if ( !v10 )
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v60);
        v26 = *((float *)&v60 + 2);
        v24 = *((float *)&v60 + 1);
        LODWORD(v22) = v60;
        *(_QWORD *)&v28 = HIDWORD(v60);
      }
      *(float *)&v28 = (float)(*(float *)&v28 - v24) * (float)(v26 - *(float *)&v22);
      v16 = v16 + *(float *)&v28;
      PixelAlign(&v63.left, (unsigned int *)&v60, v28);
      CRegion::AddRectangle((COcclusionContext *)((char *)this + 456), &v63);
    }
    ++v15;
  }
  while ( v15 != v17 );
  v13 = (_QWORD *)((char *)this + 1800);
  if ( v16 <= 0.0 )
LABEL_30:
    v30 = 0LL;
  else
    v30 = (COcclusionContext *)((char *)this + 456);
  lpMem = v65;
  v65[0] = 0;
  v31 = (struct CThreadContext **)v62[1];
  for ( i = &v31[*v62]; v31 != i; ++v31 )
  {
    v61 = *v31;
    if ( COverlayContext::BeginOverlayCandidateCollection(v61, v30, (struct CRegion *)&lpMem) )
    {
      *(_QWORD *)&v63.left = v13[1];
      detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>::insert(
        v13,
        &v60,
        &v63,
        &v61);
    }
  }
  CRegion::Union(
    (const struct FastRegion::Internal::CRgnData **)this + 57,
    (const struct FastRegion::Internal::CRgnData **)&lpMem);
  CRegion::Copy((COcclusionContext *)((char *)this + 528), (COcclusionContext *)((char *)this + 456));
  v33 = a2[9];
  if ( **((_DWORD **)this + 57) )
  {
    v34 = *((_QWORD *)this + 194);
    if ( v34 )
    {
      v33 = *(CVisual **)(v34 + 2064);
    }
    else if ( *((_BYTE *)this + 1565) && v13[1] != *v13 && (*((_DWORD *)v33 + 24) & 0x8000) != 0 )
    {
      *((_BYTE *)this + 1566) = 1;
    }
    v61 = 0LL;
    if ( (int)CThreadContext::GetCurrent(&v61) >= 0
      && ((v35 = *((_QWORD *)v61 + 4), (v35 & 2) == 0)
        ? (v36 = v35 & 1)
        : (v36 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL)),
          v37 = 0LL,
          v36) )
    {
      v38 = (unsigned __int64 *)((v35 & 0xFFFFFFFFFFFFFFFCuLL) + 16);
      while ( 1 )
      {
        v39 = (*((_QWORD *)v61 + 4) & 2LL) != 0 ? *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL) : v35 & 1;
        if ( v37 >= v39 )
          v40 = 0LL;
        else
          v40 = v39 == 1 ? v35 & 0xFFFFFFFFFFFFFFFCuLL : *v38;
        if ( v33 == (CVisual *)v40 )
          break;
        ++v37;
        ++v38;
        if ( v37 >= v36 )
          goto LABEL_58;
      }
      v8 = -2147467260;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467260, 0x11Du, 0LL);
    }
    else
    {
LABEL_58:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
        v41 = FLOAT_75000_0;
      else
        v41 = fminf(v16 * 0.25, 75000.0);
      *((float *)this + 385) = v41;
      ProcessHeap = GetProcessHeap();
      v43 = (struct CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
      v44 = v43;
      if ( !v43 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      *(_QWORD *)&v60 = 0LL;
      *(_QWORD *)v43 = (char *)v43 + 24;
      *((_QWORD *)v43 + 1) = (char *)v43 + 24;
      *((_QWORD *)v43 + 2) = (char *)v43 + 56;
      *((_QWORD *)&v60 + 1) = a2;
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
        v43,
        &v60);
      v61 = v44;
      std::unique_ptr<CVisualTreePath>::operator=<std::default_delete<CVisualTreePath>,0>((char *)this + 16, &v61);
      if ( v61 )
        std::default_delete<CVisualTreePath>::operator()();
      *((_QWORD *)this + 14) = a2;
      v45 = CVisualTreeIterator::WalkSubtree<COcclusionContext>(
              (__int64)this + 56,
              a2[9],
              (unsigned __int64 *)v33,
              this,
              v59);
      v8 = v45;
      if ( v45 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x10Eu, 0LL);
      if ( *((_QWORD *)this + 194) )
      {
        if ( !*((_BYTE *)this + 1570) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x117u, 0LL);
          if ( v8 >= 0 )
            v8 = -2147418113;
        }
      }
    }
  }
  else
  {
    v46 = CVisual::EnsureTreeData(a2[9], (void **)a2);
    OcclusionInfo = CTreeData::GetOcclusionInfo((CTreeData *)v46, *((_DWORD *)this + 384), 1);
    v48 = 0LL;
    if ( g_pComposition )
      v48 = *((_QWORD *)g_pComposition + 111);
    v49 = *(_QWORD *)OcclusionInfo;
    *((_QWORD *)OcclusionInfo + 2) = v48;
    *((_DWORD *)OcclusionInfo + 9) = 0;
    (*(void (__fastcall **)(struct COcclusionInfo *, _QWORD))(v49 + 8))(OcclusionInfo, 0LL);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( v8 >= 0 )
    {
      v51 = 0LL;
      if ( g_pComposition )
        v51 = *((_QWORD *)g_pComposition + 111);
      *((_QWORD *)this + 3) = v51;
    }
    v52 = (COverlayContext **)v62[1];
    for ( j = &v52[*v62]; v52 != j; ++v52 )
      COverlayContext::EndOverlayCandidateCollection(*v52, this, (const struct CVisualTree *)a2);
  }
  else
  {
    v54 = (COverlayContext **)v62[1];
    for ( k = &v54[*v62]; v54 != k; ++v54 )
      COverlayContext::EndOverlayCandidateCollection(*v54, this, (const struct CVisualTree *)a2);
    if ( v8 >= 0 )
    {
      v56 = 0LL;
      if ( g_pComposition )
        v56 = *((_QWORD *)g_pComposition + 111);
      *((_QWORD *)this + 3) = v56;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    LODWORD(v62) = 0;
    v67 = &v63;
    *(_QWORD *)&v63.left = a2;
    v69 = &v62;
    v68 = 8LL;
    v70 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop,
      v50,
      3u,
      &v66);
  }
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 40) = 0;
  CLightStack::Clear((COcclusionContext *)((char *)this + 224));
  std::unique_ptr<CVisualTreePath>::reset((char *)this + 16, 0LL);
  **((_DWORD **)this + 57) = 0;
  v57 = lpMem;
  if ( v65 != lpMem )
  {
    if ( lpMem )
    {
      v58 = GetProcessHeap();
      HeapFree(v58, 0, v57);
    }
  }
  return (unsigned int)v8;
}
