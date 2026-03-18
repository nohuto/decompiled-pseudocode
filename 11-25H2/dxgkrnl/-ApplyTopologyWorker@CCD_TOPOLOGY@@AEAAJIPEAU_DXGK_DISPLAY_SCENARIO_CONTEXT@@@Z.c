/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B4E8
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B21C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1400578CC (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140261288 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1402951BC (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1402DB580 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402DBC60 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1402E8398 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     DxgkStatusChangeNotify @ 0x14030F070 (DxgkStatusChangeNotify.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x14031AA80 (DxgkCreateSessionViewForCurrentSession.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x14031AF18 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x14031AF5C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkInvalidateQdcCache @ 0x14031B098 (DxgkInvalidateQdcCache.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x14031B12C (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x14031D0E8 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x140367F3C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403733CC (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140373F28 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403FB908 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned __int16 v4; // bx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v7; // rcx
  struct _KPROCESS *v8; // rsi
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // r12
  CCD_BTL *v11; // rax
  signed int active; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  DXGGLOBAL *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 MaximumAdapterCountInSession; // kr00_8
  __int64 v24; // rax
  unsigned int v25; // esi
  DXGGLOBAL *v26; // rax
  __int64 v27; // rbx
  DXGGLOBAL *v28; // rax
  unsigned __int16 v29; // r10
  __int64 v30; // r8
  unsigned __int16 v31; // r10
  unsigned __int16 v32; // r10
  unsigned __int16 v33; // bx
  int v34; // eax
  unsigned int v35; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v36; // r13
  unsigned int v37; // r14d
  int v38; // eax
  __int64 v39; // rsi
  int v40; // r15d
  int v41; // eax
  __int64 v42; // rdx
  unsigned __int16 v43; // bx
  unsigned int j; // r10d
  unsigned __int16 v45; // ax
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 k; // rdx
  struct DXGGLOBAL *v50; // rax
  struct DXGGLOBAL *v51; // rsi
  __int64 v52; // rdx
  unsigned __int16 v53; // bx
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // rcx
  _DWORD *v57; // rax
  __int64 v58; // rcx
  _DWORD *v59; // rax
  __int64 v60; // rdx
  _DWORD *v61; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int16 v65; // ax
  unsigned __int16 v66; // r9
  unsigned __int16 v67; // r8
  unsigned __int16 v68; // r10
  __int64 v69; // rsi
  unsigned int v70; // r15d
  __int64 v71; // rdx
  __int64 v72; // r8
  LONG v73; // ecx
  __int64 v74; // rsi
  int v75; // eax
  int v76; // r12d
  __int64 v77; // rax
  unsigned __int16 v78; // ax
  unsigned __int16 v79; // r9
  __int64 v80; // r8
  __int64 v81; // rbx
  unsigned __int16 v82; // r11
  __int64 v83; // rdx
  __int16 v84; // r9
  __int64 v85; // r11
  unsigned __int16 v86; // ax
  __int64 v87; // r9
  unsigned __int16 v88; // r8
  unsigned __int16 v89; // r11
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rcx
  unsigned __int16 v93; // ax
  unsigned __int16 v94; // cx
  unsigned int v95; // r9d
  unsigned int v96; // r11d
  __int64 v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r9
  int v100; // edx
  __int64 v101; // rax
  _DWORD *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rcx
  _DWORD *v105; // rax
  _DWORD *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rcx
  _DWORD *v109; // rax
  unsigned int CurrentProcessSessionId; // eax
  _DWORD *v111; // rax
  __int64 v112; // rcx
  _DWORD *v113; // rax
  __int64 v114; // rcx
  _DWORD *v115; // rax
  __int64 v116; // rcx
  _DWORD *v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rbx
  __int64 v120; // r11
  _DWORD *v121; // rcx
  unsigned __int16 v122; // ax
  unsigned __int16 v123; // dx
  __int64 v124; // rdx
  __int64 v125; // r9
  unsigned int v126; // r12d
  __int64 v127; // r8
  unsigned int v128; // r9d
  _DWORD *v129; // rcx
  __int64 v130; // rsi
  __int64 v131; // r8
  __int64 v132; // rcx
  int v133; // edx
  __int64 v134; // rcx
  __int64 v135; // r8
  unsigned int v136; // edx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // rax
  unsigned __int16 v142; // ax
  unsigned __int16 v143; // r8
  int v144; // eax
  __int64 v145; // rdx
  bool v146; // [rsp+30h] [rbp-D0h]
  unsigned __int16 i; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v148; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v149; // [rsp+3Ah] [rbp-C6h]
  unsigned __int16 v150; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v151; // [rsp+3Eh] [rbp-C2h]
  struct _LUID Luid; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v153; // [rsp+48h] [rbp-B8h]
  __int64 v154; // [rsp+50h] [rbp-B0h]
  __int64 v155; // [rsp+58h] [rbp-A8h]
  struct tagRECT v156; // [rsp+60h] [rbp-A0h] BYREF
  int v157; // [rsp+70h] [rbp-90h] BYREF
  __int128 v158; // [rsp+78h] [rbp-88h]
  __int64 v159; // [rsp+88h] [rbp-78h]
  __int16 v160; // [rsp+90h] [rbp-70h]
  __int128 v161; // [rsp+98h] [rbp-68h]
  __int64 v162; // [rsp+A8h] [rbp-58h]
  __int64 v163; // [rsp+B0h] [rbp-50h]
  char v164; // [rsp+B8h] [rbp-48h]
  int v165; // [rsp+BCh] [rbp-44h]
  int v166; // [rsp+C0h] [rbp-40h]
  __int64 v167; // [rsp+C4h] [rbp-3Ch]
  __int64 v168; // [rsp+D0h] [rbp-30h]
  struct DXGPROCESS *Current; // [rsp+E0h] [rbp-20h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v170; // [rsp+E8h] [rbp-18h]
  __int64 v171; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  char v173; // [rsp+128h] [rbp+28h]
  _OWORD v174[2]; // [rsp+130h] [rbp+30h] BYREF

  v153 = a2;
  v173 = 0;
  v157 = 0;
  v158 = 0LL;
  v159 = 0LL;
  v164 = 1;
  v4 = 8;
  v160 = 0;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v165 = 0;
  v166 = 1;
  v170 = a3;
  v167 = 0LL;
  v168 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v157, 8u);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 2941;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v157);
    CPROCESSATTACHHELPER::Detach(&ApcState);
    return 3221225485LL;
  }
  v8 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v7) != v8 )
  {
    KeStackAttachProcess(v8, &ApcState);
    v173 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v9);
  v10 = Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2958;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v157);
    if ( v173 )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
  if ( !(unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 2970;
    active = -1073741790;
    goto LABEL_146;
  }
  for ( i = 8; ; v4 = i )
  {
    if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v157, v4) < v4 )
    {
      WdLogSingleEntry2(6LL, *((_QWORD *)this + 8), v4);
      WdLogGlobalForLineNumber = 2985;
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v157);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      return 3221225495LL;
    }
    LODWORD(v167) = v167 | 3;
    v11 = CCD_BTL::Global();
    active = CCD_BTL::RetrieveActiveTopology(v11, 0, 1, (struct CCD_TOPOLOGY *)&v157, &i);
    if ( active >= 0 )
    {
      active = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(
                 (CCD_TOPOLOGY *)&v157,
                 (const struct CCD_TOPOLOGY *)&v157);
      if ( active >= 0 )
      {
        active = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v157);
        if ( active >= 0 )
          break;
      }
    }
    if ( active != -1073741789 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), active);
      WdLogGlobalForLineNumber = 3004;
LABEL_146:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v157);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      return (unsigned int)active;
    }
  }
  v13 = *((_QWORD *)this + 8);
  v14 = v163;
  v171 = v163;
  v155 = v13;
  v15 = *(unsigned __int16 *)(v13 + 20);
  v151 = v15;
  if ( (_WORD)v15 )
  {
    v111 = (_DWORD *)(v13 + 312);
    v112 = v15;
    do
    {
      *v111 |= 4u;
      v111[3] = 0;
      v111 += 74;
      --v112;
    }
    while ( v112 );
  }
  v16 = *(unsigned __int16 *)(v14 + 20);
  v150 = v16;
  if ( (_WORD)v16 )
  {
    v113 = (_DWORD *)(v14 + 312);
    v114 = v16;
    do
    {
      *v113 |= 4u;
      v113[3] = 0;
      v113 += 74;
      --v114;
    }
    while ( v114 );
  }
  v17 = *((_QWORD *)this + 8);
  v154 = v17;
  v18 = *(unsigned __int16 *)(v17 + 20);
  v149 = v18;
  if ( (_WORD)v18 )
  {
    v115 = (_DWORD *)(v17 + 312);
    v116 = v18;
    do
    {
      *v115 |= 0x10u;
      v115[4] = 0;
      v115 += 74;
      --v116;
    }
    while ( v116 );
  }
  v19 = *(unsigned __int16 *)(v14 + 20);
  v148 = v19;
  if ( (_WORD)v19 )
  {
    v117 = (_DWORD *)(v14 + 312);
    v118 = v19;
    do
    {
      *v117 |= 0x10u;
      v117[4] = 0;
      v117 += 74;
      --v118;
    }
    while ( v118 );
  }
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)&v157);
  v20 = DXGGLOBAL::GetGlobal();
  MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(v20);
  v21 = 340 * MaximumAdapterCountInSession;
  if ( !is_mul_ok(MaximumAdapterCountInSession, 0x154uLL) )
    v21 = -1LL;
  *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) = operator new[](v21, 0x63644356u, 256LL, v22);
  v24 = *((_QWORD *)this + 8);
  if ( !*(_QWORD *)(v24 + 48) )
  {
    WdLogSingleEntry2(6LL, this, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 3035;
    if ( (_WORD)v19 )
    {
      v102 = (_DWORD *)(v14 + 312);
      v103 = v19;
      do
      {
        v102[4] = 0;
        *v102 &= ~0x10u;
        v102 += 74;
        --v103;
      }
      while ( v103 );
    }
    if ( (_WORD)v18 )
    {
      v104 = v18;
      v105 = (_DWORD *)(v154 + 312);
      do
      {
        v105[4] = 0;
        *v105 &= ~0x10u;
        v105 += 74;
        --v104;
      }
      while ( v104 );
    }
    if ( (_WORD)v16 )
    {
      v106 = (_DWORD *)(v14 + 312);
      v107 = v16;
      do
      {
        v106[3] = 0;
        *v106 &= ~4u;
        v106 += 74;
        --v107;
      }
      while ( v107 );
    }
    if ( (_WORD)v15 )
    {
      v108 = v15;
      v109 = (_DWORD *)(v155 + 312);
      do
      {
        v109[3] = 0;
        *v109 &= ~4u;
        v109 += 74;
        --v108;
      }
      while ( v108 );
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v157);
    if ( v173 )
      KeUnstackDetachProcess(&ApcState);
    return 3221225495LL;
  }
  *(_WORD *)(v24 + 28) = 0;
  v25 = 0;
  v26 = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v26) )
  {
    do
    {
      v27 = 340LL * v25;
      memset((void *)(v27 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)), 0, 0x154uLL);
      memset((void *)(v27 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 8LL), 255, 0x40uLL);
      ++v25;
      v28 = DXGGLOBAL::GetGlobal();
    }
    while ( v25 < DXGGLOBAL::GetMaximumAdapterCountInSession(v28) );
  }
  DxgkRemoveAllSessionViewForCurrentSession();
  v29 = 0;
  if ( *(_WORD *)(v14 + 20) )
  {
    v78 = 0;
    do
    {
      v79 = 0;
      v80 = v14 + 296LL * v78;
      *(_DWORD *)(v80 + 328) = 0;
      v81 = *((_QWORD *)this + 8);
      v82 = *(_WORD *)(v81 + 20);
      while ( v79 < v82 )
      {
        if ( CCD_TOPOLOGY::IsMatchingSource(
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v80 + 56),
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v81 + 296LL * v79 + 56))
          && *(_DWORD *)(v80 + 84) == *(_DWORD *)(v83 + 28) )
        {
          if ( !CCD_TOPOLOGY::IsMatchingSource(
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v80 + 324) + v14 + 56),
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v81 + 296LL * *(unsigned int *)(v83 + 268) + 56)) )
          {
            *(_DWORD *)(v85 + v14 + 328) = 1;
            *(_QWORD *)(296LL * *(unsigned int *)(v80 + 324) + v14 + 252) = 0LL;
          }
          break;
        }
        v79 = v84 + 1;
      }
      if ( v79 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      {
        *(_DWORD *)(296LL * *(unsigned int *)(v80 + 324) + v14 + 328) = 1;
        *(_QWORD *)(296LL * *(unsigned int *)(v80 + 324) + v14 + 252) = 0LL;
      }
      v78 = ++v29;
    }
    while ( v29 < *(_WORD *)(v14 + 20) );
  }
  v30 = *((_QWORD *)this + 8);
  v31 = 0;
  if ( *(_WORD *)(v30 + 20) )
  {
    v86 = 0;
    do
    {
      v87 = v30 + 296LL * v86;
      v88 = 0;
      *(_DWORD *)(v87 + 328) = 0;
      v89 = *(_WORD *)(v14 + 20);
      while ( v88 < v89 )
      {
        if ( CCD_TOPOLOGY::IsMatchingSource(
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v87 + 56),
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 296LL * v88 + 56))
          && *(_DWORD *)(v90 + 28) == *(_DWORD *)(v87 + 84) )
        {
          v92 = *(unsigned int *)(v90 + 268);
          if ( (_DWORD)v92 == v88 && *(_DWORD *)(v87 + 324) == v31 )
          {
            *(_QWORD *)(v87 + 252) = *(_QWORD *)(v90 + 196);
          }
          else
          {
            v119 = *((_QWORD *)this + 8);
            if ( !CCD_TOPOLOGY::IsMatchingSource(
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v87 + 324) + v119 + 56),
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v14 + 296 * v92 + 56)) )
            {
              *(_DWORD *)(v120 + v119 + 328) = 1;
              *(_QWORD *)(296LL * *(unsigned int *)(v87 + 324) + *((_QWORD *)this + 8) + 252) = 0LL;
            }
          }
          break;
        }
        ++v88;
      }
      if ( v88 >= *(_WORD *)(v14 + 20) )
      {
        *(_DWORD *)(296LL * *(unsigned int *)(v87 + 324) + *((_QWORD *)this + 8) + 328) = 1;
        *(_QWORD *)(296LL * *(unsigned int *)(v87 + 324) + *((_QWORD *)this + 8) + 252) = 0LL;
      }
      v30 = *((_QWORD *)this + 8);
      v86 = ++v31;
    }
    while ( v31 < *(_WORD *)(v30 + 20) );
  }
  v32 = 0;
  if ( *(_WORD *)(v14 + 20) )
  {
    v93 = 0;
    v94 = 0;
    do
    {
      v95 = *(_DWORD *)(v30 + 40);
      v96 = 0;
      v97 = 296LL * v94;
      if ( v95 )
      {
        v121 = *(_DWORD **)(v30 + 48);
        do
        {
          if ( *(_DWORD *)(296LL * v93 + v14 + 72) == *v121 && *(_DWORD *)(v97 + v14 + 76) == v121[1] )
            break;
          ++v96;
          v121 += 85;
        }
        while ( v96 < v95 );
      }
      v98 = 340LL * v96;
      v99 = 296LL * v32;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v98 + 80) |= 1 << *(_DWORD *)(v99 + v14 + 80);
      if ( _bittest64((const signed __int64 *)(v99 + v14 + 56), 0x24u) )
        v100 = 1 << *(_DWORD *)(v99 + v14 + 80);
      else
        v100 = 0;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v98 + 232) |= v100;
      if ( *(_DWORD *)(v99 + v14 + 328) == 1 )
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v98 + 140) |= 1 << *(_DWORD *)(v99 + v14 + 80);
      v30 = *((_QWORD *)this + 8);
      v101 = *(unsigned int *)(v30 + 40);
      if ( v96 >= (unsigned int)v101 )
      {
        *(_QWORD *)(340 * v101 + *(_QWORD *)(v30 + 48)) = *(_QWORD *)(v99 + v14 + 72);
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 40LL);
        v30 = *((_QWORD *)this + 8);
      }
      v94 = ++v32;
      v93 = v32;
    }
    while ( v32 < *(_WORD *)(v14 + 20) );
  }
  v33 = 0;
  i = 0;
  if ( !*(_WORD *)(v30 + 20) )
    goto LABEL_24;
  v122 = 0;
  v123 = 0;
  while ( 2 )
  {
    v124 = 296LL * v123;
    v125 = *(_QWORD *)(296LL * v122 + v30 + 56);
    if ( (v125 & 0x187) != 0 )
    {
      *(_QWORD *)(v124 + v30 + 56) = v125 | 0x40000000000000LL;
      *(_QWORD *)(v124 + *((_QWORD *)this + 8) + 64) |= *(_DWORD *)(v124 + *((_QWORD *)this + 8) + 56) & 0x187;
    }
    v126 = 0;
    *(_DWORD *)(v124 + *((_QWORD *)this + 8) + 248) = 0;
    v127 = *((_QWORD *)this + 8);
    v128 = *(_DWORD *)(v127 + 40);
    if ( v128 )
    {
      v129 = *(_DWORD **)(v127 + 48);
      do
      {
        if ( *(_DWORD *)(v127 + v124 + 72) == *v129 && *(_DWORD *)(v127 + v124 + 76) == v129[1] )
          break;
        ++v126;
        v129 += 85;
      }
      while ( v126 < v128 );
    }
    v130 = 340LL * v126;
    *(_DWORD *)(*(_QWORD *)(v127 + 48) + v130 + 84) |= 1 << *(_DWORD *)(296LL * v33 + v127 + 80);
    v131 = *((_QWORD *)this + 8);
    v132 = 296LL * v33;
    if ( (*(_QWORD *)(v132 + v131 + 56) & 0x1000000000LL) != 0 )
      v133 = 1 << *(_DWORD *)(v132 + v131 + 80);
    else
      v133 = 0;
    *(_DWORD *)(*(_QWORD *)(v131 + 48) + v130 + 232) |= v133;
    v134 = *((_QWORD *)this + 8);
    v135 = 296LL * v33;
    v136 = *(_DWORD *)(v135 + v134 + 324);
    if ( v136 == v33 )
    {
      *(_DWORD *)(*(_QWORD *)(v134 + 48) + v130 + 72) |= 1 << *(_DWORD *)(v135 + v134 + 80);
      goto LABEL_180;
    }
    if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v136, v33, 1) )
LABEL_180:
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL)
                + 4 * (85LL * v126 + *(unsigned int *)(296LL * v33 + *((_QWORD *)this + 8) + 80))
                + 8) = v33;
    v137 = *((_QWORD *)this + 8);
    v138 = 296LL * v33;
    if ( *(_DWORD *)(v138 + v137 + 328) == 1 )
      *(_DWORD *)(*(_QWORD *)(v137 + 48) + v130 + 140) |= 1 << *(_DWORD *)(v138 + v137 + 80);
    v139 = *((_QWORD *)this + 8);
    v140 = *(unsigned int *)(v139 + 40);
    if ( v126 >= (unsigned int)v140 )
    {
      *(_QWORD *)(340 * v140 + *(_QWORD *)(v139 + 48)) = *(_QWORD *)(296LL * v33 + v139 + 72);
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 40LL);
    }
    v30 = *((_QWORD *)this + 8);
    v123 = ++v33;
    i = v33;
    v122 = v33;
    if ( v33 < *(_WORD *)(v30 + 20) )
      continue;
    break;
  }
  v10 = Current;
LABEL_24:
  v34 = *(_DWORD *)(v30 + 40);
  v35 = 0;
  v146 = v34 != 0;
  if ( v34 )
  {
    v36 = v170;
    v37 = v153;
    do
    {
      v38 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v35);
      v39 = 340LL * v35;
      v40 = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v35 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v35),
          *((_QWORD *)this + 8),
          v38);
        v141 = *((_QWORD *)this + 8);
        WdLogGlobalForLineNumber = 3350;
        CCD_TOPOLOGY::MarkPathsApplyFailure(this, (const struct _LUID *)(v39 + *(_QWORD *)(v141 + 48)), -1, v40);
      }
      else if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v39 + 80) )
      {
        v41 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(this, v10, v37, v35, v36);
        if ( v41 >= 0 )
        {
          v146 = 0;
        }
        else
        {
          WdLogSingleEntry4(
            2LL,
            *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v35 + 4),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v35),
            *((_QWORD *)this + 8),
            v41);
          WdLogGlobalForLineNumber = 3376;
        }
      }
      ++v35;
    }
    while ( v35 < *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) );
    v14 = v171;
  }
  DxgkInvalidateQdcCache();
  v42 = *((_QWORD *)this + 8);
  v43 = 0;
  i = 0;
  if ( *(_WORD *)(v42 + 20) )
  {
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    do
    {
      v69 = 296LL * v67;
      v70 = *(_DWORD *)(296LL * v65 + v42 + 324);
      if ( *(int *)(v69 + v42 + 248) >= 0 && (v70 == v66 || !CCD_TOPOLOGY::IsSameCloneGroup(this, v70, v68, 1)) )
      {
        if ( (*(_DWORD *)(v69 + *((_QWORD *)this + 8) + 56) & 0x20800) != 0x20800LL )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3408;
        }
        v71 = *((_QWORD *)this + 8);
        v72 = 296LL * v43;
        v156.left = *(_DWORD *)(v72 + v71 + 200);
        v156.right = *(_DWORD *)(v72 + v71 + 208) + v156.left;
        v156.top = *(_DWORD *)(v72 + v71 + 204);
        v73 = *(_DWORD *)(v72 + v71 + 212) + v156.top;
        Luid = 0LL;
        v156.bottom = v73;
        if ( *(_DWORD *)(v72 + v71 + 252) || *(_DWORD *)(v72 + v71 + 256) )
        {
          Luid = *(struct _LUID *)(v72 + v71 + 252);
        }
        else
        {
          if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3431;
          }
          v71 = *((_QWORD *)this + 8);
        }
        v74 = 296LL * v43;
        v75 = DxgkCreateSessionViewForCurrentSession(
                (struct _LUID *)(v74 + v71 + 72),
                *(_DWORD *)(v74 + v71 + 80),
                &v156,
                v70 == v43,
                &Luid);
        v76 = v75;
        if ( v75 >= 0 )
        {
          if ( v70 == v43 )
            ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
        }
        else
        {
          WdLogSingleEntry4(
            2LL,
            *(int *)(v74 + *((_QWORD *)this + 8) + 76),
            *(unsigned int *)(v74 + *((_QWORD *)this + 8) + 72),
            *(unsigned int *)(v74 + *((_QWORD *)this + 8) + 80),
            v75);
          v77 = *((_QWORD *)this + 8);
          WdLogGlobalForLineNumber = 3449;
          *(_DWORD *)(296LL * v43 + v77 + 248) = v76;
        }
      }
      v42 = *((_QWORD *)this + 8);
      v67 = ++v43;
      i = v43;
      v65 = v43;
      v66 = v43;
      v68 = v43;
    }
    while ( v43 < *(_WORD *)(v42 + 20) );
  }
  CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
  for ( j = 0; ; ++j )
  {
    v45 = v163 ? *(_WORD *)(v163 + 20) : 0;
    if ( j >= v45 )
      break;
    v46 = 296LL * j;
    *(_DWORD *)(v46 + v163 + 324) = -27918336;
  }
  v47 = *((_QWORD *)this + 8);
  v48 = 0LL;
  for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v47 + 40); k = (unsigned int)(k + 1) )
  {
    v63 = 340LL * (unsigned int)k;
    v64 = *(_QWORD *)(v47 + 48);
    if ( *(_DWORD *)(v63 + v64 + 96) || *(_DWORD *)(v63 + v64 + 88) )
    {
      v48 = 0LL;
      break;
    }
    if ( *(_DWORD *)(v63 + v64 + 92)
      || *(_DWORD *)(v63 + v64 + 124)
      || *(_DWORD *)(v63 + v64 + 120)
      || *(_DWORD *)(v63 + v64 + 132) )
    {
      v48 = 1LL;
    }
  }
  if ( (_DWORD)v48 )
  {
    memset(v174, 0, sizeof(v174));
    LODWORD(v174[0]) = 11;
    v91 = DxgkStatusChangeNotify((int *)v174, k, v48);
    if ( v91 < 0 )
    {
      WdLogSingleEntry1(2LL, v91);
      WdLogGlobalForLineNumber = 3510;
    }
  }
  v50 = DXGGLOBAL::GetGlobal();
  v51 = v50;
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) > 1u )
    DXGGLOBAL::RecordFeatureUsage(v50, 0LL, 1LL);
  v52 = *((_QWORD *)this + 8);
  v53 = 0;
  if ( *(_WORD *)(v52 + 20) )
  {
    v142 = 0;
    v143 = 0;
    do
    {
      if ( *(int *)(296LL * v142 + v52 + 248) >= 0 )
      {
        v144 = *(_DWORD *)(296LL * v143 + v52 + 264);
        if ( v144 == 12 )
        {
          v145 = 4LL;
LABEL_200:
          DXGGLOBAL::RecordFeatureUsage(v51, v145, 1LL);
          goto LABEL_201;
        }
        if ( v144 == 30 )
        {
          v145 = 5LL;
          goto LABEL_200;
        }
      }
LABEL_201:
      v52 = *((_QWORD *)this + 8);
      v143 = ++v53;
      v142 = v53;
    }
    while ( v53 < *(_WORD *)(v52 + 20) );
  }
  v54 = v148;
  active = v146 ? 0xC0000001 : 0;
  if ( v148 )
  {
    v55 = (_DWORD *)(v14 + 312);
    do
    {
      v55[4] = 0;
      *v55 &= ~0x10u;
      v55 += 74;
      --v54;
    }
    while ( v54 );
  }
  v56 = v149;
  if ( v149 )
  {
    v57 = (_DWORD *)(v154 + 312);
    do
    {
      v57[4] = 0;
      *v57 &= ~0x10u;
      v57 += 74;
      --v56;
    }
    while ( v56 );
  }
  v58 = v150;
  if ( v150 )
  {
    v59 = (_DWORD *)(v14 + 312);
    do
    {
      v59[3] = 0;
      *v59 &= ~4u;
      v59 += 74;
      --v58;
    }
    while ( v58 );
  }
  if ( v151 )
  {
    v60 = v151;
    v61 = (_DWORD *)(v155 + 312);
    do
    {
      v61[3] = 0;
      *v61 &= ~4u;
      v61 += 74;
      --v60;
    }
    while ( v60 );
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v157);
  if ( v173 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)active;
}
