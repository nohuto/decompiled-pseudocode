/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x14038E710 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1401C33C8 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1401C4378 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1401C52CC (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1402681E8 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x140268554 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x14031BDC4 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x14031CF20 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x14031FF34 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140341C24 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EFEC (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403905D8 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x140390668 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403907A8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x140390F50 (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403AEC30 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1403FADFC (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall HandleMonitorArrival(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  LONG *p_HighPart; // r12
  __int64 v15; // r13
  __int64 v16; // rbx
  struct CCD_BTL *v17; // rax
  int v18; // eax
  __int64 v19; // rdi
  unsigned int v20; // ebx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v22; // rax
  DXGADAPTER *v23; // rdi
  int MonitorTypeLockHeld; // ebx
  int v25; // edi
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ebx
  unsigned int v30; // edx
  __int64 v31; // rdi
  unsigned int i; // ebx
  unsigned __int16 v33; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // r12
  int v39; // ebx
  __int64 v40; // r9
  char v41; // r13
  int v42; // eax
  __int64 v43; // r12
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // rdi
  unsigned int v48; // r9d
  unsigned int v49; // r8d
  unsigned int v50; // edx
  char v51; // bl
  unsigned int v52; // ebx
  struct _LUID *v53; // rax
  __int64 v54; // r8
  char IsPortraitFirstTarget; // al
  __int16 v56; // r12
  __int64 v57; // r8
  __int64 v58; // r9
  int UnusedVidpnSourceId; // eax
  unsigned __int16 v60; // cx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // rdi
  unsigned int j; // ebx
  __int64 v66; // rdi
  unsigned __int16 v67; // ax
  __int16 v68; // di
  unsigned __int16 v69; // di
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // eax
  __int64 v73; // r12
  unsigned int v74; // ebx
  char v75; // al
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v76; // rax
  __int64 v77; // rdx
  _OWORD *v78; // rcx
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int128 v85; // xmm1
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int64 v88; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v89; // rcx
  __int64 v90; // rdx
  _OWORD *v91; // rax
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int64 v101; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v102; // rdi
  bool v103; // zf
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v104; // rax
  __int64 v105; // r9
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdi
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // eax
  __int64 v114; // r12
  int v115; // eax
  __int64 v116; // rdi
  __int64 v117; // r8
  __int64 v118; // r9
  int v119; // eax
  __int64 v120; // r12
  struct CCD_BTL *v121; // rax
  int v122; // eax
  __int64 v123; // rsi
  __int64 v124; // rbx
  __int64 v125; // rdi
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v126; // [rsp+20h] [rbp-E0h]
  __int64 v127; // [rsp+28h] [rbp-D8h]
  __int64 v128; // [rsp+28h] [rbp-D8h]
  __int64 v129; // [rsp+28h] [rbp-D8h]
  __int64 HighPart; // [rsp+28h] [rbp-D8h]
  __int64 v131; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  __int64 v133; // [rsp+30h] [rbp-D0h]
  __int64 v134; // [rsp+30h] [rbp-D0h]
  __int64 v135; // [rsp+30h] [rbp-D0h]
  __int64 v136; // [rsp+30h] [rbp-D0h]
  __int16 v137; // [rsp+50h] [rbp-B0h]
  _BYTE v138[5]; // [rsp+52h] [rbp-AEh] BYREF
  __int16 v139; // [rsp+57h] [rbp-A9h]
  char v140; // [rsp+59h] [rbp-A7h]
  unsigned int v141; // [rsp+5Ch] [rbp-A4h]
  int v142; // [rsp+60h] [rbp-A0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v143; // [rsp+64h] [rbp-9Ch]
  int v144; // [rsp+68h] [rbp-98h]
  int v145; // [rsp+6Ch] [rbp-94h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v146; // [rsp+70h] [rbp-90h]
  int LaptopSpecialCaseFlags; // [rsp+74h] [rbp-8Ch]
  int v148; // [rsp+78h] [rbp-88h]
  _DWORD v149[3]; // [rsp+7Ch] [rbp-84h] BYREF
  __int128 v150; // [rsp+88h] [rbp-78h]
  __int64 v151; // [rsp+98h] [rbp-68h]
  __int16 v152; // [rsp+A0h] [rbp-60h]
  __int128 v153; // [rsp+A8h] [rbp-58h]
  __int64 v154; // [rsp+B8h] [rbp-48h]
  __int64 v155; // [rsp+C0h] [rbp-40h]
  char v156; // [rsp+C8h] [rbp-38h]
  int v157; // [rsp+CCh] [rbp-34h]
  int v158; // [rsp+D0h] [rbp-30h]
  __int64 v159; // [rsp+D4h] [rbp-2Ch]
  __int64 v160; // [rsp+E0h] [rbp-20h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v161; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v162; // [rsp+F8h] [rbp-8h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v163; // [rsp+100h] [rbp+0h] BYREF
  __int128 v164; // [rsp+108h] [rbp+8h]
  __int64 v165; // [rsp+118h] [rbp+18h]
  __int16 v166; // [rsp+120h] [rbp+20h]
  __int128 v167; // [rsp+128h] [rbp+28h]
  __int64 v168; // [rsp+138h] [rbp+38h]
  struct D3DKMT_GETPATHSMODALITY *v169; // [rsp+140h] [rbp+40h]
  char v170; // [rsp+148h] [rbp+48h]
  int v171; // [rsp+14Ch] [rbp+4Ch]
  int v172; // [rsp+150h] [rbp+50h]
  __int64 v173; // [rsp+154h] [rbp+54h]
  __int64 v174; // [rsp+160h] [rbp+60h]
  struct D3DKMT_GETPATHSMODALITY *v175[14]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v176[304]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v177[144]; // [rsp+310h] [rbp+210h] BYREF

  v7 = a4;
  v9 = a3;
  v142 = a4;
  v141 = a3;
  v161 = a6;
  if ( a5 == 4 )
  {
    *(_BYTE *)(a1 + 26) = 0;
    return 0LL;
  }
  v11 = DisplayConfigHandleMonitorInvalidation(3LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
  p_HighPart = &a2->HighPart;
  v15 = v9;
  if ( v11 < 0 )
  {
    v16 = v11;
    WdLogSingleEntry5(2LL, v11, *p_HighPart, a2->LowPart, v15, v7);
    LowPart = a2->LowPart;
    v127 = *p_HighPart;
    WdLogGlobalForLineNumber = 3561;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Unable to invalidate path-persistence invariance. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_IncomingT"
       "argetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v16,
      v127,
      LowPart,
      v15,
      v7);
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    v149[1] = 0;
    v150 = 0LL;
    v151 = 0LL;
    v153 = 0LL;
    v152 = 0;
    v154 = 0LL;
    v155 = 0LL;
    v156 = 1;
    v157 = 0;
    v158 = 1;
    v159 = 0LL;
    v160 = 0LL;
    CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v149[1], 8LL, v12, v13);
    v17 = CCD_BTL::Global();
    v18 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)&v149[1], (struct CCD_BTL *)((char *)v17 + 8));
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry5(2LL, v18, *p_HighPart, a2->LowPart, v15, v142);
      v133 = a2->LowPart;
      v128 = *p_HighPart;
      WdLogGlobalForLineNumber = 3586;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Unable to get copy of most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_IncomingTarge"
         "tId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
        v19,
        v128,
        v133,
        v15,
        v142);
      DxgkLogCodePointPacket(0x3Eu, 0, v19, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
LABEL_9:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v149[1]);
      return 0LL;
    }
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 470);
    if ( v20 > 1 )
    {
      WdLogSingleEntry0(3LL);
      v126 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)*a2;
      WdLogGlobalForLineNumber = 3614;
      DxgkLogCodePointPacket(0x52u, v20, 1u, 0, (__int64)v126);
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      goto LABEL_9;
    }
    if ( !v155 || !*(_WORD *)(v155 + 20) )
    {
      DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 26) = 1;
      goto LABEL_9;
    }
    v162 = 0LL;
    v144 = 0;
    v145 = 0;
    v143 = D3DKMDT_VOT_HD15;
    v146 = D3DKMDT_VOT_HD15;
    v148 = 0;
    v149[0] = 0;
    *(_DWORD *)v138 = 256;
    v139 = 1;
    v140 = 0;
    v137 = 0;
    v138[4] = 0;
    Global = DXGGLOBAL::GetGlobal();
    v22 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v162);
    v23 = v22;
    if ( v22 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v177, v22, 0LL);
      MonitorTypeLockHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v177, 0LL);
      DXGADAPTER::ReleaseReference(v23);
      if ( MonitorTypeLockHeld >= 0 )
      {
        MonitorTypeLockHeld = DxgkQueryMonitorTypeLockHeld(
                                v23,
                                v15,
                                (__int64)v149,
                                (__int64)v138,
                                (__int64)&v138[1],
                                (__int64)&v138[2],
                                (__int64)&v138[3],
                                (__int64)&v138[4]);
        v25 = v145;
        v143 = v146;
        v148 = v149[0];
        LOBYTE(v139) = v138[1];
        HIBYTE(v139) = v138[0];
        v140 = v138[2];
        v137 = *(_WORD *)&v138[3];
      }
      else
      {
        v25 = v144;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v177);
      if ( MonitorTypeLockHeld >= 0 )
      {
LABEL_21:
        LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                                   (const struct CCD_TOPOLOGY *)&v149[1],
                                   a2,
                                   v15,
                                   v143,
                                   (const struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1);
        v29 = LaptopSpecialCaseFlags;
        if ( LaptopSpecialCaseFlags )
        {
          if ( LaptopSpecialCaseFlags == 1 )
          {
            *(_BYTE *)(a1 + 27) = 1;
          }
          else if ( LaptopSpecialCaseFlags == 8 )
          {
            *(_BYTE *)(a1 + 28) = 1;
          }
          else
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3695;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"Invalid laptop special case flags!",
              3695LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        LODWORD(v163) = 0;
        v164 = 0LL;
        v165 = 0LL;
        v167 = 0LL;
        v166 = 0;
        v168 = 0LL;
        v169 = 0LL;
        v170 = 1;
        v171 = 0;
        v172 = 1;
        v173 = 0LL;
        v174 = 0LL;
        CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v163, 8LL, v27, v28);
        if ( v29 && v25 == 1 )
          v30 = v29 | 0x86;
        else
          v30 = 143;
        LODWORD(v31) = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v163, v30, 0LL);
        if ( (int)v31 >= 0 )
        {
          if ( v148 == 15 )
          {
            for ( i = 0; ; ++i )
            {
              v33 = v169 ? *((_WORD *)v169 + 10) : 0;
              if ( i >= v33 )
                break;
              PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v163, i);
              if ( *((_DWORD *)PathDescriptor + 7) == (_DWORD)v15
                && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
                && *((_DWORD *)PathDescriptor + 5) == *p_HighPart )
              {
                goto LABEL_43;
              }
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3745;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Miracast monitor was not active in CCD database so adding as new monitor",
              3745LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v31) = -1073741823;
          }
LABEL_43:
          if ( IsValidCloneConfiguration(v169) )
          {
            if ( (int)v31 >= 0 )
            {
              v37 = CCD_TOPOLOGY::Persist(&v163, 0LL, v35, v36);
              v31 = v37;
              if ( v37 < 0 )
              {
                v38 = v142;
                WdLogSingleEntry5(2LL, v37, a2->HighPart, a2->LowPart, v15, v142);
                v135 = a2->LowPart;
                HighPart = a2->HighPart;
                WdLogGlobalForLineNumber = 3773;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Unable to persist most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_Incomin"
                   "gTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
                  v31,
                  HighPart,
                  v135,
                  v15,
                  v38);
                DxgkLogCodePointPacket(0x3Eu, 2u, v31, 0, (__int64)*a2);
              }
              *(_DWORD *)(a1 + 32) |= 0x40u;
            }
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3755;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"The persisted topology requires cross-adapter clone support however it does not support Virtual Mode. Ther"
               "efore the new monitor will be added in extend mode.",
              3755LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v31) = -1073741823;
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v163);
        if ( (int)v31 >= 0 )
        {
          WdLogSingleEntry5(4LL, a2->HighPart, a2->LowPart, (unsigned int)v15, v142, a5);
          WdLogGlobalForLineNumber = 3794;
LABEL_136:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v149[1]);
          goto LABEL_137;
        }
        if ( (_DWORD)v31 == -1073741266 )
        {
          *(_BYTE *)(a1 + 26) = 1;
          *(_BYTE *)(a1 + 31) = 1;
          goto LABEL_136;
        }
        v39 = v15;
        WdLogSingleEntry5(4LL, (int)v31, a2->HighPart, a2->LowPart, (unsigned int)v15, v142);
        v41 = 1;
        WdLogGlobalForLineNumber = 3803;
        if ( v161 )
          *((_BYTE *)v161 + 45) = 1;
        *(_BYTE *)(a1 + 26) = 1;
        *(_BYTE *)(a1 + 31) = 1;
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v175, 8LL, 0LL, v40);
        v42 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v175, (const struct CCD_TOPOLOGY *)&v149[1]);
        v43 = v42;
        if ( v42 < 0 )
        {
          WdLogSingleEntry2(2LL, v42, &v149[1]);
          WdLogGlobalForLineNumber = 3824;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Unable to create copy of io_pNewTopologySet - will keep current topology. (NtStatus = 0x%I64x, io_pNewTopolo"
             "gySet = 0x%I64x)",
            v43,
            (__int64)&v149[1],
            0LL,
            0LL,
            0LL);
          v46 = CCD_TOPOLOGY::Persist((struct D3DKMT_GETPATHSMODALITY **)&v149[1], 0LL, v44, v45);
          v47 = v46;
          if ( v46 < 0 )
          {
            WdLogSingleEntry2(2LL, v46, &v149[1]);
            WdLogGlobalForLineNumber = 3834;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, io_pNewT"
               "opologySet = 0x%I64x)",
              v47,
              (__int64)&v149[1],
              0LL,
              0LL,
              0LL);
          }
          v48 = v47;
          v49 = v43;
          v50 = 3;
          goto LABEL_58;
        }
        CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)&v149[1], a2, v39);
        if ( !v155 || !*(_WORD *)(v155 + 20) )
        {
          v121 = CCD_BTL::Global();
          CCD_TOPOLOGY::Clear((void **)v121 + 1);
          goto LABEL_134;
        }
        v51 = v137;
        if ( (_BYTE)v137
          || (_BYTE)v139
          || !HIBYTE(v139)
          && (v52 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 0) + 7),
              v53 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 0),
              IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(v53[2], v52, v54),
              v51 = 0,
              !IsPortraitFirstTarget) )
        {
          v41 = 0;
        }
        v56 = DetermineDefaultTopology(LaptopSpecialCaseFlags, v41);
        if ( v56 == 3 )
        {
          if ( v51 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 0) + 129)
            || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 0) + 4)
            && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 0) + 5) )
          {
            if ( !v51 )
            {
              v144 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 0) + 6);
              goto LABEL_94;
            }
          }
          else
          {
            v56 = 4;
          }
        }
        else if ( (unsigned __int16)(v56 - 4) > 1u )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3903;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"(defaultTopology == MultiScreenDefaultShellTopology::Cloned) || (defaultTopology == MultiScreenDefaultShellT"
             "opology::Conjoined) || (defaultTopology == MultiScreenDefaultShellTopology::Disjoint)",
            3903LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)&v149[1], a2);
        v57 = 16LL;
        v144 = UnusedVidpnSourceId;
        if ( UnusedVidpnSourceId == 16 )
        {
          if ( v155 )
            v60 = *(_WORD *)(v155 + 20);
          else
            v60 = 0;
          WdLogSingleEntry2(4LL, v60, 16LL);
          WdLogGlobalForLineNumber = 3953;
          v63 = CCD_TOPOLOGY::Persist(v175, 0LL, v61, v62);
          v64 = v63;
          if ( v63 < 0 )
          {
            WdLogSingleEntry2(2LL, v63, v175);
            WdLogGlobalForLineNumber = 3963;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Origina"
               "lTopologySet = 0x%I64x)",
              v64,
              (__int64)v175,
              0LL,
              0LL,
              0LL);
          }
          v48 = 0;
          v49 = v64;
          v50 = 4;
          goto LABEL_58;
        }
        if ( v56 == 3 )
        {
          if ( !v51 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3980;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"IncomingTargetSupportsVirtualTopologies",
              3980LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          for ( j = 0; ; ++j )
          {
            v66 = v155;
            v67 = v155 ? *(_WORD *)(v155 + 20) : 0;
            if ( j >= v67 )
              break;
            if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], j) + 129) )
            {
              v56 = 4;
              goto LABEL_94;
            }
          }
LABEL_95:
          if ( v66 )
            v68 = *(_WORD *)(v66 + 20);
          else
            v68 = 0;
          v69 = v68 + 1;
          if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v149[1], v69, v57, v58) >= v69 )
          {
            v74 = v69 - 1;
            if ( !(_BYTE)v137 )
            {
              v75 = LaptopSpecialCaseFlags;
              if ( LaptopSpecialCaseFlags )
              {
                if ( v69 != 2 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4043;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"NumPathsToReserve == 2",
                    4043LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v75 = LaptopSpecialCaseFlags;
                }
                if ( v41 )
                  v74 = !IsInternalVideoOutput(v143);
                else
                  v74 = ((unsigned __int8)~v75 >> 3) & 1;
                if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 0) + 31) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4075;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"io_pNewTopologySet->GetPathDescriptor(0)->pDevMode == NULL",
                    4075LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v76 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 0);
                v77 = 2LL;
                v78 = v176;
                do
                {
                  v79 = *((_OWORD *)v76 + 1);
                  *v78 = *(_OWORD *)v76;
                  v80 = *((_OWORD *)v76 + 2);
                  v78[1] = v79;
                  v81 = *((_OWORD *)v76 + 3);
                  v78[2] = v80;
                  v82 = *((_OWORD *)v76 + 4);
                  v78[3] = v81;
                  v83 = *((_OWORD *)v76 + 5);
                  v78[4] = v82;
                  v84 = *((_OWORD *)v76 + 6);
                  v78[5] = v83;
                  v85 = *((_OWORD *)v76 + 7);
                  v76 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v76 + 128);
                  v78[6] = v84;
                  v78 += 8;
                  *(v78 - 1) = v85;
                  --v77;
                }
                while ( v77 );
                v86 = *(_OWORD *)v76;
                v87 = *((_OWORD *)v76 + 1);
                v88 = *((_QWORD *)v76 + 4);
                *v78 = v86;
                v78[1] = v87;
                *((_QWORD *)v78 + 4) = v88;
                v89 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 1u);
                v90 = 2LL;
                v91 = v176;
                do
                {
                  v92 = v91[1];
                  *(_OWORD *)v89 = *v91;
                  v93 = v91[2];
                  *((_OWORD *)v89 + 1) = v92;
                  v94 = v91[3];
                  *((_OWORD *)v89 + 2) = v93;
                  v95 = v91[4];
                  *((_OWORD *)v89 + 3) = v94;
                  v96 = v91[5];
                  *((_OWORD *)v89 + 4) = v95;
                  v97 = v91[6];
                  *((_OWORD *)v89 + 5) = v96;
                  v98 = v91[7];
                  v91 += 8;
                  *((_OWORD *)v89 + 6) = v97;
                  v89 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v89 + 128);
                  *((_OWORD *)v89 - 1) = v98;
                  --v90;
                }
                while ( v90 );
                v99 = *v91;
                v100 = v91[1];
                v101 = *((_QWORD *)v91 + 4);
                *(_OWORD *)v89 = v99;
                *((_OWORD *)v89 + 1) = v100;
                *((_QWORD *)v89 + 4) = v101;
                *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], 1 - v74) = 0xCF00000000000LL;
              }
            }
            v102 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], v74);
            *((struct _LUID *)v102 + 2) = *a2;
            *((_DWORD *)v102 + 6) = v144;
            *((_DWORD *)v102 + 7) = v141;
            v103 = v140 == 0;
            *((_DWORD *)v102 + 22) = v143;
            *((_DWORD *)v102 + 23) = v148;
            *((_BYTE *)v102 + 129) = (HIBYTE(v137) != 0 ? 4 : 0) | ((_BYTE)v137 != 0 ? 2 : 0) | !v103;
            *(_QWORD *)v102 = 0x8F00000000000LL;
            ++*(_WORD *)(v155 + 20);
            if ( v56 == 3 )
            {
              if ( !v155 || *(_WORD *)(v155 + 20) != 2 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4117;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"io_pNewTopologySet->GetPathsCount() == 2",
                  4117LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v104 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v149[1], v74 == 0);
              v106 = *((_QWORD *)v104 + 19);
              *(_QWORD *)v102 |= 0x20000uLL;
              *((_QWORD *)v102 + 19) = v106;
              *((_DWORD *)v102 + 46) = *((_DWORD *)v104 + 46);
              *(_QWORD *)v102 |= 0x4000000000000uLL;
            }
            else
            {
              CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)&v149[1], v74);
            }
            v157 = 1;
            v158 = 4;
            v107 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v149[1], 0, 0LL, v105);
            v110 = v107;
            if ( v107 >= 0 )
            {
              v115 = CCD_TOPOLOGY::Persist((struct D3DKMT_GETPATHSMODALITY **)&v149[1], 1LL, v108, v109);
              v116 = v115;
              if ( v115 == -1073741266 )
              {
                v48 = 0;
                v49 = -1073741266;
                v50 = 7;
              }
              else
              {
                if ( v115 >= 0 )
                {
                  *(_BYTE *)(a1 + 31) = 0;
                  goto LABEL_134;
                }
                WdLogSingleEntry2(2LL, v115, v155);
                WdLogGlobalForLineNumber = 4196;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Unable to persist the newly created topology for newly added monitor - will keep current topology. (Nt"
                   "Status = 0x%I64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
                  v116,
                  v155,
                  0LL,
                  0LL,
                  0LL);
                v119 = CCD_TOPOLOGY::Persist(v175, 0LL, v117, v118);
                v120 = v119;
                if ( v119 < 0 )
                {
                  WdLogSingleEntry2(2LL, v119, v175);
                  WdLogGlobalForLineNumber = 4206;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000LL,
                    0xFFFFFFFFLL,
                    L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &O"
                     "riginalTopologySet = 0x%I64x)",
                    v120,
                    (__int64)v175,
                    0LL,
                    0LL,
                    0LL);
                }
                v48 = v120;
                v49 = v116;
                v50 = 8;
              }
            }
            else
            {
              WdLogSingleEntry2(2LL, v107, v155);
              WdLogGlobalForLineNumber = 4140;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Unable to functionalize topology with newly added monitor - will keep current topology. (NtStatus = 0x%I"
                 "64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
                v110,
                v155,
                0LL,
                0LL,
                0LL);
              v113 = CCD_TOPOLOGY::Persist(v175, 0LL, v111, v112);
              v114 = v113;
              if ( v113 < 0 )
              {
                WdLogSingleEntry2(2LL, v113, v175);
                WdLogGlobalForLineNumber = 4150;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Ori"
                   "ginalTopologySet = 0x%I64x)",
                  v114,
                  (__int64)v175,
                  0LL,
                  0LL,
                  0LL);
              }
              v48 = v114;
              v49 = v110;
              v50 = 6;
            }
          }
          else
          {
            WdLogSingleEntry1(6LL, v69);
            WdLogGlobalForLineNumber = 4009;
            DxgkLogInternalTriageEvent(
              0LL,
              262145LL,
              0xFFFFFFFFLL,
              L"Unable to allocate 0x%I64x paths for newly added monitor topology - will keep current topology. (NumPathsT"
               "oReserve = 0x%I64u)",
              v69,
              0LL,
              0LL,
              0LL,
              0LL);
            v72 = CCD_TOPOLOGY::Persist(v175, 0LL, v70, v71);
            v73 = v72;
            if ( v72 < 0 )
            {
              WdLogSingleEntry2(2LL, v72, v175);
              WdLogGlobalForLineNumber = 4019;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Origi"
                 "nalTopologySet = 0x%I64x)",
                v73,
                (__int64)v175,
                0LL,
                0LL,
                0LL);
            }
            v49 = v69;
            v48 = v73;
            v50 = 5;
          }
LABEL_58:
          DxgkLogCodePointPacket(0x3Eu, v50, v49, v48, (__int64)*a2);
LABEL_134:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v175);
          goto LABEL_136;
        }
LABEL_94:
        v66 = v155;
        goto LABEL_95;
      }
    }
    else
    {
      MonitorTypeLockHeld = -1073741811;
    }
    v26 = v142;
    WdLogSingleEntry5(2LL, MonitorTypeLockHeld, *p_HighPart, a2->LowPart, v15, v142);
    v134 = a2->LowPart;
    v129 = *p_HighPart;
    WdLogGlobalForLineNumber = 3663;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Unable to query monitor type - assumed DMM_VMT_UNINITIALIZED. (_NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x"
       ", i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      MonitorTypeLockHeld,
      v129,
      v134,
      v15,
      v26);
    v145 = 0;
    v143 = D3DKMDT_VOT_UNINITIALIZED;
    v25 = 0;
    v146 = D3DKMDT_VOT_UNINITIALIZED;
    memset(v138, 0, sizeof(v138));
    v139 = 0;
    v140 = 0;
    v137 = 0;
    goto LABEL_21;
  }
LABEL_137:
  v122 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v161);
  v123 = v122;
  if ( v122 < 0 )
  {
    v124 = v142;
    v125 = v141;
    WdLogSingleEntry5(2LL, v122, a2->HighPart, a2->LowPart, v141, v142);
    v136 = a2->LowPart;
    v131 = a2->HighPart;
    WdLogGlobalForLineNumber = 4262;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Unable to invalidate path-persistence/emergency-monitors invariance.(NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%0"
       "8I64x, i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v123,
      v131,
      v136,
      v125,
      v124);
    LODWORD(v123) = 0;
  }
  WdLogSingleEntry5(4LL, a2->HighPart, a2->LowPart, v141, v142, a5);
  result = (unsigned int)v123;
  WdLogGlobalForLineNumber = 4272;
  return result;
}
