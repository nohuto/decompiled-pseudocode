/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403C2B70
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1403DD5F4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x14004CE00 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004DBCC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1402C1CE8 (_PopulateDisplayModeFromPresentPath.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1402D3750 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1402D3DDC (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     DxgkQueryDmmInterface @ 0x1402DD374 (DxgkQueryDmmInterface.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x14030BADC (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403C3A74 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x140404F04 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
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
  __int64 v39; // r9
  unsigned int *v40; // r12
  int v41; // ecx
  int v42; // ecx
  int v43; // edx
  int v44; // eax
  __int64 v45; // rdx
  __int64 (__fastcall *v46)(__int64, __int64, __int64 *, __int64 *); // rax
  int v47; // eax
  __int64 v48; // r14
  __int64 v49; // r14
  __int64 (__fastcall *v50)(__int64, __int64 *); // rax
  int v51; // eax
  __int64 j; // rdx
  __int64 v53; // r8
  unsigned int *v54; // rbx
  __int64 v55; // r8
  int v56; // eax
  int v57; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v58; // ebx
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // rdx
  int v62; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v63; // ebx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION k; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  bool v69; // zf
  __int64 v70; // rbx
  const wchar_t *v71; // r9
  unsigned int *v72; // rdx
  __int64 v73; // rbx
  __int64 v74; // rbx
  __int64 v75; // rbx
  __int64 v76; // rax
  unsigned int v77; // eax
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v80; // rax
  int UniqueModes; // eax
  __int64 v82; // rbx
  int v83; // [rsp+20h] [rbp-E0h]
  __int64 v84; // [rsp+20h] [rbp-E0h]
  __int64 v85; // [rsp+28h] [rbp-D8h]
  bool v86; // [rsp+50h] [rbp-B0h]
  int v87; // [rsp+54h] [rbp-ACh]
  char v88; // [rsp+58h] [rbp-A8h]
  char v89; // [rsp+59h] [rbp-A7h] BYREF
  unsigned __int8 v90[2]; // [rsp+5Ah] [rbp-A6h] BYREF
  int v91; // [rsp+5Ch] [rbp-A4h]
  void (__fastcall *v92)(void *, __int64); // [rsp+60h] [rbp-A0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v93; // [rsp+68h] [rbp-98h] BYREF
  void *v94; // [rsp+70h] [rbp-90h]
  int v95[2]; // [rsp+78h] [rbp-88h]
  char v96[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v97; // [rsp+88h] [rbp-78h]
  void (__fastcall *v98)(__int64, __int64); // [rsp+90h] [rbp-70h]
  __int64 v99; // [rsp+98h] [rbp-68h]
  int v100; // [rsp+A0h] [rbp-60h]
  char v101[8]; // [rsp+A8h] [rbp-58h] BYREF
  int v102[2]; // [rsp+B0h] [rbp-50h]
  void (__fastcall *v103)(__int64, unsigned int *); // [rsp+B8h] [rbp-48h]
  __int64 v104; // [rsp+C0h] [rbp-40h]
  int v105; // [rsp+C8h] [rbp-38h]
  __int64 v106; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v107; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-20h] BYREF
  char v109[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v110; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v111)(__int64, __int64); // [rsp+F8h] [rbp-8h]
  __int64 v112; // [rsp+100h] [rbp+0h]
  int v113; // [rsp+108h] [rbp+8h]
  char v114[8]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int *v115; // [rsp+118h] [rbp+18h]
  void (__fastcall *v116)(__int64, unsigned int *); // [rsp+120h] [rbp+20h]
  __int64 v117; // [rsp+128h] [rbp+28h]
  int v118; // [rsp+130h] [rbp+30h]
  __int64 v119; // [rsp+138h] [rbp+38h] BYREF
  __int64 v120; // [rsp+140h] [rbp+40h] BYREF
  __int64 v121; // [rsp+148h] [rbp+48h] BYREF
  __int64 v122; // [rsp+150h] [rbp+50h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v123; // [rsp+158h] [rbp+58h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *v124; // [rsp+160h] [rbp+60h] BYREF
  __int64 v125; // [rsp+168h] [rbp+68h] BYREF
  __int64 v126; // [rsp+170h] [rbp+70h] BYREF
  unsigned int *v127; // [rsp+178h] [rbp+78h]
  const struct _DXGDMM_INTERFACE *v128; // [rsp+180h] [rbp+80h] BYREF
  __int64 v129; // [rsp+188h] [rbp+88h] BYREF
  __int64 v130; // [rsp+190h] [rbp+90h] BYREF
  __int64 v131; // [rsp+198h] [rbp+98h] BYREF
  struct _D3DKMT_DISPLAYMODE **v132; // [rsp+1A0h] [rbp+A0h]
  struct _D3DKMT_DISPLAYMODE v133; // [rsp+1A8h] [rbp+A8h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v134; // [rsp+1E0h] [rbp+E0h] BYREF

  v132 = a2;
  v127 = a3;
  memset(&v134, 0, sizeof(v134));
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget((void *)*a1, *((_DWORD *)a1 + 3), &v134);
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    WdLogSingleEntry3(3LL, *a1, *((unsigned int *)a1 + 3), PreferredMonitorSourceModeOnTarget);
    WdLogGlobalForLineNumber = 1356;
    return 0LL;
  }
  v6 = (DXGADAPTER *)*a1;
  v128 = 0LL;
  v7 = DxgkQueryDmmInterface(v6, v5, &v128);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v7);
    v9 = L"Failed to QueryDxgDmmInterface on hAdapter 0x%I64x (status = 0x%I64x).";
    WdLogGlobalForLineNumber = 1368;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v9, *a1, v8, 0LL, 0LL, 0LL);
    return (unsigned int)v8;
  }
  v11 = v128;
  v12 = (void *)*a1;
  v119 = 0LL;
  v129 = 0LL;
  v13 = (*((__int64 (__fastcall **)(void *, __int64 *, __int64 *))v128 + 5))(v12, &v129, &v119);
  v8 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v13);
    v9 = L"Failed call to create an empty VidPN on adapter 0x%I64x (status = 0x%I64x).";
    WdLogGlobalForLineNumber = 1387;
    goto LABEL_5;
  }
  v14 = (void (__fastcall *)(void *, __int64))*((_QWORD *)v11 + 8);
  v15 = v129;
  v16 = (void *)*a1;
  v17 = v129 != 0;
  v107 = 0LL;
  v106 = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v119;
  v86 = v129 != 0;
  v94 = v16;
  v92 = v14;
  v19 = (unsigned int)v18(v129, &v107, &v106);
  v93 = v19;
  if ( v19 < D3DKMDT_VOT_HD15 )
  {
    v20 = v19;
    WdLogSingleEntry3(2LL, v15, *a1, v19);
    v21 = *a1;
    WdLogGlobalForLineNumber = 1410;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    return (unsigned int)v93;
  }
  v22 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v106 + 40))(
          v107,
          *((unsigned int *)a1 + 2),
          *((unsigned int *)a1 + 3),
          1LL,
          0,
          2);
  v23 = *((_DWORD *)a1 + 3);
  v93 = v22;
  if ( v22 < D3DKMDT_VOT_HD15 )
  {
    v24 = v22;
    WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 2), v23, v15, v22);
    v85 = *((unsigned int *)a1 + 3);
    v84 = *((unsigned int *)a1 + 2);
    WdLogGlobalForLineNumber = 1429;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to Add VidPn path from source 0x%I64x to target 0x%I64x on VidPn 0x%I64x (Status=0x%I64x).",
      v84,
      v85,
      v15,
      v24,
      0LL);
    goto LABEL_10;
  }
  v25 = (_QWORD *)*a1;
  v93 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v25, v23, 0LL, &v93);
  v91 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v27 = VideoOutputTechnology;
    WdLogSingleEntry1(2LL, VideoOutputTechnology);
    WdLogGlobalForLineNumber = 1441;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)",
      v27,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_17;
  }
  if ( v93 == D3DKMDT_VOT_MIRACAST
    || v93 == D3DKMDT_VOT_INDIRECT_WIRED
    || (v88 = 0, v93 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
  {
    v88 = 1;
  }
  v28 = *((unsigned int *)a1 + 2);
  v120 = 0LL;
  v130 = 0LL;
  v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v119 + 8);
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0;
  v96[0] = 0;
  v30 = v29(v15, v28, &v130, &v120);
  v91 = v30;
  if ( v30 < 0 )
  {
    v31 = v30;
    WdLogSingleEntry3(2LL, v15, *((unsigned int *)a1 + 2), v30);
    v32 = *((unsigned int *)a1 + 2);
    WdLogGlobalForLineNumber = 1463;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    return (unsigned int)v91;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v96,
    v130,
    *(_QWORD *)(v119 + 16),
    v15);
  v33 = v97;
  v131 = 0LL;
  *(_QWORD *)v102 = 0LL;
  v34 = *(__int64 (__fastcall **)(__int64, __int64 *))(v120 + 8);
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0;
  v101[0] = 0;
  v35 = v34(v97, &v131);
  v91 = v35;
  if ( v35 < 0 )
  {
    v36 = v35;
    WdLogSingleEntry2(2LL, v33, v35);
    WdLogGlobalForLineNumber = 1484;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire first mode info from source mode set 0x%I64x (Status = 0x%I64x).",
      v33,
      v36,
      0LL,
      0LL,
      0LL);
    if ( v96[0] )
      v98(v99, v33);
    if ( v17 )
      v92(v16, v15);
    return (unsigned int)v91;
  }
  for ( i = v131; ; i = v126 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v101,
      i,
      *(_QWORD *)(v120 + 32),
      v33);
    v40 = *(unsigned int **)v102;
    if ( !*(_QWORD *)v102 )
    {
      v77 = *((_DWORD *)a1 + 10);
      if ( v77 )
      {
        v79 = v77;
        v78 = 44LL * v77;
        if ( !is_mul_ok(v79, 0x2CuLL) )
          v78 = -1LL;
        v80 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v78, 0x4B677844u, 256LL, v39);
        *v132 = v80;
        if ( !v80 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1837;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Unable to allocate mode list memory.",
            1837LL,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v101[0] )
            v103(v104, 0LL);
          if ( v96[0] )
            v98(v99, v33);
          if ( v86 )
            v92(v94, v15);
          return 3221225495LL;
        }
        UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                        (MODE_UNION_LIST *)(a1 + 3),
                        *((unsigned int *)a1 + 10),
                        v80,
                        v127);
        if ( UniqueModes < 0 )
        {
          v82 = UniqueModes;
          WdLogSingleEntry1(1LL, UniqueModes);
          WdLogGlobalForLineNumber = 1847;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"Failed to get unique modes (Status = 0x%I64x).",
            v82,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        *v127 = 0;
      }
      if ( v101[0] )
        v103(v104, 0LL);
      if ( v96[0] )
        v98(v99, v33);
      if ( v86 )
        v92(v94, v15);
      return 0LL;
    }
    v41 = *(_DWORD *)(*(_QWORD *)v102 + 4LL);
    if ( ((v41 - 1) & 0xFFFFFFFC) == 0 && v41 != 2 )
    {
      v42 = *(_DWORD *)(*(_QWORD *)v102 + 8LL);
      if ( v42 == *(_DWORD *)(*(_QWORD *)v102 + 16LL) )
      {
        v43 = *(_DWORD *)(*(_QWORD *)v102 + 12LL);
        if ( v43 == *(_DWORD *)(*(_QWORD *)v102 + 20LL)
          && (unsigned int)(*(_DWORD *)(*(_QWORD *)v102 + 28LL) - 21) <= 1
          && v42 == v134.VideoSignalInfo.ActiveSize.cx
          && v43 == v134.VideoSignalInfo.ActiveSize.cy )
        {
          break;
        }
      }
    }
LABEL_71:
    v126 = 0LL;
    v68 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v120 + 16))(v33, v40, &v126);
    v48 = v68;
    if ( v68 < 0 )
    {
      WdLogSingleEntry2(2LL, v33, v68);
      WdLogGlobalForLineNumber = 1821;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire next source mode info from source mode set 0x%I64x (Status = 0x%I64x).",
        v33,
        v48,
        0LL,
        0LL,
        0LL);
      goto LABEL_105;
    }
  }
  LOBYTE(v38) = 1;
  v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v120 + 40))(v33, (unsigned int)**(_DWORD **)v102, v38);
  if ( v44 < 0 )
  {
    WdLogSingleEntry3(3LL, *v40, v33, v44);
    WdLogGlobalForLineNumber = 1540;
    goto LABEL_71;
  }
  v45 = *((unsigned int *)a1 + 3);
  v108 = 0LL;
  v121 = 0LL;
  v46 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v119 + 24);
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0;
  v109[0] = 0;
  v47 = v46(v15, v45, &v121, &v108);
  v48 = v47;
  if ( v47 < 0 )
  {
    WdLogSingleEntry3(2LL, v15, *((unsigned int *)a1 + 3), v47);
    v76 = *((unsigned int *)a1 + 3);
    WdLogGlobalForLineNumber = 1561;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire target mode set from VidPn 0x%I64x for Target 0x%I64x (Status = 0x%I64x).",
      v15,
      v76,
      v48,
      0LL,
      0LL);
LABEL_105:
    if ( v101[0] )
      v103(v104, v40);
    if ( v96[0] )
      v98(v99, v33);
    if ( v86 )
      v92(v94, v15);
    return (unsigned int)v48;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v109,
    v121,
    *(_QWORD *)(v119 + 32),
    v15);
  v49 = v110;
  v122 = 0LL;
  v115 = 0LL;
  v50 = *(__int64 (__fastcall **)(__int64, __int64 *))(v108 + 8);
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0;
  v114[0] = 0;
  v51 = v50(v110, &v122);
  v87 = v51;
  if ( v51 < 0 )
  {
    v75 = v51;
    WdLogSingleEntry2(2LL, v49, v51);
    WdLogGlobalForLineNumber = 1582;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire first target mode info from target mode set 0x%I64x (Status = 0x%I64x).",
      v49,
      v75,
      0LL,
      0LL,
      0LL);
    goto LABEL_94;
  }
  for ( j = v122; ; j = v125 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v114,
      j,
      *(_QWORD *)(v108 + 32),
      v49);
    v54 = v115;
    *(_QWORD *)v95 = v115;
    if ( !v115 )
      break;
    LOBYTE(v53) = v88;
    v89 = 0;
    if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v108 + 80))(
           v115,
           &v134,
           v53,
           &v89) >= 0
      && v89 )
    {
      LOBYTE(v55) = 1;
      v56 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v108 + 48))(v49, *v54, v55);
      if ( v56 >= 0 )
      {
        v123 = 0LL;
        v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v106 + 24))(
                v107,
                *((unsigned int *)a1 + 2),
                *((unsigned int *)a1 + 3),
                &v123);
        v87 = v57;
        if ( v57 < 0 )
        {
          v70 = v57;
          WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v57);
          v71 = L"Failed to acquire VidPn path info from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
          WdLogGlobalForLineNumber = 1632;
LABEL_83:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            v71,
            *((unsigned int *)a1 + 2),
            *((unsigned int *)a1 + 3),
            v70,
            0LL,
            0LL);
          goto LABEL_84;
        }
        v58 = v123[4];
        (*(void (__fastcall **)(__int64))(v106 + 32))(v107);
        if ( BmlIsSupportedPathScaling(D3DKMDT_VPPS_IDENTITY, v58) )
        {
          LOBYTE(v83) = 1;
          v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v106 + 64))(
                  v107,
                  *((unsigned int *)a1 + 2),
                  *((unsigned int *)a1 + 3),
                  1LL,
                  v83);
          v87 = v59;
          if ( v59 < 0 )
          {
            v70 = v59;
            WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v59);
            v71 = L"Failed to pin D3DKMDT_VPPS_IDENTITY on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
            WdLogGlobalForLineNumber = 1657;
          }
          else
          {
            v60 = *((unsigned int *)a1 + 3);
            v61 = *((unsigned int *)a1 + 2);
            v124 = 0LL;
            v62 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT **))(v106 + 24))(
                    v107,
                    v61,
                    v60,
                    &v124);
            v87 = v62;
            if ( v62 < 0 )
            {
              v70 = v62;
              WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v62);
              v71 = L"Failed to acquire path info on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 1674;
            }
            else
            {
              v63 = v124[6];
              (*(void (__fastcall **)(__int64))(v106 + 32))(v107);
              for ( k = D3DKMDT_VPPR_IDENTITY; ; k = v91 + 1 )
              {
                v91 = k;
                if ( k > D3DKMDT_VPPR_ROTATE270 )
                  break;
                if ( BmlIsSupportedPathRotation(k, v63) )
                {
                  v90[0] = 0;
                  memset(&v133, 0, sizeof(v133));
                  PopulateDisplayModeFromPresentPath(
                    v40,
                    *(unsigned int **)v95,
                    1,
                    v91,
                    1,
                    1,
                    0,
                    2,
                    (struct _D3DDDI_RATIONAL *)&v133,
                    v90);
                  v87 = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 3), &v133);
                  if ( v87 < 0
                    || v90[0]
                    && (++v133.IntegerRefreshRate,
                        *(_DWORD *)&v133.Flags |= 2u,
                        v87 = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 3), &v133),
                        v87 < 0) )
                  {
                    if ( v114[0] )
                      v116(v117, *(unsigned int **)v95);
                    if ( v109[0] )
                      v111(v112, v49);
                    if ( v101[0] )
                      v103(v104, v40);
                    if ( v96[0] )
                      v98(v99, v33);
                    v69 = !v86;
                    goto LABEL_101;
                  }
                }
              }
              v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v106 + 72))(
                      v107,
                      *((unsigned int *)a1 + 2),
                      *((unsigned int *)a1 + 3),
                      0LL);
              v87 = v65;
              if ( v65 >= 0 )
                goto LABEL_62;
              v70 = v65;
              WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v65);
              v71 = L"Unable to unpin content scaling on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).";
              WdLogGlobalForLineNumber = 1773;
            }
          }
          goto LABEL_83;
        }
LABEL_62:
        v54 = *(unsigned int **)v95;
      }
      else
      {
        WdLogSingleEntry3(3LL, *v54, v49, v56);
        WdLogGlobalForLineNumber = 1615;
      }
    }
    v125 = 0LL;
    v66 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v108 + 16))(v49, v54, &v125);
    v87 = v66;
    if ( v66 < 0 )
    {
      v73 = v66;
      WdLogSingleEntry2(2LL, v49, v66);
      WdLogGlobalForLineNumber = 1788;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire next target mode info on target mode set 0x%I64x (Status = 0x%I64x).",
        v49,
        v73,
        0LL,
        0LL,
        0LL);
LABEL_84:
      if ( !v114[0] )
        goto LABEL_94;
      v72 = *(unsigned int **)v95;
LABEL_86:
      v116(v117, v72);
      goto LABEL_94;
    }
  }
  v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v108 + 56))(v49, 0LL);
  v87 = v67;
  if ( v67 >= 0 )
  {
    if ( v114[0] )
      v116(v117, 0LL);
    v114[0] = 0;
    v115 = 0LL;
    v116 = 0LL;
    v117 = 0LL;
    v118 = -1073741212;
    if ( v109[0] )
      v111(v112, v49);
    v109[0] = 0;
    v110 = 0LL;
    v111 = 0LL;
    v112 = 0LL;
    v113 = -1073741212;
    goto LABEL_71;
  }
  v74 = v67;
  WdLogSingleEntry2(2LL, v49, v67);
  WdLogGlobalForLineNumber = 1805;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to Dunpin target mode set 0x%I64x (Status = 0x%I64x).",
    v49,
    v74,
    0LL,
    0LL,
    0LL);
  if ( v114[0] )
  {
    v72 = 0LL;
    goto LABEL_86;
  }
LABEL_94:
  if ( v109[0] )
    v111(v112, v49);
  if ( v101[0] )
    v103(v104, v40);
  if ( v96[0] )
    v98(v99, v33);
  v69 = !v86;
LABEL_101:
  if ( !v69 )
    v92(v94, v15);
  return (unsigned int)v87;
}
