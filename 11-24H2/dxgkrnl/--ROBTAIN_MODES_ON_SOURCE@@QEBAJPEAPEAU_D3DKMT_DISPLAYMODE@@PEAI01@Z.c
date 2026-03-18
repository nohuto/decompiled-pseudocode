/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x140342580
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140343FDC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1400390E0 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003DD80 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x140045808 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x14004C84C (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004D56C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x140063A38 (-DivideAndRound@@YA_K_K0@Z.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14006F480 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1402AE6B0 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     ?_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z @ 0x1402FC230 (-_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402FC29C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140308924 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x140361BB8 (_PopulateDisplayModeFromPresentPath.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x14038BCCC (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x14038C3C0 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x14039B684 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403B84B0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403FEB24 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        OBTAIN_MODES_ON_SOURCE *this,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // r15d
  int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rsi
  int VideoOutputTechnology; // eax
  __int64 v20; // rdi
  const wchar_t *v21; // r9
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 (__fastcall *v27)(__int64, __int64, __int64 *, __int64 *); // rax
  int v28; // eax
  __int64 v29; // r13
  __int64 (__fastcall *v30)(__int64, __int64 *); // rax
  int v31; // eax
  bool v32; // zf
  __int64 v33; // r8
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 (__fastcall *v38)(__int64, _QWORD, __int64 *, __int64 *); // rax
  int v39; // eax
  __int64 v40; // rsi
  __int64 (__fastcall *v41)(__int64, __int64 *); // rax
  int v42; // eax
  __int64 v43; // r12
  __int64 v44; // r8
  unsigned int *v45; // r12
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v55; // edi
  char v56; // al
  _DWORD *v57; // rcx
  int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v61; // ebx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v62; // eax
  char v63; // r8
  char v64; // cl
  __int64 v65; // r8
  int v66; // eax
  __int64 v67; // rcx
  bool v68; // zf
  _DWORD *v69; // rcx
  __int64 v70; // rax
  int v71; // r8d
  unsigned __int64 Denominator; // rdx
  unsigned __int64 Numerator; // rcx
  __int64 v74; // r8
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  __int64 v79; // rcx
  int v80; // eax
  unsigned int *v81; // r15
  int v82; // eax
  __int64 v83; // rbx
  __int64 v84; // rbx
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdi
  const wchar_t *v88; // r9
  bool v89; // zf
  __int64 v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rbx
  __int64 v93; // rbx
  __int64 v94; // rdi
  __int64 v95; // rsi
  const wchar_t *v96; // r9
  __int64 v97; // rdi
  unsigned int v98; // eax
  __int64 v99; // rax
  bool v100; // zf
  const wchar_t *v101; // r9
  __int64 v102; // rax
  struct _D3DKMT_DISPLAYMODE **v103; // rbx
  struct _D3DKMT_DISPLAYMODE *v104; // rax
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rax
  int UniqueModes; // eax
  __int64 v108; // rbx
  _QWORD *v109; // rbx
  __int64 v110; // rcx
  unsigned __int64 v111; // rax
  struct _D3DKMT_DISPLAYMODE *v112; // rax
  int v113; // eax
  __int64 v114; // rbx
  char v115[8]; // [rsp+20h] [rbp-E0h]
  __int64 v116; // [rsp+28h] [rbp-D8h]
  __int64 v117; // [rsp+28h] [rbp-D8h]
  __int64 v118; // [rsp+28h] [rbp-D8h]
  __int64 v119; // [rsp+28h] [rbp-D8h]
  __int64 v120; // [rsp+28h] [rbp-D8h]
  __int64 v121; // [rsp+30h] [rbp-D0h]
  __int64 v122; // [rsp+30h] [rbp-D0h]
  __int64 v123; // [rsp+30h] [rbp-D0h]
  __int64 v124; // [rsp+38h] [rbp-C8h]
  __int64 v125; // [rsp+38h] [rbp-C8h]
  char v126; // [rsp+50h] [rbp-B0h] BYREF
  char v127; // [rsp+51h] [rbp-AFh] BYREF
  char v128; // [rsp+52h] [rbp-AEh]
  char v129; // [rsp+53h] [rbp-ADh]
  unsigned __int8 v130[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v131; // [rsp+58h] [rbp-A8h]
  unsigned int v132; // [rsp+5Ch] [rbp-A4h]
  const struct _D3DDDI_RATIONAL *v133; // [rsp+60h] [rbp-A0h]
  int v134; // [rsp+68h] [rbp-98h]
  char v135[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v136; // [rsp+78h] [rbp-88h]
  void (__fastcall *v137)(__int64, __int64); // [rsp+80h] [rbp-80h]
  __int64 v138; // [rsp+88h] [rbp-78h]
  int v139; // [rsp+90h] [rbp-70h]
  char v140[8]; // [rsp+98h] [rbp-68h] BYREF
  int v141[2]; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v142)(__int64, unsigned int *); // [rsp+A8h] [rbp-58h]
  __int64 v143; // [rsp+B0h] [rbp-50h]
  int v144; // [rsp+B8h] [rbp-48h]
  char v145[4]; // [rsp+C0h] [rbp-40h]
  char v146[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v147; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v148)(__int64, __int64); // [rsp+D8h] [rbp-28h]
  __int64 v149; // [rsp+E0h] [rbp-20h]
  int v150; // [rsp+E8h] [rbp-18h]
  char v151[8]; // [rsp+F0h] [rbp-10h] BYREF
  int v152[2]; // [rsp+F8h] [rbp-8h]
  void (__fastcall *v153)(__int64, unsigned int *); // [rsp+100h] [rbp+0h]
  __int64 v154; // [rsp+108h] [rbp+8h]
  int v155; // [rsp+110h] [rbp+10h]
  __int64 v156; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v157; // [rsp+120h] [rbp+20h]
  __int16 v158; // [rsp+124h] [rbp+24h] BYREF
  unsigned int v159; // [rsp+128h] [rbp+28h] BYREF
  int v160; // [rsp+12Ch] [rbp+2Ch] BYREF
  __int64 v161; // [rsp+130h] [rbp+30h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v162; // [rsp+138h] [rbp+38h] BYREF
  int v163; // [rsp+13Ch] [rbp+3Ch] BYREF
  struct _D3DDDI_RATIONAL v164; // [rsp+140h] [rbp+40h] BYREF
  char *v165; // [rsp+148h] [rbp+48h]
  D3DDDI_RATIONAL *v166; // [rsp+150h] [rbp+50h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v167; // [rsp+158h] [rbp+58h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *v168; // [rsp+160h] [rbp+60h] BYREF
  __int64 v169; // [rsp+168h] [rbp+68h] BYREF
  __int64 v170; // [rsp+170h] [rbp+70h] BYREF
  __int64 v171; // [rsp+178h] [rbp+78h]
  void **v172; // [rsp+180h] [rbp+80h]
  __int64 v173; // [rsp+188h] [rbp+88h] BYREF
  __int64 v174; // [rsp+190h] [rbp+90h] BYREF
  __int64 v175; // [rsp+198h] [rbp+98h] BYREF
  __int64 v176; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _D3DKMT_DISPLAYMODE v177; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD *v178; // [rsp+1D8h] [rbp+D8h]
  struct _D3DKMT_DISPLAYMODE **v179; // [rsp+1E0h] [rbp+E0h]
  unsigned int *v180; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v181; // [rsp+1F0h] [rbp+F0h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v182; // [rsp+200h] [rbp+100h] BYREF

  v172 = a4;
  v5 = 0;
  v180 = a3;
  v179 = a2;
  v181 = a5;
  v7 = -1;
  v132 = -1;
  v8 = 255;
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 4);
    v10 = *((unsigned int *)this + 10);
    v11 = *((_QWORD *)this + 3);
    v159 = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(v9 + 8))(v11, v10, v5, &v159);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry3(1LL, v12, *((unsigned int *)this + 10), v5);
      v120 = *((unsigned int *)this + 10);
      WdLogGlobalForLineNumber = 652;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnEnumPathTargetsFromSource. (Status = 0x%I64x, m_VidPnSourceId "
         "= 0x%I64x, PathIndex = 0x%I64x)",
        v13,
        v120,
        v5,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    v14 = v159;
    if ( v159 == -1 )
      break;
    ++*((_DWORD *)this + 13);
    v15 = *((unsigned int *)this + 10);
    v160 = 0;
    v158 = -1;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int16 *))(*((_QWORD *)this + 4) + 112LL))(
            *((_QWORD *)this + 3),
            v15,
            v14,
            &v160,
            &v158);
    v13 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry3(2LL, v16, v7, *((unsigned int *)this + 10));
      v121 = *((unsigned int *)this + 10);
      WdLogGlobalForLineNumber = 675;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnGetPathImportance. (Status = 0x%I64x, PrimVidPnTargetId = 0x%I"
         "64x, m_VidPnSourceId = 0x%I64x)",
        v13,
        v7,
        v121,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    if ( v7 == -1 || v160 < v8 )
    {
      v7 = v159;
      v8 = v160;
      v132 = v159;
      *((_DWORD *)this + 12) = v5;
    }
    ++v5;
  }
  v17 = v132;
  if ( v132 == -1 && *((_DWORD *)this + 13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 691;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(PrimVidPnTargetId != D3DDDI_ID_UNINITIALIZED) || (m_CloneGroupSize == 0)",
      691LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = *(_QWORD *)this;
  v178 = *(_QWORD **)this;
  v162 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v178, v132, 0LL, &v162);
  v20 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry1(2LL, VideoOutputTechnology);
    v21 = L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 703;
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v21, v20, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v20;
  }
  if ( v162 == D3DKMDT_VOT_MIRACAST
    || v162 == D3DKMDT_VOT_INDIRECT_WIRED
    || (v129 = 0, v162 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
  {
    v129 = 1;
  }
  if ( *(_QWORD *)(v18 + 3128)
    || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*(ADAPTER_DISPLAY **)(v18 + 3120)),
        v128 = 1,
        !DisplayOnlyDriverUseRawModes) )
  {
    v128 = 0;
  }
  memset(&v182, 0, sizeof(v182));
  if ( DmmGetPreferredMonitorSourceModeOnTarget(*(void **)this, v132, &v182) < 0 )
    memset(&v182, 0, sizeof(v182));
  v24 = *((_QWORD *)this + 2);
  v25 = *((unsigned int *)this + 10);
  v26 = *((_QWORD *)this + 1);
  v161 = 0LL;
  v173 = 0LL;
  v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v24 + 8);
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v139 = 0;
  v135[0] = 0;
  v28 = v27(v26, v25, &v173, &v161);
  v20 = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry1(2LL, v28);
    v21 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireSourceModeSet. (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 733;
    goto LABEL_15;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v135,
    v173,
    *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
    *((_QWORD *)this + 1));
  v29 = v136;
  v174 = 0LL;
  *(_QWORD *)v141 = 0LL;
  v30 = *(__int64 (__fastcall **)(__int64, __int64 *))(v161 + 8);
  v142 = 0LL;
  v143 = 0LL;
  v144 = 0;
  v140[0] = 0;
  v31 = v30(v136, &v174);
  v20 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry1(2LL, v31);
    WdLogGlobalForLineNumber = 753;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    v32 = v135[0] == 0;
LABEL_30:
    if ( !v32 )
      v137(v138, v29);
    return (unsigned int)v20;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v140,
    v174,
    *(_QWORD *)(v161 + 32),
    v29);
  *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*((_QWORD *)this + 1)) + 296) = 1;
  while ( 1 )
  {
    v81 = *(unsigned int **)v141;
    if ( !*(_QWORD *)v141 )
    {
      v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v161 + 48))(v29, 0LL);
      v83 = v82;
      if ( v82 >= 0 )
      {
        v102 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*((_QWORD *)this + 1));
        v103 = v179;
        *(_BYTE *)(v102 + 296) = 0;
        v104 = *v103;
        if ( *v103 )
          goto LABEL_224;
        v105 = *((unsigned int *)this + 20);
        if ( !(_DWORD)v105 )
          goto LABEL_224;
        v106 = 44 * v105;
        if ( !is_mul_ok(v105, 0x2CuLL) )
          v106 = -1LL;
        v104 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v106, 0x4B677844u, 256LL);
        *v103 = v104;
        if ( v104 )
        {
LABEL_224:
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (OBTAIN_MODES_ON_SOURCE *)((char *)this + 64),
                          *((unsigned int *)this + 20),
                          v104,
                          v180);
          if ( UniqueModes < 0 )
          {
            v108 = UniqueModes;
            WdLogSingleEntry1(1LL, UniqueModes);
            WdLogGlobalForLineNumber = 1294;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"GetUniqueModesFromUnionList failed. (Status = 0x%I64x)",
              v108,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v109 = v172;
          if ( v172 )
          {
            if ( *v172 )
            {
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v172);
              *v109 = 0LL;
            }
            v110 = *((unsigned int *)this + 30);
            if ( (_DWORD)v110 )
            {
              v111 = 44 * v110;
              if ( !is_mul_ok(*((unsigned int *)this + 30), 0x2CuLL) )
                v111 = -1LL;
              v112 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v111, 0x4B677844u, 256LL);
              *v109 = v112;
              if ( v112 )
              {
                v113 = MODE_UNION_LIST::GetUniqueModes(
                         (OBTAIN_MODES_ON_SOURCE *)((char *)this + 104),
                         *((unsigned int *)this + 30),
                         v112,
                         v181);
                if ( v113 < 0 )
                {
                  v114 = v113;
                  WdLogSingleEntry1(1LL, v113);
                  WdLogGlobalForLineNumber = 1321;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"GetUniqueModesFromInvalidModesUnionList failed. (Status = 0x%I64x)",
                    v114,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              else
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 1311;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145LL,
                  0xFFFFFFFFLL,
                  L"Unable to allocate mode list memory for invalid modes.",
                  1311LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
          }
          if ( v140[0] )
            v142(v143, 0LL);
          if ( v135[0] )
            v137(v138, v29);
          return 0LL;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1283;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Unable to allocate mode list memory.",
            1283LL,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v140[0] )
            v142(v143, 0LL);
          if ( v135[0] )
            v137(v138, v29);
          return 3221225495LL;
        }
      }
      WdLogSingleEntry3(2LL, v82, v29, 0xFFFFFFFFLL);
      WdLogGlobalForLineNumber = 1269;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, spVidPnSourceModeInfo.GetRe"
         "source() = 0x%I64x, spVidPnSourceModeInfo.GetResource()->Id = 0x%I64x)",
        v83,
        v29,
        0xFFFFFFFFLL,
        0LL,
        0LL);
      if ( v140[0] )
        v142(v143, 0LL);
      v100 = v135[0] == 0;
LABEL_195:
      if ( !v100 )
        v137(v138, v29);
      return (unsigned int)v83;
    }
    v34 = *(_DWORD *)(*(_QWORD *)v141 + 4LL);
    if ( ((v34 - 1) & 0xFFFFFFFC) == 0
      && v34 != 2
      && *(_DWORD *)(*(_QWORD *)v141 + 8LL) == *(_DWORD *)(*(_QWORD *)v141 + 16LL)
      && *(_DWORD *)(*(_QWORD *)v141 + 12LL) == *(_DWORD *)(*(_QWORD *)v141 + 20LL) )
    {
      break;
    }
LABEL_122:
    v170 = 0LL;
    v80 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v161 + 16))(v29, v81, &v170);
    v13 = v80;
    if ( v80 < 0 )
    {
      WdLogSingleEntry1(2LL, v80);
      v101 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 1252;
      goto LABEL_206;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v140,
      v170,
      *(_QWORD *)(v161 + 32),
      v29);
  }
  LOBYTE(v33) = 1;
  v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v161 + 40))(v29, (unsigned int)**(_DWORD **)v141, v33);
  if ( v35 < 0 )
  {
    WdLogSingleEntry2(3LL, v35, *v81);
    WdLogGlobalForLineNumber = 799;
    goto LABEL_122;
  }
  v36 = *((_QWORD *)this + 2);
  v37 = *((_QWORD *)this + 1);
  v156 = 0LL;
  v175 = 0LL;
  v38 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(v36 + 24);
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0;
  v146[0] = 0;
  v39 = v38(v37, (unsigned int)v17, &v175, &v156);
  v13 = v39;
  if ( v39 < 0 )
  {
    WdLogSingleEntry1(2LL, v39);
    v101 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireTargetModeSet. (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 818;
LABEL_206:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v101, v13, 0LL, 0LL, 0LL, 0LL);
    if ( v140[0] )
      v142(v143, v81);
    if ( v135[0] )
      v137(v138, v29);
    return (unsigned int)v13;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v146,
    v175,
    *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
    *((_QWORD *)this + 1));
  v40 = v147;
  v176 = 0LL;
  *(_QWORD *)v152 = 0LL;
  v41 = *(__int64 (__fastcall **)(__int64, __int64 *))(v156 + 8);
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0;
  v151[0] = 0;
  v171 = v147;
  v42 = v41(v147, &v176);
  v43 = v42;
  if ( v42 < 0 )
  {
    WdLogSingleEntry1(2LL, v42);
    WdLogGlobalForLineNumber = 838;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)",
      v43,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v146[0] )
      v148(v149, v40);
    if ( v140[0] )
      v142(v143, v81);
    if ( v135[0] )
      v137(v138, v29);
    return (unsigned int)v43;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v151,
    v176,
    *(_QWORD *)(v156 + 32),
    v40);
  v45 = *(unsigned int **)v152;
  if ( !*(_QWORD *)v152 )
  {
LABEL_116:
    v78 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v156 + 56))(v40, 0LL);
    v79 = v78;
    if ( v78 < 0 )
    {
      if ( v45 )
        v98 = *v45;
      else
        v98 = -1;
      v83 = v79;
      WdLogSingleEntry3(2LL, v79, v40, v98);
      WdLogGlobalForLineNumber = 1238;
      if ( v45 )
        v99 = *v45;
      else
        v99 = 0xFFFFFFFFLL;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNTARGETMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, shVidPnTargetModeSet.GetRes"
         "ource() = 0x%I64x, spVidPnTargetModeInfo.GetResource()->Id = 0x%I64x)",
        v83,
        v40,
        v99,
        0LL,
        0LL);
      if ( v151[0] )
        v153(v154, v45);
      if ( v146[0] )
        v148(v149, v40);
      if ( v140[0] )
        v142(v143, v81);
      v100 = v135[0] == 0;
      goto LABEL_195;
    }
    if ( v151[0] )
      v153(v154, v45);
    v155 = -1073741212;
    v151[0] = 0;
    *(_QWORD *)v152 = 0LL;
    v153 = 0LL;
    v154 = 0LL;
    if ( v146[0] )
      v148(v149, v40);
    v146[0] = 0;
    v147 = 0LL;
    v148 = 0LL;
    v149 = 0LL;
    v150 = -1073741212;
    goto LABEL_122;
  }
  while ( 1 )
  {
    LOBYTE(v44) = 1;
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v156 + 48))(v40, *v45, v44);
    if ( v46 < 0 )
    {
      WdLogSingleEntry2(3LL, v46, *v45);
      WdLogGlobalForLineNumber = 858;
      goto LABEL_114;
    }
    v163 = 0;
    v127 = 0;
    if ( v81[1] - 3 <= 1 || v128 )
    {
      v127 = 1;
    }
    else
    {
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v156 + 64))(v40, *v45, &v127, &v163);
      v20 = v48;
      if ( v48 == -1071774920 )
      {
        v52 = WdLogNewEntry5_WdTrace(v50, v49, v47, v51);
        *(_QWORD *)(v52 + 24) = (unsigned int)v17;
        *(_QWORD *)(v52 + 32) = *((unsigned int *)this + 10);
        WdLogGlobalForLineNumber = 883;
      }
      else if ( v48 < 0 )
      {
        WdLogSingleEntry2(2LL, v48, v45);
        WdLogGlobalForLineNumber = 888;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to determine whether mode is supported by monitor. (Status = 0x%I64x, spVidPnTargetModeInfo.GetResource() = 0x%I64x)",
          v20,
          (__int64)v45,
          0LL,
          0LL,
          0LL);
LABEL_50:
        if ( v151[0] )
          v153(v154, v45);
        if ( v146[0] )
          v148(v149, v40);
        if ( v140[0] )
          v142(v143, v81);
        v32 = v135[0] == 0;
        goto LABEL_30;
      }
    }
    v126 = 0;
    if ( v182.VideoSignalInfo.ActiveSize.cx == v81[2] && v182.VideoSignalInfo.ActiveSize.cy == v81[3] )
    {
      LOBYTE(v47) = v129;
      if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v156 + 80))(
             v45,
             &v182,
             v47,
             &v126) < 0 )
        v126 = 0;
    }
    v53 = *((_QWORD *)this + 4);
    v167 = 0LL;
    v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v53 + 24))(
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 10),
            (unsigned int)v17,
            &v167);
    v20 = v54;
    if ( v54 < 0 )
    {
      WdLogSingleEntry1(2LL, v54);
      v96 = L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 925;
      goto LABEL_181;
    }
    v55 = v167[4];
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 4) + 32LL))(*((_QWORD *)this + 3));
    if ( v81[2] == v45[5] && v81[3] == v45[6] )
      v56 = (char)v55;
    else
      v56 = -((*(_BYTE *)&v55 & 0x1E) != 0);
    v157 = 0;
    v57 = &unk_1400E68A0;
    v165 = (char *)&unk_1400E68A0;
    if ( (v56 & 1) != 0 )
      break;
LABEL_113:
    v76 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 4) + 72LL))(
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 10),
            (unsigned int)v17,
            0LL);
    LODWORD(v133) = v76;
    if ( v76 < 0 )
    {
      v97 = v76;
      WdLogSingleEntry4(2LL, v76, *((unsigned int *)this + 10), *((_QWORD *)this + 3), v17);
      v123 = *((_QWORD *)this + 3);
      v119 = *((unsigned int *)this + 10);
      WdLogGlobalForLineNumber = 1208;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Unable to unpin scaling. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, m_hVidPnTopology = 0x%I64x, PrimVidPnTargetId = 0x%I64x)",
        v97,
        v119,
        v123,
        v17,
        0LL);
LABEL_146:
      if ( v151[0] )
        v153(v154, v45);
      if ( v146[0] )
      {
        v91 = v40;
        goto LABEL_161;
      }
LABEL_162:
      if ( v140[0] )
        v142(v143, v81);
      v89 = v135[0] == 0;
      goto LABEL_165;
    }
LABEL_114:
    v169 = 0LL;
    v77 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v156 + 16))(v40, v45, &v169);
    v20 = v77;
    if ( v77 < 0 )
    {
      WdLogSingleEntry1(2LL, v77);
      v96 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 1221;
LABEL_181:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v96, v20, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_50;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v151,
      v169,
      *(_QWORD *)(v156 + 32),
      v40);
    v45 = *(unsigned int **)v152;
    if ( !*(_QWORD *)v152 )
      goto LABEL_116;
  }
  while ( 2 )
  {
    *(_DWORD *)v145 = *v57;
    if ( !BmlIsSupportedPathScaling(*(enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v145, v55) )
      goto LABEL_112;
    v115[0] = 1;
    v58 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(*((_QWORD *)this + 4) + 64LL))(
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 10),
            (unsigned int)v17,
            *(unsigned int *)v145,
            *(char **)v115);
    LODWORD(v133) = v58;
    if ( v58 == -1071774970 )
    {
      v87 = *(int *)v145;
      WdLogSingleEntry4(1LL, *(int *)v145, *((unsigned int *)this + 10), v17, -1071774970LL);
      v88 = L"Failed to pin the reported-as-supported scaling mode 0x%I64x on the path (0x%I64x, 0x%I64x) because of not s"
             "upported by driver, returning 0x%I64x.";
      WdLogGlobalForLineNumber = 976;
LABEL_169:
      DxgkLogInternalTriageEvent(
        0LL,
        262147LL,
        0xFFFFFFFFLL,
        v88,
        v87,
        *((unsigned int *)this + 10),
        v17,
        -1071774970LL,
        0LL);
      if ( v151[0] )
        v153(v154, v45);
      if ( v146[0] )
        v148(v149, v40);
      if ( v140[0] )
        v142(v143, v81);
      if ( v135[0] )
        v137(v138, v29);
      return 3223192326LL;
    }
    if ( v58 < 0 )
    {
      v93 = *(int *)v145;
      v94 = v132;
      v95 = v58;
      WdLogSingleEntry5(2LL, v58, *((unsigned int *)this + 10), v132, *((_QWORD *)this + 3), *(int *)v145);
      v125 = *((_QWORD *)this + 3);
      v118 = *((unsigned int *)this + 10);
      WdLogGlobalForLineNumber = 982;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Unable to set scaling on the path. ( Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTargetId = 0x%I64x, m"
         "_hVidPnTopology = 0x%I64x, PathScaling = 0x%I64x)",
        v95,
        v118,
        v94,
        v125,
        v93);
      if ( v151[0] )
        v153(v154, v45);
      if ( v146[0] )
      {
        v91 = v171;
LABEL_161:
        v148(v149, v91);
      }
      goto LABEL_162;
    }
    v59 = *((_QWORD *)this + 4);
    v168 = 0LL;
    v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT **))(v59 + 24))(
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 10),
            (unsigned int)v17,
            &v168);
    LODWORD(v133) = v60;
    if ( v60 < 0 )
    {
      v92 = v60;
      WdLogSingleEntry1(2LL, v60);
      WdLogGlobalForLineNumber = 997;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)",
        v92,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v151[0] )
        v153(v154, v45);
      if ( v146[0] )
        v148(v149, v40);
      if ( v140[0] )
        v142(v143, v81);
      v89 = v135[0] == 0;
      goto LABEL_165;
    }
    v61 = v168[6];
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 4) + 32LL))(*((_QWORD *)this + 3));
    v62 = D3DKMDT_VPPR_IDENTITY;
    v131 = 1;
LABEL_73:
    if ( !BmlIsSupportedPathRotation(v62, v61) )
      goto LABEL_109;
    v130[0] = 0;
    memset(&v177, 0, sizeof(v177));
    v63 = v178[391] || !*(_BYTE *)(v178[390] + 289LL) || v131 == 1;
    v64 = v126 && *(_DWORD *)v145 == 1;
    PopulateDisplayModeFromPresentPath(
      (int)v81,
      (int)v45,
      *(int *)v145,
      v131,
      v127,
      v64,
      v63,
      v163,
      (__int64)&v177,
      v130);
    if ( *((_DWORD *)this + 13) > 1u )
    {
      v115[0] = 0;
      v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)this + 4) + 80LL))(
              *((_QWORD *)this + 3),
              *((unsigned int *)this + 10),
              v132,
              (unsigned int)v131,
              *(_DWORD *)v115);
      v134 = v66;
      if ( v66 == -1071774970 )
      {
        v17 = v132;
        v87 = v131;
        WdLogSingleEntry4(1LL, v131, *((unsigned int *)this + 10), v132, -1071774970LL);
        v88 = L"Failed to pin the reported-as-supported rotation mode 0x%I64x on the path (0x%I64x, 0x%I64x) because of no"
               "t supported by driver, returning 0x%I64x.";
        WdLogGlobalForLineNumber = 1063;
        goto LABEL_169;
      }
      if ( v66 < 0 )
      {
        v84 = v131;
        v85 = v132;
        v86 = v66;
        WdLogSingleEntry5(2LL, v66, *((unsigned int *)this + 10), v132, *((_QWORD *)this + 3), v131);
        v124 = *((_QWORD *)this + 3);
        v116 = *((unsigned int *)this + 10);
        WdLogGlobalForLineNumber = 1069;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Unable to set rotation on the path. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTargetId = 0x%I64x,"
           " m_hVidPnTopology = 0x%I64x, PathRotation = 0x%I64x)",
          v86,
          v116,
          v85,
          v124,
          v84);
        if ( v151[0] )
          v153(v154, v45);
        if ( v146[0] )
          v148(v149, v171);
        if ( v140[0] )
          v142(v143, v81);
        v68 = v135[0] == 0;
        goto LABEL_134;
      }
    }
    if ( v177.Format != D3DDDIFMT_A8R8G8B8 && *((_BYTE *)this + 44)
      || v177.Format <= (unsigned int)D3DDDIFMT_P8 && (v67 = 0x20003900000LL, _bittest64(&v67, v177.Format)) )
    {
      if ( v172 )
      {
        v134 = MODE_UNION_LIST::AddUniqueMode((OBTAIN_MODES_ON_SOURCE *)((char *)this + 104), &v177);
        if ( v134 < 0 )
        {
          if ( v151[0] )
            v153(v154, v45);
          if ( v146[0] )
            v148(v149, v40);
          if ( v140[0] )
            v142(v143, v81);
          v68 = v135[0] == 0;
LABEL_134:
          if ( !v68 )
            v137(v138, v29);
          return (unsigned int)v134;
        }
      }
LABEL_109:
      v62 = v131 + 1;
      v131 = v62;
      if ( v62 > D3DKMDT_VPPR_ROTATE270 )
      {
        v17 = v132;
        if ( *((_DWORD *)this + 13) > 1u )
        {
          v75 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 4) + 88LL))(
                  *((_QWORD *)this + 3),
                  *((unsigned int *)this + 10),
                  v132,
                  0LL);
          LODWORD(v133) = v75;
          if ( v75 < 0 )
          {
            v90 = v75;
            WdLogSingleEntry4(2LL, v75, *((_QWORD *)this + 3), *((unsigned int *)this + 10), v17);
            v122 = *((unsigned int *)this + 10);
            v117 = *((_QWORD *)this + 3);
            WdLogGlobalForLineNumber = 1194;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Unable to unpin rotation. (Status = 0x%I64x, m_hVidPnTopology = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVi"
               "dPnTargetId = 0x%I64x)",
              v90,
              v117,
              v122,
              v17,
              0LL);
            goto LABEL_146;
          }
        }
LABEL_112:
        v57 = v165 + 4;
        ++v157;
        v165 += 4;
        if ( v157 >= 5 )
          goto LABEL_113;
        continue;
      }
      goto LABEL_73;
    }
    break;
  }
  LODWORD(v133) = OBTAIN_MODES_ON_SOURCE::_AddMode(this, &v177, v65, v130[0] != 0);
  if ( (int)v133 < 0 )
    goto LABEL_138;
  v164 = 0LL;
  DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v45 + 2), &v164);
  if ( IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(v45 + 17))
    || *v69 == v164.Numerator && v69[1] == v164.Denominator )
  {
    goto LABEL_109;
  }
  v70 = 0LL;
  v134 = 0;
  v166 = (D3DDDI_RATIONAL *)&unk_1400E6868;
  while ( 1 )
  {
    v133 = (const struct _D3DDDI_RATIONAL *)((char *)&unk_1400E6868 + 8 * v70);
    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v164, v133, 0)
      && (*(int (__fastcall **)(__int64, _QWORD, const struct _D3DDDI_RATIONAL *, _QWORD))(v156 + 88))(
           v40,
           *v45,
           v133,
           (unsigned int)(v71 + 1)) >= 0 )
    {
      Denominator = v166->Denominator;
      Numerator = v166->Numerator;
      v177.RefreshRate = *v166;
      v177.IntegerRefreshRate = DivideAndRound(Numerator, Denominator);
      if ( !MODE_UNION_LIST::FindMode((OBTAIN_MODES_ON_SOURCE *)((char *)this + 64), &v177) )
      {
        *((_DWORD *)&v177.Flags + 1) |= 0x100u;
        LODWORD(v133) = OBTAIN_MODES_ON_SOURCE::_AddMode(this, &v177, v74, 0);
        if ( (int)v133 < 0 )
          break;
      }
    }
    ++v166;
    v70 = (unsigned int)(v134 + 1);
    v134 = v70;
    if ( (unsigned int)v70 >= 7 )
      goto LABEL_109;
  }
LABEL_138:
  if ( v151[0] )
    v153(v154, v45);
  if ( v146[0] )
    v148(v149, v40);
  if ( v140[0] )
    v142(v143, v81);
  v89 = v135[0] == 0;
LABEL_165:
  if ( !v89 )
    v137(v138, v29);
  return (unsigned int)v133;
}
