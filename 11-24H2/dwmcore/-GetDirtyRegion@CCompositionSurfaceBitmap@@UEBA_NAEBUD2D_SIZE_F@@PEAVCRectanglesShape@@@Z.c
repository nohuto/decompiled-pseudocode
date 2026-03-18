/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AFF0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18004CFCC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E140 (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E290 (-GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18006AC74 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800D1D50 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800D2830 (-GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2870 (-GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z @ 0x1800D38C0 (-GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D3950 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPE.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D3EB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180175224 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180177658 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?IsCompositionSwapchainScaleMode@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x18021B0A0 (-IsCompositionSwapchainScaleMode@CDxHandleYUVBitmapRealization@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetDirtyRegion(
        CCompositionSurfaceBitmap *this,
        const struct D2D_SIZE_F *a2,
        struct CRectanglesShape *a3)
{
  __int64 v3; // r12
  __int128 v4; // xmm6
  __int128 v5; // xmm7
  __int128 v6; // xmm8
  __int128 v7; // xmm9
  __int128 v8; // xmm11
  __int128 v9; // xmm12
  __int128 v10; // xmm14
  __int128 v11; // xmm15
  CGlobalCompositionSurfaceInfo *v13; // rdi
  CGlobalCompositionSurfaceInfo *v14; // rcx
  bool (__fastcall *v17)(CGlobalCompositionSurfaceInfo *__hidden, struct D2D_RECT_F *); // rax
  bool LetterboxingMargins; // al
  _QWORD *v19; // rsi
  struct IBitmapRealization *(__fastcall *v20)(CGlobalCompositionSurfaceInfo *); // rax
  __int64 v21; // rax
  CGDISectionBitmapRealization *v22; // rcx
  __int64 (__fastcall **v23)(CGDISectionBitmapRealization *); // rax
  __int64 (__fastcall *v24)(CGDISectionBitmapRealization *); // rax
  int Interface; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // r12
  struct IBitmapRealization *(__fastcall *v30)(CGlobalCompositionSurfaceInfo *); // rax
  __int64 v31; // rax
  CGlobalCompositionSurfaceInfo *v32; // rcx
  __int64 (*v33)(void); // rax
  struct ISwapChainRealization *SwapChainRealization; // rax
  int v35; // r13d
  char v36; // al
  CGlobalCompositionSurfaceInfo *v37; // rcx
  char (__fastcall *v38)(__int64, __int64); // r8
  struct ISwapChainRealization *v39; // rax
  char ScaledLetterboxingMargins; // al
  FLOAT v41; // xmm12_4
  float v42; // xmm15_4
  float v43; // xmm14_4
  int **v44; // r10
  int *v45; // r10
  int v46; // r11d
  int v47; // ebx
  int v48; // ecx
  __int64 v49; // rax
  float v50; // xmm2_4
  float v51; // xmm7_4
  float v52; // xmm8_4
  float v53; // xmm9_4
  float v54; // xmm6_4
  float v55; // xmm7_4
  float v56; // xmm0_4
  float v57; // xmm1_4
  float v58; // xmm8_4
  float v59; // xmm3_4
  float v60; // xmm11_4
  float v61; // xmm9_4
  float v62; // xmm2_4
  float v63; // xmm10_4
  float v64; // xmm4_4
  float v65; // xmm0_4
  bool v66; // zf
  float v67; // xmm4_4
  float v68; // xmm5_4
  float v69; // xmm3_4
  float v70; // xmm1_4
  __int64 v71; // rax
  CCachedVisualImage *v72; // rcx
  void (*v73)(void); // rax
  const struct D2D_SIZE_F *v74; // rdx
  unsigned __int64 v75; // rsi
  __int64 v76; // r9
  unsigned __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rax
  const struct D2D_SIZE_F *v80; // rcx
  float v82; // xmm9_4
  float v83; // xmm11_4
  char v84; // r9
  float v85; // xmm1_4
  float v86; // xmm2_4
  float v87; // xmm3_4
  float v88; // xmm0_4
  float width; // xmm4_4
  float v90; // xmm3_4
  float v91; // xmm2_4
  float height; // xmm0_4
  float v93; // xmm1_4
  bool (__fastcall *v94)(CDxHandleYUVBitmapRealization *__hidden); // rax
  char v95; // al
  float v96; // xmm0_4
  float v97; // xmm0_4
  unsigned __int64 v98; // rdi
  LPVOID v99; // rax
  __int64 v100; // r8
  __int64 v101; // rdx
  LPVOID v102; // rbx
  struct CRectanglesShape *v103; // rcx
  unsigned __int64 v104; // r11
  _OWORD *v105; // r10
  unsigned __int64 v106; // rax
  float v107; // xmm6_4
  float v108; // xmm5_4
  struct D2D_RECT_F v109; // [rsp+40h] [rbp-C0h] BYREF
  float v110; // [rsp+50h] [rbp-B0h]
  __int128 v111; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v112; // [rsp+70h] [rbp-90h]
  __int128 v113; // [rsp+80h] [rbp-80h]
  __int128 v114; // [rsp+90h] [rbp-70h]
  int v115; // [rsp+A0h] [rbp-60h]
  CDxHandleYUVBitmapRealization *v116; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v117; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v118; // [rsp+D0h] [rbp-30h]
  __int128 v119; // [rsp+E0h] [rbp-20h]
  __int128 v120; // [rsp+F0h] [rbp-10h]
  int v121; // [rsp+100h] [rbp+0h]
  __int128 v122; // [rsp+110h] [rbp+10h] BYREF
  __int128 v123; // [rsp+120h] [rbp+20h] BYREF
  __int64 v124; // [rsp+130h] [rbp+30h]
  __int128 v125; // [rsp+140h] [rbp+40h] BYREF
  __int64 v126; // [rsp+150h] [rbp+50h]
  struct D2D_RECT_F v127; // [rsp+160h] [rbp+60h] BYREF
  struct D2D_POINT_2F v128; // [rsp+170h] [rbp+70h] BYREF
  __int128 v129; // [rsp+1A0h] [rbp+A0h]
  __int128 v130; // [rsp+1B0h] [rbp+B0h]
  __int128 v131; // [rsp+1D0h] [rbp+D0h]
  __int128 v132; // [rsp+1E0h] [rbp+E0h]
  __int128 v133; // [rsp+200h] [rbp+100h]
  __int128 v134; // [rsp+210h] [rbp+110h]
  __int128 v135; // [rsp+220h] [rbp+120h]
  __int128 v136; // [rsp+230h] [rbp+130h]
  __int64 v137; // [rsp+248h] [rbp+148h]

  LOBYTE(v13) = 0;
  v14 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 1);
  v127 = 0LL;
  if ( v14 )
  {
    v17 = *(bool (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden, struct D2D_RECT_F *))(*(_QWORD *)v14 + 472LL);
    if ( v17 == CGlobalCompositionSurfaceInfo::GetLetterboxingMargins )
      LetterboxingMargins = CGlobalCompositionSurfaceInfo::GetLetterboxingMargins(v14, &v127);
    else
      LetterboxingMargins = v17(v14, &v127);
  }
  else
  {
    LetterboxingMargins = 0;
  }
  if ( !*((_QWORD *)this + 2) )
    goto LABEL_127;
  while ( 1 )
  {
    v19 = (_QWORD *)*((_QWORD *)this + 1);
    if ( !v19 )
      return (unsigned __int8)v13;
    v20 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *))(*v19 + 48LL);
    if ( v20 == CGlobalCompositionSurfaceInfo::GetRenderingRealization )
    {
      if ( !v19[26] )
        CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*((CGlobalCompositionSurfaceInfo **)this + 1));
      v21 = v19[26];
      v22 = (CGDISectionBitmapRealization *)(v21 + 8);
      if ( !v21 )
        v22 = 0LL;
    }
    else
    {
      v22 = v20(*((CGlobalCompositionSurfaceInfo **)this + 1));
    }
    if ( !v22 )
      return (unsigned __int8)v13;
    v23 = *(__int64 (__fastcall ***)(CGDISectionBitmapRealization *))v22;
    v116 = 0LL;
    v24 = *v23;
    if ( v24 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface )
      Interface = CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(v22);
    else
      Interface = ((__int64 (__fastcall *)(CGDISectionBitmapRealization *, GUID *, CDxHandleYUVBitmapRealization **))v24)(
                    v22,
                    &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
                    &v116);
    if ( Interface >= 0 )
    {
      v94 = *(bool (__fastcall **)(CDxHandleYUVBitmapRealization *__hidden))(*(_QWORD *)v116 + 280LL);
      v95 = v94 == CDxHandleYUVBitmapRealization::IsCompositionSwapchainScaleMode
          ? CDxHandleYUVBitmapRealization::IsCompositionSwapchainScaleMode(v116)
          : ((__int64 (*)(void))v94)();
      if ( !v95 )
        goto LABEL_82;
    }
    v13 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 1);
    v137 = v3;
    v29 = 0;
    v136 = v4;
    v135 = v5;
    v134 = v6;
    v133 = v7;
    v132 = v8;
    v131 = v9;
    v130 = v10;
    v129 = v11;
    v115 = 0;
    v122 = 0LL;
    if ( !v13 )
      goto LABEL_135;
    v30 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v13 + 48LL);
    if ( v30 == CGlobalCompositionSurfaceInfo::GetRenderingRealization )
    {
      if ( !*((_QWORD *)v13 + 26) )
        CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(v13);
      v31 = *((_QWORD *)v13 + 26);
      v13 = (CGlobalCompositionSurfaceInfo *)(v31 + 8);
      if ( !v31 )
        v13 = 0LL;
    }
    else
    {
      v13 = v30(v13);
    }
    if ( !v13 )
    {
LABEL_135:
      v111 = _xmm;
      v112 = _xmm;
      BYTE1(v115) = BYTE1(v115) & 0xC0 | 0x29;
      v113 = _xmm;
      v114 = *(__int128 *)&_xmm.r;
      LOBYTE(v115) = -86;
LABEL_136:
      v41 = *((float *)&v122 + 3);
      v42 = *((float *)&v122 + 2);
      v43 = *((float *)&v122 + 1);
      goto LABEL_35;
    }
    v32 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 1);
    if ( v32 )
    {
      v33 = *(__int64 (**)(void))(*(_QWORD *)v32 + 456LL);
      if ( (char *)v33 != (char *)&CGlobalCompositionSurfaceInfo::GetSizePreference )
        goto LABEL_26;
      SwapChainRealization = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v32);
      if ( SwapChainRealization )
      {
        v33 = *(__int64 (**)(void))(*(_QWORD *)SwapChainRealization + 104LL);
LABEL_26:
        v35 = v33();
        goto LABEL_27;
      }
    }
    v35 = 1;
LABEL_27:
    v36 = (*(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *, __int128 *, __int128 *))(*(_QWORD *)v13 + 40LL))(
            v13,
            &v111,
            &v122);
    v37 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 1);
    v29 = v36;
    v123 = 0LL;
    if ( !v37 )
      goto LABEL_149;
    v38 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 480LL);
    if ( v38 == CGlobalCompositionSurfaceInfo::GetScaledLetterboxingMargins )
    {
      v39 = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v37);
      v37 = v39;
      if ( !v39 )
      {
LABEL_149:
        LOBYTE(v13) = 0;
        goto LABEL_33;
      }
      v38 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 256LL);
      if ( v38 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
      {
        ScaledLetterboxingMargins = CBitmapRealization::GetScaledLetterboxingMargins((__int64)v39 - 328, (__int64)&v123);
        goto LABEL_32;
      }
    }
    else if ( v38 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
    {
      ScaledLetterboxingMargins = CDxHandleBitmapRealization::GetScaledLetterboxingMargins((__int64)v37, (__int64)&v123);
      goto LABEL_32;
    }
    ScaledLetterboxingMargins = v38 == CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins
                              ? CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(
                                  (__int64)v37,
                                  (__int64)&v123)
                              : v38((__int64)v37, (__int64)&v123);
LABEL_32:
    LOBYTE(v13) = ScaledLetterboxingMargins;
    if ( ScaledLetterboxingMargins )
    {
      if ( COERCE_FLOAT(v123 & _xmm) < 0.000081380211
        && COERCE_FLOAT(DWORD1(v123) & _xmm) < 0.000081380211
        && 0.000081380211 > 0.0 )
      {
        goto LABEL_113;
      }
      *(float *)&v114 = *(float *)&v114
                      + (float)((float)((float)(*(float *)&v111 * *(float *)&v123)
                                      + (float)(*(float *)&v112 * *((float *)&v123 + 1)))
                              + (float)(*(float *)&v113 * 0.0));
      *((float *)&v114 + 1) = *((float *)&v114 + 1)
                            + (float)((float)((float)(*((float *)&v111 + 1) * *(float *)&v123)
                                            + (float)(*((float *)&v112 + 1) * *((float *)&v123 + 1)))
                                    + (float)(*((float *)&v113 + 1) * 0.0));
      *((float *)&v114 + 2) = *((float *)&v114 + 2)
                            + (float)((float)((float)(*((float *)&v111 + 2) * *(float *)&v123)
                                            + (float)(*((float *)&v112 + 2) * *((float *)&v123 + 1)))
                                    + (float)(*((float *)&v113 + 2) * 0.0));
      if ( (char)(4 * BYTE1(v115)) >> 6 == 1 )
        goto LABEL_89;
      if ( (char)(4 * BYTE1(v115)) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(HIDWORD(v112) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(HIDWORD(v111) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(HIDWORD(v114) & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
          goto LABEL_89;
        BYTE1(v115) |= 0x30u;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(HIDWORD(v113) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          goto LABEL_89;
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(HIDWORD(v113) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
      {
LABEL_89:
        v115 = 0;
        *((float *)&v114 + 3) = *((float *)&v114 + 3)
                              + (float)((float)((float)(*((float *)&v111 + 3) * *(float *)&v123)
                                              + (float)(*((float *)&v112 + 3) * *((float *)&v123 + 1)))
                                      + (float)(*((float *)&v113 + 3) * 0.0));
LABEL_113:
        v29 = 1;
        goto LABEL_33;
      }
      LOBYTE(v115) = v115 & 0xFC;
      goto LABEL_113;
    }
LABEL_33:
    if ( a2->width <= 0.0
      || a2->height <= 0.0
      || !CCompositionSurfaceBitmap::HasSwapChainAttributes((CCompositionSurfaceBitmap *)((char *)this - 88))
      || v35 == 1 )
    {
      v41 = *((float *)&v122 + 3);
      v42 = *((float *)&v122 + 2);
      v43 = *((float *)&v122 + 1);
      goto LABEL_35;
    }
    v43 = *((float *)&v122 + 1);
    v85 = *(float *)&v122;
    v42 = *((float *)&v122 + 2);
    v41 = *((float *)&v122 + 3);
    v86 = *((float *)&v122 + 2);
    v109 = (struct D2D_RECT_F)v122;
    v87 = *((float *)&v122 + 3);
    v125 = 0LL;
    v88 = *((float *)&v122 + 1);
    if ( (_BYTE)v13 )
    {
      v85 = *(float *)&v122 - *(float *)&v123;
      v88 = *((float *)&v122 + 1) - *((float *)&v123 + 1);
      v86 = *((float *)&v122 + 2) + *((float *)&v123 + 2);
      v87 = *((float *)&v122 + 3) + *((float *)&v123 + 3);
      v109.left = *(float *)&v122 - *(float *)&v123;
      v109.top = *((float *)&v122 + 1) - *((float *)&v123 + 1);
      v109.right = *((float *)&v122 + 2) + *((float *)&v123 + 2);
      v109.bottom = *((float *)&v122 + 3) + *((float *)&v123 + 3);
    }
    if ( v29 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v111, &v109, (float *)&v125);
      v87 = *((float *)&v125 + 3);
      v86 = *((float *)&v125 + 2);
      v88 = *((float *)&v125 + 1);
      v85 = *(float *)&v125;
      v41 = *((float *)&v122 + 3);
      v42 = *((float *)&v122 + 2);
      v43 = *((float *)&v122 + 1);
    }
    if ( v86 > v85 && v87 > v88 )
    {
      width = a2->width;
      v90 = v87 - v88;
      v91 = v86 - v85;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->width - v91) & _xmm) > 0.00390625
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->height - v90) & _xmm) > 0.00390625 )
      {
        v121 = 0;
        v118 = _xmm;
        v117 = _xmm;
        v120 = *(__int128 *)&_xmm.r;
        v119 = _xmm;
        height = a2->height;
        LOWORD(v121) = 10666;
        v93 = width / v91;
        if ( v35 )
        {
          v107 = 0.0;
          v108 = 0.0;
          if ( height < (float)(v93 * v90) )
          {
            v93 = height / v90;
            v107 = (float)(width - (float)((float)(height / v90) * v91)) * 0.5;
          }
          else
          {
            v108 = (float)(height - (float)(v93 * v90)) * 0.5;
          }
          *(float *)&v117 = v93;
          v121 = 10632;
          *((float *)&v118 + 1) = v93;
          *(_QWORD *)&v120 = __PAIR64__(LODWORD(v108), LODWORD(v107));
        }
        else
        {
          CMILMatrix::SetScale((CMILMatrix *)&v117, v93, height / v90, 1.0, 0.0, 0.0, 0.0);
        }
        CMILMatrix::Multiply((CMILMatrix *)&v111, (const struct CMILMatrix *)&v117);
        v29 = 1;
        goto LABEL_136;
      }
    }
LABEL_35:
    v44 = (int **)*((_QWORD *)this + 2);
    if ( v44 )
    {
      v45 = *v44;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v28 = 0LL;
      v49 = *v45;
      if ( (_DWORD)v49 )
      {
        v27 = (unsigned int)v45[2 * v49 + 1];
        v28 = 0xFFFFFFFFLL;
        v46 = -1;
        v47 = -1;
        v26 = (unsigned int)v45[2];
        if ( v45[1] >= 0 )
          v46 = v45[1];
        if ( v45[3] >= 0 )
          v47 = v45[3];
        v48 = -1;
        if ( (int)v26 >= 0 )
          v48 = v45[2];
        if ( (int)v27 >= 0 )
          v28 = (unsigned int)v27;
      }
      v50 = FLOAT_N3_4028235e38;
      v51 = (float)v47;
      v52 = (float)v48;
      v53 = (float)(int)v28;
      if ( (float)v46 <= -3.4028235e38 )
      {
        v109.left = FLOAT_N3_4028235e38;
        v54 = FLOAT_N3_4028235e38;
      }
      else
      {
        v54 = (float)v46 - 0.5;
        v109.left = v54;
      }
      if ( v51 <= -3.4028235e38 )
      {
        v109.top = FLOAT_N3_4028235e38;
        v55 = FLOAT_N3_4028235e38;
      }
      else
      {
        v55 = v51 - 0.5;
        v109.top = v55;
        v50 = v55;
      }
      v56 = FLOAT_3_4028235e38;
      v57 = v50;
      v110 = v50;
      if ( v52 >= 3.4028235e38 )
      {
        v109.right = FLOAT_3_4028235e38;
        v58 = FLOAT_3_4028235e38;
        v59 = FLOAT_3_4028235e38;
      }
      else
      {
        v58 = v52 + 0.5;
        v109.right = v58;
        v59 = v58;
      }
      v60 = v59;
      if ( v53 >= 3.4028235e38 )
      {
        v109.bottom = FLOAT_3_4028235e38;
        v61 = FLOAT_3_4028235e38;
        v110 = v50;
        v57 = v50;
      }
      else
      {
        v61 = v53 + 0.5;
        v109.bottom = v61;
        v56 = v61;
      }
      v62 = v59;
      v63 = v56;
      v64 = v56;
      if ( *(float *)&v122 > v54 )
      {
        v54 = *(float *)&v122;
        v62 = v59;
        v57 = v110;
        v60 = v59;
        LODWORD(v109.left) = v122;
      }
      if ( v43 > v57 )
      {
        v55 = v43;
        v62 = v60;
        v109.top = v43;
        v63 = v56;
        v64 = v56;
        v57 = v43;
      }
      v65 = v57;
      if ( v62 > v42 )
      {
        v109.right = v42;
        v58 = v42;
        v63 = v64;
        v62 = v42;
      }
      if ( v63 > *((float *)&v122 + 3) )
      {
        v109.bottom = *((FLOAT *)&v122 + 3);
        v61 = *((float *)&v122 + 3);
        v63 = *((float *)&v122 + 3);
        v65 = v57;
      }
      if ( v62 <= v54 || v63 <= v65 )
      {
        v61 = 0.0;
        v58 = 0.0;
        v55 = 0.0;
        v109.bottom = 0.0;
        v54 = 0.0;
        v109.right = 0.0;
        v109.top = 0.0;
        v63 = 0.0;
        v109.left = 0.0;
      }
    }
    else
    {
      v54 = *(float *)&v122;
      v55 = v43;
      v109.top = v43;
      v58 = v42;
      LODWORD(v109.left) = v122;
      v61 = v41;
      v109.right = v42;
      v63 = v41;
      v109.bottom = v41;
    }
    v11 = v129;
    v66 = v29 == 0;
    v3 = v137;
    v10 = v130;
    if ( !v66 )
    {
      v123 = 0LL;
      LOBYTE(v28) = 0;
      if ( (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(&v111, v26, v27, v28) )
      {
        v67 = *(float *)&v114 + v54;
        v68 = *((float *)&v114 + 1) + v55;
        v69 = *(float *)&v114 + v58;
        v70 = *((float *)&v114 + 1) + v61;
LABEL_68:
        v109.left = v67;
        v109.top = v68;
        v109.right = v69;
        v109.bottom = v70;
        goto LABEL_69;
      }
      v82 = 0.0;
      v83 = 0.0;
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v111) )
      {
        v84 = 1;
        v67 = (float)(*(float *)&v111 * v54) + *(float *)&v114;
        v69 = (float)(*(float *)&v111 * v58) + *(float *)&v114;
        v68 = (float)(*((float *)&v112 + 1) * v55) + *((float *)&v114 + 1);
        *(float *)&v123 = v67;
        v82 = v67;
        v70 = (float)(*((float *)&v112 + 1) * v63) + *((float *)&v114 + 1);
        *((float *)&v123 + 2) = v69;
        v83 = v69;
        *((float *)&v123 + 1) = v68;
        *((float *)&v123 + 3) = v70;
        if ( *(float *)&v111 > 0.0 && *((float *)&v112 + 1) > 0.0 )
          goto LABEL_68;
      }
      else
      {
        v70 = *((float *)&v123 + 3);
        v69 = *((float *)&v123 + 2);
        v68 = *((float *)&v123 + 1);
        v67 = *(float *)&v123;
      }
      if ( v84 )
      {
        if ( v82 > v83 )
        {
          v96 = v67;
          v67 = v69;
          v69 = v96;
        }
        if ( v68 > v70 )
        {
          v97 = v68;
          v68 = v70;
          v70 = v97;
        }
      }
      else
      {
        CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)&v111, &v109, &v128);
        *(_QWORD *)&v125 = 4LL;
        *((_QWORD *)&v125 + 1) = &v128;
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
          (float *)&v123,
          (unsigned __int64 *)&v125);
        v70 = *((float *)&v123 + 3);
        v69 = *((float *)&v123 + 2);
        v68 = *((float *)&v123 + 1);
        v67 = *(float *)&v123;
      }
      goto LABEL_68;
    }
LABEL_69:
    v9 = v131;
    v8 = v132;
    v7 = v133;
    v6 = v134;
    v5 = v135;
    v4 = v136;
    v71 = (__int64)(*((_QWORD *)a3 + 3) - *((_QWORD *)a3 + 2)) >> 4;
    if ( v71 )
      *((_QWORD *)a3 + 3) -= 16 * v71;
    v72 = (CCachedVisualImage *)*((_QWORD *)a3 + 7);
    if ( v72 )
    {
      v73 = *(void (**)(void))(*(_QWORD *)v72 + 16LL);
      if ( (char *)v73 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
          v72,
          (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
          v27);
      else
        v73();
      *((_QWORD *)a3 + 7) = 0LL;
    }
    v74 = (const struct D2D_SIZE_F *)*((_QWORD *)a3 + 3);
    a2 = (const struct D2D_SIZE_F *)*((_QWORD *)a3 + 2);
    v75 = ((char *)v74 - (char *)a2) >> 4;
    if ( (__int64)(*((_QWORD *)a3 + 4) - (_QWORD)v74) >> 4 )
      goto LABEL_76;
    if ( v75 + 1 >= v75 )
      break;
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_127:
    if ( !LetterboxingMargins )
      return (unsigned __int8)v13;
  }
  v98 = detail::liberal_expansion_policy::expand(
          (detail::liberal_expansion_policy *)((__int64)(*((_QWORD *)a3 + 4) - (_QWORD)a2) >> 4),
          (__int64)(*((_QWORD *)a3 + 4) - (_QWORD)a2) >> 4,
          v75 + 1);
  v99 = operator new[](saturated_mul(v98, 0x10uLL));
  v100 = *((_QWORD *)a3 + 3);
  v101 = *((_QWORD *)a3 + 2);
  *(_QWORD *)&v125 = v99;
  v102 = v99;
  *((_QWORD *)&v125 + 1) = v75;
  v126 = 0LL;
  v123 = v125;
  v124 = 0LL;
  std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
    &v125,
    v101,
    v100,
    &v123);
  v103 = (struct CRectanglesShape *)*((_QWORD *)a3 + 2);
  *((_QWORD *)a3 + 2) = v102;
  if ( v103 == (struct CRectanglesShape *)((char *)a3 + 40) )
    v103 = 0LL;
  operator delete(v103);
  a2 = (const struct D2D_SIZE_F *)*((_QWORD *)a3 + 2);
  v74 = &a2[2 * v75];
  *((_QWORD *)a3 + 3) = v74;
  *((_QWORD *)a3 + 4) = &a2[2 * v98];
LABEL_76:
  v126 = 0LL;
  v76 = ((char *)v74 - (char *)a2) >> 4;
  *((_QWORD *)&v125 + 1) = 1LL;
  v124 = 0LL;
  v77 = v76 - v75;
  *(_QWORD *)&v125 = &a2[2 * v76];
  if ( !(_QWORD)v125 )
    goto LABEL_118;
  v124 = 1LL;
  v78 = v76 - v75;
  if ( v77 > 1 )
    v78 = 1LL;
  v79 = 16 * v78;
  v80 = &v74[v79 / 0xFFFFFFFFFFFFFFF8uLL];
  v126 = 1LL;
  if ( v74 != &v74[v79 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v104 = *((_QWORD *)&v125 + 1);
    v105 = (_OWORD *)(v125 + 16);
    v106 = v126;
    do
    {
      v74 -= 2;
      if ( !v106 )
        goto LABEL_118;
      --v106;
      --v105;
      if ( v106 >= v104 )
        goto LABEL_118;
      *v105 = *(_OWORD *)&v74->width;
    }
    while ( v74 != v80 );
  }
  if ( v77 <= 1 )
    goto LABEL_81;
  if ( v76 && (!a2 || v76 < 0) )
LABEL_118:
    _invalid_parameter_noinfo_noreturn();
  if ( (__int64)(16 * v76 - 16 * v75 - 16) >> 4 > 0 )
  {
    if ( v76 >= (unsigned __int64)((__int64)(16 * v76 - 16 * v75 - 16) >> 4) )
      goto LABEL_122;
    goto LABEL_118;
  }
  if ( (__int64)(16 * v76 - 16 * v75 - 16) >> 4 < 0 )
    goto LABEL_118;
LABEL_122:
  memmove_0((char *)a2 + 16 * v76 - (16 * v76 - 16 * v75 - 16), &a2[2 * v75], 16 * v76 - 16 * v75 - 16);
LABEL_81:
  *((_QWORD *)a3 + 3) += 16LL;
  LOBYTE(v13) = 1;
  *(struct D2D_RECT_F *)&a2[2 * v75].width = v109;
LABEL_82:
  if ( v116 )
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v116 + 16LL))(v116);
  return (unsigned __int8)v13;
}
