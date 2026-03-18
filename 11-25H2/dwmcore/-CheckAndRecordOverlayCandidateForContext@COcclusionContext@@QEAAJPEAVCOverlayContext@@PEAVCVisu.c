/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023D960 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?CalcContentOnTopRect@COcclusionContext@@AEBA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18009F2FC (-CalcContentOnTopRect@COcclusionContext@@AEBA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801894F8 (-GetVirtualModeClip@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ?GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ @ 0x1801897C4 (-GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180198070 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNe.c)
 *     ?DoesContain@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C30EC (-DoesContain@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801E530C (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     McTemplateU0xdddddddd_EventWriteTransfer @ 0x180208090 (McTemplateU0xdddddddd_EventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@QEAA_NXZ @ 0x180247DA4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SoftwareXORCursor@@@details@wil@@.c)
 *     ?CalcInvertedContentOnTop@COverlayContext@@QEAA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024D300 (-CalcInvertedContentOnTop@COverlayContext@@QEAA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UM.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetCornerRects@COccluderClipStack@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCornerRects@@@Z @ 0x180272340 (-GetCornerRects@COccluderClipStack@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEAA_NXZ @ 0x1802868F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MPOClipRectFix@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidateForContext(
        __int64 a1,
        CLegacyRenderTarget **a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *a5,
        struct CMILMatrix *a6,
        CShape *a7)
{
  __m128 *v7; // rbx
  unsigned int v8; // r12d
  unsigned int *v9; // rsi
  CLegacyRenderTarget **v10; // rdi
  __int64 v12; // rax
  __int64 (__fastcall *v13)(_QWORD *); // rax
  DXGI_MODE_ROTATION v14; // xmm0_4
  unsigned int v15; // xmm0_4
  float v16; // xmm0_4
  char v17; // si
  char v18; // di
  char v19; // bl
  unsigned __int8 v20; // al
  const struct CMILMatrix *v21; // rbx
  char v22; // si
  _QWORD *v23; // rax
  int v24; // r9d
  __int64 v25; // rax
  __int64 (__fastcall *v26)(CShape *, struct D2D_RECT_F *, _QWORD); // rax
  int v27; // eax
  float left; // xmm9_4
  float top; // xmm7_4
  float right; // xmm8_4
  float bottom; // xmm6_4
  FLOAT *MonitorTransform; // rax
  float v33; // xmm0_4
  float v34; // xmm0_4
  void (__fastcall *v35)(_QWORD *, __m128 *, __int64 *, __int128 *, struct D2D_RECT_F *); // rax
  char IsEnabled; // al
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm4_4
  float *VirtualModeClip; // rax
  const struct CMonitorTransform *v42; // rax
  char DoesContain; // r15
  char v44; // al
  unsigned int v45; // ebx
  int *v46; // rax
  int v47; // eax
  bool v49; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+8Ch] [rbp-7Ch] BYREF
  DXGI_MODE_ROTATION v51; // [rsp+90h] [rbp-78h] BYREF
  __int64 v52; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v53; // [rsp+A0h] [rbp-68h]
  float v54; // [rsp+A8h] [rbp-60h]
  float v55; // [rsp+ACh] [rbp-5Ch]
  __m128 v56[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v57; // [rsp+F8h] [rbp-10h]
  __int64 v58[8]; // [rsp+108h] [rbp+0h] BYREF
  int v59; // [rsp+148h] [rbp+40h]
  struct D2D_RECT_F v60; // [rsp+158h] [rbp+50h] BYREF
  struct D2D_RECT_F v61; // [rsp+168h] [rbp+60h] BYREF
  struct D2D_RECT_F v62; // [rsp+178h] [rbp+70h] BYREF
  struct D2D_RECT_F v63; // [rsp+188h] [rbp+80h] BYREF
  __int128 v64; // [rsp+198h] [rbp+90h] BYREF
  const struct CMILMatrix *DeviceTransform; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v66; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v67[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v68[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v69[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int128 v70; // [rsp+1F8h] [rbp+F0h]
  __int128 v71; // [rsp+208h] [rbp+100h]
  __int128 v72; // [rsp+218h] [rbp+110h]
  int v73; // [rsp+228h] [rbp+120h]

  v7 = (__m128 *)a6;
  v8 = 0;
  v9 = a4;
  v10 = a2;
  v53 = a4;
  v52 = a3;
  *(_QWORD *)&v60.left = a2;
  DeviceTransform = a6;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
  {
    v57 = 0;
    v12 = a5[1];
    v63 = 0LL;
    (*(void (__fastcall **)(_QWORD *, __m128 *, struct D2D_RECT_F *))(v12 + 40))(a5 + 1, v56, &v63);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v13 = *(__int64 (__fastcall **)(_QWORD *))(*a5 + 152LL);
      *(float *)&v14 = v63.bottom + 6291456.25;
      v51 = v14;
      *(float *)&v15 = v63.right + 6291456.25;
      v50 = v15;
      v16 = v63.top + 6291456.25;
      v54 = v16;
      v55 = v63.left + 6291456.25;
      v17 = v13(a5);
      v18 = (*(__int64 (__fastcall **)(_QWORD *))(*a5 + 144LL))(a5);
      v19 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v53 + 112LL))(v53);
      v20 = (*(__int64 (__fastcall **)(_QWORD *))(*a5 + 168LL))(a5);
      McTemplateU0xdddddddd_EventWriteTransfer(
        (unsigned int)((int)(LODWORD(v55) << 10) >> 11),
        (unsigned int)((int)(LODWORD(v54) << 10) >> 11),
        v53[10] | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v53 + 5)) << 32),
        v20,
        v19,
        v18,
        v17,
        (int)(LODWORD(v55) << 10) >> 11,
        (int)(LODWORD(v54) << 10) >> 11,
        (int)(v50 << 10) >> 11,
        v51 << 10 >> 11);
      v10 = *(CLegacyRenderTarget ***)&v60.left;
      v7 = (__m128 *)DeviceTransform;
      v9 = v53;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)v9 + 184LL))(v9) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a5[2] + 24LL))(a5 + 2, &v52);
      v24 = 8;
      goto LABEL_91;
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, const struct CMILMatrix **))(a5[1] + 24LL))(a5 + 1, &DeviceTransform);
    v59 = 0;
    CMatrixStack::Top((CMatrixStack *)(a1 + 32), (struct CMILMatrix *)v58);
    v57 = 0;
    CMILMatrix::Multiply(v7, (const struct CMILMatrix *)v58, (struct CMILMatrix *)v56);
    v73 = 0;
    DeviceTransform = COverlayContext::GetDeviceTransform(v10);
    v21 = DeviceTransform;
    CMILMatrix::Multiply(v56, DeviceTransform, (struct CMILMatrix *)v69);
    v50 = 0;
    v22 = 1;
    v49 = 1;
    v51 = DXGI_MODE_ROTATION_IDENTITY;
    if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v69)
      && COverlayContext::DeriveOverlayRotationParameters(
           (COverlayContext *)v10,
           (const struct CMILMatrix *)v69,
           &v51,
           &v50,
           &v49) )
    {
      if ( !a7 || CShape::IsAxisAlignedRectangle(a7) )
      {
        v60 = 0LL;
        CBaseClipStack::Top((__int64 *)(a1 + 128), &v60);
        if ( a7 )
        {
          v25 = *(_QWORD *)a7;
          v63 = 0LL;
          v26 = *(__int64 (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(v25 + 48);
          v61 = 0LL;
          v27 = v26(a7, &v63, 0LL);
          v8 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0xBEu, 0LL);
            return v8;
          }
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)v58, &v63, &v61.left);
          left = v60.left;
          if ( v61.left > v60.left )
          {
            v60.left = v61.left;
            left = v61.left;
          }
          top = v60.top;
          if ( v61.top > v60.top )
          {
            v60.top = v61.top;
            top = v61.top;
          }
          right = v60.right;
          if ( v60.right > v61.right )
          {
            right = v61.right;
            v60.right = v61.right;
          }
          bottom = v60.bottom;
          if ( v60.bottom > v61.bottom )
          {
            bottom = v61.bottom;
            v60.bottom = v61.bottom;
          }
          if ( IsEmpty(&v60) )
          {
            bottom = 0.0;
            right = 0.0;
            top = 0.0;
            v60.bottom = 0.0;
            left = 0.0;
            v60.right = 0.0;
            v60.top = 0.0;
            v60.left = 0.0;
          }
        }
        else
        {
          bottom = v60.bottom;
          right = v60.right;
          top = v60.top;
          left = v60.left;
        }
        MonitorTransform = (FLOAT *)COverlayContext::GetMonitorTransform((COverlayContext *)v10);
        v33 = MonitorTransform[2];
        if ( v33 > left )
        {
          v60.left = MonitorTransform[2];
          left = v33;
        }
        v34 = MonitorTransform[3];
        if ( v34 > top )
        {
          v60.top = MonitorTransform[3];
          top = v34;
        }
        if ( right > MonitorTransform[4] )
        {
          right = MonitorTransform[4];
          v60.right = right;
        }
        if ( bottom > MonitorTransform[5] )
        {
          bottom = MonitorTransform[5];
          v60.bottom = bottom;
        }
        if ( !IsEmpty(&v60) )
        {
          v35 = *(void (__fastcall **)(_QWORD *, __m128 *, __int64 *, __int128 *, struct D2D_RECT_F *))(*a5 + 232LL);
          *(_OWORD *)v68 = 0LL;
          v64 = 0LL;
          v63 = 0LL;
          v35(a5, v56, v68, &v64, &v63);
          IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_MPOClipRectFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MPOClipRectFix>::GetImpl'::`2'::impl);
          v37 = v63.right;
          v38 = v63.top;
          v39 = v63.left;
          if ( IsEnabled )
          {
            if ( v63.left > left )
            {
              v60.left = v63.left;
              left = v63.left;
            }
            if ( v63.top > top )
            {
              v60.top = v63.top;
              top = v63.top;
            }
            if ( right > v63.right )
            {
              v60.right = v63.right;
              right = v63.right;
            }
            if ( bottom > v63.bottom )
            {
              v60.bottom = v63.bottom;
              bottom = v63.bottom;
            }
          }
          else
          {
            if ( *(float *)&v64 > left )
            {
              LODWORD(v60.left) = v64;
              left = *(float *)&v64;
            }
            if ( *((float *)&v64 + 1) > top )
            {
              v60.top = *((FLOAT *)&v64 + 1);
              top = *((float *)&v64 + 1);
            }
            if ( right > *((float *)&v64 + 2) )
            {
              right = *((float *)&v64 + 2);
              v60.right = *((FLOAT *)&v64 + 2);
            }
            if ( bottom > *((float *)&v64 + 3) )
            {
              bottom = *((float *)&v64 + 3);
              v60.bottom = *((FLOAT *)&v64 + 3);
            }
          }
          if ( IsEmpty(&v60) )
          {
            left = 0.0;
            top = 0.0;
            right = 0.0;
            v60.left = 0.0;
            bottom = 0.0;
            v60.top = 0.0;
            v60.right = 0.0;
            v60.bottom = 0.0;
          }
          v61.left = v39;
          v61.top = v38;
          v61.right = v37;
          v61.bottom = v40;
          if ( left > v39 )
            v61.left = left;
          if ( top > v38 )
            v61.top = top;
          if ( v37 > right )
            v61.right = right;
          if ( v40 > bottom )
            v61.bottom = bottom;
          if ( !IsEmpty(&v61) )
          {
            *(_OWORD *)v67 = 0LL;
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, &v63, (float *)v67);
            v62 = 0LL;
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, &v60, &v62.left);
            VirtualModeClip = COverlayContext::GetVirtualModeClip(v10, (float *)&v66);
            if ( *VirtualModeClip > v62.left )
              v62.left = *VirtualModeClip;
            if ( VirtualModeClip[1] > v62.top )
              v62.top = VirtualModeClip[1];
            if ( v62.right > VirtualModeClip[2] )
              v62.right = VirtualModeClip[2];
            if ( v62.bottom > VirtualModeClip[3] )
              v62.bottom = VirtualModeClip[3];
            if ( !IsEmpty(&v62) )
            {
              LOBYTE(v73) = 1;
              *(_OWORD *)v69 = 0LL;
              v70 = 0LL;
              v71 = 0LL;
              v72 = 0LL;
              if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
              {
                v42 = COverlayContext::GetMonitorTransform((COverlayContext *)v10);
                v66 = 0LL;
                CMILMatrix::Transform2DBoundsHelper<0>((__int64)v42 + 120, &v62, (float *)&v66);
                COccluderClipStack::GetCornerRects(a1 + 176, &v66, v69);
              }
              DoesContain = CTreeDirty::DoesContain(*(_QWORD *)(a1 + 8) + 112LL, (__int64)&v61);
              v44 = (*(__int64 (__fastcall **)(_QWORD *))(*a5 + 200LL))(a5);
              v45 = v50;
              if ( v44 )
                v45 = v50 | 8;
              v60 = 0LL;
              if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SoftwareXORCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SoftwareXORCursor>::GetImpl'::`2'::impl) )
              {
                v60 = *(struct D2D_RECT_F *)COverlayContext::CalcInvertedContentOnTop(v10, &v66, &v61);
              }
              else
              {
                *(_QWORD *)&v60.right = 0LL;
                *(_QWORD *)&v60.left = 0LL;
              }
              if ( !*(_BYTE *)(a1 + 1568) || *(_BYTE *)(a1 + 1569) )
                v22 = 0;
              v46 = COcclusionContext::CalcContentOnTopRect(a1, (int *)&v66, (__int64)DeviceTransform);
              v47 = COverlayContext::CheckAndRecordOverlayCandidate(
                      (COverlayContext *)v10,
                      (__int64)v68,
                      (__int64)v67,
                      (__int64)&v62,
                      (__int64)v69,
                      (__int64)v58,
                      v51,
                      v45,
                      v49,
                      DoesContain,
                      (__int64)v46,
                      v22,
                      (__int64)&v60);
              v8 = v47;
              if ( v47 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0x121u, 0LL);
              return v8;
            }
            v62.bottom = 0.0;
            v62.right = 0.0;
            v62.top = 0.0;
            v62.left = 0.0;
          }
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        {
          v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a5[2] + 24LL))(a5 + 2, &v52);
          v24 = 3;
          goto LABEL_91;
        }
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a5[2] + 24LL))(a5 + 2, &v52);
        v24 = 2;
LABEL_91:
        McTemplateU0xq_EventWriteTransfer(
          *(unsigned int *)v23,
          &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
          *(unsigned int *)v23 | (unsigned __int64)((__int64)(int)HIDWORD(*v23) << 32),
          v24);
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a5[2] + 24LL))(a5 + 2, &v52);
      v24 = 1;
      goto LABEL_91;
    }
  }
  return v8;
}
