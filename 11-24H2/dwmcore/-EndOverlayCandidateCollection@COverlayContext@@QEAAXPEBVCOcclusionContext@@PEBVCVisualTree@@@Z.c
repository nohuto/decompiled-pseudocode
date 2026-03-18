/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18002324C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ @ 0x180023440 (-GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x1800609CC (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180060A84 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18009F0C0 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B2C70 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??$emplace_back@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVOverlayPlaneInfo@COverlayContext@@@Z @ 0x1800F0E98 (--$emplace_back@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayCo.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x1800F101C (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1800F1128 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800F1DD0 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x180102DE0 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x18018A47C (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18019CD00 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?DoesContain@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B2FDC (-DoesContain@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x1801DBBE4 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x1801E26F8 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x1801EAD80 (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z.c)
 *     ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EF2A4 (-DoesIntersect@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     McTemplateU0d_EventWriteTransfer @ 0x1801F9050 (McTemplateU0d_EventWriteTransfer.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x18020126C (McTemplateU0xd_EventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18025BEB8 (-IsPowerSaverEnabled@CComposition@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z @ 0x180268D84 (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z.c)
 *     ?ForceSoftwareCursor@COverlayContext@@AEAAXXZ @ 0x18026A168 (-ForceSoftwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18026C754 (-IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct COcclusionContext *a2,
        const struct CVisualTree *a3)
{
  CGlobalComposition *CurrentFrameId; // rax
  __int64 v7; // rcx
  CGlobalComposition *v8; // rsi
  CGlobalComposition *v9; // rbx
  __int64 v10; // rcx
  char *v11; // r12
  struct CMILMatrix *v12; // r14
  char v13; // r15
  __int64 *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // r14d
  bool v18; // r10
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 i; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  const struct COverlayContext::OverlayPlaneInfo *v37; // rbx
  const struct COverlayContext::OverlayPlaneInfo *v38; // rsi
  COverlayContext::OverlayPlaneInfo *v39; // rax
  __int64 v40; // r8
  __int64 *v41; // rsi
  __int64 v42; // rcx
  unsigned int v43; // r12d
  unsigned __int8 v44; // r14
  __int64 v45; // rbx
  int v46; // eax
  unsigned __int8 IsOccluded; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 j; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  _QWORD *v54; // r14
  __int64 v55; // r12
  int OverlayCandidateIndex; // eax
  __int64 v57; // rsi
  __int64 v58; // rcx
  int v59; // esi
  __int64 v60; // rdx
  _DWORD *v61; // rcx
  COverlayContext::OverlayPlaneInfo *v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // ebx
  __int64 *v65; // rsi
  __int64 v66; // r12
  __int64 v67; // r14
  float *v68; // rbx
  unsigned __int64 v69; // rax
  float v70; // xmm1_4
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // rdx
  CComposition *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r9
  float *v78; // r9
  float v79; // xmm2_4
  bool v80; // [rsp+30h] [rbp-D0h] BYREF
  bool v81; // [rsp+31h] [rbp-CFh] BYREF
  char v82; // [rsp+32h] [rbp-CEh]
  unsigned int v83[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct CMILMatrix *v84; // [rsp+40h] [rbp-C0h]
  __int64 v85; // [rsp+48h] [rbp-B8h] BYREF
  char *v86; // [rsp+50h] [rbp-B0h]
  struct CVisualTree *v87; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v88[392]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v89; // [rsp+1E8h] [rbp+E8h] BYREF
  struct D2D_RECT_F v90; // [rsp+1F8h] [rbp+F8h] BYREF

  v87 = a3;
  CurrentFrameId = GetCurrentFrameId();
  v8 = *(CGlobalComposition **)(v7 + 19528);
  v9 = CurrentFrameId;
  if ( *(int *)(v7 + 19448) > 0 )
  {
    v10 = *(_QWORD *)(v7 + 19416);
    if ( v10 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 112LL))(v10) )
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl)
    && (!*((_BYTE *)this + 19591) || *((_BYTE *)this + 19590)) )
  {
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
  }
  v11 = (char *)a3 + 112;
  v86 = (char *)a3 + 112;
  v12 = (const struct CMonitorTransform *)((char *)COverlayContext::GetMonitorTransform(this) + 120);
  v84 = v12;
  v13 = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 19591) )
    {
      v14 = (__int64 *)((char *)this + 88);
      v82 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
      v15 = *((_QWORD *)this + 12);
      v16 = *((_QWORD *)this + 11);
      v17 = 0;
      v18 = v82;
      if ( 0x7D6343EB1A1F58D1LL * ((v15 - v16) >> 3) )
      {
        do
        {
          v19 = *((_QWORD *)this + 1586);
          v20 = 0;
          *(_QWORD *)v83 = 392LL * v17;
          v21 = *(_QWORD *)v83 + v16;
          v22 = *((_QWORD *)this + 1585);
          v23 = 0x7D6343EB1A1F58D1LL * ((v19 - v22) >> 3);
          if ( v23 )
          {
            v24 = 0LL;
            while ( 1 )
            {
              v25 = 392 * v24;
              if ( *(_QWORD *)(392 * v24 + v22 + 8) == *(_QWORD *)(v21 + 8)
                && *(_QWORD *)(v25 + v22 + 16) == *(_QWORD *)(v21 + 16)
                && *(_QWORD *)(v25 + v22 + 24) == *(_QWORD *)(v21 + 24) )
              {
                break;
              }
              v24 = (unsigned int)++v20;
              if ( (unsigned int)v20 >= v23 )
                goto LABEL_18;
            }
          }
          else
          {
LABEL_18:
            v20 = -1;
          }
          if ( COverlayContext::OverlayPlaneInfo::CalcVisibleArea(
                 (COverlayContext::OverlayPlaneInfo *)v21,
                 v87,
                 v84,
                 v18,
                 v20 != -1) )
          {
            if ( v20 == -1 )
            {
              for ( i = *((_QWORD *)this + 1585); i != *((_QWORD *)this + 1586); i += 392LL )
              {
                v35 = *(_QWORD *)(v21 + 16);
                if ( v35 == *(_QWORD *)(i + 16) )
                {
                  v36 = *(_QWORD *)(i + 8);
                  if ( *(_QWORD *)(v21 + 8) != v36 )
                  {
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
                      McTemplateU0xq_EventWriteTransfer(
                        v36,
                        &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
                        *(unsigned int *)(v35 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v35 + 40)) << 32),
                        9);
                    v28 = (__int64 *)&v89;
                    goto LABEL_25;
                  }
                }
              }
            }
            else
            {
              v29 = *((_QWORD *)this + 1585) + 392LL * v20;
              *(_OWORD *)(v29 + 244) = *(_OWORD *)(v21 + 244);
              COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
                (COverlayContext::OverlayPlaneInfo *)v21,
                (const struct COverlayContext::OverlayPlaneInfo *)v29);
              v80 = 0;
              v81 = 0;
              COverlayContext::ComparePlaneAttributes(
                (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v21 + 32),
                (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v30 + 32),
                &v80,
                &v81);
              *(_BYTE *)(v21 + 368) |= v80;
              if ( *(_BYTE *)(v21 + 369) && !v81 )
                *(_BYTE *)(v21 + 369) = 0;
            }
            ++v17;
          }
          else
          {
            if ( *(_QWORD *)(v21 + 352) == 1LL )
            {
              COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v21, (__int64)&v90, (__int64)v84);
              TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
                (float *)this + 4832,
                &v90.left);
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
              McTemplateU0xd_EventWriteTransfer(v27, v26, *(_QWORD *)(*(_QWORD *)(v21 + 16) + 40LL), v20 != -1);
            v28 = &v85;
LABEL_25:
            *(_QWORD *)v83 += *v14;
            detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
              (_QWORD *)this + 11,
              v28,
              v83);
          }
          v15 = *((_QWORD *)this + 12);
          v16 = *v14;
          v18 = v82;
        }
        while ( v17 < (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((v15 - *((_QWORD *)this + 11)) >> 3)) );
      }
      v31 = 0;
      if ( 0x7D6343EB1A1F58D1LL * ((v15 - v16) >> 3) )
      {
        do
        {
          v32 = 392LL * v31;
          v33 = v16 + v32;
          if ( !COverlayContext::OverlayPlaneInfo::IsRevokable((COverlayContext::OverlayPlaneInfo *)(v16 + v32))
            || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 16) + 192LL))(*(_QWORD *)(v33 + 16)) )
          {
            ++v31;
          }
          else
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v33 + 16) + 168LL))(*(_QWORD *)(v33 + 16));
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
              McTemplateU0xq_EventWriteTransfer(
                *(unsigned int *)(*(_QWORD *)(v33 + 16) + 40LL),
                &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
                *(unsigned int *)(*(_QWORD *)(v33 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v33 + 16) + 40LL)) << 32),
                5);
            v87 = (struct CVisualTree *)(v32 + *((_QWORD *)this + 11));
            detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
              (_QWORD *)this + 11,
              &v89,
              &v87);
          }
          v16 = *((_QWORD *)this + 11);
        }
        while ( v31 < (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((*((_QWORD *)this + 12) - v16) >> 3)) );
      }
LABEL_91:
      v11 = v86;
      v12 = v84;
      goto LABEL_92;
    }
    v37 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1585);
    v38 = (const struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1586);
    while ( v37 != v38 )
    {
      v39 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo((COverlayContext::OverlayPlaneInfo *)v88, v37);
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext::OverlayPlaneInfo>(
        (__int64)this + 88,
        (__int64)v39,
        v40);
      v37 = (const struct COverlayContext::OverlayPlaneInfo *)((char *)v37 + 392);
    }
  }
  else if ( v8 != v9 )
  {
    v41 = (__int64 *)((char *)this + 88);
    v42 = *((_QWORD *)this + 11);
    v83[0] = *((_DWORD *)a2 + 384);
    v43 = 0;
    if ( 438261969 * (unsigned int)((*((_QWORD *)this + 12) - v42) >> 3) )
    {
      do
      {
        v44 = 0;
        v45 = v42 + 392LL * v43;
        COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v45, (__int64)&v90, (__int64)v84);
        v46 = CVisual::GetZ(*(CVisual **)(v45 + 8), v87, v83[0]);
        if ( v46 )
        {
          IsOccluded = COcclusionContext::IsOccluded((__int64)a2, &v90.left, v46, 0);
          v44 = IsOccluded;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xd_EventWriteTransfer(v49, v48, *(_QWORD *)(*(_QWORD *)(v45 + 16) + 40LL), IsOccluded);
        }
        *(_QWORD *)(v45 + 352) = v44 ^ 1LL;
        if ( !v44 )
        {
          for ( j = *((_QWORD *)this + 1585); ; j += 392LL )
          {
            if ( j == *((_QWORD *)this + 1586) )
            {
              ++v43;
              goto LABEL_66;
            }
            v51 = *(_QWORD *)(v45 + 16);
            if ( v51 == *(_QWORD *)(j + 16) )
            {
              v52 = *(_QWORD *)(j + 8);
              if ( *(_QWORD *)(v45 + 8) != v52 )
                break;
            }
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xq_EventWriteTransfer(
              v52,
              &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
              *(unsigned int *)(v51 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v51 + 40)) << 32),
              9);
        }
        v85 = *v41 + 392LL * v43;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          (_QWORD *)this + 11,
          &v89,
          &v85);
LABEL_66:
        v42 = *v41;
      }
      while ( v43 < 438261969 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) );
    }
    v53 = *((_QWORD *)this + 1585);
    v54 = (_QWORD *)((char *)this + 88);
    v55 = *((_QWORD *)this + 1586);
    while ( v53 != v55 )
    {
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                *(const struct CVisual **)(v53 + 8),
                                *(const struct CCompositionSurfaceInfo **)(v53 + 16),
                                *(_QWORD *)(v53 + 24));
      if ( OverlayCandidateIndex == -1 )
      {
        COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v53, (__int64)&v90, (__int64)v84);
        if ( !CTreeDirty::DoesIntersect((__int64)v86, &v90) )
        {
          v59 = 438261969 * ((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) - 1;
          if ( 438261969 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) )
          {
            v60 = v59;
            v61 = (_DWORD *)(392LL * v59 + *v54 + 376LL);
            do
            {
              if ( *((_BYTE *)v61 - 9) && *v61 < *(_DWORD *)(v53 + 376) )
                break;
              --v59;
              --v60;
              v61 -= 98;
            }
            while ( v60 != -1 );
          }
          v62 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                  (COverlayContext::OverlayPlaneInfo *)v88,
                  (const struct COverlayContext::OverlayPlaneInfo *)v53);
          v85 = *v54 + 392 * (v59 + 1LL);
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
            (_QWORD *)this + 11,
            &v89,
            &v85,
            (__int64)v62);
        }
      }
      else
      {
        v57 = 392LL * OverlayCandidateIndex;
        *(_OWORD *)(v53 + 244) = *(_OWORD *)(v57 + *v54 + 244);
        COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
          (COverlayContext::OverlayPlaneInfo *)(v57 + *v54),
          (const struct COverlayContext::OverlayPlaneInfo *)v53);
        v58 = *v54 + 32LL;
        v81 = 0;
        v80 = 0;
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v57 + v58),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v53 + 32),
          &v81,
          &v80);
        *(_BYTE *)(v57 + *v54 + 368) |= v81;
        if ( *(_BYTE *)(v57 + *v54 + 369) && !v80 )
          *(_BYTE *)(v57 + *v54 + 369) = 0;
      }
      v53 += 392LL;
    }
    v63 = *((_QWORD *)this + 11);
    v64 = 0;
    if ( 438261969 * (unsigned int)((*((_QWORD *)this + 12) - v63) >> 3) )
    {
      v65 = (__int64 *)((char *)this + 88);
      do
      {
        v66 = 392LL * v64;
        v67 = v63 + v66;
        if ( !COverlayContext::IsRevokable(
                (CLegacyRenderTarget **)this,
                (const struct COverlayContext::OverlayPlaneInfo *)(v63 + v66))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v67 + 16) + 192LL))(*(_QWORD *)(v67 + 16)) )
        {
          ++v64;
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xq_EventWriteTransfer(
              *(unsigned int *)(*(_QWORD *)(v67 + 16) + 40LL),
              &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
              *(unsigned int *)(*(_QWORD *)(v67 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v67 + 16) + 40LL)) << 32),
              5);
          v85 = v66 + *v65;
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
            (_QWORD *)this + 11,
            &v89,
            &v85);
        }
        v63 = *v65;
      }
      while ( v64 < 438261969 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3) );
    }
    goto LABEL_91;
  }
LABEL_92:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 19592)
    && !*((_BYTE *)this + 19593) )
  {
    COverlayContext::ForceSoftwareCursor(this);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) )
  {
    v68 = (float *)((char *)this + 19536);
    if ( !IsEmpty((const struct D2D_RECT_F *)this + 1221) )
    {
      v89 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v12, (const struct D2D_RECT_F *)this + 1221, (float *)&v89);
      if ( CTreeDirty::DoesContain((__int64)v11, (__int64)&v89) )
      {
        *((_DWORD *)this + 4887) = 0;
        *((_DWORD *)this + 4886) = 0;
        *((_DWORD *)this + 4885) = 0;
        *v68 = 0.0;
      }
    }
    if ( (float)((float)(*((float *)this + 4891) - *((float *)this + 4889))
               * (float)(*((float *)this + 4890) - *((float *)this + 4888))) >= (float)((float)(*((float *)this + 4886)
                                                                                              - *v68)
                                                                                      * (float)(*((float *)this + 4887)
                                                                                              - *((float *)this + 4885))) )
      *((_OWORD *)this + 1221) = *((_OWORD *)this + 1222);
    v69 = 0LL;
    v70 = (float)(*((float *)this + 4886) - *((float *)this + 4884))
        * (float)(*((float *)this + 4887) - *((float *)this + 4885));
    if ( v70 >= 9.223372e18 )
    {
      v70 = v70 - 9.223372e18;
      if ( v70 < 9.223372e18 )
        v69 = 0x8000000000000000uLL;
    }
    v71 = *((_QWORD *)this + 2446);
    v72 = v69 + (unsigned int)(int)v70;
    if ( *((_BYTE *)this + 19576) != v72 > v71 )
    {
      v73 = *(_QWORD *)this;
      *((_BYTE *)this + 19576) = v72 > v71;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v73 + 184LL))(v73) )
      {
        LOBYTE(v74) = !CComposition::IsPowerSaverEnabled(g_pComposition)
                   && (CComposition::GetCompositorClockBoost(v75) || v72 > v71);
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 192LL))(*(_QWORD *)this, v74);
      }
    }
  }
  COverlayContext::GetDeviceTransform((CLegacyRenderTarget **)this);
  if ( !COverlayContext::OverlaysEnabled(this) && !*((_DWORD *)this + 16)
    || *((_BYTE *)this + 19577)
    || *((_BYTE *)this + 19580)
    || !CMILMatrix::IsTranslateAndScale<1>(v77)
    || v78[10] != 1.0
    || *v78 < 1.0
    || (v79 = v78[5], v79 < 1.0)
    || *v78 <= 1.0 && v79 <= 1.0 )
  {
    v13 = 0;
  }
  *((_BYTE *)this + 19585) = v13;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0d_EventWriteTransfer(v76, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
}
