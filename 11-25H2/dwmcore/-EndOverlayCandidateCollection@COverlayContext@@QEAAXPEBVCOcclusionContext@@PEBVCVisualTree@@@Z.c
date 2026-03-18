/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002C578 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18002C6EC (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002DC40 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x18002E84C (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x18002EB34 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x18002FAC8 (--0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800A3330 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x1800C2FC0 (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1800CD0F0 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1801215D0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18018959C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ @ 0x1801897C4 (-GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x1801E7150 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FB794 (-DoesIntersect@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     McTemplateU0d_EventWriteTransfer @ 0x180204BC0 (McTemplateU0d_EventWriteTransfer.c)
 *     McTemplateU0xd_EventWriteTransfer @ 0x18020D1DC (McTemplateU0xd_EventWriteTransfer.c)
 *     ?DisableHardwareCursor@COverlayContext@@AEAAXXZ @ 0x18020F5D0 (-DisableHardwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x180239480 (-GetCursorShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z @ 0x18027460C (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z.c)
 *     ?IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18027729C (-IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::EndOverlayCandidateCollection(
        __int64 **this,
        const struct COcclusionContext *a2,
        const struct CVisualTree *a3)
{
  struct CVisualTree *v3; // r15
  CGlobalComposition *CurrentFrameId; // rax
  const struct COcclusionContext *v6; // rdx
  __int64 v7; // rcx
  CGlobalComposition *v8; // rsi
  CGlobalComposition *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r12
  char v12; // r14
  const struct CMonitorTransform *MonitorTransform; // rax
  __int64 v14; // rcx
  struct CMILMatrix *v15; // r13
  __int64 v16; // rdx
  __int64 *v17; // r15
  __int64 *v18; // rdx
  unsigned int v19; // r12d
  unsigned __int8 v20; // si
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 *v26; // r15
  __int64 *v27; // r12
  int OverlayCandidateIndex; // eax
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // rsi
  unsigned int v33; // eax
  unsigned __int8 IsOccluded; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *i; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // esi
  __int64 v41; // rdx
  _DWORD *v42; // rcx
  COverlayContext::OverlayPlaneInfo *v43; // rax
  __int64 *v44; // rcx
  unsigned int v45; // esi
  __int64 *v46; // r15
  __int64 v47; // r12
  COverlayContext::OverlayPlaneInfo *v48; // rbx
  _QWORD *v49; // rdx
  CVisual *v50; // rcx
  __int64 v51; // r9
  float *v52; // r9
  float v53; // xmm2_4
  bool v54; // [rsp+20h] [rbp-E0h] BYREF
  bool v55; // [rsp+21h] [rbp-DFh] BYREF
  __int64 v56; // [rsp+28h] [rbp-D8h] BYREF
  struct CVisualTree *v57; // [rsp+30h] [rbp-D0h]
  struct CMILMatrix *v58; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v59; // [rsp+40h] [rbp-C0h]
  const struct COcclusionContext *v60; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+50h] [rbp-B0h]
  char v62[400]; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_RECT_F v63; // [rsp+1E8h] [rbp+E8h] BYREF
  struct D2D_RECT_F v64; // [rsp+1F8h] [rbp+F8h] BYREF

  v3 = a3;
  v57 = a3;
  v60 = a2;
  CurrentFrameId = GetCurrentFrameId();
  v8 = *(CGlobalComposition **)(v7 + 19760);
  v9 = CurrentFrameId;
  if ( *(int *)(v7 + 19680) > 0 )
  {
    v10 = *(_QWORD *)(v7 + 19648);
    if ( v10 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 112LL))(v10) )
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
      v6 = v60;
    }
  }
  v11 = (__int64)v3 + 112;
  v12 = 1;
  v61 = (__int64)v3 + 112;
  if ( v8 != v9 )
  {
    v59 = *((_DWORD *)v6 + 384);
    MonitorTransform = COverlayContext::GetMonitorTransform((COverlayContext *)this);
    v14 = (__int64)*this;
    v15 = (const struct CMonitorTransform *)((char *)MonitorTransform + 120);
    v16 = **this;
    v58 = (const struct CMonitorTransform *)((char *)MonitorTransform + 120);
    v17 = (__int64 *)(this + 11);
    v54 = (*(__int64 (__fastcall **)(__int64))(v16 + 40))(v14);
    v18 = this[11];
    v19 = 0;
    if ( -1030792151 * (unsigned int)(((char *)this[12] - (char *)v18) >> 4) )
    {
      while ( 1 )
      {
        v20 = 0;
        v21 = 50LL * v19;
        v22 = (__int64)&v18[v21];
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
        {
          if ( COverlayContext::OverlayPlaneInfo::CalcVisibleArea(
                 (COverlayContext::OverlayPlaneInfo *)v22,
                 v57,
                 v58,
                 v54) )
          {
            goto LABEL_27;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xd_EventWriteTransfer(v24, v23, *(_QWORD *)(*(_QWORD *)(v22 + 16) + 40LL), 1);
        }
        else
        {
          COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v22, (__int64)&v64, (__int64)v58);
          v33 = CVisual::GetZ(*(CVisual **)(v22 + 8), v57, v59);
          if ( v33 )
          {
            IsOccluded = COcclusionContext::IsOccluded((__int64)v60, &v64.left, v33, 0);
            v20 = IsOccluded;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
              McTemplateU0xd_EventWriteTransfer(v36, v35, *(_QWORD *)(*(_QWORD *)(v22 + 16) + 40LL), IsOccluded);
          }
          *(_QWORD *)(v22 + 352) = v20 ^ 1LL;
          if ( !v20 )
          {
LABEL_27:
            for ( i = this[1617]; ; i += 50 )
            {
              if ( i == this[1618] )
              {
                ++v19;
                goto LABEL_13;
              }
              v38 = *(_QWORD *)(v22 + 16);
              if ( v38 == i[2] )
              {
                v39 = i[1];
                if ( *(_QWORD *)(v22 + 8) != v39 )
                  break;
              }
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
              McTemplateU0xq_EventWriteTransfer(
                v39,
                &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
                *(unsigned int *)(v38 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v38 + 40)) << 32),
                9);
          }
        }
        v56 = v21 * 8 + *v17;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          this + 11,
          &v63,
          &v56);
LABEL_13:
        v18 = (__int64 *)*v17;
        if ( v19 >= -1030792151 * (unsigned int)(((char *)this[12] - (char *)this[11]) >> 4) )
        {
          v15 = v58;
          break;
        }
      }
    }
    v25 = (__int64)this[1617];
    v26 = (__int64 *)(this + 11);
    v27 = this[1618];
    while ( (__int64 *)v25 != v27 )
    {
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                (COverlayContext *)this,
                                *(const struct CVisual **)(v25 + 8),
                                *(const struct CCompositionSurfaceInfo **)(v25 + 16),
                                *(_QWORD *)(v25 + 24));
      v29 = OverlayCandidateIndex;
      if ( OverlayCandidateIndex == -1 )
      {
        COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v25, (__int64)&v64, (__int64)v15);
        if ( !CTreeDirty::DoesIntersect(v61, &v64) )
        {
          v40 = -1030792151 * (((char *)this[12] - (char *)this[11]) >> 4) - 1;
          if ( -1030792151 * (unsigned int)(((char *)this[12] - (char *)this[11]) >> 4) )
          {
            v41 = v40;
            v42 = (_DWORD *)(400LL * v40 + *v26 + 380);
            do
            {
              if ( *((_BYTE *)v42 - 12) && *v42 < *(_DWORD *)(v25 + 380) )
                break;
              --v40;
              --v41;
              v42 -= 100;
            }
            while ( v41 != -1 );
          }
          v43 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                  (COverlayContext::OverlayPlaneInfo *)v62,
                  (const struct COverlayContext::OverlayPlaneInfo *)v25);
          v56 = *v26 + 400 * (v40 + 1LL);
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
            this + 11,
            &v63,
            &v56,
            (__int64)v43);
        }
      }
      else
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftwareXORCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SoftwareXORCursor>::GetImpl'::`2'::impl) )
          *(_OWORD *)(v25 + 244) = *(_OWORD *)(400 * v29 + *v26 + 244);
        v30 = *v26;
        v31 = *(_OWORD *)(v25 + 260);
        v55 = 0;
        v32 = 400 * v29;
        v54 = 0;
        *(_OWORD *)(v32 + v30 + 260) = v31;
        *(_DWORD *)(v32 + v30 + 276) = *(_DWORD *)(v25 + 276);
        *(_BYTE *)(v32 + v30 + 368) = *(_BYTE *)(v25 + 368);
        *(_DWORD *)(v32 + v30 + 376) = *(_DWORD *)(v25 + 376);
        *(_BYTE *)(v32 + v30 + 371) = *(_BYTE *)(v25 + 371);
        *(_DWORD *)(v32 + v30 + 392) = *(_DWORD *)(v25 + 392);
        *(_BYTE *)(v32 + v30 + 369) = *(_BYTE *)(v25 + 369);
        *(_BYTE *)(v32 + v30 + 370) = *(_BYTE *)(v25 + 370);
        *(_DWORD *)(v32 + v30 + 380) = *(_DWORD *)(v25 + 380);
        *(_DWORD *)(v32 + v30 + 384) = *(_DWORD *)(v25 + 384);
        *(_BYTE *)(v32 + v30 + 372) = *(_BYTE *)(v25 + 372);
        *(_DWORD *)(v32 + v30 + 388) = *(_DWORD *)(v25 + 388);
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v32 + *v26 + 32),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v25 + 32),
          &v55,
          &v54);
        *(_BYTE *)(v32 + *v26 + 369) |= v55;
        if ( *(_BYTE *)(v32 + *v26 + 370) )
        {
          if ( !v54 )
            *(_BYTE *)(v32 + *v26 + 370) = 0;
        }
      }
      v25 += 400LL;
    }
    v44 = this[11];
    v45 = 0;
    if ( -1030792151 * (unsigned int)(((char *)this[12] - (char *)v44) >> 4) )
    {
      v46 = (__int64 *)(this + 11);
      do
      {
        v47 = 50LL * v45;
        v48 = (COverlayContext::OverlayPlaneInfo *)&v44[v47];
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
        {
          if ( !COverlayContext::OverlayPlaneInfo::IsRevokable(v48)
            || (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)v48 + 2) + 192LL))(*((_QWORD **)v48 + 2)) )
          {
            goto LABEL_57;
          }
          (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v48 + 2) + 168LL))(*((_QWORD **)v48 + 2));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xq_EventWriteTransfer(
              *(unsigned int *)(*((_QWORD *)v48 + 2) + 40LL),
              &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
              *(unsigned int *)(*((_QWORD *)v48 + 2) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)v48 + 2) + 40LL)) << 32),
              5);
          v49 = &v63;
        }
        else
        {
          if ( !COverlayContext::IsRevokable((CLegacyRenderTarget **)this, v48)
            || (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)v48 + 2) + 192LL))(*((_QWORD **)v48 + 2)) )
          {
LABEL_57:
            ++v45;
            goto LABEL_58;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
            McTemplateU0xq_EventWriteTransfer(
              *(unsigned int *)(*((_QWORD *)v48 + 2) + 40LL),
              &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
              *(unsigned int *)(*((_QWORD *)v48 + 2) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*((_QWORD *)v48 + 2) + 40LL)) << 32),
              5);
          v49 = &v58;
        }
        v56 = v47 * 8 + *v46;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          this + 11,
          v49,
          &v56);
LABEL_58:
        v44 = (__int64 *)*v46;
      }
      while ( v45 < -1030792151 * (unsigned int)(((char *)this[12] - (char *)this[11]) >> 4) );
    }
    v11 = v61;
    v3 = v57;
  }
  COverlayContext::GetDeviceTransform((CLegacyRenderTarget **)this);
  if ( !COverlayContext::OverlaysEnabled((COverlayContext *)this) && !*((_DWORD *)this + 16)
    || *((_BYTE *)this + 19768)
    || *((_BYTE *)this + 19771)
    || !CMILMatrix::IsTranslateAndScale<1>(v51)
    || v52[10] != 1.0
    || *v52 < 1.0
    || (v53 = v52[5], v53 < 1.0)
    || *v52 <= 1.0 && v53 <= 1.0 )
  {
    v12 = 0;
  }
  *((_BYTE *)this + 19775) = v12;
  if ( !*((_BYTE *)this + 19780) )
  {
    v50 = (CVisual *)this[2451];
    if ( v50 )
    {
      CCursorVisual::GetCursorShapeBounds(v50, (__m128i *)&v63, v3);
      if ( IsEmpty(&v63) || CTreeDirty::DoesIntersect(v11, &v63) )
      {
        COverlayContext::DisableHardwareCursor((COverlayContext *)this);
        (*(void (__fastcall **)(__int64 *, struct D2D_RECT_F *))(**this + 296))(*this, &v63);
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0d_EventWriteTransfer((__int64)v50, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
}
