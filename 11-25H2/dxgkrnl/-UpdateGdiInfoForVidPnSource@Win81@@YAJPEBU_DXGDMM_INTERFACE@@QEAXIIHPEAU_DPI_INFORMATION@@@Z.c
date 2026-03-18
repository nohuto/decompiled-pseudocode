/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D6B28
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D63E4 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1400345DC (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B6DC (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004DBCC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140055C48 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ??PWin81@@YA_NAEBUtagSIZE@@0@Z @ 0x1401D60C8 (--PWin81@@YA_NAEBUtagSIZE@@0@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1401D60E4 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1401D6334 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D66D4 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D67EC (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1403E5EC4 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1403E907C (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x14042C520 (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        unsigned int a4,
        unsigned int a5,
        __m128i *a6)
{
  Win81 *v6; // r13
  struct _D3DKMDT_2DREGION *v7; // r14
  DXGPROCESS *Current; // rax
  int CurrentSourceResolution; // ebx
  __int64 (__fastcall *v12)(Win81 *, __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  int v13; // eax
  __int64 v14; // rdi
  DpiInternal *v15; // r12
  int v16; // eax
  int v17; // eax
  struct _DPI_INFORMATION *v18; // r15
  const wchar_t *v19; // r9
  struct tagSIZE v20; // r9
  __int32 v21; // edi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rbx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  bool v29; // r15
  unsigned int v30; // ebx
  int VideoOutputTechnology; // eax
  __int64 v32; // rbx
  unsigned int v33; // edi
  unsigned int v34; // r13d
  unsigned int v35; // r15d
  unsigned int v36; // eax
  unsigned int v37; // ebx
  int v38; // ecx
  unsigned int v39; // r8d
  __int64 v40; // rdx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  __int64 v43; // r15
  int v44; // r10d
  int v45; // r11d
  unsigned __int32 v46; // ebx
  bool v47; // r13
  unsigned int v48; // r10d
  struct _DPI_INFORMATION *v49; // r9
  unsigned int v50; // r11d
  unsigned int v51; // ecx
  __int64 v52; // rdx
  int v53; // r8d
  struct _D3DKMDT_2DREGION *v54; // rdi
  struct _D3DKMDT_2DREGION *v55; // r13
  struct tagSIZE v56; // r8
  unsigned int v57; // eax
  bool v58; // zf
  __m128i *v59; // rbx
  __m128i v60; // xmm1
  __m128i v61; // xmm2
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __m128i v64; // xmm0
  struct _D3DKMDT_2DREGION *v65; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v66; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v67; // [rsp+20h] [rbp-E0h]
  __int64 v68; // [rsp+28h] [rbp-D8h]
  bool *v69; // [rsp+28h] [rbp-D8h]
  struct _DPI_INFORMATION *v70; // [rsp+30h] [rbp-D0h]
  bool v71; // [rsp+50h] [rbp-B0h]
  bool v72[11]; // [rsp+51h] [rbp-AFh] BYREF
  bool v73; // [rsp+5Ch] [rbp-A4h]
  unsigned int v74; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v75; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v77; // [rsp+78h] [rbp-88h]
  unsigned int v78; // [rsp+7Ch] [rbp-84h]
  unsigned int v79; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v80; // [rsp+84h] [rbp-7Ch]
  __int64 v81; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v82; // [rsp+90h] [rbp-70h]
  unsigned __int64 v83; // [rsp+98h] [rbp-68h] BYREF
  __m128i v84; // [rsp+A0h] [rbp-60h]
  unsigned int v85; // [rsp+B0h] [rbp-50h] BYREF
  int v86; // [rsp+B4h] [rbp-4Ch]
  int v87; // [rsp+B8h] [rbp-48h]
  unsigned int v88; // [rsp+BCh] [rbp-44h]
  int v89; // [rsp+C0h] [rbp-40h]
  int v90; // [rsp+C4h] [rbp-3Ch]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v91; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v92; // [rsp+D0h] [rbp-30h] BYREF
  char v93; // [rsp+D8h] [rbp-28h] BYREF
  DpiInternal *v94; // [rsp+E0h] [rbp-20h]
  void (__fastcall *v95)(__int64, DpiInternal *); // [rsp+E8h] [rbp-18h]
  __int64 v96; // [rsp+F0h] [rbp-10h]
  int v97; // [rsp+F8h] [rbp-8h]
  struct D3DKMDT_HVIDPN__ *v98; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v99; // [rsp+108h] [rbp+8h] BYREF
  BOOL v100; // [rsp+110h] [rbp+10h]
  __int64 v101; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v102; // [rsp+120h] [rbp+20h] BYREF
  Win81 *v103; // [rsp+128h] [rbp+28h]
  struct _D3DKMDT_2DREGION *v104; // [rsp+130h] [rbp+30h]
  char v105; // [rsp+138h] [rbp+38h] BYREF
  __int64 v106; // [rsp+140h] [rbp+40h]
  void (__fastcall *v107)(__int64, __int64); // [rsp+148h] [rbp+48h]
  __int64 v108; // [rsp+150h] [rbp+50h]
  int v109; // [rsp+158h] [rbp+58h]
  __int64 v110; // [rsp+160h] [rbp+60h] BYREF
  __int64 v111; // [rsp+168h] [rbp+68h]
  __m128i v112; // [rsp+170h] [rbp+70h]
  _BYTE v113[96]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v114; // [rsp+1E0h] [rbp+E0h] BYREF
  __m128i *v115; // [rsp+1E8h] [rbp+E8h]
  __m128i v116[6]; // [rsp+1F0h] [rbp+F0h] BYREF
  __m128i v117; // [rsp+250h] [rbp+150h]
  __m128i v118; // [rsp+260h] [rbp+160h]
  __m128i v119; // [rsp+270h] [rbp+170h]
  __m128i v120; // [rsp+280h] [rbp+180h]
  unsigned __int64 v121; // [rsp+290h] [rbp+190h] BYREF
  int v122; // [rsp+298h] [rbp+198h]

  v6 = a2;
  v7 = (struct _D3DKMDT_2DREGION *)(unsigned int)a3;
  v80 = (unsigned int)a3;
  v115 = a6;
  v88 = a4;
  v103 = a2;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current || !DXGPROCESS::IsRemoteConnection(Current) )
  {
    v12 = (__int64 (__fastcall *)(Win81 *, __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)this + 6);
    v98 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    v96 = 0LL;
    v97 = 0;
    v93 = 0;
    v110 = 0LL;
    v13 = v12(v6, &v110, &v98);
    v14 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry2(2LL, v6, v13);
      WdLogGlobalForLineNumber = 712;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
        (__int64)v6,
        v14,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v14;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v93,
      v110,
      *((_QWORD *)this + 8),
      (__int64)v6);
    v15 = v94;
    v81 = 0LL;
    v92 = 0LL;
    v16 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v98)(v94, &v81, &v92);
    v14 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(2LL, v15, v16);
      WdLogGlobalForLineNumber = 730;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)",
        (__int64)v15,
        v14,
        0LL,
        0LL,
        0LL);
      if ( v93 )
        v95(v96, v15);
      return (unsigned int)v14;
    }
    v102 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v92)(v81, (unsigned int)v7, &v102);
    v18 = (struct _DPI_INFORMATION *)v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry3(2LL, v7, v81, v17);
      v19 = L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)";
      WdLogGlobalForLineNumber = 741;
      v70 = v18;
      v68 = v81;
      v65 = v7;
LABEL_13:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v19, (__int64)v65, v68, (__int64)v70, 0LL, 0LL);
      if ( v93 )
        v95(v96, v15);
      return (unsigned int)v18;
    }
    memset(v113, 0, 0x5CuLL);
    v21 = a6[5].m128i_i32[3];
    v22 = 0LL;
    v23 = v102;
    v119 = *(__m128i *)&v113[64];
    v24 = (v102 > 1) | v21 & 0x20;
    *(_DWORD *)&v113[92] = v24;
    v84 = *(__m128i *)&v113[80];
    v89 = *(_DWORD *)&v113[60];
    v118 = *(__m128i *)&v113[32];
    v90 = *(_DWORD *)&v113[56];
    v120 = *(__m128i *)&v113[48];
    v117 = *(__m128i *)&v113[16];
    v112 = *(__m128i *)v113;
    while ( 1 )
    {
      v104 = (struct _D3DKMDT_2DREGION *)v22;
      if ( v22 >= v23 )
      {
        if ( (v24 & 2) == 0
          || (v56 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v84, 4)), v56.cx == 1234568) )
        {
          v57 = _mm_cvtsi128_si32(_mm_srli_si128(v112, 8));
        }
        else
        {
          v57 = Win81::AdjustDesktopScaleFactorForOverride((Win81 *)0x64, *(int *)&v113[32], v56, v20);
          *(_DWORD *)&v113[8] = v57;
          v112 = *(__m128i *)v113;
        }
        if ( !v57 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1042;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"DpiInfo.DesktopScaleFactor != DESKTOP_SCALE_INVALID",
            1042LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v58 = v93 == 0;
        v59 = v115;
        v60 = v118;
        v61 = v117;
        *v115 = v112;
        v62 = v120;
        v59[1] = v61;
        v59[2] = v60;
        v63 = v119;
        v59[3] = v62;
        v64 = v84;
        v59[4] = v63;
        v59[5] = v64;
        if ( !v58 )
          v95(v96, v15);
        return 0LL;
      }
      *(_DWORD *)&v72[7] = -1;
      v72[2] = 0;
      v25 = v80;
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, bool *))(v92 + 8))(v81, v80, v22, &v72[7]);
      v18 = (struct _DPI_INFORMATION *)v26;
      if ( v26 < 0 )
      {
        v55 = v104;
        WdLogSingleEntry3(2LL, v104, v25, v26);
        WdLogGlobalForLineNumber = 763;
        v19 = L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)";
        v70 = v18;
        v68 = v25;
        v65 = v55;
        goto LABEL_13;
      }
      v106 = 0LL;
      v107 = 0LL;
      v108 = 0LL;
      v109 = 0;
      v105 = 0;
      v101 = 0LL;
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v92 + 24))(
              v81,
              (unsigned int)v25,
              *(unsigned int *)&v72[7],
              &v101);
      v18 = (struct _DPI_INFORMATION *)v27;
      if ( v27 < 0 )
      {
        v54 = (struct _D3DKMDT_2DREGION *)v80;
        WdLogSingleEntry3(2LL, v80, *(unsigned int *)&v72[7], v27);
        v19 = L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)";
        WdLogGlobalForLineNumber = 781;
        v70 = v18;
        v68 = *(unsigned int *)&v72[7];
        v65 = v54;
        goto LABEL_13;
      }
      v28 = v101;
      if ( !v101 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 786;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pVidPnPresentPathInfo != NULL",
          786LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v28 = v101;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)&v105,
        v28,
        *(_QWORD *)(v92 + 32),
        v81);
      v84.m128i_i64[0] = v106;
      v29 = 0;
      v74 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(v106 + 20));
      v71 = 0;
      v91 = D3DKMDT_VOT_UNINITIALIZED;
      v30 = v74;
      VideoOutputTechnology = DmmGetVideoOutputTechnology(v6, *(unsigned int *)&v72[7], &v91, 0LL);
      if ( VideoOutputTechnology >= 0 )
      {
        v29 = IsInternalVideoOutput(v91);
        v71 = v29;
      }
      else
      {
        v32 = VideoOutputTechnology;
        WdLogSingleEntry3(2LL, v6, *(unsigned int *)&v72[7], VideoOutputTechnology);
        WdLogGlobalForLineNumber = 803;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
          (__int64)v6,
          *(unsigned int *)&v72[7],
          v32,
          0LL,
          0LL);
        v30 = v74;
      }
      v100 = v29;
      v121 = 0LL;
      v122 = 0;
      v33 = v24 & 0xFFFFFFFB | ((unsigned __int8)v24 | (unsigned __int8)(4 * v29)) & 4;
      v75 = 0LL;
      v87 = 0;
      v72[3] = 0;
      v72[0] = 0;
      v85 = 0;
      v79 = 0;
      *(_DWORD *)&v113[92] = v33;
      MonitorGetDpiInfoFromDescriptor(
        v6,
        *(unsigned int *)&v72[7],
        (struct DISPLAY_PREFERRED_MODE_INFO *)&v121,
        &v85,
        &v79,
        &v72[3],
        v72);
      v78 = HIDWORD(v121);
      v86 = v121;
      v99 = v121;
      if ( ((v30 - 2) & 0xFFFFFFFD) == 0 )
      {
        v86 = HIDWORD(v121);
        v99 = __PAIR64__(v121, HIDWORD(v121));
        v78 = v121;
      }
      v73 = v72[0];
      if ( !v72[0] )
      {
        v34 = HIDWORD(v75);
        v33 |= 8u;
        v35 = v75;
        *(_DWORD *)&v113[92] = v33;
        goto LABEL_37;
      }
      v35 = v85;
      v34 = v79;
      v75 = __PAIR64__(v79, v85);
      if ( ((v30 - 2) & 0xFFFFFFFD) == 0 )
      {
        v34 = v85;
        v35 = v79;
        v75 = __PAIR64__(v85, v79);
      }
      if ( !v35 || !v34 )
        goto LABEL_36;
      if ( (int)(v35 * v34) <= 16000 && !v71 )
        break;
LABEL_37:
      if ( !v35 )
        v72[2] = (*((_BYTE *)v103 + 444) & 0x20) != 0;
      v76 = 0LL;
      CurrentSourceResolution = DpiInternal::GetCurrentSourceResolution(
                                  v15,
                                  v98,
                                  (const struct _DXGDMM_VIDPN_INTERFACE *)v84.m128i_i64[0],
                                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v76,
                                  v66);
      if ( CurrentSourceResolution < 0
        || (v83 = 0LL,
            v72[1] = 0,
            CurrentSourceResolution = DpiInternal::GetCurrentTargetResolution(
                                        v15,
                                        v98,
                                        (const struct _DXGDMM_VIDPN_INTERFACE *)v84.m128i_i64[0],
                                        (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v83,
                                        (struct _D3DKMDT_2DREGION *)&v72[1],
                                        (unsigned __int8 *)v69),
            CurrentSourceResolution < 0) )
      {
        if ( v105 )
          v107(v108, v84.m128i_i64[0]);
        if ( v93 )
          v95(v96, v15);
        return (unsigned int)CurrentSourceResolution;
      }
      v36 = HIDWORD(v83);
      if ( ((v74 - 2) & 0xFFFFFFFD) != 0 )
      {
        v74 = HIDWORD(v83);
        v36 = v83;
      }
      else
      {
        v74 = v83;
        v83 = __PAIR64__(v83, HIDWORD(v83));
      }
      v82 = v76;
      v77 = v36;
      if ( (v33 & 1) != 0 && v86 && v78 )
      {
        v37 = HIDWORD(v76);
        if ( v72[1] )
        {
          v37 = HIDWORD(v76) >> 1;
          HIDWORD(v76) >>= 1;
        }
        if ( (unsigned int)v76 >= 2 * v86 || v37 >= 2 * v78 )
          v38 = 2;
        else
          v38 = 0;
        v33 = v33 & 0xFFFFFFFD ^ (v33 | v38) & 2;
        *(_DWORD *)&v113[92] = v33;
        if ( v72[1] )
        {
          v37 *= 2;
          HIDWORD(v76) = v37;
        }
      }
      else
      {
        v37 = HIDWORD(v76);
      }
      memset(v116, 0, sizeof(v116));
      v39 = v82;
      v116[5].m128i_i32[1] = a5;
      v116[2].m128i_i64[0] = __PAIR64__(v37, v82);
      v78 = v37;
      v40 = *(int *)(v84.m128i_i64[0] + 12);
      if ( *(_DWORD *)(v84.m128i_i64[0] + 12) != 1 )
      {
        switch ( *(_DWORD *)(v84.m128i_i64[0] + 12) )
        {
          case 2:
            goto LABEL_64;
          case 3:
            break;
          case 4:
LABEL_64:
            if ( (_DWORD)v40 == 4 )
            {
              v41 = v77;
              if ( v35 * v37 <= v34 * v82 )
              {
                LODWORD(v76) = v77;
                v39 = v77;
                v37 = v37 * v77 / v82;
                HIDWORD(v76) = v37;
              }
              else
              {
                v42 = v82 * v74 / v37;
                v37 = v74;
                v39 = v42;
                v76 = __PAIR64__(v74, v42);
              }
            }
            else
            {
              v41 = v77;
            }
            v35 = v35 * v39 / v41;
            v34 = v34 * v37 / v74;
            break;
          case 5:
            goto LABEL_63;
          default:
            if ( *(_DWORD *)(v84.m128i_i64[0] + 12) != 255 )
            {
              WdLogSingleEntry1(1LL, v40);
              WdLogGlobalForLineNumber = 933;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"Invalid scaling %I64d",
                *(int *)(v84.m128i_i64[0] + 12),
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_63:
              v33 |= 0x100u;
            }
            break;
        }
      }
      v116[1].m128i_i64[1] = __PAIR64__(v34, v35);
      v43 = v84.m128i_i64[0];
      v24 = ((((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*(_DWORD *)(v84.m128i_i64[0] + 20))
             - 2) & 0xFFFFFFFD) != 0
           ? 0
           : 0x80) | v33 & 0xFFFFFF7F;
      *(_DWORD *)&v113[92] = v24;
      if ( !v72[2] && !v87 && v73 && v72[3] )
      {
        LODWORD(v67) = (unsigned __int8)v122;
        v24 = v24 & 0xFFFFFFEF | (16
                                * (unsigned __int8)Win81::DetermineViewDistance(
                                                     v103,
                                                     (Win81 *)&v75,
                                                     (const struct tagSIZE *)v100,
                                                     (int)&v99,
                                                     (const struct tagSIZE *)v67,
                                                     (__m128i *)v116[4].m128i_i32));
        v46 = v116[4].m128i_u32[0];
        *(_DWORD *)&v113[92] = v24;
        if ( !v116[4].m128i_i32[0] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 998;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"CurrentDpiInfo.ViewDistTenthsOfInch != 0",
            998LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
LABEL_76:
        v47 = v71;
LABEL_77:
        Win81::FillDpiInfo(
          (Win81 *)&v116[1].m128i_u64[1],
          (const struct tagSIZE *)&v116[2],
          (const struct tagSIZE *)v46,
          v88,
          (unsigned int)v67,
          (__int64)v116);
        goto LABEL_78;
      }
      v46 = 0;
      v116[4].m128i_i32[0] = 0;
      if ( !v72[2] )
        goto LABEL_76;
      v47 = v71;
      if ( !v71 )
        goto LABEL_77;
      v48 = 100 * v44;
      v49 = (struct _DPI_INFORMATION *)&unk_1400FEC38;
      v50 = 100 * v45;
      do
      {
        v51 = *(_DWORD *)v49;
        LODWORD(v111) = v48 / *(_DWORD *)v49;
        HIDWORD(v111) = v50 / v51;
        v114 = v111;
        if ( Win81::operator>=(&v114, dword_1400A6258) )
          break;
        v49 = (struct _DPI_INFORMATION *)((char *)v49 - 4);
        --v53;
      }
      while ( v53 );
      v116[0].m128i_i32[3] = *(_DWORD *)&PairedScaleFactorsArray_Win81[4 * v53];
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v88, v52, (__int64)v116, v49);
      v24 |= 0x400u;
      *(_DWORD *)&v113[92] = v24;
LABEL_78:
      if ( v116[5].m128i_i32[3] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1015;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"CurrentDpiInfo.FlagsUnion.AllFlags == 0",
          1015LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v116[5].m128i_i32[3] = v24;
      if ( v47 || (v24 & 4) == 0 && (v90 + v89) / 2 <= (v116[3].m128i_i32[2] + v116[3].m128i_i32[3]) / 2 )
      {
        v112 = v116[0];
        *(__m128i *)v113 = v116[0];
        v117 = v116[1];
        *(__m128i *)&v113[16] = v116[1];
        v118 = v116[2];
        *(__m128i *)&v113[32] = v116[2];
        v119 = v116[4];
        *(__m128i *)&v113[64] = v116[4];
        v24 = _mm_cvtsi128_si32(_mm_srli_si128(v116[5], 12));
        v90 = _mm_cvtsi128_si32(_mm_srli_si128(v116[3], 8));
        v120 = v116[3];
        *(__m128i *)&v113[48] = v116[3];
        v84 = v116[5];
        *(__m128i *)&v113[80] = v116[5];
        v89 = _mm_cvtsi128_si32(_mm_srli_si128(v116[3], 12));
      }
      else
      {
        v84 = *(__m128i *)&v113[80];
      }
      if ( v105 )
        v107(v108, v43);
      v23 = v102;
      v22 = (unsigned __int64)v104 + 1;
      v6 = v103;
    }
    v33 |= 0x40u;
    v87 = 1;
    *(_DWORD *)&v113[92] = v33;
LABEL_36:
    v34 = 0;
    v35 = 0;
    v75 = 0LL;
    goto LABEL_37;
  }
  CurrentSourceResolution = -1073741637;
  WdLogSingleEntry2(2LL, v6, -1073741637LL);
  WdLogGlobalForLineNumber = 696;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Win32k should not call Win81::UpdateGdiInfoForVidPnSource for adapter 0x%I64x in remote session, returning 0x%I64x!",
    (__int64)v6,
    -1073741637LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)CurrentSourceResolution;
}
