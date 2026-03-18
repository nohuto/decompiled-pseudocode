/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403B75AC
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140343FDC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x14004C84C (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004D56C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402FC29C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140308924 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DxgkQueryDmmInterface @ 0x140344CD8 (DxgkQueryDmmInterface.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x140361BB8 (_PopulateDisplayModeFromPresentPath.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x14038BCCC (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x14038C3C0 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403B84B0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403FEB24 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        _QWORD *a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v5; // rdx
  DXGADAPTER *v6; // rcx
  int v7; // eax
  __int64 v8; // rsi
  const wchar_t *v9; // r9
  const struct _DXGDMM_INTERFACE *v11; // r15
  void *v12; // rcx
  int v13; // eax
  void (__fastcall *v14)(void *, __int64); // r15
  __int64 v15; // rsi
  void *v16; // r12
  bool v17; // r14
  __int64 (__fastcall *v18)(__int64, __int64 *, __int64 *); // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rbx
  _QWORD *v25; // rcx
  int VideoOutputTechnology; // eax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 (__fastcall *v29)(__int64, __int64, __int64 *, __int64 *); // rax
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 (__fastcall *v34)(__int64, __int64 *); // rax
  int v35; // eax
  __int64 v36; // rbx
  __int64 i; // rdx
  __int64 v38; // r8
  unsigned int *v39; // r12
  int v40; // ecx
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  __int64 v44; // rdx
  __int64 (__fastcall *v45)(__int64, __int64, __int64 *, __int64 *); // rax
  int v46; // eax
  __int64 v47; // r14
  __int64 v48; // r14
  __int64 (__fastcall *v49)(__int64, __int64 *); // rax
  int v50; // eax
  __int64 j; // rdx
  __int64 v52; // r8
  unsigned int *v53; // rbx
  __int64 v54; // r8
  int v55; // eax
  int v56; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v57; // ebx
  int v58; // eax
  __int64 v59; // r8
  __int64 v60; // rdx
  int v61; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v62; // ebx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION k; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  bool v68; // zf
  __int64 v69; // rbx
  const wchar_t *v70; // r9
  unsigned int *v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // rax
  unsigned int v76; // eax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v79; // rax
  int UniqueModes; // eax
  __int64 v81; // rbx
  int v82; // [rsp+20h] [rbp-E0h]
  __int64 v83; // [rsp+20h] [rbp-E0h]
  __int64 v84; // [rsp+28h] [rbp-D8h]
  bool v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  char v87; // [rsp+58h] [rbp-A8h]
  char v88; // [rsp+59h] [rbp-A7h] BYREF
  unsigned __int8 v89[2]; // [rsp+5Ah] [rbp-A6h] BYREF
  int v90; // [rsp+5Ch] [rbp-A4h]
  void (__fastcall *v91)(void *, __int64); // [rsp+60h] [rbp-A0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v92; // [rsp+68h] [rbp-98h] BYREF
  void *v93; // [rsp+70h] [rbp-90h]
  int v94[2]; // [rsp+78h] [rbp-88h]
  char v95[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v96; // [rsp+88h] [rbp-78h]
  void (__fastcall *v97)(__int64, __int64); // [rsp+90h] [rbp-70h]
  __int64 v98; // [rsp+98h] [rbp-68h]
  int v99; // [rsp+A0h] [rbp-60h]
  char v100[8]; // [rsp+A8h] [rbp-58h] BYREF
  int v101[2]; // [rsp+B0h] [rbp-50h]
  void (__fastcall *v102)(__int64, unsigned int *); // [rsp+B8h] [rbp-48h]
  __int64 v103; // [rsp+C0h] [rbp-40h]
  int v104; // [rsp+C8h] [rbp-38h]
  __int64 v105; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v106; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v107; // [rsp+E0h] [rbp-20h] BYREF
  char v108[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v109; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v110)(__int64, __int64); // [rsp+F8h] [rbp-8h]
  __int64 v111; // [rsp+100h] [rbp+0h]
  int v112; // [rsp+108h] [rbp+8h]
  char v113[8]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int *v114; // [rsp+118h] [rbp+18h]
  void (__fastcall *v115)(__int64, unsigned int *); // [rsp+120h] [rbp+20h]
  __int64 v116; // [rsp+128h] [rbp+28h]
  int v117; // [rsp+130h] [rbp+30h]
  __int64 v118; // [rsp+138h] [rbp+38h] BYREF
  __int64 v119; // [rsp+140h] [rbp+40h] BYREF
  __int64 v120; // [rsp+148h] [rbp+48h] BYREF
  __int64 v121; // [rsp+150h] [rbp+50h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v122; // [rsp+158h] [rbp+58h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *v123; // [rsp+160h] [rbp+60h] BYREF
  __int64 v124; // [rsp+168h] [rbp+68h] BYREF
  __int64 v125; // [rsp+170h] [rbp+70h] BYREF
  unsigned int *v126; // [rsp+178h] [rbp+78h]
  const struct _DXGDMM_INTERFACE *v127; // [rsp+180h] [rbp+80h] BYREF
  __int64 v128; // [rsp+188h] [rbp+88h] BYREF
  __int64 v129; // [rsp+190h] [rbp+90h] BYREF
  __int64 v130; // [rsp+198h] [rbp+98h] BYREF
  struct _D3DKMT_DISPLAYMODE **v131; // [rsp+1A0h] [rbp+A0h]
  struct _D3DKMT_DISPLAYMODE v132; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v133; // [rsp+1E0h] [rbp+E0h] BYREF

  v131 = a2;
  v126 = a3;
  memset(&v133, 0, sizeof(v133));
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget((void *)*a1, *((_DWORD *)a1 + 3), &v133);
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    WdLogSingleEntry3(3LL, *a1, *((unsigned int *)a1 + 3), PreferredMonitorSourceModeOnTarget);
    WdLogGlobalForLineNumber = 1356;
    return 0LL;
  }
  v6 = (DXGADAPTER *)*a1;
  v127 = 0LL;
  v7 = DxgkQueryDmmInterface(v6, v5, &v127);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v7);
    v9 = L"Failed to QueryDxgDmmInterface on hAdapter 0x%I64x (status = 0x%I64x).";
    WdLogGlobalForLineNumber = 1368;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v9, *a1, v8, 0LL, 0LL, 0LL);
    return (unsigned int)v8;
  }
  v11 = v127;
  v12 = (void *)*a1;
  v118 = 0LL;
  v128 = 0LL;
  v13 = (*((__int64 (__fastcall **)(void *, __int64 *, __int64 *))v127 + 5))(v12, &v128, &v118);
  v8 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v13);
    v9 = L"Failed call to create an empty VidPN on adapter 0x%I64x (status = 0x%I64x).";
    WdLogGlobalForLineNumber = 1387;
    goto LABEL_5;
  }
  v14 = (void (__fastcall *)(void *, __int64))*((_QWORD *)v11 + 8);
  v15 = v128;
  v16 = (void *)*a1;
  v17 = v128 != 0;
  v106 = 0LL;
  v105 = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v118;
  v85 = v128 != 0;
  v93 = v16;
  v91 = v14;
  v19 = (unsigned int)v18(v128, &v106, &v105);
  v92 = v19;
  if ( v19 < D3DKMDT_VOT_HD15 )
  {
    v20 = v19;
    WdLogSingleEntry3(2LL, v15, *a1, v19);
    v21 = *a1;
    WdLogGlobalForLineNumber = 1410;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get VidPn topology from hVidPn 0x%I64x on Adapter 0x%I64x (Status=0x%I64x).",
      v15,
      v21,
      v20,
      0LL,
      0LL);
LABEL_10:
    if ( v17 )
      v14(v16, v15);
    return (unsigned int)v92;
  }
  v22 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v105 + 40))(
          v106,
          *((unsigned int *)a1 + 2),
          *((unsigned int *)a1 + 3),
          1LL,
          0,
          2);
  v23 = *((_DWORD *)a1 + 3);
  v92 = v22;
  if ( v22 < D3DKMDT_VOT_HD15 )
  {
    v24 = v22;
    WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 2), v23, v15, v22);
    v84 = *((unsigned int *)a1 + 3);
    v83 = *((unsigned int *)a1 + 2);
    WdLogGlobalForLineNumber = 1429;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to Add VidPn path from source 0x%I64x to target 0x%I64x on VidPn 0x%I64x (Status=0x%I64x).",
      v83,
      v84,
      v15,
      v24,
      0LL);
    goto LABEL_10;
  }
  v25 = (_QWORD *)*a1;
  v92 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v25, v23, 0LL, &v92);
  v90 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v27 = VideoOutputTechnology;
    WdLogSingleEntry1(2LL, VideoOutputTechnology);
    WdLogGlobalForLineNumber = 1441;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)",
      v27,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_17;
  }
  if ( v92 == D3DKMDT_VOT_MIRACAST
    || v92 == D3DKMDT_VOT_INDIRECT_WIRED
    || (v87 = 0, v92 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
  {
    v87 = 1;
  }
  v28 = *((unsigned int *)a1 + 2);
  v119 = 0LL;
  v129 = 0LL;
  v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v118 + 8);
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0;
  v95[0] = 0;
  v30 = v29(v15, v28, &v129, &v119);
  v90 = v30;
  if ( v30 < 0 )
  {
    v31 = v30;
    WdLogSingleEntry3(2LL, v15, *((unsigned int *)a1 + 2), v30);
    v32 = *((unsigned int *)a1 + 2);
    WdLogGlobalForLineNumber = 1463;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire VidPn source mode set from VidPn 0x%I64x for VidPn source ID 0x%I64x (Status = 0x%I64x).",
      v15,
      v32,
      v31,
      0LL,
      0LL);
LABEL_17:
    if ( v17 )
      v14(v16, v15);
    return (unsigned int)v90;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v95,
    v129,
    *(_QWORD *)(v118 + 16),
    v15);
  v33 = v96;
  v130 = 0LL;
  *(_QWORD *)v101 = 0LL;
  v34 = *(__int64 (__fastcall **)(__int64, __int64 *))(v119 + 8);
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0;
  v100[0] = 0;
  v35 = v34(v96, &v130);
  v90 = v35;
  if ( v35 < 0 )
  {
    v36 = v35;
    WdLogSingleEntry2(2LL, v33, v35);
    WdLogGlobalForLineNumber = 1484;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire first mode info from source mode set 0x%I64x (Status = 0x%I64x).",
      v33,
      v36,
      0LL,
      0LL,
      0LL);
    if ( v95[0] )
      v97(v98, v33);
    if ( v17 )
      v91(v16, v15);
    return (unsigned int)v90;
  }
  for ( i = v130; ; i = v125 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v100,
      i,
      *(_QWORD *)(v119 + 32),
      v33);
    v39 = *(unsigned int **)v101;
    if ( !*(_QWORD *)v101 )
    {
      v76 = *((_DWORD *)a1 + 10);
      if ( v76 )
      {
        v78 = v76;
        v77 = 44LL * v76;
        if ( !is_mul_ok(v78, 0x2CuLL) )
          v77 = -1LL;
        v79 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v77, 0x4B677844u, 256LL);
        *v131 = v79;
        if ( !v79 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1837;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Unable to allocate mode list memory.",
            1837LL,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v100[0] )
            v102(v103, 0LL);
          if ( v95[0] )
            v97(v98, v33);
          if ( v85 )
            v91(v93, v15);
          return 3221225495LL;
        }
        UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                        (MODE_UNION_LIST *)(a1 + 3),
                        *((unsigned int *)a1 + 10),
                        v79,
                        v126);
        if ( UniqueModes < 0 )
        {
          v81 = UniqueModes;
          WdLogSingleEntry1(1LL, UniqueModes);
          WdLogGlobalForLineNumber = 1847;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Failed to get unique modes (Status = 0x%I64x).",
            v81,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        *v126 = 0;
      }
      if ( v100[0] )
        v102(v103, 0LL);
      if ( v95[0] )
        v97(v98, v33);
      if ( v85 )
        v91(v93, v15);
      return 0LL;
    }
    v40 = *(_DWORD *)(*(_QWORD *)v101 + 4LL);
    if ( ((v40 - 1) & 0xFFFFFFFC) == 0 && v40 != 2 )
    {
      v41 = *(_DWORD *)(*(_QWORD *)v101 + 8LL);
      if ( v41 == *(_DWORD *)(*(_QWORD *)v101 + 16LL) )
      {
        v42 = *(_DWORD *)(*(_QWORD *)v101 + 12LL);
        if ( v42 == *(_DWORD *)(*(_QWORD *)v101 + 20LL)
          && (unsigned int)(*(_DWORD *)(*(_QWORD *)v101 + 28LL) - 21) <= 1
          && v41 == v133.VideoSignalInfo.ActiveSize.cx
          && v42 == v133.VideoSignalInfo.ActiveSize.cy )
        {
          break;
        }
      }
    }
LABEL_71:
    v125 = 0LL;
    v67 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v119 + 16))(v33, v39, &v125);
    v47 = v67;
    if ( v67 < 0 )
    {
      WdLogSingleEntry2(2LL, v33, v67);
      WdLogGlobalForLineNumber = 1821;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire next source mode info from source mode set 0x%I64x (Status = 0x%I64x).",
        v33,
        v47,
        0LL,
        0LL,
        0LL);
      goto LABEL_105;
    }
  }
  LOBYTE(v38) = 1;
  v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v119 + 40))(v33, (unsigned int)**(_DWORD **)v101, v38);
  if ( v43 < 0 )
  {
    WdLogSingleEntry3(3LL, *v39, v33, v43);
    WdLogGlobalForLineNumber = 1540;
    goto LABEL_71;
  }
  v44 = *((unsigned int *)a1 + 3);
  v107 = 0LL;
  v120 = 0LL;
  v45 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v118 + 24);
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0;
  v108[0] = 0;
  v46 = v45(v15, v44, &v120, &v107);
  v47 = v46;
  if ( v46 < 0 )
  {
    WdLogSingleEntry3(2LL, v15, *((unsigned int *)a1 + 3), v46);
    v75 = *((unsigned int *)a1 + 3);
    WdLogGlobalForLineNumber = 1561;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire target mode set from VidPn 0x%I64x for Target 0x%I64x (Status = 0x%I64x).",
      v15,
      v75,
      v47,
      0LL,
      0LL);
LABEL_105:
    if ( v100[0] )
      v102(v103, v39);
    if ( v95[0] )
      v97(v98, v33);
    if ( v85 )
      v91(v93, v15);
    return (unsigned int)v47;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v108,
    v120,
    *(_QWORD *)(v118 + 32),
    v15);
  v48 = v109;
  v121 = 0LL;
  v114 = 0LL;
  v49 = *(__int64 (__fastcall **)(__int64, __int64 *))(v107 + 8);
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0;
  v113[0] = 0;
  v50 = v49(v109, &v121);
  v86 = v50;
  if ( v50 < 0 )
  {
    v74 = v50;
    WdLogSingleEntry2(2LL, v48, v50);
    WdLogGlobalForLineNumber = 1582;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire first target mode info from target mode set 0x%I64x (Status = 0x%I64x).",
      v48,
      v74,
      0LL,
      0LL,
      0LL);
    goto LABEL_94;
  }
  for ( j = v121; ; j = v124 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v113,
      j,
      *(_QWORD *)(v107 + 32),
      v48);
    v53 = v114;
    *(_QWORD *)v94 = v114;
    if ( !v114 )
      break;
    LOBYTE(v52) = v87;
    v88 = 0;
    if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v107 + 80))(
           v114,
           &v133,
           v52,
           &v88) >= 0
      && v88 )
    {
      LOBYTE(v54) = 1;
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v107 + 48))(v48, *v53, v54);
      if ( v55 >= 0 )
      {
        v122 = 0LL;
        v56 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v105 + 24))(
                v106,
                *((unsigned int *)a1 + 2),
                *((unsigned int *)a1 + 3),
                &v122);
        v86 = v56;
        if ( v56 < 0 )
        {
          v69 = v56;
          WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v56);
          v70 = L"Failed to acquire VidPn path info from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
          WdLogGlobalForLineNumber = 1632;
LABEL_83:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            v70,
            *((unsigned int *)a1 + 2),
            *((unsigned int *)a1 + 3),
            v69,
            0LL,
            0LL);
          goto LABEL_84;
        }
        v57 = v122[4];
        (*(void (__fastcall **)(__int64))(v105 + 32))(v106);
        if ( BmlIsSupportedPathScaling(D3DKMDT_VPPS_IDENTITY, v57) )
        {
          LOBYTE(v82) = 1;
          v58 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v105 + 64))(
                  v106,
                  *((unsigned int *)a1 + 2),
                  *((unsigned int *)a1 + 3),
                  1LL,
                  v82);
          v86 = v58;
          if ( v58 < 0 )
          {
            v69 = v58;
            WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v58);
            v70 = L"Failed to pin D3DKMDT_VPPS_IDENTITY on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
            WdLogGlobalForLineNumber = 1657;
          }
          else
          {
            v59 = *((unsigned int *)a1 + 3);
            v60 = *((unsigned int *)a1 + 2);
            v123 = 0LL;
            v61 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT **))(v105 + 24))(
                    v106,
                    v60,
                    v59,
                    &v123);
            v86 = v61;
            if ( v61 < 0 )
            {
              v69 = v61;
              WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v61);
              v70 = L"Failed to acquire path info on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 1674;
            }
            else
            {
              v62 = v123[6];
              (*(void (__fastcall **)(__int64))(v105 + 32))(v106);
              for ( k = D3DKMDT_VPPR_IDENTITY; ; k = v90 + 1 )
              {
                v90 = k;
                if ( k > D3DKMDT_VPPR_ROTATE270 )
                  break;
                if ( BmlIsSupportedPathRotation(k, v62) )
                {
                  v89[0] = 0;
                  memset(&v132, 0, sizeof(v132));
                  PopulateDisplayModeFromPresentPath(
                    v39,
                    *(unsigned int **)v94,
                    1,
                    v90,
                    1,
                    1,
                    0,
                    2,
                    (struct _D3DDDI_RATIONAL *)&v132,
                    v89);
                  v86 = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 3), &v132);
                  if ( v86 < 0
                    || v89[0]
                    && (++v132.IntegerRefreshRate,
                        *(_DWORD *)&v132.Flags |= 2u,
                        v86 = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 3), &v132),
                        v86 < 0) )
                  {
                    if ( v113[0] )
                      v115(v116, *(unsigned int **)v94);
                    if ( v108[0] )
                      v110(v111, v48);
                    if ( v100[0] )
                      v102(v103, v39);
                    if ( v95[0] )
                      v97(v98, v33);
                    v68 = !v85;
                    goto LABEL_101;
                  }
                }
              }
              v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v105 + 72))(
                      v106,
                      *((unsigned int *)a1 + 2),
                      *((unsigned int *)a1 + 3),
                      0LL);
              v86 = v64;
              if ( v64 >= 0 )
                goto LABEL_62;
              v69 = v64;
              WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v64);
              v70 = L"Unable to unpin content scaling on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 1773;
            }
          }
          goto LABEL_83;
        }
LABEL_62:
        v53 = *(unsigned int **)v94;
      }
      else
      {
        WdLogSingleEntry3(3LL, *v53, v48, v55);
        WdLogGlobalForLineNumber = 1615;
      }
    }
    v124 = 0LL;
    v65 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v107 + 16))(v48, v53, &v124);
    v86 = v65;
    if ( v65 < 0 )
    {
      v72 = v65;
      WdLogSingleEntry2(2LL, v48, v65);
      WdLogGlobalForLineNumber = 1788;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire next target mode info on target mode set 0x%I64x (Status = 0x%I64x).",
        v48,
        v72,
        0LL,
        0LL,
        0LL);
LABEL_84:
      if ( !v113[0] )
        goto LABEL_94;
      v71 = *(unsigned int **)v94;
LABEL_86:
      v115(v116, v71);
      goto LABEL_94;
    }
  }
  v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v107 + 56))(v48, 0LL);
  v86 = v66;
  if ( v66 >= 0 )
  {
    if ( v113[0] )
      v115(v116, 0LL);
    v113[0] = 0;
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v117 = -1073741212;
    if ( v108[0] )
      v110(v111, v48);
    v108[0] = 0;
    v109 = 0LL;
    v110 = 0LL;
    v111 = 0LL;
    v112 = -1073741212;
    goto LABEL_71;
  }
  v73 = v66;
  WdLogSingleEntry2(2LL, v48, v66);
  WdLogGlobalForLineNumber = 1805;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to Dunpin target mode set 0x%I64x (Status = 0x%I64x).",
    v48,
    v73,
    0LL,
    0LL,
    0LL);
  if ( v113[0] )
  {
    v71 = 0LL;
    goto LABEL_86;
  }
LABEL_94:
  if ( v108[0] )
    v110(v111, v48);
  if ( v100[0] )
    v102(v103, v39);
  if ( v95[0] )
    v97(v98, v33);
  v68 = !v85;
LABEL_101:
  if ( !v68 )
    v91(v93, v15);
  return (unsigned int)v86;
}
