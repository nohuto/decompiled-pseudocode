/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800A0970
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180108570 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B5F0 (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002B800 (-GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180052510 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008F6A0 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800A0600 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z @ 0x1800A1870 (-GetLetterboxingMargins@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUD2D_RECT_F@@@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1900 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPE.c)
 *     ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800A25A0 (-GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A25E0 (-GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@@Z @ 0x1800A2730 (--$SetToBoundsOfUnorderedPointSet@UD2D_POINT_2F@@@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeed.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800CFA2C (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18016DEF8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801924DC (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801E3454 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?IsCompositionSwapchainScaleMode@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180226C60 (-IsCompositionSwapchainScaleMode@CDxHandleYUVBitmapRealization@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  struct IBitmapRealization *(__fastcall *v20)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  __int64 v21; // rax
  CGDISectionBitmapRealization *v22; // rcx
  __int64 (__fastcall **v23)(CGDISectionBitmapRealization *); // rax
  __int64 (__fastcall *v24)(CGDISectionBitmapRealization *); // rax
  int Interface; // eax
  char v26; // r12
  struct IBitmapRealization *(__fastcall *v27)(CGlobalCompositionSurfaceInfo *__hidden); // rax
  __int64 v28; // rax
  CGlobalCompositionSurfaceInfo *v29; // rcx
  __int64 (*v30)(void); // rax
  struct ISwapChainRealization *SwapChainRealization; // rax
  int v32; // r13d
  char v33; // al
  CGlobalCompositionSurfaceInfo *v34; // rcx
  char (__fastcall *v35)(__int64, __int64); // r8
  struct ISwapChainRealization *v36; // rax
  char ScaledLetterboxingMargins; // al
  FLOAT v38; // xmm12_4
  float v39; // xmm15_4
  float v40; // xmm14_4
  int **v41; // r10
  int *v42; // r10
  int v43; // r11d
  int v44; // ebx
  int v45; // ecx
  int v46; // r9d
  __int64 v47; // rax
  float v48; // xmm2_4
  float v49; // xmm7_4
  float v50; // xmm8_4
  float v51; // xmm9_4
  float v52; // xmm6_4
  float v53; // xmm7_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm8_4
  float v57; // xmm3_4
  float v58; // xmm11_4
  float v59; // xmm9_4
  float v60; // xmm2_4
  float v61; // xmm10_4
  float v62; // xmm4_4
  float v63; // xmm0_4
  bool v64; // zf
  float v65; // xmm4_4
  float v66; // xmm5_4
  float v67; // xmm3_4
  float v68; // xmm1_4
  __int64 v69; // rax
  CResource *v70; // rcx
  void (*v71)(void); // rax
  const struct D2D_SIZE_F *v72; // rdx
  unsigned __int64 v73; // rsi
  __int64 v74; // r9
  unsigned __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // rax
  const struct D2D_SIZE_F *v78; // rcx
  float v80; // xmm9_4
  float v81; // xmm11_4
  char v82; // r9
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm3_4
  float v86; // xmm0_4
  float width; // xmm4_4
  float v88; // xmm3_4
  float v89; // xmm2_4
  float height; // xmm0_4
  float v91; // xmm1_4
  bool (__fastcall *v92)(CDxHandleYUVBitmapRealization *__hidden); // rax
  char v93; // al
  float v94; // xmm0_4
  float v95; // xmm0_4
  unsigned __int64 v96; // rdi
  void *v97; // rax
  __int64 v98; // r8
  __int64 v99; // rdx
  void *v100; // rbx
  struct CRectanglesShape *v101; // rcx
  unsigned __int64 v102; // r11
  _OWORD *v103; // r10
  unsigned __int64 v104; // rax
  float v105; // xmm6_4
  float v106; // xmm5_4
  struct D2D_RECT_F v107; // [rsp+40h] [rbp-C0h] BYREF
  float v108; // [rsp+50h] [rbp-B0h]
  __int128 v109; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v110; // [rsp+70h] [rbp-90h]
  __int128 v111; // [rsp+80h] [rbp-80h]
  __int128 v112; // [rsp+90h] [rbp-70h]
  int v113; // [rsp+A0h] [rbp-60h]
  CDxHandleYUVBitmapRealization *v114; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v115; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v116; // [rsp+D0h] [rbp-30h]
  __int128 v117; // [rsp+E0h] [rbp-20h]
  __int128 v118; // [rsp+F0h] [rbp-10h]
  int v119; // [rsp+100h] [rbp+0h]
  __int128 v120; // [rsp+110h] [rbp+10h] BYREF
  __int128 v121; // [rsp+120h] [rbp+20h] BYREF
  __int64 v122; // [rsp+130h] [rbp+30h]
  __int128 v123; // [rsp+140h] [rbp+40h] BYREF
  __int64 v124; // [rsp+150h] [rbp+50h]
  struct D2D_RECT_F v125; // [rsp+160h] [rbp+60h] BYREF
  struct D2D_POINT_2F v126; // [rsp+170h] [rbp+70h] BYREF
  __int128 v127; // [rsp+1A0h] [rbp+A0h]
  __int128 v128; // [rsp+1B0h] [rbp+B0h]
  __int128 v129; // [rsp+1D0h] [rbp+D0h]
  __int128 v130; // [rsp+1E0h] [rbp+E0h]
  __int128 v131; // [rsp+200h] [rbp+100h]
  __int128 v132; // [rsp+210h] [rbp+110h]
  __int128 v133; // [rsp+220h] [rbp+120h]
  __int128 v134; // [rsp+230h] [rbp+130h]
  __int64 v135; // [rsp+248h] [rbp+148h]

  LOBYTE(v13) = 0;
  v14 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 1);
  v125 = 0LL;
  if ( v14 )
  {
    v17 = *(bool (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden, struct D2D_RECT_F *))(*(_QWORD *)v14 + 472LL);
    if ( v17 == CGlobalCompositionSurfaceInfo::GetLetterboxingMargins )
      LetterboxingMargins = CGlobalCompositionSurfaceInfo::GetLetterboxingMargins(v14, &v125);
    else
      LetterboxingMargins = v17(v14, &v125);
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
    v20 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*v19 + 48LL);
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
    v114 = 0LL;
    v24 = *v23;
    if ( v24 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface )
      Interface = CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(v22);
    else
      Interface = ((__int64 (__fastcall *)(CGDISectionBitmapRealization *, GUID *, CDxHandleYUVBitmapRealization **))v24)(
                    v22,
                    &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
                    &v114);
    if ( Interface >= 0 )
    {
      v92 = *(bool (__fastcall **)(CDxHandleYUVBitmapRealization *__hidden))(*(_QWORD *)v114 + 280LL);
      v93 = v92 == CDxHandleYUVBitmapRealization::IsCompositionSwapchainScaleMode
          ? CDxHandleYUVBitmapRealization::IsCompositionSwapchainScaleMode(v114)
          : ((__int64 (*)(void))v92)();
      if ( !v93 )
        goto LABEL_82;
    }
    v13 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 1);
    v135 = v3;
    v26 = 0;
    v134 = v4;
    v133 = v5;
    v132 = v6;
    v131 = v7;
    v130 = v8;
    v129 = v9;
    v128 = v10;
    v127 = v11;
    v113 = 0;
    v120 = 0LL;
    if ( !v13 )
      goto LABEL_135;
    v27 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden))(*(_QWORD *)v13 + 48LL);
    if ( v27 == CGlobalCompositionSurfaceInfo::GetRenderingRealization )
    {
      if ( !*((_QWORD *)v13 + 26) )
        CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(v13);
      v28 = *((_QWORD *)v13 + 26);
      v13 = (CGlobalCompositionSurfaceInfo *)(v28 + 8);
      if ( !v28 )
        v13 = 0LL;
    }
    else
    {
      v13 = v27(v13);
    }
    if ( !v13 )
    {
LABEL_135:
      v109 = _xmm;
      v110 = _xmm;
      BYTE1(v113) = BYTE1(v113) & 0xC0 | 0x29;
      v111 = _xmm;
      v112 = *(__int128 *)&_xmm.r;
      LOBYTE(v113) = -86;
LABEL_136:
      v38 = *((float *)&v120 + 3);
      v39 = *((float *)&v120 + 2);
      v40 = *((float *)&v120 + 1);
      goto LABEL_35;
    }
    v29 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 1);
    if ( v29 )
    {
      v30 = *(__int64 (**)(void))(*(_QWORD *)v29 + 456LL);
      if ( (char *)v30 != (char *)&CGlobalCompositionSurfaceInfo::GetSizePreference )
        goto LABEL_26;
      SwapChainRealization = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v29);
      if ( SwapChainRealization )
      {
        v30 = *(__int64 (**)(void))(*(_QWORD *)SwapChainRealization + 104LL);
LABEL_26:
        v32 = v30();
        goto LABEL_27;
      }
    }
    v32 = 1;
LABEL_27:
    v33 = (*(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *, __int128 *, __int128 *))(*(_QWORD *)v13 + 40LL))(
            v13,
            &v109,
            &v120);
    v34 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 1);
    v26 = v33;
    v121 = 0LL;
    if ( !v34 )
      goto LABEL_149;
    v35 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 480LL);
    if ( v35 == CGlobalCompositionSurfaceInfo::GetScaledLetterboxingMargins )
    {
      v36 = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v34);
      v34 = v36;
      if ( !v36 )
      {
LABEL_149:
        LOBYTE(v13) = 0;
        goto LABEL_33;
      }
      v35 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 256LL);
      if ( v35 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
      {
        ScaledLetterboxingMargins = CBitmapRealization::GetScaledLetterboxingMargins((char *)v36 - 328);
        goto LABEL_32;
      }
    }
    else if ( v35 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
    {
      ScaledLetterboxingMargins = CDxHandleBitmapRealization::GetScaledLetterboxingMargins((__int64)v34, (__int64)&v121);
      goto LABEL_32;
    }
    ScaledLetterboxingMargins = v35 == CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins
                              ? CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(
                                  (__int64)v34,
                                  (__int64)&v121)
                              : v35((__int64)v34, (__int64)&v121);
LABEL_32:
    LOBYTE(v13) = ScaledLetterboxingMargins;
    if ( ScaledLetterboxingMargins )
    {
      if ( COERCE_FLOAT(v121 & _xmm) < 0.000081380211
        && COERCE_FLOAT(DWORD1(v121) & _xmm) < 0.000081380211
        && 0.000081380211 > 0.0 )
      {
        goto LABEL_113;
      }
      *(float *)&v112 = *(float *)&v112
                      + (float)((float)((float)(*(float *)&v109 * *(float *)&v121)
                                      + (float)(*(float *)&v110 * *((float *)&v121 + 1)))
                              + (float)(*(float *)&v111 * 0.0));
      *((float *)&v112 + 1) = *((float *)&v112 + 1)
                            + (float)((float)((float)(*((float *)&v109 + 1) * *(float *)&v121)
                                            + (float)(*((float *)&v110 + 1) * *((float *)&v121 + 1)))
                                    + (float)(*((float *)&v111 + 1) * 0.0));
      *((float *)&v112 + 2) = *((float *)&v112 + 2)
                            + (float)((float)((float)(*((float *)&v109 + 2) * *(float *)&v121)
                                            + (float)(*((float *)&v110 + 2) * *((float *)&v121 + 1)))
                                    + (float)(*((float *)&v111 + 2) * 0.0));
      if ( (char)(4 * BYTE1(v113)) >> 6 == 1 )
        goto LABEL_89;
      if ( (char)(4 * BYTE1(v113)) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(HIDWORD(v110) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(HIDWORD(v109) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(HIDWORD(v112) & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
          goto LABEL_89;
        BYTE1(v113) |= 0x30u;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(HIDWORD(v111) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          goto LABEL_89;
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(HIDWORD(v111) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
      {
LABEL_89:
        v113 = 0;
        *((float *)&v112 + 3) = *((float *)&v112 + 3)
                              + (float)((float)((float)(*((float *)&v109 + 3) * *(float *)&v121)
                                              + (float)(*((float *)&v110 + 3) * *((float *)&v121 + 1)))
                                      + (float)(*((float *)&v111 + 3) * 0.0));
LABEL_113:
        v26 = 1;
        goto LABEL_33;
      }
      LOBYTE(v113) = v113 & 0xFC;
      goto LABEL_113;
    }
LABEL_33:
    if ( a2->width <= 0.0
      || a2->height <= 0.0
      || !CCompositionSurfaceBitmap::HasSwapChainAttributes((CCompositionSurfaceBitmap *)((char *)this - 88))
      || v32 == 1 )
    {
      v38 = *((float *)&v120 + 3);
      v39 = *((float *)&v120 + 2);
      v40 = *((float *)&v120 + 1);
      goto LABEL_35;
    }
    v40 = *((float *)&v120 + 1);
    v83 = *(float *)&v120;
    v39 = *((float *)&v120 + 2);
    v38 = *((float *)&v120 + 3);
    v84 = *((float *)&v120 + 2);
    v107 = (struct D2D_RECT_F)v120;
    v85 = *((float *)&v120 + 3);
    v123 = 0LL;
    v86 = *((float *)&v120 + 1);
    if ( (_BYTE)v13 )
    {
      v83 = *(float *)&v120 - *(float *)&v121;
      v86 = *((float *)&v120 + 1) - *((float *)&v121 + 1);
      v84 = *((float *)&v120 + 2) + *((float *)&v121 + 2);
      v85 = *((float *)&v120 + 3) + *((float *)&v121 + 3);
      v107.left = *(float *)&v120 - *(float *)&v121;
      v107.top = *((float *)&v120 + 1) - *((float *)&v121 + 1);
      v107.right = *((float *)&v120 + 2) + *((float *)&v121 + 2);
      v107.bottom = *((float *)&v120 + 3) + *((float *)&v121 + 3);
    }
    if ( v26 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v109, &v107, (float *)&v123);
      v85 = *((float *)&v123 + 3);
      v84 = *((float *)&v123 + 2);
      v86 = *((float *)&v123 + 1);
      v83 = *(float *)&v123;
      v38 = *((float *)&v120 + 3);
      v39 = *((float *)&v120 + 2);
      v40 = *((float *)&v120 + 1);
    }
    if ( v84 > v83 && v85 > v86 )
    {
      width = a2->width;
      v88 = v85 - v86;
      v89 = v84 - v83;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->width - v89) & _xmm) > 0.00390625
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(a2->height - v88) & _xmm) > 0.00390625 )
      {
        v119 = 0;
        v116 = _xmm;
        v115 = _xmm;
        v118 = *(__int128 *)&_xmm.r;
        v117 = _xmm;
        height = a2->height;
        LOWORD(v119) = 10666;
        v91 = width / v89;
        if ( v32 )
        {
          v105 = 0.0;
          v106 = 0.0;
          if ( height < (float)(v91 * v88) )
          {
            v91 = height / v88;
            v105 = (float)(width - (float)((float)(height / v88) * v89)) * 0.5;
          }
          else
          {
            v106 = (float)(height - (float)(v91 * v88)) * 0.5;
          }
          *(float *)&v115 = v91;
          v119 = 10632;
          *((float *)&v116 + 1) = v91;
          *(_QWORD *)&v118 = __PAIR64__(LODWORD(v106), LODWORD(v105));
        }
        else
        {
          CMILMatrix::SetScale((CMILMatrix *)&v115, v91, height / v88, 1.0, 0.0, 0.0, 0.0);
        }
        CMILMatrix::Multiply((CMILMatrix *)&v109, (const struct CMILMatrix *)&v115);
        v26 = 1;
        goto LABEL_136;
      }
    }
LABEL_35:
    v41 = (int **)*((_QWORD *)this + 2);
    if ( v41 )
    {
      v42 = *v41;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = *v42;
      if ( (_DWORD)v47 )
      {
        v46 = -1;
        v43 = -1;
        v44 = -1;
        if ( v42[1] >= 0 )
          v43 = v42[1];
        if ( v42[3] >= 0 )
          v44 = v42[3];
        v45 = -1;
        if ( v42[2] >= 0 )
          v45 = v42[2];
        if ( v42[2 * v47 + 1] >= 0 )
          v46 = v42[2 * v47 + 1];
      }
      v48 = FLOAT_N3_4028235e38;
      v49 = (float)v44;
      v50 = (float)v45;
      v51 = (float)v46;
      if ( (float)v43 <= -3.4028235e38 )
      {
        v107.left = FLOAT_N3_4028235e38;
        v52 = FLOAT_N3_4028235e38;
      }
      else
      {
        v52 = (float)v43 - 0.5;
        v107.left = v52;
      }
      if ( v49 <= -3.4028235e38 )
      {
        v107.top = FLOAT_N3_4028235e38;
        v53 = FLOAT_N3_4028235e38;
      }
      else
      {
        v53 = v49 - 0.5;
        v107.top = v53;
        v48 = v53;
      }
      v54 = FLOAT_3_4028235e38;
      v55 = v48;
      v108 = v48;
      if ( v50 >= 3.4028235e38 )
      {
        v107.right = FLOAT_3_4028235e38;
        v56 = FLOAT_3_4028235e38;
        v57 = FLOAT_3_4028235e38;
      }
      else
      {
        v56 = v50 + 0.5;
        v107.right = v56;
        v57 = v56;
      }
      v58 = v57;
      if ( v51 >= 3.4028235e38 )
      {
        v107.bottom = FLOAT_3_4028235e38;
        v59 = FLOAT_3_4028235e38;
        v108 = v48;
        v55 = v48;
      }
      else
      {
        v59 = v51 + 0.5;
        v107.bottom = v59;
        v54 = v59;
      }
      v60 = v57;
      v61 = v54;
      v62 = v54;
      if ( *(float *)&v120 > v52 )
      {
        v52 = *(float *)&v120;
        v60 = v57;
        v55 = v108;
        v58 = v57;
        LODWORD(v107.left) = v120;
      }
      if ( v40 > v55 )
      {
        v53 = v40;
        v60 = v58;
        v107.top = v40;
        v61 = v54;
        v62 = v54;
        v55 = v40;
      }
      v63 = v55;
      if ( v60 > v39 )
      {
        v107.right = v39;
        v56 = v39;
        v61 = v62;
        v60 = v39;
      }
      if ( v61 > *((float *)&v120 + 3) )
      {
        v107.bottom = *((FLOAT *)&v120 + 3);
        v59 = *((float *)&v120 + 3);
        v61 = *((float *)&v120 + 3);
        v63 = v55;
      }
      if ( v60 <= v52 || v61 <= v63 )
      {
        v59 = 0.0;
        v56 = 0.0;
        v53 = 0.0;
        v107.bottom = 0.0;
        v52 = 0.0;
        v107.right = 0.0;
        v107.top = 0.0;
        v61 = 0.0;
        v107.left = 0.0;
      }
    }
    else
    {
      v52 = *(float *)&v120;
      v53 = v40;
      v107.top = v40;
      v56 = v39;
      LODWORD(v107.left) = v120;
      v59 = v38;
      v107.right = v39;
      v61 = v38;
      v107.bottom = v38;
    }
    v11 = v127;
    v64 = v26 == 0;
    v3 = v135;
    v10 = v128;
    if ( !v64 )
    {
      v121 = 0LL;
      if ( CMILMatrix::IsTranslateIgnoreZ<1>((__int64)&v109) )
      {
        v65 = *(float *)&v112 + v52;
        v66 = *((float *)&v112 + 1) + v53;
        v67 = *(float *)&v112 + v56;
        v68 = *((float *)&v112 + 1) + v59;
LABEL_68:
        v107.left = v65;
        v107.top = v66;
        v107.right = v67;
        v107.bottom = v68;
        goto LABEL_69;
      }
      v80 = 0.0;
      v81 = 0.0;
      if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)&v109) )
      {
        v82 = 1;
        v65 = (float)(*(float *)&v109 * v52) + *(float *)&v112;
        v67 = (float)(*(float *)&v109 * v56) + *(float *)&v112;
        v66 = (float)(*((float *)&v110 + 1) * v53) + *((float *)&v112 + 1);
        *(float *)&v121 = v65;
        v80 = v65;
        v68 = (float)(*((float *)&v110 + 1) * v61) + *((float *)&v112 + 1);
        *((float *)&v121 + 2) = v67;
        v81 = v67;
        *((float *)&v121 + 1) = v66;
        *((float *)&v121 + 3) = v68;
        if ( *(float *)&v109 > 0.0 && *((float *)&v110 + 1) > 0.0 )
          goto LABEL_68;
      }
      else
      {
        v68 = *((float *)&v121 + 3);
        v67 = *((float *)&v121 + 2);
        v66 = *((float *)&v121 + 1);
        v65 = *(float *)&v121;
      }
      if ( v82 )
      {
        if ( v80 > v81 )
        {
          v94 = v65;
          v65 = v67;
          v67 = v94;
        }
        if ( v66 > v68 )
        {
          v95 = v66;
          v66 = v68;
          v68 = v95;
        }
      }
      else
      {
        CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)&v109, &v107, &v126);
        *(_QWORD *)&v123 = 4LL;
        *((_QWORD *)&v123 + 1) = &v126;
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<D2D_POINT_2F>(
          &v121,
          &v123);
        v68 = *((float *)&v121 + 3);
        v67 = *((float *)&v121 + 2);
        v66 = *((float *)&v121 + 1);
        v65 = *(float *)&v121;
      }
      goto LABEL_68;
    }
LABEL_69:
    v9 = v129;
    v8 = v130;
    v7 = v131;
    v6 = v132;
    v5 = v133;
    v4 = v134;
    v69 = (__int64)(*((_QWORD *)a3 + 3) - *((_QWORD *)a3 + 2)) >> 4;
    if ( v69 )
      *((_QWORD *)a3 + 3) -= 16 * v69;
    v70 = (CResource *)*((_QWORD *)a3 + 7);
    if ( v70 )
    {
      v71 = *(void (**)(void))(*(_QWORD *)v70 + 16LL);
      if ( (char *)v71 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v70);
      else
        v71();
      *((_QWORD *)a3 + 7) = 0LL;
    }
    v72 = (const struct D2D_SIZE_F *)*((_QWORD *)a3 + 3);
    a2 = (const struct D2D_SIZE_F *)*((_QWORD *)a3 + 2);
    v73 = ((char *)v72 - (char *)a2) >> 4;
    if ( (__int64)(*((_QWORD *)a3 + 4) - (_QWORD)v72) >> 4 )
      goto LABEL_76;
    if ( v73 + 1 >= v73 )
      break;
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_127:
    if ( !LetterboxingMargins )
      return (unsigned __int8)v13;
  }
  v96 = detail::liberal_expansion_policy::expand(
          (detail::liberal_expansion_policy *)((__int64)(*((_QWORD *)a3 + 4) - (_QWORD)a2) >> 4),
          (__int64)(*((_QWORD *)a3 + 4) - (_QWORD)a2) >> 4,
          v73 + 1);
  v97 = operator new[](saturated_mul(v96, 0x10uLL));
  v98 = *((_QWORD *)a3 + 3);
  v99 = *((_QWORD *)a3 + 2);
  *(_QWORD *)&v123 = v97;
  v100 = v97;
  *((_QWORD *)&v123 + 1) = v73;
  v124 = 0LL;
  v121 = v123;
  v122 = 0LL;
  std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
    &v123,
    v99,
    v98,
    &v121);
  v101 = (struct CRectanglesShape *)*((_QWORD *)a3 + 2);
  *((_QWORD *)a3 + 2) = v100;
  if ( v101 == (struct CRectanglesShape *)((char *)a3 + 40) )
    v101 = 0LL;
  operator delete(v101);
  a2 = (const struct D2D_SIZE_F *)*((_QWORD *)a3 + 2);
  v72 = &a2[2 * v73];
  *((_QWORD *)a3 + 3) = v72;
  *((_QWORD *)a3 + 4) = &a2[2 * v96];
LABEL_76:
  v124 = 0LL;
  v74 = ((char *)v72 - (char *)a2) >> 4;
  *((_QWORD *)&v123 + 1) = 1LL;
  v122 = 0LL;
  v75 = v74 - v73;
  *(_QWORD *)&v123 = &a2[2 * v74];
  if ( !(_QWORD)v123 )
    goto LABEL_118;
  v122 = 1LL;
  v76 = v74 - v73;
  if ( v75 > 1 )
    v76 = 1LL;
  v77 = 16 * v76;
  v78 = &v72[v77 / 0xFFFFFFFFFFFFFFF8uLL];
  v124 = 1LL;
  if ( v72 != &v72[v77 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v102 = *((_QWORD *)&v123 + 1);
    v103 = (_OWORD *)(v123 + 16);
    v104 = v124;
    do
    {
      v72 -= 2;
      if ( !v104 )
        goto LABEL_118;
      --v104;
      --v103;
      if ( v104 >= v102 )
        goto LABEL_118;
      *v103 = *(_OWORD *)&v72->width;
    }
    while ( v72 != v78 );
  }
  if ( v75 <= 1 )
    goto LABEL_81;
  if ( v74 && (!a2 || v74 < 0) )
LABEL_118:
    _invalid_parameter_noinfo_noreturn();
  if ( (__int64)(16 * v74 - 16 * v73 - 16) >> 4 > 0 )
  {
    if ( v74 >= (unsigned __int64)((__int64)(16 * v74 - 16 * v73 - 16) >> 4) )
      goto LABEL_122;
    goto LABEL_118;
  }
  if ( (__int64)(16 * v74 - 16 * v73 - 16) >> 4 < 0 )
    goto LABEL_118;
LABEL_122:
  memmove_0((char *)a2 + 16 * v74 - (16 * v74 - 16 * v73 - 16), &a2[2 * v73], 16 * v74 - 16 * v73 - 16);
LABEL_81:
  *((_QWORD *)a3 + 3) += 16LL;
  LOBYTE(v13) = 1;
  *(struct D2D_RECT_F *)&a2[2 * v73].width = v107;
LABEL_82:
  if ( v114 )
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v114 + 16LL))(v114);
  return (unsigned __int8)v13;
}
