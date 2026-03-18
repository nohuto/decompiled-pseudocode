/*
 * XREFs of ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x14028AEA0
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x14028A7D0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x140034684 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003ECE0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14008FCCC (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x14028D5B0 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1402A496C (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1402E7568 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x140302664 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_b9a5656a752cedcbf1444dc35c6078d9_@@CA@PEAVOUTPUTDUPL_MGR@@P82@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1@Z @ 0x140303608 (-_lambda_invoker_cdecl_@_lambda_b9a5656a752cedcbf1444dc35c6078d9_@@CA@PEAVOUTPUTDUPL_MGR@@P82@EA.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1403AC6F4 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1403B096C (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall SetPointerPositionForDisplaySource(
        struct DISPLAY_SOURCE *this,
        struct SESSION_VIEW *a2,
        const struct _DXGKARG_SETPOINTERPOSITION *a3,
        int a4,
        int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rbx
  DXGADAPTER *v9; // r12
  char v11; // r8
  DXGADAPTER *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 Y; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // r9d
  __int64 VidPnSourceId; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int v26; // edx
  MONITOR_MGR *v27; // r10
  __int64 v28; // rdi
  bool v29; // r14
  __int64 v30; // r8
  __int64 v31; // rcx
  bool v32; // al
  unsigned __int64 v34; // rdx
  __int64 v35; // rbx
  bool v36; // zf
  unsigned __int64 v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  int v40; // esi
  __int64 v41; // r9
  unsigned int v42; // r8d
  unsigned int v43; // r10d
  int v44; // r13d
  __int128 v45; // xmm0
  int v46; // r11d
  unsigned int v47; // edx
  INT v48; // r9d
  int v49; // ecx
  int v50; // r12d
  int v51; // eax
  int v52; // r13d
  int v53; // eax
  int v54; // ecx
  int v55; // r10d
  INT v56; // edx
  INT v57; // r8d
  int v58; // r11d
  int v59; // ecx
  __int64 v60; // rsi
  KIRQL CurrentIrql; // al
  __int64 v62; // r12
  struct DXGTHREAD *v63; // rdi
  int v64; // r14d
  int v65; // eax
  __int64 v66; // r13
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdi
  __int64 v75; // r14
  char v76; // si
  INT X; // r8d
  INT v78; // r12d
  INT v79; // r13d
  __int64 v80; // rcx
  DXGADAPTER *v81; // rcx
  struct DISPLAY_SOURCE *v82; // rcx
  __int64 v83; // rdi
  const struct _DXGKARG_SETPOINTERPOSITION *v84; // rsi
  __int64 v85; // r14
  __int64 v86; // rax
  DXGADAPTER *v87; // rsi
  __int64 v88; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // r15
  DXGADAPTER *v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // r8
  char v93; // bl
  DXGADAPTER *v94; // rdi
  __int64 v95; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // r13
  __int64 v102; // rdi
  __int64 v103; // rax
  int v104; // ecx
  int v105; // r14d
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rdx
  _QWORD *v118; // rcx
  __int64 v119; // rdi
  unsigned int v120; // r12d
  __int64 v121; // rdi
  MONITOR_MGR *v122; // r10
  __int64 v123; // rdi
  char v124; // si
  __int64 v125; // rcx
  __int64 v126; // rdi
  __int64 v127; // rax
  int v128; // ecx
  __int64 v129; // rax
  __int64 v130; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v132; // rsi
  const void *pPixels; // r9
  int v134; // eax
  __int64 v135; // rdi
  __int64 v136; // rax
  _QWORD *v137; // rax
  int IndirectDisplayPairedAdapter; // eax
  __int64 Height; // rcx
  __int64 Width; // rdx
  __int64 v141; // rax
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rcx
  int v150; // r14d
  int v151; // r14d
  unsigned int v152; // edx
  unsigned int v153; // r8d
  unsigned int v154; // r8d
  __int64 v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rdx
  struct DXGMONITOR *v158; // rdx
  __int64 v159; // rax
  struct DXGMONITOR *v160; // rdx
  __int64 v161; // rax
  int v162; // eax
  __int64 v163; // rdi
  KIRQL v164; // al
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 Timeouta; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutb; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutc; // [rsp+20h] [rbp-E0h]
  __int64 Timeoutd; // [rsp+20h] [rbp-E0h]
  __int64 v170; // [rsp+28h] [rbp-D8h]
  __int64 v171; // [rsp+28h] [rbp-D8h]
  __int64 v172; // [rsp+28h] [rbp-D8h]
  __int64 v173; // [rsp+28h] [rbp-D8h]
  __int64 v174; // [rsp+28h] [rbp-D8h]
  __int64 v175; // [rsp+30h] [rbp-D0h]
  __int64 v176; // [rsp+30h] [rbp-D0h]
  __int64 v177; // [rsp+30h] [rbp-D0h]
  __int64 v178; // [rsp+30h] [rbp-D0h]
  __int64 v179; // [rsp+38h] [rbp-C8h]
  char v180; // [rsp+50h] [rbp-B0h]
  unsigned int v181; // [rsp+54h] [rbp-ACh]
  int v182; // [rsp+54h] [rbp-ACh]
  int v183; // [rsp+58h] [rbp-A8h]
  INT v184; // [rsp+60h] [rbp-A0h]
  INT v185; // [rsp+60h] [rbp-A0h]
  __int64 v186; // [rsp+60h] [rbp-A0h]
  __int64 v187; // [rsp+68h] [rbp-98h] BYREF
  char v188; // [rsp+70h] [rbp-90h]
  DXGADAPTER *v189[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v190; // [rsp+88h] [rbp-78h]
  const struct _DXGKARG_SETPOINTERPOSITION *v191; // [rsp+90h] [rbp-70h]
  __int128 v192; // [rsp+98h] [rbp-68h]
  __int64 v193; // [rsp+A8h] [rbp-58h] BYREF
  struct DXGTHREAD *DxgThread; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v195; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v196[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v197; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v198[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v199; // [rsp+E8h] [rbp-18h] BYREF
  DXGADAPTER *v200; // [rsp+F0h] [rbp-10h]
  char v201; // [rsp+F8h] [rbp-8h]
  void *v202; // [rsp+100h] [rbp+0h] BYREF
  __int64 v203; // [rsp+108h] [rbp+8h]
  void *v204; // [rsp+110h] [rbp+10h] BYREF
  __int64 v205; // [rsp+118h] [rbp+18h]
  int v206; // [rsp+120h] [rbp+20h] BYREF
  __int64 v207; // [rsp+128h] [rbp+28h]
  char v208; // [rsp+130h] [rbp+30h]
  _BYTE v209[16]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v210; // [rsp+150h] [rbp+50h] BYREF
  __int64 v211; // [rsp+160h] [rbp+60h]
  _DXGKARG_SETPOINTERPOSITION v212; // [rsp+168h] [rbp+68h] BYREF
  char v213; // [rsp+180h] [rbp+80h] BYREF
  char v214; // [rsp+181h] [rbp+81h]
  _BYTE v215[16]; // [rsp+188h] [rbp+88h] BYREF
  DXGADAPTER *v216; // [rsp+198h] [rbp+98h]
  _BYTE v217[16]; // [rsp+1C8h] [rbp+C8h] BYREF
  DXGADAPTER *v218; // [rsp+1D8h] [rbp+D8h]
  char v219; // [rsp+1E0h] [rbp+E0h]
  char *v220; // [rsp+1E8h] [rbp+E8h]
  _BYTE v221[8]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v222[16]; // [rsp+218h] [rbp+118h] BYREF
  DXGADAPTER *v223; // [rsp+228h] [rbp+128h]
  _BYTE v224[16]; // [rsp+258h] [rbp+158h] BYREF
  DXGADAPTER *v225; // [rsp+268h] [rbp+168h]
  char v226; // [rsp+270h] [rbp+170h]
  __int64 v227; // [rsp+278h] [rbp+178h]
  char v228[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2A8h] [rbp+1A8h] BYREF
  void *retaddr; // [rsp+318h] [rbp+218h]

  v5 = *((_QWORD *)this + 1);
  v191 = a3;
  v189[0] = a2;
  v211 = 0LL;
  v7 = *(_QWORD *)(v5 + 16);
  v9 = a2;
  v210 = 0LL;
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1787;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 1787LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)(v7 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1788;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      1788LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v212 = *a3;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v213, (struct DXGADAPTER *const)v7, 0LL);
  if ( v219 != v11 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v217, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  v12 = v218;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v218 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v218 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventBlockThread, v14, 72);
      KeWaitForSingleObject((char *)v218 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v218, 0LL);
    v12 = v218;
  }
  v220 = 0LL;
  v219 = 1;
  if ( *((_DWORD *)v12 + 50) != 1 )
    goto LABEL_172;
  if ( v216 != v218 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v215, 0LL);
    if ( *((_DWORD *)v216 + 50) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v215);
LABEL_172:
      COREACCESS::Release((COREACCESS *)v217);
      WdLogSingleEntry3(2LL, *(int *)(v7 + 416), *(unsigned int *)(v7 + 412), -1073741130LL);
      v171 = *(unsigned int *)(v7 + 412);
      Timeouta = *(int *)(v7 + 416);
      WdLogGlobalForLineNumber = 1801;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get CoreAdapterAccess lock on adapter 0x%I64x%08I64x, returning 0x%I64x.",
        Timeouta,
        v171,
        -1073741130LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v213);
      return 0LL;
    }
  }
  v214 = 1;
  v15 = *(_QWORD *)(v7 + 3120);
  v187 = v15 + 472;
  v181 = 0;
  v188 = 0;
  if ( v15 == -472 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v187 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = v187;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v187 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v187 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 521;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 521LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v187 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v187 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = *(_DWORD *)(v187 + 36);
        if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventBlockThread, Y, v20);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v187 + 16));
      ExAcquirePushLockExclusiveEx(v187 + 8, 0LL);
    }
    if ( *(_QWORD *)(v187 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 547;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 547LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v187 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 548;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 548LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v187 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v16 + 32) = 1;
  }
  v188 = 1;
  if ( a4 && (a3->Flags.Value & 1) != 0 )
  {
    v142 = *((_DWORD *)this + 939);
    Y = (unsigned int)a3->Y;
    if ( v142 == -1 && *((_DWORD *)this + 940) == -1
      || (v143 = a3->X + v142, v143 < 0)
      || v143 >= *((_DWORD *)this + 248)
      || (v144 = Y + *((_DWORD *)this + 940), v144 < 0)
      || v144 >= *((_DWORD *)this + 249) )
    {
      WdLogSingleEntry3(2LL, *(int *)(v7 + 416), *(unsigned int *)(v7 + 412), *((unsigned int *)this + 4));
      v155 = *((unsigned int *)this + 4);
      v156 = *(unsigned int *)(v7 + 412);
      v157 = *(int *)(v7 + 416);
      WdLogGlobalForLineNumber = 1820;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid DXGKARG_SETPOINTERPOSITION passed in DxgkSetPointerPosition() function: Adapter LUID: (0x%I64x%08I64x) V"
         "idpnSourceId: (0x%I64x).",
        v157,
        v156,
        v155,
        0LL,
        0LL);
      goto LABEL_168;
    }
    v181 = 0;
  }
  if ( (*(_DWORD *)(v7 + 444) & 0x100) == 0 && (**(_DWORD **)(v7 + 3008) & 8) != 0 )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v187);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v213);
    return 0LL;
  }
  VidPnSourceId = *((unsigned int *)this + 4);
  v212.VidPnSourceId = VidPnSourceId;
  v22 = (unsigned int)VidPnSourceId;
  v23 = *(_QWORD *)(v7 + 3120);
  if ( (unsigned int)VidPnSourceId >= *(_DWORD *)(v23 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6425;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6425LL,
      0LL,
      0LL,
      0LL,
      0LL);
    VidPnSourceId = v212.VidPnSourceId;
  }
  v24 = 3984 * v22;
  if ( !*(_BYTE *)(3984 * v22 + *(_QWORD *)(v23 + 128) + 760) )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, VidPnSourceId, Y, v18);
    v38[3] = -1073741823LL;
    v38[4] = v212.VidPnSourceId;
    v39 = *(_BYTE *)&v212.Flags.0 & 1;
    v38[6] = v7;
    v38[5] = v39;
    WdLogGlobalForLineNumber = 1977;
    goto LABEL_110;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v179) = v212.Flags.0;
    LODWORD(v175) = v212.Y;
    LODWORD(v170) = v212.X;
    LODWORD(Timeout) = VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(v24, (const EVENT_DESCRIPTOR *)"m", Y, v7, Timeout, v170, v175, v179);
  }
  if ( *((_DWORD *)this + 268) == -1 )
    goto LABEL_292;
  v25 = *(_QWORD *)(v7 + 3120);
  if ( !v25 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10225;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The selected adapter is render-only",
      10225LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_292:
    WdLogSingleEntry4(2LL, *((unsigned int *)this + 4), *(int *)(v7 + 416), *(unsigned int *)(v7 + 412), -1073741811LL);
    v177 = *(unsigned int *)(v7 + 412);
    v173 = *(int *)(v7 + 416);
    Timeoutc = *((unsigned int *)this + 4);
    WdLogGlobalForLineNumber = 1862;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"IsVirtualizationDisabledForTarget failed on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
      Timeoutc,
      v173,
      v177,
      -1073741811LL,
      0LL);
    goto LABEL_92;
  }
  if ( *(_QWORD *)(v25 + 112) )
  {
    v202 = retaddr;
    v203 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v202);
    MONITOR_MGR::_GetMonitorInstance(v27, v26, 1u, (struct MONITOR_REF_ACCESSOR *)&v202);
    v28 = v203;
    v195 = v203;
    if ( v203 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v28 + 40), 1u);
    }
    v196[0] = retaddr;
    v196[1] = v28;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v196);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v202);
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v195, v158);
    v28 = v195;
  }
  if ( v28 )
  {
    if ( *(_DWORD *)(v28 + 280) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5268;
    }
    v29 = *(_DWORD *)(*(_QWORD *)(v28 + 240) + 16LL) || (*(_BYTE *)(v28 + 176) & 0x40) != 0;
    ExReleaseResourceLite((PERESOURCE)(v28 + 40));
    KeLeaveCriticalRegion();
    v195 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v196);
    v31 = v195;
    if ( v195 )
    {
      ExReleaseResourceLite((PERESOURCE)(v195 + 40));
      KeLeaveCriticalRegion();
    }
    if ( v29 )
    {
      LOBYTE(v31) = 1;
      v32 = 1;
      goto LABEL_180;
    }
  }
  else
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v196);
    v31 = v195;
    if ( v195 )
    {
      ExReleaseResourceLite((PERESOURCE)(v195 + 40));
      KeLeaveCriticalRegion();
    }
  }
  LOBYTE(v31) = *(_BYTE *)(v25 + 289) == 0;
  v32 = *(_BYTE *)(v25 + 290) == 0;
LABEL_180:
  v180 = v31;
  if ( (!(_BYTE)v31 || !v32) && (*(_BYTE *)&v212.Flags.0 & 1) != 0 && !a5 )
  {
    v100 = *((unsigned int *)this + 4);
    v101 = *((_QWORD *)this + 1);
    v190 = *((_DWORD *)this + 4);
    if ( (_BYTE)v31 )
    {
      if ( !*(_BYTE *)(v101 + 289) )
      {
        v126 = 3984 * v100;
        v127 = *(_QWORD *)(v101 + 128);
        v128 = *(_DWORD *)(v127 + v126 + 1020);
        if ( v128 != 1 )
        {
          switch ( v128 )
          {
            case 2:
              v105 = 2;
              goto LABEL_211;
            case 3:
              v105 = 3;
              goto LABEL_211;
            case 4:
              v105 = 4;
              goto LABEL_211;
          }
          WdLogSingleEntry2(2LL, *(int *)(v127 + v126 + 1020), *(_QWORD *)(v101 + 16));
          v161 = *(_QWORD *)(v101 + 128);
          WdLogGlobalForLineNumber = 8374;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
            *(int *)(v126 + v161 + 1020),
            *(_QWORD *)(v101 + 16),
            0LL,
            0LL,
            0LL);
        }
      }
    }
    else if ( *(_BYTE *)(v101 + 289) )
    {
      v102 = 3984 * v100;
      v103 = *(_QWORD *)(v101 + 128);
      v104 = *(_DWORD *)(v102 + v103 + 1020);
      switch ( v104 )
      {
        case 1:
LABEL_186:
          v105 = 1;
          break;
        case 2:
          v105 = 2;
          break;
        case 3:
          v105 = 3;
          break;
        case 4:
          v105 = 4;
          break;
        default:
          WdLogSingleEntry2(2LL, *(int *)(v102 + v103 + 1020), *(_QWORD *)(v101 + 16));
          v159 = *(_QWORD *)(v101 + 128);
          WdLogGlobalForLineNumber = 8374;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
            *(int *)(v159 + v102 + 1020),
            *(_QWORD *)(v101 + 16),
            0LL,
            0LL,
            0LL);
          goto LABEL_186;
      }
      v106 = *(_QWORD *)(v101 + 16);
      if ( v106 )
      {
        v107 = *(_QWORD *)(v106 + 3120);
        if ( v107 )
        {
          v108 = *(_QWORD *)(v107 + 104);
          if ( v108 )
          {
            DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v108 + 40));
            v113 = *(_QWORD *)(v108 + 128);
            if ( v113
              && (_InterlockedIncrement((volatile signed __int32 *)(v113 + 32)),
                  v114 = *(_QWORD *)(v108 + 128),
                  *(_QWORD *)&v192 = v114,
                  (v193 = v114) != 0) )
            {
              v115 = v114 + 96;
              v116 = *(_QWORD *)(v115 + 24);
              v117 = v115 + 24;
              v186 = v115;
              if ( v116 == v115 + 24 )
                v118 = 0LL;
              else
                v118 = (_QWORD *)(v116 - 8);
              v119 = v190;
              while ( v118 )
              {
                if ( *(_DWORD *)(v118[11] + 24LL) == v190 )
                {
                  v120 = *(_DWORD *)(v118[12] + 24LL);
                  ReferenceCounted::Release((ReferenceCounted *)(v192 + 24));
                  v193 = 0LL;
                  DXGFASTMUTEX::Release((struct _KTHREAD **)(v108 + 40));
                  v121 = *(_QWORD *)(v101 + 16);
                  if ( !v121 || v120 == -1 )
                    goto LABEL_219;
                  if ( !*(_QWORD *)(v121 + 3120) )
                  {
                    WdLogSingleEntry0(1LL);
                    WdLogGlobalForLineNumber = 782;
                  }
                  if ( *(_QWORD *)(*(_QWORD *)(v121 + 3120) + 112LL) )
                  {
                    v204 = retaddr;
                    v205 = 0LL;
                    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v204);
                    MONITOR_MGR::_GetMonitorInstance(v122, v120, 1u, (struct MONITOR_REF_ACCESSOR *)&v204);
                    v123 = v205;
                    v197 = v205;
                    if ( v205 )
                    {
                      KeEnterCriticalRegion();
                      ExAcquireResourceSharedLite((PERESOURCE)(v123 + 40), 1u);
                    }
                    v198[0] = retaddr;
                    v198[1] = v123;
                    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v198);
                    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v204);
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v121);
                    WdLogGlobalForLineNumber = 791;
                    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR(
                      (CONST_MONITOR_REF_LOCK_ACCESSOR *)&v197,
                      v160);
                    v123 = v197;
                  }
                  if ( v123 )
                  {
                    v124 = 0;
                    if ( *(_DWORD *)(v123 + 312) != *(_DWORD *)(v123 + 304) )
                      v124 = *(_DWORD *)(v123 + 312);
                    ExReleaseResourceLite((PERESOURCE)(v123 + 40));
                    KeLeaveCriticalRegion();
                    v197 = 0LL;
                    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v198);
                    if ( v197 )
                    {
                      ExReleaseResourceLite((PERESOURCE)(v197 + 40));
                      KeLeaveCriticalRegion();
                    }
                    goto LABEL_210;
                  }
                  WdLogSingleEntry1(2LL, -1073741275LL);
                  WdLogGlobalForLineNumber = 2643;
                  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v198);
                  if ( v197 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v197 + 40));
                    KeLeaveCriticalRegion();
                    v124 = 0;
                  }
                  else
                  {
LABEL_219:
                    v124 = 0;
                  }
LABEL_210:
                  v9 = v189[0];
                  v105 = ((v124 + (_BYTE)v105 - 1) & 3) + 1;
                  goto LABEL_211;
                }
                v129 = v118[1];
                v118 = (_QWORD *)(v129 - 8);
                if ( v129 == v117 )
                  v118 = 0LL;
              }
              v130 = *(_QWORD *)(v186 + 24);
              if ( v130 == v186 + 24 || v130 == 8 )
              {
                v136 = WdLogNewEntry5_WdTrace(v130, v117, 0LL, 0LL);
                v149 = v186;
                *(_QWORD *)(v136 + 24) = v186;
                WdLogGlobalForLineNumber = 195;
              }
              else
              {
                v145 = WdLogNewEntry5_WdTrace(v130, v117, 0LL, 0LL);
                v149 = v186;
                *(_QWORD *)(v145 + 24) = v190;
                *(_QWORD *)(v145 + 32) = v186;
                WdLogGlobalForLineNumber = 187;
              }
              v137 = (_QWORD *)WdLogNewEntry5_WdTrace(v149, v146, v147, v148);
              v137[5] = v186;
              v137[3] = 0LL;
              v137[4] = v119;
              v137[6] = -1071774919LL;
              WdLogGlobalForLineNumber = 9239;
              auto_rc<DMMVIDPN const>::reset(&v193, 0LL);
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v108 + 40));
              v9 = v189[0];
            }
            else
            {
              v193 = 0LL;
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v110, v109, v111, v112) + 24) = v106;
              WdLogGlobalForLineNumber = 9220;
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v108 + 40));
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, *(_QWORD *)(v101 + 16));
            WdLogGlobalForLineNumber = 9200;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, *(_QWORD *)(v101 + 16));
          WdLogGlobalForLineNumber = 9186;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Caller specified adapter handle 0x%I64x is a render only adapter.",
            v106,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 0LL);
        WdLogGlobalForLineNumber = 9172;
      }
LABEL_211:
      v125 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v125 + 184)
        || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v125 + 168)) )
      {
        v40 = 0;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        v40 = 0;
        WdLogGlobalForLineNumber = 5545;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_DisplayCore->IsCoreResourceSharedOwner()",
          5545LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v41 = *((_QWORD *)this + 106);
      if ( !v41
        || (v42 = *((_DWORD *)this + 207), v42 > *(_DWORD *)(v7 + 2424))
        || (v43 = *((_DWORD *)this + 208), v43 > *(_DWORD *)(v7 + 2428)) )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)this + 207), *((unsigned int *)this + 208), v41);
        v97 = *((unsigned int *)this + 208);
        v98 = *((unsigned int *)this + 207);
        v99 = *((_QWORD *)this + 106);
        WdLogGlobalForLineNumber = 1895;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"GetSavedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.",
          v98,
          v97,
          v99,
          0LL,
          0LL);
        goto LABEL_168;
      }
      v44 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
      v45 = *((_OWORD *)this + 43);
      v46 = *((_DWORD *)v9 + 9) - *((_DWORD *)v9 + 7);
      v47 = *((_DWORD *)this + 178);
      v48 = *((_DWORD *)this + 177);
      v182 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
      v49 = *((_DWORD *)v9 + 8) - *((_DWORD *)v9 + 6);
      v36 = *((_BYTE *)this + 704) == 0;
      v190 = v47;
      v184 = v48;
      v192 = v45;
      v183 = v44;
      if ( v36 )
      {
        v48 = DWORD2(v192);
        v40 = DWORD1(v192);
        v50 = v192;
        v190 = HIDWORD(v192);
        v51 = v182;
        v184 = DWORD2(v192);
      }
      else
      {
        v44 = v48;
        v183 = v48;
        v51 = v47;
        v182 = v47;
        v50 = 0;
      }
      if ( v105 == 1 || v105 == 3 )
      {
        v52 = v191->X * v44 / v49;
        v53 = v182;
      }
      else
      {
        v52 = v191->X * v51 / v49;
        v53 = v183;
      }
      v54 = v191->Y * v53 / v46;
      LODWORD(v192) = v54;
      if ( v180 )
      {
        v212.X = v50 + v52;
        v212.Y = v54 + v40;
LABEL_90:
        FillClipParams(
          (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
          this,
          &v212,
          (struct CURSOR_CLIP_PARAMS *)&v210);
        if ( !HIDWORD(v211) )
        {
          if ( *((_BYTE *)this + 767) )
          {
            v162 = ADAPTER_DISPLAY::DdiSetPointerShape(
                     *(ADAPTER_DISPLAY **)(v7 + 3120),
                     (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824));
            if ( v162 < 0 )
            {
              v163 = v162;
              WdLogSingleEntry4(2LL, *((unsigned int *)this + 4), *(int *)(v7 + 416), *(unsigned int *)(v7 + 412), v162);
              v178 = *(unsigned int *)(v7 + 412);
              v174 = *(int *)(v7 + 416);
              Timeoutd = *((unsigned int *)this + 4);
              WdLogGlobalForLineNumber = 1959;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"DdiSetPointerShape failed while setting last saved cursor shape on VidPn Source 0x%I64x adapter 0x%I64x%"
                 "08I64x, returning 0x%I64x.",
                Timeoutd,
                v174,
                v178,
                v163,
                0LL);
            }
            *((_BYTE *)this + 767) = 0;
          }
          goto LABEL_92;
        }
        ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 0);
        v132 = ClippedCursor;
        pPixels = ClippedCursor->pPixels;
        if ( pPixels
          && ClippedCursor->Width <= *(_DWORD *)(v7 + 2424)
          && ClippedCursor->Height <= *(_DWORD *)(v7 + 2428) )
        {
          ClipCurrentCursor(
            (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
            ClippedCursor,
            (struct CURSOR_CLIP_PARAMS *)&v210);
          v132->VidPnSourceId = *((_DWORD *)this + 4);
          v134 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v7 + 3120), v132);
          if ( v134 < 0 )
          {
            v135 = v134;
            WdLogSingleEntry4(2LL, *((unsigned int *)this + 4), *(int *)(v7 + 416), *(unsigned int *)(v7 + 412), v134);
            v176 = *(unsigned int *)(v7 + 412);
            v172 = *(int *)(v7 + 416);
            Timeoutb = *((unsigned int *)this + 4);
            WdLogGlobalForLineNumber = 1941;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"DdiSetPointerShape failed while setting clipped shape on VidPn Source 0x%I64x adapter 0x%I64x%08I64x, returning 0x%I64x.",
              Timeoutb,
              v172,
              v176,
              v135,
              0LL);
          }
          *((_BYTE *)this + 767) = 1;
          goto LABEL_92;
        }
        WdLogSingleEntry3(2LL, ClippedCursor->Width, ClippedCursor->Height, pPixels);
        Height = v132->Height;
        Width = v132->Width;
        v141 = (__int64)v132->pPixels;
        WdLogGlobalForLineNumber = 1925;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"GetClippedCursor() returned invalid cursor shape, Width:0x%I64x, Height:0x%I64x, pPixel:0x%I64x.",
          Width,
          Height,
          v141,
          0LL,
          0LL);
LABEL_168:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v187);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v213);
        return -1073741811LL;
      }
      if ( v105 != 1 )
      {
        v150 = v105 - 2;
        if ( !v150 )
        {
          v58 = v182;
          v56 = v54 + v50;
          v153 = v40 - v52 - v43;
          v55 = v183;
          v57 = v182 + v153;
          goto LABEL_86;
        }
        v151 = v150 - 1;
        if ( !v151 )
        {
          v58 = v182;
          v56 = v183 + v50 - v52 - v42;
          v154 = v40 - v54 - v43;
          v55 = v183;
          v57 = v182 + v154;
          goto LABEL_86;
        }
        if ( v151 == 1 )
        {
          v55 = v183;
          v152 = v50 - v54 - v42;
          v57 = v40 + v52;
          v56 = v183 + v152;
          goto LABEL_85;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 686;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"Orientation == D3DKMDT_VPPR_IDENTITY",
          686LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v54 = v192;
        v48 = v184;
      }
      v55 = v183;
      v56 = v50 + v52;
      v57 = v54 + v40;
LABEL_85:
      v58 = v182;
LABEL_86:
      v59 = v56 + *((_DWORD *)this + 207);
      v212.Y = v57;
      v212.X = v56;
      if ( v59 < v50 || v56 > v48 || v57 + *((_DWORD *)this + 208) < v40 || v57 > (int)v190 )
      {
        v212.X = v50 + v55 / 2;
        v212.Y = v40 + v58 / 2;
      }
      goto LABEL_90;
    }
    v105 = 1;
    goto LABEL_211;
  }
LABEL_92:
  v60 = *(_QWORD *)(v7 + 3120);
  v206 = -1;
  v207 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v208 = 1;
    v206 = 5019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerEnter, v30, 5019);
  }
  else
  {
    v208 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v206, 5019);
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v60 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v60 + 16) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v62 = CurrentIrql;
  v63 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v63 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v63 = DxgThread) != 0LL)) )
  {
    v64 = *((_DWORD *)v63 + 12);
  }
  else
  {
    v64 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v228,
    *(struct DXGADAPTER **)(v60 + 16));
  v65 = (*(__int64 (__fastcall **)(_QWORD, _DXGKARG_SETPOINTERPOSITION *))(*(_QWORD *)(v60 + 16) + 560LL))(
          *(_QWORD *)(*(_QWORD *)(v60 + 16) + 288LL),
          &v212);
  v66 = v65;
  v181 = v65;
  if ( v228[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v62 != KeGetCurrentIrql() )
  {
    v164 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, v60, v62, v164);
    WdLogGlobalForLineNumber = 2434;
  }
  if ( v63 )
  {
    v68 = *((int *)v63 + 12);
    if ( (_DWORD)v68 != v64 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v63 + 12), v64, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v60 + 16) + 4804LL));
  v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v68, v67, v69, v70);
  v71[3] = v66;
  v71[4] = *(_QWORD *)(*(_QWORD *)(v60 + 16) + 288LL);
  v71[5] = *(_BYTE *)&v212.Flags.0 & 1;
  v71[6] = v212.X;
  v71[7] = v212.Y;
  WdLogGlobalForLineNumber = 2441;
  if ( (_DWORD)v66 )
  {
    WdLogSingleEntry1(2LL, v66);
    WdLogGlobalForLineNumber = 2443;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v66,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v60 + 16));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v206);
  if ( v208 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v72, (__int64)&EventProfilerExit, v73, v206);
  if ( (int)v66 < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1972;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 1972LL, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_110:
  v74 = *(_QWORD *)(v7 + 3120);
  v75 = v212.VidPnSourceId;
  v76 = *(_BYTE *)&v212.Flags.0 & 1;
  v34 = (unsigned int)v212.Y;
  X = v212.X;
  v78 = v191->Y;
  v79 = v191->X;
  v190 = v212.Y;
  v185 = v212.X;
  if ( v212.VidPnSourceId >= *(_DWORD *)(v74 + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6105;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6105LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v34 = v190;
    X = v185;
  }
  v80 = 3984 * v75;
  *(_BYTE *)(3984 * v75 + *(_QWORD *)(v74 + 128) + 766) = v76;
  if ( v76 )
  {
    *(_DWORD *)(v80 + *(_QWORD *)(v74 + 128) + 768) = X;
    *(_DWORD *)(v80 + *(_QWORD *)(v74 + 128) + 772) = v34;
    *(_DWORD *)(v80 + *(_QWORD *)(v74 + 128) + 716) = v79;
    *(_DWORD *)(v80 + *(_QWORD *)(v74 + 128) + 720) = v78;
  }
  v81 = (DXGADAPTER *)*((_QWORD *)v189[0] + 6);
  if ( v81 == (DXGADAPTER *)((char *)v189[0] + 48) )
    v82 = 0LL;
  else
    v82 = (DXGADAPTER *)((char *)v81 - 56);
  if ( this != v82 )
    goto LABEL_56;
  if ( !v188 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v187, 0LL, 0LL);
    WdLogGlobalForLineNumber = 695;
  }
  v83 = v187;
  v188 = 0;
  if ( *(struct _KTHREAD **)(v187 + 24) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v187, 0LL, 0LL);
    WdLogGlobalForLineNumber = 570;
  }
  if ( *(int *)(v83 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 573;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  v36 = (*(_DWORD *)(v83 + 32))-- == 1;
  if ( v36 )
  {
    *(_QWORD *)(v83 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(v83 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v216 != v218 )
    COREACCESS::Release((COREACCESS *)v215);
  if ( !v219 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v217, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7718;
  }
  v219 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v218 + 23) )
    DXGADAPTER::ReleaseCoreResource(v218, v220);
  v84 = v191;
  v220 = 0LL;
  v214 = 0;
  v85 = v191->VidPnSourceId;
  if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 82;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"DxgIsRemoteSessionUsingXddmMonitors()",
        82LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 88;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to find remote output duplication manager",
        88LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_56;
    }
    v93 = 0;
    v200 = 0LL;
    v201 = 0;
    v94 = 0LL;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v221, 0LL, 0LL);
    goto LABEL_148;
  }
  v86 = *(_QWORD *)(v7 + 3120);
  v189[0] = 0LL;
  if ( !v86 )
  {
    WdLogSingleEntry2(4LL, v7, -1073741637LL);
    WdLogGlobalForLineNumber = 8837;
    if ( v189[0] )
      DXGADAPTER::ReleaseReference(v189[0]);
    LODWORD(v95) = -1073741637;
    goto LABEL_156;
  }
  if ( (unsigned int)v85 >= *(_DWORD *)(v86 + 96) )
  {
    LODWORD(v95) = -1073741811;
    WdLogSingleEntry2(2LL, v85, -1073741811LL);
    WdLogGlobalForLineNumber = 8824;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v85,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v189[0] )
      DXGADAPTER::ReleaseReference(v189[0]);
    goto LABEL_156;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24));
  if ( !*(_QWORD *)(v7 + 3128) )
  {
    if ( (*(_DWORD *)(v7 + 444) & 0x100) != 0 )
    {
      IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(
                                       (struct DXGADAPTER *)v7,
                                       0,
                                       (struct DXGADAPTER_REFERENCE *)v189);
      v95 = IndirectDisplayPairedAdapter;
      if ( IndirectDisplayPairedAdapter >= 0 )
        goto LABEL_138;
      WdLogSingleEntry2(2LL, v7, IndirectDisplayPairedAdapter);
      WdLogGlobalForLineNumber = 8866;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
        v7,
        v95,
        0LL,
        0LL,
        0LL);
      if ( v189[0] )
        DXGADAPTER::ReleaseReference(v189[0]);
      v189[0] = 0LL;
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v209);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v209);
      Global = DXGGLOBAL::GetGlobal();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v189, *((struct DXGADAPTER **)Global + 121));
      if ( v189[0] )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v209);
        goto LABEL_138;
      }
      WdLogSingleEntry2(2LL, v7, -1073741637LL);
      WdLogGlobalForLineNumber = 8880;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
        v7,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v209);
      if ( v189[0] )
        DXGADAPTER::ReleaseReference(v189[0]);
      v189[0] = 0LL;
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
      LODWORD(v95) = -1073741637;
    }
LABEL_156:
    WdLogSingleEntry3(2LL, v7, v85, (int)v95);
    WdLogGlobalForLineNumber = 3177;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      v7,
      v85,
      (int)v95,
      0LL,
      0LL);
    WdLogSingleEntry2(3LL, v7, (int)v95);
    WdLogGlobalForLineNumber = 75;
    goto LABEL_56;
  }
  if ( v189[0] )
    DXGADAPTER::ReleaseReference(v189[0]);
  v189[0] = (DXGADAPTER *)v7;
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24));
  v189[1] = (DXGADAPTER *)-1LL;
LABEL_138:
  v87 = v189[0];
  v189[0] = 0LL;
  if ( !v87 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3182;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(!o_ppRenderAdapter || *o_ppRenderAdapter != NULL) && (!o_ppDisplayAdapter || *o_ppDisplayAdapter != NULL)",
      3182LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v88 = *(_QWORD *)(v7 + 3120);
  v200 = (DXGADAPTER *)v7;
  RemoteOutputDuplMgr = *(struct OUTPUTDUPL_MGR **)(v88 + 120);
  _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24));
  v199 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v7 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 152));
  v201 = 1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v221, (struct DXGADAPTER *const)v7, 0LL);
  DXGADAPTER::ReleaseReference(v87);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
  if ( v226 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v224, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  v90 = v225;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v225 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v225 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v91, (__int64)&EventBlockThread, v92, 72);
      KeWaitForSingleObject((char *)v225 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v225, 0LL);
    v90 = v225;
  }
  v227 = 0LL;
  v226 = 1;
  if ( *((_DWORD *)v90 + 50) != 1 )
    goto LABEL_176;
  if ( v223 == v225 || (COREACCESS::AcquireShared((COREACCESS *)v222, 0LL), *((_DWORD *)v223 + 50) == 1) )
  {
    v93 = v201;
    v94 = v200;
    v84 = v191;
    v221[1] = 1;
LABEL_148:
    if ( (unsigned int)v85 < *((_DWORD *)RemoteOutputDuplMgr + 19) )
    {
      _lambda_b9a5656a752cedcbf1444dc35c6078d9_::_lambda_invoker_cdecl_(
        RemoteOutputDuplMgr,
        OUTPUTDUPL_MGR::ProcessPointerPositionChange,
        v84);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v221);
      if ( v93 )
      {
        v201 = 0;
        _InterlockedDecrement((volatile signed __int32 *)v94 + 38);
        ExReleasePushLockSharedEx((char *)v94 + 136, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference(v200);
      }
      goto LABEL_56;
    }
    WdLogSingleEntry1(2LL, v85);
    WdLogGlobalForLineNumber = 126;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid source ID 0x%I64x", v85, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_150;
  }
  COREACCESS::Release((COREACCESS *)v222);
LABEL_176:
  COREACCESS::Release((COREACCESS *)v224);
LABEL_150:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v221);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v199);
LABEL_56:
  if ( v188 )
  {
    v35 = v187;
    v188 = 0;
    if ( *(struct _KTHREAD **)(v187 + 24) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v187, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( *(int *)(v35 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    v36 = (*(_DWORD *)(v35 + 32))-- == 1;
    if ( v36 )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v35 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  if ( v214 )
  {
    if ( v216 != v218 )
      COREACCESS::Release((COREACCESS *)v215);
    if ( !v219 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v217, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7718;
    }
    v219 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v218 + 23) )
      DXGADAPTER::ReleaseCoreResource(v218, v220);
    v220 = 0LL;
    v214 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v217, v34);
  COREACCESS::~COREACCESS((COREACCESS *)v215, v37);
  return v181;
}
