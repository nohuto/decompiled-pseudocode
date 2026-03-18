/*
 * XREFs of ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403774A0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1401BFE58 (-DetermineDefaultTopology@@YA-AW4MultiScreenDefaultShellTopology@@IE@Z.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1401C0384 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1401C11BC (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1402612E8 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x140261654 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14036D944 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x140373D4C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140377D7C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403796C4 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x140379754 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x14037A03C (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403BA4F0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140400E0C (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
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
  char v40; // r13
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdi
  unsigned int v47; // r9d
  unsigned int v48; // r8d
  unsigned int v49; // edx
  char v50; // bl
  unsigned int v51; // ebx
  struct _LUID *v52; // rax
  __int64 v53; // r8
  char IsPortraitFirstTarget; // al
  __int16 v55; // r12
  __int64 v56; // r8
  __int64 v57; // r9
  int UnusedVidpnSourceId; // eax
  unsigned __int16 v59; // cx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // eax
  __int64 v63; // rdi
  unsigned int j; // ebx
  __int64 v65; // rdi
  unsigned __int16 v66; // ax
  __int16 v67; // di
  unsigned __int16 v68; // di
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // eax
  __int64 v72; // r12
  unsigned int v73; // ebx
  char v74; // al
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v75; // rax
  __int64 v76; // rdx
  _OWORD *v77; // rcx
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int64 v87; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v88; // rcx
  __int64 v89; // rdx
  _OWORD *v90; // rax
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int64 v100; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v101; // rdi
  bool v102; // zf
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v103; // rax
  __int64 v104; // rcx
  int v105; // eax
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdi
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // eax
  __int64 v112; // r12
  int v113; // eax
  __int64 v114; // rdi
  __int64 v115; // r8
  __int64 v116; // r9
  int v117; // eax
  __int64 v118; // r12
  struct CCD_BTL *v119; // rax
  int v120; // eax
  __int64 v121; // rsi
  __int64 v122; // rbx
  __int64 v123; // rdi
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v124; // [rsp+20h] [rbp-E0h]
  __int64 v125; // [rsp+28h] [rbp-D8h]
  __int64 v126; // [rsp+28h] [rbp-D8h]
  __int64 v127; // [rsp+28h] [rbp-D8h]
  __int64 HighPart; // [rsp+28h] [rbp-D8h]
  __int64 v129; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  __int64 v131; // [rsp+30h] [rbp-D0h]
  __int64 v132; // [rsp+30h] [rbp-D0h]
  __int64 v133; // [rsp+30h] [rbp-D0h]
  __int64 v134; // [rsp+30h] [rbp-D0h]
  __int16 v135; // [rsp+50h] [rbp-B0h]
  _BYTE v136[5]; // [rsp+52h] [rbp-AEh] BYREF
  __int16 v137; // [rsp+57h] [rbp-A9h]
  char v138; // [rsp+59h] [rbp-A7h]
  unsigned int v139; // [rsp+5Ch] [rbp-A4h]
  int v140; // [rsp+60h] [rbp-A0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v141; // [rsp+64h] [rbp-9Ch]
  int v142; // [rsp+68h] [rbp-98h]
  int v143; // [rsp+6Ch] [rbp-94h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v144; // [rsp+70h] [rbp-90h]
  int LaptopSpecialCaseFlags; // [rsp+74h] [rbp-8Ch]
  int v146; // [rsp+78h] [rbp-88h]
  _DWORD v147[3]; // [rsp+7Ch] [rbp-84h] BYREF
  __int128 v148; // [rsp+88h] [rbp-78h]
  __int64 v149; // [rsp+98h] [rbp-68h]
  __int16 v150; // [rsp+A0h] [rbp-60h]
  __int128 v151; // [rsp+A8h] [rbp-58h]
  __int64 v152; // [rsp+B8h] [rbp-48h]
  __int64 v153; // [rsp+C0h] [rbp-40h]
  char v154; // [rsp+C8h] [rbp-38h]
  int v155; // [rsp+CCh] [rbp-34h]
  int v156; // [rsp+D0h] [rbp-30h]
  __int64 v157; // [rsp+D4h] [rbp-2Ch]
  __int64 v158; // [rsp+E0h] [rbp-20h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v159; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v160; // [rsp+F8h] [rbp-8h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v161; // [rsp+100h] [rbp+0h] BYREF
  __int128 v162; // [rsp+108h] [rbp+8h]
  __int64 v163; // [rsp+118h] [rbp+18h]
  __int16 v164; // [rsp+120h] [rbp+20h]
  __int128 v165; // [rsp+128h] [rbp+28h]
  __int64 v166; // [rsp+138h] [rbp+38h]
  struct D3DKMT_GETPATHSMODALITY *v167; // [rsp+140h] [rbp+40h]
  char v168; // [rsp+148h] [rbp+48h]
  int v169; // [rsp+14Ch] [rbp+4Ch]
  int v170; // [rsp+150h] [rbp+50h]
  __int64 v171; // [rsp+154h] [rbp+54h]
  __int64 v172; // [rsp+160h] [rbp+60h]
  struct D3DKMT_GETPATHSMODALITY *v173[14]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v174[304]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v175[144]; // [rsp+310h] [rbp+210h] BYREF

  v7 = a4;
  v9 = a3;
  v140 = a4;
  v139 = a3;
  v159 = a6;
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
    v125 = *p_HighPart;
    WdLogGlobalForLineNumber = 3559;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Unable to invalidate path-persistence invariance. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_IncomingT"
       "argetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v16,
      v125,
      LowPart,
      v15,
      v7);
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    v147[1] = 0;
    v148 = 0LL;
    v149 = 0LL;
    v151 = 0LL;
    v150 = 0;
    v152 = 0LL;
    v153 = 0LL;
    v154 = 1;
    v155 = 0;
    v156 = 1;
    v157 = 0LL;
    v158 = 0LL;
    CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v147[1], 8LL, v12, v13);
    v17 = CCD_BTL::Global();
    v18 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)&v147[1], (struct CCD_BTL *)((char *)v17 + 8));
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry5(2LL, v18, *p_HighPart, a2->LowPart, v15, v140);
      v131 = a2->LowPart;
      v126 = *p_HighPart;
      WdLogGlobalForLineNumber = 3584;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Unable to get copy of most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_IncomingTarge"
         "tId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
        v19,
        v126,
        v131,
        v15,
        v140);
      DxgkLogCodePointPacket(0x3Eu, 0, v19, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
LABEL_9:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v147[1]);
      return 0LL;
    }
    v20 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 462);
    if ( v20 > 1 )
    {
      WdLogSingleEntry0(3LL);
      v124 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)*a2;
      WdLogGlobalForLineNumber = 3612;
      DxgkLogCodePointPacket(0x52u, v20, 1u, 0, (__int64)v124);
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      goto LABEL_9;
    }
    if ( !v153 || !*(_WORD *)(v153 + 20) )
    {
      DxgkLogCodePointPacket(0x3Eu, 1u, 0, 0, (__int64)*a2);
      *(_BYTE *)(a1 + 26) = 1;
      goto LABEL_9;
    }
    v160 = 0LL;
    v142 = 0;
    v143 = 0;
    v141 = D3DKMDT_VOT_HD15;
    v144 = D3DKMDT_VOT_HD15;
    v146 = 0;
    v147[0] = 0;
    *(_DWORD *)v136 = 256;
    v137 = 1;
    v138 = 0;
    v135 = 0;
    v136[4] = 0;
    Global = DXGGLOBAL::GetGlobal();
    v22 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v160);
    v23 = v22;
    if ( v22 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v175, v22, 0LL);
      MonitorTypeLockHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v175, 0LL);
      DXGADAPTER::ReleaseReference(v23);
      if ( MonitorTypeLockHeld >= 0 )
      {
        MonitorTypeLockHeld = DxgkQueryMonitorTypeLockHeld(
                                v23,
                                v15,
                                (__int64)v147,
                                (__int64)v136,
                                (__int64)&v136[1],
                                (__int64)&v136[2],
                                (__int64)&v136[3],
                                (__int64)&v136[4]);
        v25 = v143;
        v141 = v144;
        v146 = v147[0];
        LOBYTE(v137) = v136[1];
        HIBYTE(v137) = v136[0];
        v138 = v136[2];
        v135 = *(_WORD *)&v136[3];
      }
      else
      {
        v25 = v142;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v175);
      if ( MonitorTypeLockHeld >= 0 )
      {
LABEL_21:
        LaptopSpecialCaseFlags = GetLaptopSpecialCaseFlags(
                                   (const struct CCD_TOPOLOGY *)&v147[1],
                                   a2,
                                   v15,
                                   v141,
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
            WdLogGlobalForLineNumber = 3693;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"Invalid laptop special case flags!",
              3693LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        LODWORD(v161) = 0;
        v162 = 0LL;
        v163 = 0LL;
        v165 = 0LL;
        v164 = 0;
        v166 = 0LL;
        v167 = 0LL;
        v168 = 1;
        v169 = 0;
        v170 = 1;
        v171 = 0LL;
        v172 = 0LL;
        CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v161, 8LL, v27, v28);
        if ( v29 && v25 == 1 )
          v30 = v29 | 0x86;
        else
          v30 = 143;
        LODWORD(v31) = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v161, v30, 0LL);
        if ( (int)v31 >= 0 )
        {
          if ( v146 == 15 )
          {
            for ( i = 0; ; ++i )
            {
              v33 = v167 ? *((_WORD *)v167 + 10) : 0;
              if ( i >= v33 )
                break;
              PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v161, i);
              if ( *((_DWORD *)PathDescriptor + 7) == (_DWORD)v15
                && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
                && *((_DWORD *)PathDescriptor + 5) == *p_HighPart )
              {
                goto LABEL_43;
              }
            }
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3743;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Miracast monitor was not active in CCD database so adding as new monitor",
              3743LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v31) = -1073741823;
          }
LABEL_43:
          if ( IsValidCloneConfiguration(v167) )
          {
            if ( (int)v31 >= 0 )
            {
              v37 = CCD_TOPOLOGY::Persist(&v161, 0LL, v35, v36);
              v31 = v37;
              if ( v37 < 0 )
              {
                v38 = v140;
                WdLogSingleEntry5(2LL, v37, a2->HighPart, a2->LowPart, v15, v140);
                v133 = a2->LowPart;
                HighPart = a2->HighPart;
                WdLogGlobalForLineNumber = 3771;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Unable to persist most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_Incomin"
                   "gTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
                  v31,
                  HighPart,
                  v133,
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
            WdLogGlobalForLineNumber = 3753;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"The persisted topology requires cross-adapter clone support however it does not support Virtual Mode. Ther"
               "efore the new monitor will be added in extend mode.",
              3753LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v31) = -1073741823;
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v161);
        if ( (int)v31 >= 0 )
        {
          WdLogSingleEntry5(4LL, a2->HighPart, a2->LowPart, (unsigned int)v15, v140, a5);
          WdLogGlobalForLineNumber = 3792;
LABEL_136:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v147[1]);
          goto LABEL_137;
        }
        if ( (_DWORD)v31 == -1073741266 )
        {
          *(_BYTE *)(a1 + 26) = 1;
          *(_BYTE *)(a1 + 31) = 1;
          goto LABEL_136;
        }
        v39 = v15;
        WdLogSingleEntry5(4LL, (int)v31, a2->HighPart, a2->LowPart, (unsigned int)v15, v140);
        v40 = 1;
        WdLogGlobalForLineNumber = 3801;
        if ( v159 )
          *((_BYTE *)v159 + 45) = 1;
        *(_BYTE *)(a1 + 26) = 1;
        *(_BYTE *)(a1 + 31) = 1;
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v173, 8u, 0);
        v41 = CCD_TOPOLOGY::CopyInheritScope((CCD_TOPOLOGY *)v173, (const struct CCD_TOPOLOGY *)&v147[1]);
        v42 = v41;
        if ( v41 < 0 )
        {
          WdLogSingleEntry2(2LL, v41, &v147[1]);
          WdLogGlobalForLineNumber = 3822;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Unable to create copy of io_pNewTopologySet - will keep current topology. (NtStatus = 0x%I64x, io_pNewTopolo"
             "gySet = 0x%I64x)",
            v42,
            (__int64)&v147[1],
            0LL,
            0LL,
            0LL);
          v45 = CCD_TOPOLOGY::Persist((struct D3DKMT_GETPATHSMODALITY **)&v147[1], 0LL, v43, v44);
          v46 = v45;
          if ( v45 < 0 )
          {
            WdLogSingleEntry2(2LL, v45, &v147[1]);
            WdLogGlobalForLineNumber = 3832;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, io_pNewT"
               "opologySet = 0x%I64x)",
              v46,
              (__int64)&v147[1],
              0LL,
              0LL,
              0LL);
          }
          v47 = v46;
          v48 = v42;
          v49 = 3;
          goto LABEL_58;
        }
        CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)&v147[1], a2, v39);
        if ( !v153 || !*(_WORD *)(v153 + 20) )
        {
          v119 = CCD_BTL::Global();
          CCD_TOPOLOGY::Clear((void **)v119 + 1);
          goto LABEL_134;
        }
        v50 = v135;
        if ( (_BYTE)v135
          || (_BYTE)v137
          || !HIBYTE(v137)
          && (v51 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 0) + 7),
              v52 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 0),
              IsPortraitFirstTarget = DxgkIsPortraitFirstTarget(v52[2], v51, v53),
              v50 = 0,
              !IsPortraitFirstTarget) )
        {
          v40 = 0;
        }
        v55 = DetermineDefaultTopology(LaptopSpecialCaseFlags, v40);
        if ( v55 == 3 )
        {
          if ( v50 && *((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 0) + 129)
            || a2->LowPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 0) + 4)
            && a2->HighPart == *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 0) + 5) )
          {
            if ( !v50 )
            {
              v142 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 0) + 6);
              goto LABEL_94;
            }
          }
          else
          {
            v55 = 4;
          }
        }
        else if ( (unsigned __int16)(v55 - 4) > 1u )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3901;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"(defaultTopology == MultiScreenDefaultShellTopology::Cloned) || (defaultTopology == MultiScreenDefaultShellT"
             "opology::Conjoined) || (defaultTopology == MultiScreenDefaultShellTopology::Disjoint)",
            3901LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)&v147[1], a2);
        v56 = 16LL;
        v142 = UnusedVidpnSourceId;
        if ( UnusedVidpnSourceId == 16 )
        {
          if ( v153 )
            v59 = *(_WORD *)(v153 + 20);
          else
            v59 = 0;
          WdLogSingleEntry2(4LL, v59, 16LL);
          WdLogGlobalForLineNumber = 3951;
          v62 = CCD_TOPOLOGY::Persist(v173, 0LL, v60, v61);
          v63 = v62;
          if ( v62 < 0 )
          {
            WdLogSingleEntry2(2LL, v62, v173);
            WdLogGlobalForLineNumber = 3961;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Origina"
               "lTopologySet = 0x%I64x)",
              v63,
              (__int64)v173,
              0LL,
              0LL,
              0LL);
          }
          v47 = 0;
          v48 = v63;
          v49 = 4;
          goto LABEL_58;
        }
        if ( v55 == 3 )
        {
          if ( !v50 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3978;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"IncomingTargetSupportsVirtualTopologies",
              3978LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          for ( j = 0; ; ++j )
          {
            v65 = v153;
            v66 = v153 ? *(_WORD *)(v153 + 20) : 0;
            if ( j >= v66 )
              break;
            if ( !*((_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], j) + 129) )
            {
              v55 = 4;
              goto LABEL_94;
            }
          }
LABEL_95:
          if ( v65 )
            v67 = *(_WORD *)(v65 + 20);
          else
            v67 = 0;
          v68 = v67 + 1;
          if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v147[1], v68, v56, v57) >= v68 )
          {
            v73 = v68 - 1;
            if ( !(_BYTE)v135 )
            {
              v74 = LaptopSpecialCaseFlags;
              if ( LaptopSpecialCaseFlags )
              {
                if ( v68 != 2 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4041;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"NumPathsToReserve == 2",
                    4041LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v74 = LaptopSpecialCaseFlags;
                }
                if ( v40 )
                  v73 = !IsInternalVideoOutput(v141);
                else
                  v73 = ((unsigned __int8)~v74 >> 3) & 1;
                if ( *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 0) + 31) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4073;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"io_pNewTopologySet->GetPathDescriptor(0)->pDevMode == NULL",
                    4073LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v75 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 0);
                v76 = 2LL;
                v77 = v174;
                do
                {
                  v78 = *((_OWORD *)v75 + 1);
                  *v77 = *(_OWORD *)v75;
                  v79 = *((_OWORD *)v75 + 2);
                  v77[1] = v78;
                  v80 = *((_OWORD *)v75 + 3);
                  v77[2] = v79;
                  v81 = *((_OWORD *)v75 + 4);
                  v77[3] = v80;
                  v82 = *((_OWORD *)v75 + 5);
                  v77[4] = v81;
                  v83 = *((_OWORD *)v75 + 6);
                  v77[5] = v82;
                  v84 = *((_OWORD *)v75 + 7);
                  v75 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v75 + 128);
                  v77[6] = v83;
                  v77 += 8;
                  *(v77 - 1) = v84;
                  --v76;
                }
                while ( v76 );
                v85 = *(_OWORD *)v75;
                v86 = *((_OWORD *)v75 + 1);
                v87 = *((_QWORD *)v75 + 4);
                *v77 = v85;
                v77[1] = v86;
                *((_QWORD *)v77 + 4) = v87;
                v88 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 1u);
                v89 = 2LL;
                v90 = v174;
                do
                {
                  v91 = v90[1];
                  *(_OWORD *)v88 = *v90;
                  v92 = v90[2];
                  *((_OWORD *)v88 + 1) = v91;
                  v93 = v90[3];
                  *((_OWORD *)v88 + 2) = v92;
                  v94 = v90[4];
                  *((_OWORD *)v88 + 3) = v93;
                  v95 = v90[5];
                  *((_OWORD *)v88 + 4) = v94;
                  v96 = v90[6];
                  *((_OWORD *)v88 + 5) = v95;
                  v97 = v90[7];
                  v90 += 8;
                  *((_OWORD *)v88 + 6) = v96;
                  v88 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v88 + 128);
                  *((_OWORD *)v88 - 1) = v97;
                  --v89;
                }
                while ( v89 );
                v98 = *v90;
                v99 = v90[1];
                v100 = *((_QWORD *)v90 + 4);
                *(_OWORD *)v88 = v98;
                *((_OWORD *)v88 + 1) = v99;
                *((_QWORD *)v88 + 4) = v100;
                *(_QWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], 1 - v73) = 0xCF00000000000LL;
              }
            }
            v101 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], v73);
            *((struct _LUID *)v101 + 2) = *a2;
            *((_DWORD *)v101 + 6) = v142;
            *((_DWORD *)v101 + 7) = v139;
            v102 = v138 == 0;
            *((_DWORD *)v101 + 22) = v141;
            *((_DWORD *)v101 + 23) = v146;
            *((_BYTE *)v101 + 129) = (HIBYTE(v135) != 0 ? 4 : 0) | ((_BYTE)v135 != 0 ? 2 : 0) | !v102;
            *(_QWORD *)v101 = 0x8F00000000000LL;
            ++*(_WORD *)(v153 + 20);
            if ( v55 == 3 )
            {
              if ( !v153 || *(_WORD *)(v153 + 20) != 2 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4115;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"io_pNewTopologySet->GetPathsCount() == 2",
                  4115LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v103 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v147[1], v73 == 0);
              v104 = *((_QWORD *)v103 + 19);
              *(_QWORD *)v101 |= 0x20000uLL;
              *((_QWORD *)v101 + 19) = v104;
              *((_DWORD *)v101 + 46) = *((_DWORD *)v103 + 46);
              *(_QWORD *)v101 |= 0x4000000000000uLL;
            }
            else
            {
              CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)&v147[1], v73);
            }
            v155 = 1;
            v156 = 4;
            v105 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v147[1], 0, 0);
            v108 = v105;
            if ( v105 >= 0 )
            {
              v113 = CCD_TOPOLOGY::Persist((struct D3DKMT_GETPATHSMODALITY **)&v147[1], 1LL, v106, v107);
              v114 = v113;
              if ( v113 == -1073741266 )
              {
                v47 = 0;
                v48 = -1073741266;
                v49 = 7;
              }
              else
              {
                if ( v113 >= 0 )
                {
                  *(_BYTE *)(a1 + 31) = 0;
                  goto LABEL_134;
                }
                WdLogSingleEntry2(2LL, v113, v153);
                WdLogGlobalForLineNumber = 4194;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Unable to persist the newly created topology for newly added monitor - will keep current topology. (Nt"
                   "Status = 0x%I64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
                  v114,
                  v153,
                  0LL,
                  0LL,
                  0LL);
                v117 = CCD_TOPOLOGY::Persist(v173, 0LL, v115, v116);
                v118 = v117;
                if ( v117 < 0 )
                {
                  WdLogSingleEntry2(2LL, v117, v173);
                  WdLogGlobalForLineNumber = 4204;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &O"
                     "riginalTopologySet = 0x%I64x)",
                    v118,
                    (__int64)v173,
                    0LL,
                    0LL,
                    0LL);
                }
                v47 = v118;
                v48 = v114;
                v49 = 8;
              }
            }
            else
            {
              WdLogSingleEntry2(2LL, v105, v153);
              WdLogGlobalForLineNumber = 4138;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Unable to functionalize topology with newly added monitor - will keep current topology. (NtStatus = 0x%I"
                 "64x, io_pNewTopologySet->GetPathsModality() = 0x%I64x)",
                v108,
                v153,
                0LL,
                0LL,
                0LL);
              v111 = CCD_TOPOLOGY::Persist(v173, 0LL, v109, v110);
              v112 = v111;
              if ( v111 < 0 )
              {
                WdLogSingleEntry2(2LL, v111, v173);
                WdLogGlobalForLineNumber = 4148;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Ori"
                   "ginalTopologySet = 0x%I64x)",
                  v112,
                  (__int64)v173,
                  0LL,
                  0LL,
                  0LL);
              }
              v47 = v112;
              v48 = v108;
              v49 = 6;
            }
          }
          else
          {
            WdLogSingleEntry1(6LL, v68);
            WdLogGlobalForLineNumber = 4007;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              0xFFFFFFFFLL,
              L"Unable to allocate 0x%I64x paths for newly added monitor topology - will keep current topology. (NumPathsT"
               "oReserve = 0x%I64u)",
              v68,
              0LL,
              0LL,
              0LL,
              0LL);
            v71 = CCD_TOPOLOGY::Persist(v173, 0LL, v69, v70);
            v72 = v71;
            if ( v71 < 0 )
            {
              WdLogSingleEntry2(2LL, v71, v173);
              WdLogGlobalForLineNumber = 4017;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Unable to persist current topology - default topology will be created later. (NtStatus = 0x%I64x, &Origi"
                 "nalTopologySet = 0x%I64x)",
                v72,
                (__int64)v173,
                0LL,
                0LL,
                0LL);
            }
            v48 = v68;
            v47 = v72;
            v49 = 5;
          }
LABEL_58:
          DxgkLogCodePointPacket(0x3Eu, v49, v48, v47, (__int64)*a2);
LABEL_134:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v173);
          goto LABEL_136;
        }
LABEL_94:
        v65 = v153;
        goto LABEL_95;
      }
    }
    else
    {
      MonitorTypeLockHeld = -1073741811;
    }
    v26 = v140;
    WdLogSingleEntry5(2LL, MonitorTypeLockHeld, *p_HighPart, a2->LowPart, v15, v140);
    v132 = a2->LowPart;
    v127 = *p_HighPart;
    WdLogGlobalForLineNumber = 3661;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Unable to query monitor type - assumed DMM_VMT_UNINITIALIZED. (_NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x"
       ", i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      MonitorTypeLockHeld,
      v127,
      v132,
      v15,
      v26);
    v143 = 0;
    v141 = D3DKMDT_VOT_UNINITIALIZED;
    v25 = 0;
    v144 = D3DKMDT_VOT_UNINITIALIZED;
    memset(v136, 0, sizeof(v136));
    v137 = 0;
    v138 = 0;
    v135 = 0;
    goto LABEL_21;
  }
LABEL_137:
  v120 = DisplayConfigHandleMonitorInvalidation(1LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v159);
  v121 = v120;
  if ( v120 < 0 )
  {
    v122 = v140;
    v123 = v139;
    WdLogSingleEntry5(2LL, v120, a2->HighPart, a2->LowPart, v139, v140);
    v134 = a2->LowPart;
    v129 = a2->HighPart;
    WdLogGlobalForLineNumber = 4260;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Unable to invalidate path-persistence/emergency-monitors invariance.(NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%0"
       "8I64x, i_IncomingTargetId = 0x%I64x, i_MonitorEvent = 0x%I64x)",
      v121,
      v129,
      v134,
      v123,
      v122);
    LODWORD(v121) = 0;
  }
  WdLogSingleEntry5(4LL, a2->HighPart, a2->LowPart, v139, v140, a5);
  result = (unsigned int)v121;
  WdLogGlobalForLineNumber = 4270;
  return result;
}
