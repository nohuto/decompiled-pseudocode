/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403478E4
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140347618 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1400570DC (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x140268188 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x14029AE08 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1402D6908 (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14031CCD8 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x14033C63C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x140345B00 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403461E0 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x140349488 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x140349AE4 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x140349C9C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x140349DAC (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x140349DF0 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkStatusChangeNotify @ 0x14037E7F0 (DxgkStatusChangeNotify.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403C1AA8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403F56EC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  unsigned __int16 v5; // bx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rcx
  struct _KPROCESS *v9; // rsi
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // r12
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 (__fastcall ***v14)(CCD_BTL *, int *); // rax
  signed int active; // ebx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rbx
  DXGGLOBAL *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 MaximumAdapterCountInSession; // kr00_8
  __int64 v26; // rax
  unsigned int v27; // esi
  DXGGLOBAL *v28; // rax
  __int64 v29; // rbx
  DXGGLOBAL *v30; // rax
  unsigned __int16 v31; // r10
  __int64 v32; // r8
  unsigned __int16 v33; // r10
  unsigned __int16 v34; // r10
  unsigned __int16 v35; // bx
  int v36; // eax
  unsigned int v37; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v38; // r13
  unsigned int v39; // r14d
  int v40; // eax
  __int64 v41; // rsi
  int v42; // r15d
  int v43; // eax
  __int64 v44; // rdx
  unsigned __int16 v45; // bx
  unsigned int j; // r10d
  unsigned __int16 v47; // ax
  __int64 v48; // rcx
  __int64 v49; // r9
  int v50; // r8d
  unsigned int k; // edx
  struct DXGGLOBAL *v52; // rax
  struct DXGGLOBAL *v53; // rsi
  __int64 v54; // rdx
  unsigned __int16 v55; // bx
  __int64 v56; // rcx
  _DWORD *v57; // rax
  __int64 v58; // rcx
  _DWORD *v59; // rax
  __int64 v60; // rcx
  _DWORD *v61; // rax
  __int64 v62; // rdx
  _DWORD *v63; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int16 v67; // ax
  unsigned __int16 v68; // r9
  unsigned __int16 v69; // r8
  unsigned __int16 v70; // r10
  __int64 v71; // rsi
  unsigned int v72; // r15d
  __int64 v73; // rdx
  __int64 v74; // r8
  LONG v75; // ecx
  __int64 v76; // rsi
  int v77; // eax
  int v78; // r12d
  __int64 v79; // rax
  unsigned __int16 v80; // ax
  unsigned __int16 v81; // r9
  __int64 v82; // r8
  __int64 v83; // rbx
  unsigned __int16 v84; // r11
  __int64 v85; // rdx
  __int16 v86; // r9
  __int64 v87; // r11
  unsigned __int16 v88; // ax
  __int64 v89; // r9
  unsigned __int16 v90; // r8
  unsigned __int16 v91; // r11
  __int64 v92; // rdx
  int v93; // eax
  __int64 v94; // rcx
  unsigned __int16 v95; // ax
  unsigned __int16 v96; // cx
  unsigned int v97; // r9d
  unsigned int v98; // r11d
  __int64 v99; // rbx
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // edx
  __int64 v103; // rax
  _DWORD *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rcx
  _DWORD *v107; // rax
  _DWORD *v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rcx
  _DWORD *v111; // rax
  unsigned int CurrentProcessSessionId; // eax
  _DWORD *v113; // rax
  __int64 v114; // rcx
  _DWORD *v115; // rax
  __int64 v116; // rcx
  _DWORD *v117; // rax
  __int64 v118; // rcx
  _DWORD *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rbx
  __int64 v122; // r11
  _DWORD *v123; // rcx
  unsigned __int16 v124; // ax
  unsigned __int16 v125; // dx
  __int64 v126; // rdx
  __int64 v127; // r9
  unsigned int v128; // r12d
  __int64 v129; // r8
  unsigned int v130; // r9d
  _DWORD *v131; // rcx
  __int64 v132; // rsi
  __int64 v133; // r8
  __int64 v134; // rcx
  int v135; // edx
  __int64 v136; // rcx
  __int64 v137; // r8
  unsigned int v138; // edx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  __int64 v143; // rax
  unsigned __int16 v144; // ax
  unsigned __int16 v145; // r8
  int v146; // eax
  __int64 v147; // rdx
  bool v148; // [rsp+30h] [rbp-D0h]
  unsigned __int16 i; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v150; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v151; // [rsp+3Ah] [rbp-C6h]
  unsigned __int16 v152; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v153; // [rsp+3Eh] [rbp-C2h]
  struct _LUID Luid; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v155; // [rsp+48h] [rbp-B8h]
  __int64 v156; // [rsp+50h] [rbp-B0h]
  __int64 v157; // [rsp+58h] [rbp-A8h]
  struct tagRECT v158; // [rsp+60h] [rbp-A0h] BYREF
  void *v159; // [rsp+70h] [rbp-90h] BYREF
  __int128 v160; // [rsp+78h] [rbp-88h]
  __int64 v161; // [rsp+88h] [rbp-78h]
  __int16 v162; // [rsp+90h] [rbp-70h]
  __int128 v163; // [rsp+98h] [rbp-68h]
  __int64 v164; // [rsp+A8h] [rbp-58h]
  __int64 v165; // [rsp+B0h] [rbp-50h]
  char v166; // [rsp+B8h] [rbp-48h]
  int v167; // [rsp+BCh] [rbp-44h]
  int v168; // [rsp+C0h] [rbp-40h]
  __int64 v169; // [rsp+C4h] [rbp-3Ch]
  __int64 v170; // [rsp+D0h] [rbp-30h]
  struct DXGPROCESS *Current; // [rsp+E0h] [rbp-20h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v172; // [rsp+E8h] [rbp-18h]
  __int64 v173; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  char v175; // [rsp+128h] [rbp+28h]
  _OWORD v176[2]; // [rsp+130h] [rbp+30h] BYREF

  v155 = a2;
  v175 = 0;
  LODWORD(v159) = 0;
  v160 = 0LL;
  v161 = 0LL;
  v166 = 1;
  v5 = 8;
  v162 = 0;
  v163 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  v167 = 0;
  v168 = 1;
  v172 = a3;
  v169 = 0LL;
  v170 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v159, 8LL, (__int64)a3, a4);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 2941;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
    CPROCESSATTACHHELPER::Detach(&ApcState);
    return 3221225485LL;
  }
  v9 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v8) != v9 )
  {
    KeStackAttachProcess(v9, &ApcState);
    v175 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v10);
  v11 = Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2958;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
    if ( v175 )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
  if ( !(unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 2970;
    active = -1073741790;
    goto LABEL_146;
  }
  for ( i = 8; ; v5 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v159, v5, v12, v13) < v5 )
    {
      WdLogSingleEntry2(6LL, *((_QWORD *)this + 8), v5);
      WdLogGlobalForLineNumber = 2985;
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      return 3221225495LL;
    }
    LODWORD(v169) = v169 | 3;
    v14 = (__int64 (__fastcall ***)(CCD_BTL *, int *))CCD_BTL::Global();
    active = CCD_BTL::RetrieveActiveTopology(v14, 0, 1, &v159, &i);
    if ( active >= 0 )
    {
      active = CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(
                 (CCD_TOPOLOGY *)&v159,
                 (const struct CCD_TOPOLOGY *)&v159);
      if ( active >= 0 )
      {
        active = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v159);
        if ( active >= 0 )
          break;
      }
    }
    if ( active != -1073741789 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), active);
      WdLogGlobalForLineNumber = 3004;
LABEL_146:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      return (unsigned int)active;
    }
  }
  v16 = *((_QWORD *)this + 8);
  v17 = v165;
  v173 = v165;
  v157 = v16;
  v18 = *(unsigned __int16 *)(v16 + 20);
  v153 = v18;
  if ( (_WORD)v18 )
  {
    v113 = (_DWORD *)(v16 + 312);
    v114 = v18;
    do
    {
      *v113 |= 4u;
      v113[3] = 0;
      v113 += 74;
      --v114;
    }
    while ( v114 );
  }
  v19 = *(unsigned __int16 *)(v17 + 20);
  v152 = v19;
  if ( (_WORD)v19 )
  {
    v115 = (_DWORD *)(v17 + 312);
    v116 = v19;
    do
    {
      *v115 |= 4u;
      v115[3] = 0;
      v115 += 74;
      --v116;
    }
    while ( v116 );
  }
  v20 = *((_QWORD *)this + 8);
  v156 = v20;
  v21 = *(unsigned __int16 *)(v20 + 20);
  v151 = v21;
  if ( (_WORD)v21 )
  {
    v117 = (_DWORD *)(v20 + 312);
    v118 = v21;
    do
    {
      *v117 |= 0x10u;
      v117[4] = 0;
      v117 += 74;
      --v118;
    }
    while ( v118 );
  }
  v22 = *(unsigned __int16 *)(v17 + 20);
  v150 = v22;
  if ( (_WORD)v22 )
  {
    v119 = (_DWORD *)(v17 + 312);
    v120 = v22;
    do
    {
      *v119 |= 0x10u;
      v119[4] = 0;
      v119 += 74;
      --v120;
    }
    while ( v120 );
  }
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
  CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)&v159);
  v23 = DXGGLOBAL::GetGlobal();
  MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(v23);
  v24 = 340 * MaximumAdapterCountInSession;
  if ( !is_mul_ok(MaximumAdapterCountInSession, 0x154uLL) )
    v24 = -1LL;
  *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) = operator new[](v24, 0x63644356u, 256LL);
  v26 = *((_QWORD *)this + 8);
  if ( !*(_QWORD *)(v26 + 48) )
  {
    WdLogSingleEntry2(6LL, this, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 3035;
    if ( (_WORD)v22 )
    {
      v104 = (_DWORD *)(v17 + 312);
      v105 = v22;
      do
      {
        v104[4] = 0;
        *v104 &= ~0x10u;
        v104 += 74;
        --v105;
      }
      while ( v105 );
    }
    if ( (_WORD)v21 )
    {
      v106 = v21;
      v107 = (_DWORD *)(v156 + 312);
      do
      {
        v107[4] = 0;
        *v107 &= ~0x10u;
        v107 += 74;
        --v106;
      }
      while ( v106 );
    }
    if ( (_WORD)v19 )
    {
      v108 = (_DWORD *)(v17 + 312);
      v109 = v19;
      do
      {
        v108[3] = 0;
        *v108 &= ~4u;
        v108 += 74;
        --v109;
      }
      while ( v109 );
    }
    if ( (_WORD)v18 )
    {
      v110 = v18;
      v111 = (_DWORD *)(v157 + 312);
      do
      {
        v111[3] = 0;
        *v111 &= ~4u;
        v111 += 74;
        --v110;
      }
      while ( v110 );
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
    if ( v175 )
      KeUnstackDetachProcess(&ApcState);
    return 3221225495LL;
  }
  *(_WORD *)(v26 + 28) = 0;
  v27 = 0;
  v28 = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v28) )
  {
    do
    {
      v29 = 340LL * v27;
      memset((void *)(v29 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)), 0, 0x154uLL);
      memset((void *)(v29 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 8LL), 255, 0x40uLL);
      ++v27;
      v30 = DXGGLOBAL::GetGlobal();
    }
    while ( v27 < DXGGLOBAL::GetMaximumAdapterCountInSession(v30) );
  }
  DxgkRemoveAllSessionViewForCurrentSession();
  v31 = 0;
  if ( *(_WORD *)(v17 + 20) )
  {
    v80 = 0;
    do
    {
      v81 = 0;
      v82 = v17 + 296LL * v80;
      *(_DWORD *)(v82 + 328) = 0;
      v83 = *((_QWORD *)this + 8);
      v84 = *(_WORD *)(v83 + 20);
      while ( v81 < v84 )
      {
        if ( CCD_TOPOLOGY::IsMatchingSource(
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v82 + 56),
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v83 + 296LL * v81 + 56))
          && *(_DWORD *)(v82 + 84) == *(_DWORD *)(v85 + 28) )
        {
          if ( !CCD_TOPOLOGY::IsMatchingSource(
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v82 + 324) + v17 + 56),
                  (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v83 + 296LL * *(unsigned int *)(v85 + 268) + 56)) )
          {
            *(_DWORD *)(v87 + v17 + 328) = 1;
            *(_QWORD *)(296LL * *(unsigned int *)(v82 + 324) + v17 + 252) = 0LL;
          }
          break;
        }
        v81 = v86 + 1;
      }
      if ( v81 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      {
        *(_DWORD *)(296LL * *(unsigned int *)(v82 + 324) + v17 + 328) = 1;
        *(_QWORD *)(296LL * *(unsigned int *)(v82 + 324) + v17 + 252) = 0LL;
      }
      v80 = ++v31;
    }
    while ( v31 < *(_WORD *)(v17 + 20) );
  }
  v32 = *((_QWORD *)this + 8);
  v33 = 0;
  if ( *(_WORD *)(v32 + 20) )
  {
    v88 = 0;
    do
    {
      v89 = v32 + 296LL * v88;
      v90 = 0;
      *(_DWORD *)(v89 + 328) = 0;
      v91 = *(_WORD *)(v17 + 20);
      while ( v90 < v91 )
      {
        if ( CCD_TOPOLOGY::IsMatchingSource(
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v89 + 56),
               (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v17 + 296LL * v90 + 56))
          && *(_DWORD *)(v92 + 28) == *(_DWORD *)(v89 + 84) )
        {
          v94 = *(unsigned int *)(v92 + 268);
          if ( (_DWORD)v94 == v90 && *(_DWORD *)(v89 + 324) == v33 )
          {
            *(_QWORD *)(v89 + 252) = *(_QWORD *)(v92 + 196);
          }
          else
          {
            v121 = *((_QWORD *)this + 8);
            if ( !CCD_TOPOLOGY::IsMatchingSource(
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * *(unsigned int *)(v89 + 324) + v121 + 56),
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v17 + 296 * v94 + 56)) )
            {
              *(_DWORD *)(v122 + v121 + 328) = 1;
              *(_QWORD *)(296LL * *(unsigned int *)(v89 + 324) + *((_QWORD *)this + 8) + 252) = 0LL;
            }
          }
          break;
        }
        ++v90;
      }
      if ( v90 >= *(_WORD *)(v17 + 20) )
      {
        *(_DWORD *)(296LL * *(unsigned int *)(v89 + 324) + *((_QWORD *)this + 8) + 328) = 1;
        *(_QWORD *)(296LL * *(unsigned int *)(v89 + 324) + *((_QWORD *)this + 8) + 252) = 0LL;
      }
      v32 = *((_QWORD *)this + 8);
      v88 = ++v33;
    }
    while ( v33 < *(_WORD *)(v32 + 20) );
  }
  v34 = 0;
  if ( *(_WORD *)(v17 + 20) )
  {
    v95 = 0;
    v96 = 0;
    do
    {
      v97 = *(_DWORD *)(v32 + 40);
      v98 = 0;
      v99 = 296LL * v96;
      if ( v97 )
      {
        v123 = *(_DWORD **)(v32 + 48);
        do
        {
          if ( *(_DWORD *)(296LL * v95 + v17 + 72) == *v123 && *(_DWORD *)(v99 + v17 + 76) == v123[1] )
            break;
          ++v98;
          v123 += 85;
        }
        while ( v98 < v97 );
      }
      v100 = 340LL * v98;
      v101 = 296LL * v34;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v100 + 80) |= 1 << *(_DWORD *)(v101 + v17 + 80);
      if ( _bittest64((const signed __int64 *)(v101 + v17 + 56), 0x24u) )
        v102 = 1 << *(_DWORD *)(v101 + v17 + 80);
      else
        v102 = 0;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v100 + 232) |= v102;
      if ( *(_DWORD *)(v101 + v17 + 328) == 1 )
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v100 + 140) |= 1 << *(_DWORD *)(v101 + v17 + 80);
      v32 = *((_QWORD *)this + 8);
      v103 = *(unsigned int *)(v32 + 40);
      if ( v98 >= (unsigned int)v103 )
      {
        *(_QWORD *)(340 * v103 + *(_QWORD *)(v32 + 48)) = *(_QWORD *)(v101 + v17 + 72);
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 40LL);
        v32 = *((_QWORD *)this + 8);
      }
      v96 = ++v34;
      v95 = v34;
    }
    while ( v34 < *(_WORD *)(v17 + 20) );
  }
  v35 = 0;
  i = 0;
  if ( !*(_WORD *)(v32 + 20) )
    goto LABEL_24;
  v124 = 0;
  v125 = 0;
  while ( 2 )
  {
    v126 = 296LL * v125;
    v127 = *(_QWORD *)(296LL * v124 + v32 + 56);
    if ( (v127 & 0x187) != 0 )
    {
      *(_QWORD *)(v126 + v32 + 56) = v127 | 0x40000000000000LL;
      *(_QWORD *)(v126 + *((_QWORD *)this + 8) + 64) |= *(_DWORD *)(v126 + *((_QWORD *)this + 8) + 56) & 0x187;
    }
    v128 = 0;
    *(_DWORD *)(v126 + *((_QWORD *)this + 8) + 248) = 0;
    v129 = *((_QWORD *)this + 8);
    v130 = *(_DWORD *)(v129 + 40);
    if ( v130 )
    {
      v131 = *(_DWORD **)(v129 + 48);
      do
      {
        if ( *(_DWORD *)(v129 + v126 + 72) == *v131 && *(_DWORD *)(v129 + v126 + 76) == v131[1] )
          break;
        ++v128;
        v131 += 85;
      }
      while ( v128 < v130 );
    }
    v132 = 340LL * v128;
    *(_DWORD *)(*(_QWORD *)(v129 + 48) + v132 + 84) |= 1 << *(_DWORD *)(296LL * v35 + v129 + 80);
    v133 = *((_QWORD *)this + 8);
    v134 = 296LL * v35;
    if ( (*(_QWORD *)(v134 + v133 + 56) & 0x1000000000LL) != 0 )
      v135 = 1 << *(_DWORD *)(v134 + v133 + 80);
    else
      v135 = 0;
    *(_DWORD *)(*(_QWORD *)(v133 + 48) + v132 + 232) |= v135;
    v136 = *((_QWORD *)this + 8);
    v137 = 296LL * v35;
    v138 = *(_DWORD *)(v137 + v136 + 324);
    if ( v138 == v35 )
    {
      *(_DWORD *)(*(_QWORD *)(v136 + 48) + v132 + 72) |= 1 << *(_DWORD *)(v137 + v136 + 80);
      goto LABEL_180;
    }
    if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v138, v35, 1) )
LABEL_180:
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL)
                + 4 * (85LL * v128 + *(unsigned int *)(296LL * v35 + *((_QWORD *)this + 8) + 80))
                + 8) = v35;
    v139 = *((_QWORD *)this + 8);
    v140 = 296LL * v35;
    if ( *(_DWORD *)(v140 + v139 + 328) == 1 )
      *(_DWORD *)(*(_QWORD *)(v139 + 48) + v132 + 140) |= 1 << *(_DWORD *)(v140 + v139 + 80);
    v141 = *((_QWORD *)this + 8);
    v142 = *(unsigned int *)(v141 + 40);
    if ( v128 >= (unsigned int)v142 )
    {
      *(_QWORD *)(340 * v142 + *(_QWORD *)(v141 + 48)) = *(_QWORD *)(296LL * v35 + v141 + 72);
      ++*(_DWORD *)(*((_QWORD *)this + 8) + 40LL);
    }
    v32 = *((_QWORD *)this + 8);
    v125 = ++v35;
    i = v35;
    v124 = v35;
    if ( v35 < *(_WORD *)(v32 + 20) )
      continue;
    break;
  }
  v11 = Current;
LABEL_24:
  v36 = *(_DWORD *)(v32 + 40);
  v37 = 0;
  v148 = v36 != 0;
  if ( v36 )
  {
    v38 = v172;
    v39 = v155;
    do
    {
      v40 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v37);
      v41 = 340LL * v37;
      v42 = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v37 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v37),
          *((_QWORD *)this + 8),
          v40);
        v143 = *((_QWORD *)this + 8);
        WdLogGlobalForLineNumber = 3350;
        CCD_TOPOLOGY::MarkPathsApplyFailure(this, (const struct _LUID *)(v41 + *(_QWORD *)(v143 + 48)), -1, v42);
      }
      else if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v41 + 80) )
      {
        v43 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(this, v11, v39, v37, v38);
        if ( v43 >= 0 )
        {
          v148 = 0;
        }
        else
        {
          WdLogSingleEntry4(
            2LL,
            *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v37 + 4),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 340LL * v37),
            *((_QWORD *)this + 8),
            v43);
          WdLogGlobalForLineNumber = 3376;
        }
      }
      ++v37;
    }
    while ( v37 < *(_DWORD *)(*((_QWORD *)this + 8) + 40LL) );
    v17 = v173;
  }
  DxgkInvalidateQdcCache();
  v44 = *((_QWORD *)this + 8);
  v45 = 0;
  i = 0;
  if ( *(_WORD *)(v44 + 20) )
  {
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    do
    {
      v71 = 296LL * v69;
      v72 = *(_DWORD *)(296LL * v67 + v44 + 324);
      if ( *(int *)(v71 + v44 + 248) >= 0 && (v72 == v68 || !CCD_TOPOLOGY::IsSameCloneGroup(this, v72, v70, 1)) )
      {
        if ( (*(_DWORD *)(v71 + *((_QWORD *)this + 8) + 56) & 0x20800) != 0x20800LL )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3408;
        }
        v73 = *((_QWORD *)this + 8);
        v74 = 296LL * v45;
        v158.left = *(_DWORD *)(v74 + v73 + 200);
        v158.right = *(_DWORD *)(v74 + v73 + 208) + v158.left;
        v158.top = *(_DWORD *)(v74 + v73 + 204);
        v75 = *(_DWORD *)(v74 + v73 + 212) + v158.top;
        Luid = 0LL;
        v158.bottom = v75;
        if ( *(_DWORD *)(v74 + v73 + 252) || *(_DWORD *)(v74 + v73 + 256) )
        {
          Luid = *(struct _LUID *)(v74 + v73 + 252);
        }
        else
        {
          if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3431;
          }
          v73 = *((_QWORD *)this + 8);
        }
        v76 = 296LL * v45;
        v77 = DxgkCreateSessionViewForCurrentSession(
                (struct _LUID *)(v76 + v73 + 72),
                *(_DWORD *)(v76 + v73 + 80),
                &v158,
                v72 == v45,
                &Luid);
        v78 = v77;
        if ( v77 >= 0 )
        {
          if ( v72 == v45 )
            ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
        }
        else
        {
          WdLogSingleEntry4(
            2LL,
            *(int *)(v76 + *((_QWORD *)this + 8) + 76),
            *(unsigned int *)(v76 + *((_QWORD *)this + 8) + 72),
            *(unsigned int *)(v76 + *((_QWORD *)this + 8) + 80),
            v77);
          v79 = *((_QWORD *)this + 8);
          WdLogGlobalForLineNumber = 3449;
          *(_DWORD *)(296LL * v45 + v79 + 248) = v78;
        }
      }
      v44 = *((_QWORD *)this + 8);
      v69 = ++v45;
      i = v45;
      v67 = v45;
      v68 = v45;
      v70 = v45;
    }
    while ( v45 < *(_WORD *)(v44 + 20) );
  }
  CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
  for ( j = 0; ; ++j )
  {
    v47 = v165 ? *(_WORD *)(v165 + 20) : 0;
    if ( j >= v47 )
      break;
    v48 = 296LL * j;
    *(_DWORD *)(v48 + v165 + 324) = -27918336;
  }
  v49 = *((_QWORD *)this + 8);
  v50 = 0;
  for ( k = 0; k < *(_DWORD *)(v49 + 40); ++k )
  {
    v65 = 340LL * k;
    v66 = *(_QWORD *)(v49 + 48);
    if ( *(_DWORD *)(v65 + v66 + 96) || *(_DWORD *)(v65 + v66 + 88) )
    {
      v50 = 0;
      break;
    }
    if ( *(_DWORD *)(v65 + v66 + 92)
      || *(_DWORD *)(v65 + v66 + 124)
      || *(_DWORD *)(v65 + v66 + 120)
      || *(_DWORD *)(v65 + v66 + 132) )
    {
      v50 = 1;
    }
  }
  if ( v50 )
  {
    memset(v176, 0, sizeof(v176));
    LODWORD(v176[0]) = 11;
    v93 = DxgkStatusChangeNotify(v176);
    if ( v93 < 0 )
    {
      WdLogSingleEntry1(2LL, v93);
      WdLogGlobalForLineNumber = 3510;
    }
  }
  v52 = DXGGLOBAL::GetGlobal();
  v53 = v52;
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) > 1u )
    DXGGLOBAL::RecordFeatureUsage(v52, 0LL, 1LL);
  v54 = *((_QWORD *)this + 8);
  v55 = 0;
  if ( *(_WORD *)(v54 + 20) )
  {
    v144 = 0;
    v145 = 0;
    do
    {
      if ( *(int *)(296LL * v144 + v54 + 248) >= 0 )
      {
        v146 = *(_DWORD *)(296LL * v145 + v54 + 264);
        if ( v146 == 12 )
        {
          v147 = 4LL;
LABEL_200:
          DXGGLOBAL::RecordFeatureUsage(v53, v147, 1LL);
          goto LABEL_201;
        }
        if ( v146 == 30 )
        {
          v147 = 5LL;
          goto LABEL_200;
        }
      }
LABEL_201:
      v54 = *((_QWORD *)this + 8);
      v145 = ++v55;
      v144 = v55;
    }
    while ( v55 < *(_WORD *)(v54 + 20) );
  }
  v56 = v150;
  active = v148 ? 0xC0000001 : 0;
  if ( v150 )
  {
    v57 = (_DWORD *)(v17 + 312);
    do
    {
      v57[4] = 0;
      *v57 &= ~0x10u;
      v57 += 74;
      --v56;
    }
    while ( v56 );
  }
  v58 = v151;
  if ( v151 )
  {
    v59 = (_DWORD *)(v156 + 312);
    do
    {
      v59[4] = 0;
      *v59 &= ~0x10u;
      v59 += 74;
      --v58;
    }
    while ( v58 );
  }
  v60 = v152;
  if ( v152 )
  {
    v61 = (_DWORD *)(v17 + 312);
    do
    {
      v61[3] = 0;
      *v61 &= ~4u;
      v61 += 74;
      --v60;
    }
    while ( v60 );
  }
  if ( v153 )
  {
    v62 = v153;
    v63 = (_DWORD *)(v157 + 312);
    do
    {
      v63[3] = 0;
      *v63 &= ~4u;
      v63 += 74;
      --v62;
    }
    while ( v62 );
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v159);
  if ( v175 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)active;
}
