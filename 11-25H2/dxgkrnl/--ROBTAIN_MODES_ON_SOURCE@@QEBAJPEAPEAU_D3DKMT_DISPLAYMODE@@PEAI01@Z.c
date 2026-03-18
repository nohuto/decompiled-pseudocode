/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1403DE024
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1403DD5F4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x14003953C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14003E4C0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x140045E18 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x14004CE00 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004DBCC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x140063148 (-DivideAndRound@@YA_K_K0@Z.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14006EA44 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1402A8280 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1402C1CE8 (_PopulateDisplayModeFromPresentPath.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1402D3750 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1402D3DDC (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     ?_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z @ 0x14030BA70 (-_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x14030BADC (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1403A4BC4 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403C3A74 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x140404F04 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
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
  __int64 v103; // r9
  struct _D3DKMT_DISPLAYMODE **v104; // rbx
  struct _D3DKMT_DISPLAYMODE *v105; // rax
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rax
  int UniqueModes; // eax
  __int64 v109; // r9
  __int64 v110; // rbx
  _QWORD *v111; // rbx
  __int64 v112; // rcx
  unsigned __int64 v113; // rax
  struct _D3DKMT_DISPLAYMODE *v114; // rax
  int v115; // eax
  __int64 v116; // rbx
  char v117[8]; // [rsp+20h] [rbp-E0h]
  __int64 v118; // [rsp+28h] [rbp-D8h]
  __int64 v119; // [rsp+28h] [rbp-D8h]
  __int64 v120; // [rsp+28h] [rbp-D8h]
  __int64 v121; // [rsp+28h] [rbp-D8h]
  __int64 v122; // [rsp+28h] [rbp-D8h]
  __int64 v123; // [rsp+30h] [rbp-D0h]
  __int64 v124; // [rsp+30h] [rbp-D0h]
  __int64 v125; // [rsp+30h] [rbp-D0h]
  __int64 v126; // [rsp+38h] [rbp-C8h]
  __int64 v127; // [rsp+38h] [rbp-C8h]
  char v128; // [rsp+50h] [rbp-B0h] BYREF
  char v129; // [rsp+51h] [rbp-AFh] BYREF
  char v130; // [rsp+52h] [rbp-AEh]
  char v131; // [rsp+53h] [rbp-ADh]
  unsigned __int8 v132[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v133; // [rsp+58h] [rbp-A8h]
  unsigned int v134; // [rsp+5Ch] [rbp-A4h]
  const struct _D3DDDI_RATIONAL *v135; // [rsp+60h] [rbp-A0h]
  int v136; // [rsp+68h] [rbp-98h]
  char v137[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v138; // [rsp+78h] [rbp-88h]
  void (__fastcall *v139)(__int64, __int64); // [rsp+80h] [rbp-80h]
  __int64 v140; // [rsp+88h] [rbp-78h]
  int v141; // [rsp+90h] [rbp-70h]
  char v142[8]; // [rsp+98h] [rbp-68h] BYREF
  int v143[2]; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v144)(__int64, unsigned int *); // [rsp+A8h] [rbp-58h]
  __int64 v145; // [rsp+B0h] [rbp-50h]
  int v146; // [rsp+B8h] [rbp-48h]
  char v147[4]; // [rsp+C0h] [rbp-40h]
  char v148[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v149; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v150)(__int64, __int64); // [rsp+D8h] [rbp-28h]
  __int64 v151; // [rsp+E0h] [rbp-20h]
  int v152; // [rsp+E8h] [rbp-18h]
  char v153[8]; // [rsp+F0h] [rbp-10h] BYREF
  int v154[2]; // [rsp+F8h] [rbp-8h]
  void (__fastcall *v155)(__int64, unsigned int *); // [rsp+100h] [rbp+0h]
  __int64 v156; // [rsp+108h] [rbp+8h]
  int v157; // [rsp+110h] [rbp+10h]
  __int64 v158; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v159; // [rsp+120h] [rbp+20h]
  __int16 v160; // [rsp+124h] [rbp+24h] BYREF
  unsigned int v161; // [rsp+128h] [rbp+28h] BYREF
  int v162; // [rsp+12Ch] [rbp+2Ch] BYREF
  __int64 v163; // [rsp+130h] [rbp+30h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v164; // [rsp+138h] [rbp+38h] BYREF
  int v165; // [rsp+13Ch] [rbp+3Ch] BYREF
  struct _D3DDDI_RATIONAL v166; // [rsp+140h] [rbp+40h] BYREF
  char *v167; // [rsp+148h] [rbp+48h]
  D3DDDI_RATIONAL *v168; // [rsp+150h] [rbp+50h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v169; // [rsp+158h] [rbp+58h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *v170; // [rsp+160h] [rbp+60h] BYREF
  __int64 v171; // [rsp+168h] [rbp+68h] BYREF
  __int64 v172; // [rsp+170h] [rbp+70h] BYREF
  __int64 v173; // [rsp+178h] [rbp+78h]
  void **v174; // [rsp+180h] [rbp+80h]
  __int64 v175; // [rsp+188h] [rbp+88h] BYREF
  __int64 v176; // [rsp+190h] [rbp+90h] BYREF
  __int64 v177; // [rsp+198h] [rbp+98h] BYREF
  __int64 v178; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _D3DKMT_DISPLAYMODE v179; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD *v180; // [rsp+1D8h] [rbp+D8h]
  struct _D3DKMT_DISPLAYMODE **v181; // [rsp+1E0h] [rbp+E0h]
  unsigned int *v182; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v183; // [rsp+1F0h] [rbp+F0h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v184; // [rsp+200h] [rbp+100h] BYREF

  v174 = a4;
  v5 = 0;
  v182 = a3;
  v181 = a2;
  v183 = a5;
  v7 = -1;
  v134 = -1;
  v8 = 255;
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 4);
    v10 = *((unsigned int *)this + 10);
    v11 = *((_QWORD *)this + 3);
    v161 = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(v9 + 8))(v11, v10, v5, &v161);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry3(1LL, v12, *((unsigned int *)this + 10), v5);
      v122 = *((unsigned int *)this + 10);
      WdLogGlobalForLineNumber = 652;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnEnumPathTargetsFromSource. (Status = 0x%I64x, m_VidPnSourceId "
         "= 0x%I64x, PathIndex = 0x%I64x)",
        v13,
        v122,
        v5,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    v14 = v161;
    if ( v161 == -1 )
      break;
    ++*((_DWORD *)this + 13);
    v15 = *((unsigned int *)this + 10);
    v162 = 0;
    v160 = -1;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int *, __int16 *))(*((_QWORD *)this + 4) + 112LL))(
            *((_QWORD *)this + 3),
            v15,
            v14,
            &v162,
            &v160);
    v13 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry3(2LL, v16, v7, *((unsigned int *)this + 10));
      v123 = *((unsigned int *)this + 10);
      WdLogGlobalForLineNumber = 675;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnGetPathImportance. (Status = 0x%I64x, PrimVidPnTargetId = 0x%I"
         "64x, m_VidPnSourceId = 0x%I64x)",
        v13,
        v7,
        v123,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    if ( v7 == -1 || v162 < v8 )
    {
      v7 = v161;
      v8 = v162;
      v134 = v161;
      *((_DWORD *)this + 12) = v5;
    }
    ++v5;
  }
  v17 = v134;
  if ( v134 == -1 && *((_DWORD *)this + 13) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 691;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(PrimVidPnTargetId != D3DDDI_ID_UNINITIALIZED) || (m_CloneGroupSize == 0)",
      691LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = *(_QWORD *)this;
  v180 = *(_QWORD **)this;
  v164 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v180, v134, 0LL, &v164);
  v20 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry1(2LL, VideoOutputTechnology);
    v21 = L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 703;
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v21, v20, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v20;
  }
  if ( v164 == D3DKMDT_VOT_MIRACAST
    || v164 == D3DKMDT_VOT_INDIRECT_WIRED
    || (v131 = 0, v164 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
  {
    v131 = 1;
  }
  if ( *(_QWORD *)(v18 + 3128)
    || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*(ADAPTER_DISPLAY **)(v18 + 3120)),
        v130 = 1,
        !DisplayOnlyDriverUseRawModes) )
  {
    v130 = 0;
  }
  memset(&v184, 0, sizeof(v184));
  if ( (int)DmmGetPreferredMonitorSourceModeOnTarget(*(DXGADAPTER **)this, v134, &v184) < 0 )
    memset(&v184, 0, sizeof(v184));
  v24 = *((_QWORD *)this + 2);
  v25 = *((unsigned int *)this + 10);
  v26 = *((_QWORD *)this + 1);
  v163 = 0LL;
  v175 = 0LL;
  v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v24 + 8);
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0;
  v137[0] = 0;
  v28 = v27(v26, v25, &v175, &v163);
  v20 = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry1(2LL, v28);
    v21 = L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireSourceModeSet. (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 733;
    goto LABEL_15;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v137,
    v175,
    *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
    *((_QWORD *)this + 1));
  v29 = v138;
  v176 = 0LL;
  *(_QWORD *)v143 = 0LL;
  v30 = *(__int64 (__fastcall **)(__int64, __int64 *))(v163 + 8);
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0;
  v142[0] = 0;
  v31 = v30(v138, &v176);
  v20 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry1(2LL, v31);
    WdLogGlobalForLineNumber = 753;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    v32 = v137[0] == 0;
LABEL_30:
    if ( !v32 )
      v139(v140, v29);
    return (unsigned int)v20;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v142,
    v176,
    *(_QWORD *)(v163 + 32),
    v29);
  *(_BYTE *)(ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*((_QWORD *)this + 1)) + 296) = 1;
  while ( 1 )
  {
    v81 = *(unsigned int **)v143;
    if ( !*(_QWORD *)v143 )
    {
      v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v163 + 48))(v29, 0LL);
      v83 = v82;
      if ( v82 >= 0 )
      {
        v102 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*((_QWORD *)this + 1));
        v104 = v181;
        *(_BYTE *)(v102 + 296) = 0;
        v105 = *v104;
        if ( *v104 )
          goto LABEL_224;
        v106 = *((unsigned int *)this + 20);
        if ( !(_DWORD)v106 )
          goto LABEL_224;
        v107 = 44 * v106;
        if ( !is_mul_ok(v106, 0x2CuLL) )
          v107 = -1LL;
        v105 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v107, 0x4B677844u, 256LL, v103);
        *v104 = v105;
        if ( v105 )
        {
LABEL_224:
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (OBTAIN_MODES_ON_SOURCE *)((char *)this + 64),
                          *((unsigned int *)this + 20),
                          v105,
                          v182);
          if ( UniqueModes < 0 )
          {
            v110 = UniqueModes;
            WdLogSingleEntry1(1LL, UniqueModes);
            WdLogGlobalForLineNumber = 1294;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"GetUniqueModesFromUnionList failed. (Status = 0x%I64x)",
              v110,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v111 = v174;
          if ( v174 )
          {
            if ( *v174 )
            {
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*v174);
              *v111 = 0LL;
            }
            v112 = *((unsigned int *)this + 30);
            if ( (_DWORD)v112 )
            {
              v113 = 44 * v112;
              if ( !is_mul_ok(*((unsigned int *)this + 30), 0x2CuLL) )
                v113 = -1LL;
              v114 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v113, 0x4B677844u, 256LL, v109);
              *v111 = v114;
              if ( v114 )
              {
                v115 = MODE_UNION_LIST::GetUniqueModes(
                         (OBTAIN_MODES_ON_SOURCE *)((char *)this + 104),
                         *((unsigned int *)this + 30),
                         v114,
                         v183);
                if ( v115 < 0 )
                {
                  v116 = v115;
                  WdLogSingleEntry1(1LL, v115);
                  WdLogGlobalForLineNumber = 1321;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"GetUniqueModesFromInvalidModesUnionList failed. (Status = 0x%I64x)",
                    v116,
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
                  262145,
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
          if ( v142[0] )
            v144(v145, 0LL);
          if ( v137[0] )
            v139(v140, v29);
          return 0LL;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1283;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Unable to allocate mode list memory.",
            1283LL,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v142[0] )
            v144(v145, 0LL);
          if ( v137[0] )
            v139(v140, v29);
          return 3221225495LL;
        }
      }
      WdLogSingleEntry3(2LL, v82, v29, 0xFFFFFFFFLL);
      WdLogGlobalForLineNumber = 1269;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, spVidPnSourceModeInfo.GetRe"
         "source() = 0x%I64x, spVidPnSourceModeInfo.GetResource()->Id = 0x%I64x)",
        v83,
        v29,
        0xFFFFFFFFLL,
        0LL,
        0LL);
      if ( v142[0] )
        v144(v145, 0LL);
      v100 = v137[0] == 0;
LABEL_195:
      if ( !v100 )
        v139(v140, v29);
      return (unsigned int)v83;
    }
    v34 = *(_DWORD *)(*(_QWORD *)v143 + 4LL);
    if ( ((v34 - 1) & 0xFFFFFFFC) == 0
      && v34 != 2
      && *(_DWORD *)(*(_QWORD *)v143 + 8LL) == *(_DWORD *)(*(_QWORD *)v143 + 16LL)
      && *(_DWORD *)(*(_QWORD *)v143 + 12LL) == *(_DWORD *)(*(_QWORD *)v143 + 20LL) )
    {
      break;
    }
LABEL_122:
    v172 = 0LL;
    v80 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v163 + 16))(v29, v81, &v172);
    v13 = v80;
    if ( v80 < 0 )
    {
      WdLogSingleEntry1(2LL, v80);
      v101 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 1252;
      goto LABEL_206;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v142,
      v172,
      *(_QWORD *)(v163 + 32),
      v29);
  }
  LOBYTE(v33) = 1;
  v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v163 + 40))(v29, (unsigned int)**(_DWORD **)v143, v33);
  if ( v35 < 0 )
  {
    WdLogSingleEntry2(3LL, v35, *v81);
    WdLogGlobalForLineNumber = 799;
    goto LABEL_122;
  }
  v36 = *((_QWORD *)this + 2);
  v37 = *((_QWORD *)this + 1);
  v158 = 0LL;
  v177 = 0LL;
  v38 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(v36 + 24);
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0;
  v148[0] = 0;
  v39 = v38(v37, (unsigned int)v17, &v177, &v158);
  v13 = v39;
  if ( v39 < 0 )
  {
    WdLogSingleEntry1(2LL, v39);
    v101 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireTargetModeSet. (Status = 0x%I64x)";
    WdLogGlobalForLineNumber = 818;
LABEL_206:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v101, v13, 0LL, 0LL, 0LL, 0LL);
    if ( v142[0] )
      v144(v145, v81);
    if ( v137[0] )
      v139(v140, v29);
    return (unsigned int)v13;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v148,
    v177,
    *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
    *((_QWORD *)this + 1));
  v40 = v149;
  v178 = 0LL;
  *(_QWORD *)v154 = 0LL;
  v41 = *(__int64 (__fastcall **)(__int64, __int64 *))(v158 + 8);
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0;
  v153[0] = 0;
  v173 = v149;
  v42 = v41(v149, &v178);
  v43 = v42;
  if ( v42 < 0 )
  {
    WdLogSingleEntry1(2LL, v42);
    WdLogGlobalForLineNumber = 838;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)",
      v43,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v148[0] )
      v150(v151, v40);
    if ( v142[0] )
      v144(v145, v81);
    if ( v137[0] )
      v139(v140, v29);
    return (unsigned int)v43;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v153,
    v178,
    *(_QWORD *)(v158 + 32),
    v40);
  v45 = *(unsigned int **)v154;
  if ( !*(_QWORD *)v154 )
  {
LABEL_116:
    v78 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v158 + 56))(v40, 0LL);
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
        0x40000,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNTARGETMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, shVidPnTargetModeSet.GetRes"
         "ource() = 0x%I64x, spVidPnTargetModeInfo.GetResource()->Id = 0x%I64x)",
        v83,
        v40,
        v99,
        0LL,
        0LL);
      if ( v153[0] )
        v155(v156, v45);
      if ( v148[0] )
        v150(v151, v40);
      if ( v142[0] )
        v144(v145, v81);
      v100 = v137[0] == 0;
      goto LABEL_195;
    }
    if ( v153[0] )
      v155(v156, v45);
    v157 = -1073741212;
    v153[0] = 0;
    *(_QWORD *)v154 = 0LL;
    v155 = 0LL;
    v156 = 0LL;
    if ( v148[0] )
      v150(v151, v40);
    v148[0] = 0;
    v149 = 0LL;
    v150 = 0LL;
    v151 = 0LL;
    v152 = -1073741212;
    goto LABEL_122;
  }
  while ( 1 )
  {
    LOBYTE(v44) = 1;
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v158 + 48))(v40, *v45, v44);
    if ( v46 < 0 )
    {
      WdLogSingleEntry2(3LL, v46, *v45);
      WdLogGlobalForLineNumber = 858;
      goto LABEL_114;
    }
    v165 = 0;
    v129 = 0;
    if ( v81[1] - 3 <= 1 || v130 )
    {
      v129 = 1;
    }
    else
    {
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v158 + 64))(v40, *v45, &v129, &v165);
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
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to determine whether mode is supported by monitor. (Status = 0x%I64x, spVidPnTargetModeInfo.GetResource() = 0x%I64x)",
          v20,
          (__int64)v45,
          0LL,
          0LL,
          0LL);
LABEL_50:
        if ( v153[0] )
          v155(v156, v45);
        if ( v148[0] )
          v150(v151, v40);
        if ( v142[0] )
          v144(v145, v81);
        v32 = v137[0] == 0;
        goto LABEL_30;
      }
    }
    v128 = 0;
    if ( v184.VideoSignalInfo.ActiveSize.cx == v81[2] && v184.VideoSignalInfo.ActiveSize.cy == v81[3] )
    {
      LOBYTE(v47) = v131;
      if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v158 + 80))(
             v45,
             &v184,
             v47,
             &v128) < 0 )
        v128 = 0;
    }
    v53 = *((_QWORD *)this + 4);
    v169 = 0LL;
    v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v53 + 24))(
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 10),
            (unsigned int)v17,
            &v169);
    v20 = v54;
    if ( v54 < 0 )
    {
      WdLogSingleEntry1(2LL, v54);
      v96 = L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 925;
      goto LABEL_181;
    }
    v55 = v169[4];
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 4) + 32LL))(*((_QWORD *)this + 3));
    if ( v81[2] == v45[5] && v81[3] == v45[6] )
      v56 = (char)v55;
    else
      v56 = -((*(_BYTE *)&v55 & 0x1E) != 0);
    v159 = 0;
    v57 = &unk_1400EA1A0;
    v167 = (char *)&unk_1400EA1A0;
    if ( (v56 & 1) != 0 )
      break;
LABEL_113:
    v76 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 4) + 72LL))(
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 10),
            (unsigned int)v17,
            0LL);
    LODWORD(v135) = v76;
    if ( v76 < 0 )
    {
      v97 = v76;
      WdLogSingleEntry4(2LL, v76, *((unsigned int *)this + 10), *((_QWORD *)this + 3), v17);
      v125 = *((_QWORD *)this + 3);
      v121 = *((unsigned int *)this + 10);
      WdLogGlobalForLineNumber = 1208;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Unable to unpin scaling. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, m_hVidPnTopology = 0x%I64x, PrimVidPnTargetId = 0x%I64x)",
        v97,
        v121,
        v125,
        v17,
        0LL);
LABEL_146:
      if ( v153[0] )
        v155(v156, v45);
      if ( v148[0] )
      {
        v91 = v40;
        goto LABEL_161;
      }
LABEL_162:
      if ( v142[0] )
        v144(v145, v81);
      v89 = v137[0] == 0;
      goto LABEL_165;
    }
LABEL_114:
    v171 = 0LL;
    v77 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v158 + 16))(v40, v45, &v171);
    v20 = v77;
    if ( v77 < 0 )
    {
      WdLogSingleEntry1(2LL, v77);
      v96 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 1221;
LABEL_181:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v96, v20, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_50;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v153,
      v171,
      *(_QWORD *)(v158 + 32),
      v40);
    v45 = *(unsigned int **)v154;
    if ( !*(_QWORD *)v154 )
      goto LABEL_116;
  }
  while ( 2 )
  {
    *(_DWORD *)v147 = *v57;
    if ( !BmlIsSupportedPathScaling(*(enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v147, v55) )
      goto LABEL_112;
    v117[0] = 1;
    v58 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(*((_QWORD *)this + 4) + 64LL))(
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 10),
            (unsigned int)v17,
            *(unsigned int *)v147,
            *(char **)v117);
    LODWORD(v135) = v58;
    if ( v58 == -1071774970 )
    {
      v87 = *(int *)v147;
      WdLogSingleEntry4(1LL, *(int *)v147, *((unsigned int *)this + 10), v17, -1071774970LL);
      v88 = L"Failed to pin the reported-as-supported scaling mode 0x%I64x on the path (0x%I64x, 0x%I64x) because of not s"
             "upported by driver, returning 0x%I64x.";
      WdLogGlobalForLineNumber = 976;
LABEL_169:
      DxgkLogInternalTriageEvent(
        0LL,
        262147,
        0xFFFFFFFFLL,
        v88,
        v87,
        *((unsigned int *)this + 10),
        v17,
        -1071774970LL,
        0LL);
      if ( v153[0] )
        v155(v156, v45);
      if ( v148[0] )
        v150(v151, v40);
      if ( v142[0] )
        v144(v145, v81);
      if ( v137[0] )
        v139(v140, v29);
      return 3223192326LL;
    }
    if ( v58 < 0 )
    {
      v93 = *(int *)v147;
      v94 = v134;
      v95 = v58;
      WdLogSingleEntry5(2LL, v58, *((unsigned int *)this + 10), v134, *((_QWORD *)this + 3), *(int *)v147);
      v127 = *((_QWORD *)this + 3);
      v120 = *((unsigned int *)this + 10);
      WdLogGlobalForLineNumber = 982;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Unable to set scaling on the path. ( Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTargetId = 0x%I64x, m"
         "_hVidPnTopology = 0x%I64x, PathScaling = 0x%I64x)",
        v95,
        v120,
        v94,
        v127,
        v93);
      if ( v153[0] )
        v155(v156, v45);
      if ( v148[0] )
      {
        v91 = v173;
LABEL_161:
        v150(v151, v91);
      }
      goto LABEL_162;
    }
    v59 = *((_QWORD *)this + 4);
    v170 = 0LL;
    v60 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT **))(v59 + 24))(
            *((_QWORD *)this + 3),
            *((unsigned int *)this + 10),
            (unsigned int)v17,
            &v170);
    LODWORD(v135) = v60;
    if ( v60 < 0 )
    {
      v92 = v60;
      WdLogSingleEntry1(2LL, v60);
      WdLogGlobalForLineNumber = 997;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)",
        v92,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v153[0] )
        v155(v156, v45);
      if ( v148[0] )
        v150(v151, v40);
      if ( v142[0] )
        v144(v145, v81);
      v89 = v137[0] == 0;
      goto LABEL_165;
    }
    v61 = v170[6];
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 4) + 32LL))(*((_QWORD *)this + 3));
    v62 = D3DKMDT_VPPR_IDENTITY;
    v133 = 1;
LABEL_73:
    if ( !BmlIsSupportedPathRotation(v62, v61) )
      goto LABEL_109;
    v132[0] = 0;
    memset(&v179, 0, sizeof(v179));
    v63 = v180[391] || !*(_BYTE *)(v180[390] + 289LL) || v133 == 1;
    v64 = v128 && *(_DWORD *)v147 == 1;
    PopulateDisplayModeFromPresentPath(
      v81,
      v45,
      *(int *)v147,
      v133,
      v129,
      v64,
      v63,
      v165,
      (struct _D3DDDI_RATIONAL *)&v179,
      v132);
    if ( *((_DWORD *)this + 13) > 1u )
    {
      v117[0] = 0;
      v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)this + 4) + 80LL))(
              *((_QWORD *)this + 3),
              *((unsigned int *)this + 10),
              v134,
              (unsigned int)v133,
              *(_DWORD *)v117);
      v136 = v66;
      if ( v66 == -1071774970 )
      {
        v17 = v134;
        v87 = v133;
        WdLogSingleEntry4(1LL, v133, *((unsigned int *)this + 10), v134, -1071774970LL);
        v88 = L"Failed to pin the reported-as-supported rotation mode 0x%I64x on the path (0x%I64x, 0x%I64x) because of no"
               "t supported by driver, returning 0x%I64x.";
        WdLogGlobalForLineNumber = 1063;
        goto LABEL_169;
      }
      if ( v66 < 0 )
      {
        v84 = v133;
        v85 = v134;
        v86 = v66;
        WdLogSingleEntry5(2LL, v66, *((unsigned int *)this + 10), v134, *((_QWORD *)this + 3), v133);
        v126 = *((_QWORD *)this + 3);
        v118 = *((unsigned int *)this + 10);
        WdLogGlobalForLineNumber = 1069;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Unable to set rotation on the path. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTargetId = 0x%I64x,"
           " m_hVidPnTopology = 0x%I64x, PathRotation = 0x%I64x)",
          v86,
          v118,
          v85,
          v126,
          v84);
        if ( v153[0] )
          v155(v156, v45);
        if ( v148[0] )
          v150(v151, v173);
        if ( v142[0] )
          v144(v145, v81);
        v68 = v137[0] == 0;
        goto LABEL_134;
      }
    }
    if ( v179.Format != D3DDDIFMT_A8R8G8B8 && *((_BYTE *)this + 44)
      || v179.Format <= (unsigned int)D3DDDIFMT_P8 && (v67 = 0x20003900000LL, _bittest64(&v67, v179.Format)) )
    {
      if ( v174 )
      {
        v136 = MODE_UNION_LIST::AddUniqueMode((OBTAIN_MODES_ON_SOURCE *)((char *)this + 104), &v179);
        if ( v136 < 0 )
        {
          if ( v153[0] )
            v155(v156, v45);
          if ( v148[0] )
            v150(v151, v40);
          if ( v142[0] )
            v144(v145, v81);
          v68 = v137[0] == 0;
LABEL_134:
          if ( !v68 )
            v139(v140, v29);
          return (unsigned int)v136;
        }
      }
LABEL_109:
      v62 = v133 + 1;
      v133 = v62;
      if ( v62 > D3DKMDT_VPPR_ROTATE270 )
      {
        v17 = v134;
        if ( *((_DWORD *)this + 13) > 1u )
        {
          v75 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 4) + 88LL))(
                  *((_QWORD *)this + 3),
                  *((unsigned int *)this + 10),
                  v134,
                  0LL);
          LODWORD(v135) = v75;
          if ( v75 < 0 )
          {
            v90 = v75;
            WdLogSingleEntry4(2LL, v75, *((_QWORD *)this + 3), *((unsigned int *)this + 10), v17);
            v124 = *((unsigned int *)this + 10);
            v119 = *((_QWORD *)this + 3);
            WdLogGlobalForLineNumber = 1194;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Unable to unpin rotation. (Status = 0x%I64x, m_hVidPnTopology = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVi"
               "dPnTargetId = 0x%I64x)",
              v90,
              v119,
              v124,
              v17,
              0LL);
            goto LABEL_146;
          }
        }
LABEL_112:
        v57 = v167 + 4;
        ++v159;
        v167 += 4;
        if ( v159 >= 5 )
          goto LABEL_113;
        continue;
      }
      goto LABEL_73;
    }
    break;
  }
  LODWORD(v135) = OBTAIN_MODES_ON_SOURCE::_AddMode(this, &v179, v65, v132[0] != 0);
  if ( (int)v135 < 0 )
    goto LABEL_138;
  v166 = 0LL;
  DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v45 + 2), &v166);
  if ( IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(v45 + 17))
    || *v69 == v166.Numerator && v69[1] == v166.Denominator )
  {
    goto LABEL_109;
  }
  v70 = 0LL;
  v136 = 0;
  v168 = (D3DDDI_RATIONAL *)&unk_1400EA168;
  while ( 1 )
  {
    v135 = (const struct _D3DDDI_RATIONAL *)((char *)&unk_1400EA168 + 8 * v70);
    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v166, v135, 0)
      && (*(int (__fastcall **)(__int64, _QWORD, const struct _D3DDDI_RATIONAL *, _QWORD))(v158 + 88))(
           v40,
           *v45,
           v135,
           (unsigned int)(v71 + 1)) >= 0 )
    {
      Denominator = v168->Denominator;
      Numerator = v168->Numerator;
      v179.RefreshRate = *v168;
      v179.IntegerRefreshRate = DivideAndRound(Numerator, Denominator);
      if ( !MODE_UNION_LIST::FindMode((OBTAIN_MODES_ON_SOURCE *)((char *)this + 64), &v179) )
      {
        *((_DWORD *)&v179.Flags + 1) |= 0x100u;
        LODWORD(v135) = OBTAIN_MODES_ON_SOURCE::_AddMode(this, &v179, v74, 0);
        if ( (int)v135 < 0 )
          break;
      }
    }
    ++v168;
    v70 = (unsigned int)(v136 + 1);
    v136 = v70;
    if ( (unsigned int)v70 >= 7 )
      goto LABEL_109;
  }
LABEL_138:
  if ( v153[0] )
    v155(v156, v45);
  if ( v148[0] )
    v150(v151, v40);
  if ( v142[0] )
    v144(v145, v81);
  v89 = v137[0] == 0;
LABEL_165:
  if ( !v89 )
    v139(v140, v29);
  return (unsigned int)v135;
}
