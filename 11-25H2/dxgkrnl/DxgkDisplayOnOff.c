/*
 * XREFs of DxgkDisplayOnOff @ 0x1402DAD00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14001EA80 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1400345DC (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1401F6478 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1402E9830 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402E9934 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030CA78 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140311258 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140329064 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396DE0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EEE1C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v10; // rcx
  DXGSESSIONDATA *v11; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v13; // eax
  struct _KPROCESS *v14; // rdi
  __int64 v15; // rcx
  DXGPROCESS *Current; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // eax
  __int64 v22; // rdi
  bool v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  DXGPROCESS *v31; // r12
  __int64 v32; // rdi
  __int64 v33; // r15
  unsigned int *v34; // r13
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v36; // rbx
  __int64 v37; // rax
  SESSION_VIEW *v38; // rdx
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rbx
  unsigned __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rbx
  unsigned __int64 v45; // rdx
  SESSION_VIEW *v46; // r14
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // [rsp+20h] [rbp-E0h]
  __int64 v50; // [rsp+20h] [rbp-E0h]
  __int64 HighPart; // [rsp+28h] [rbp-D8h]
  __int64 v52; // [rsp+28h] [rbp-D8h]
  __int64 v53; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  __int64 v55; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v58[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v59; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h]
  char v62; // [rsp+80h] [rbp-80h]
  BOOL v63; // [rsp+88h] [rbp-78h]
  SESSION_VIEW *v64; // [rsp+90h] [rbp-70h]
  DXGPROCESS *v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h] BYREF
  char v67; // [rsp+A8h] [rbp-58h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v68; // [rsp+B0h] [rbp-50h]
  _BYTE v69[16]; // [rsp+B8h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-38h] BYREF
  char v71; // [rsp+F8h] [rbp-8h]
  GUID ActivityId; // [rsp+100h] [rbp+0h] BYREF
  char v73[8]; // [rsp+110h] [rbp+10h] BYREF
  char v74[64]; // [rsp+118h] [rbp+18h] BYREF
  char v75[88]; // [rsp+158h] [rbp+58h] BYREF

  v4 = a2;
  v58[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x35u, 0, &v59, v58);
  v60 = -1;
  v68 = v59;
  v61 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v62 = 1;
    v60 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerEnter, v7, 2183);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 2183);
  v71 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v11 = SessionData;
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 10655;
    v13 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_34:
    if ( v71 )
    {
      KeUnstackDetachProcess(&ApcState);
      v71 = 0;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v60);
    if ( v58[0] )
      DisplayScenarioContextDissociate(&v59);
    return 3221225485LL;
  }
  v14 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v10) != v14 )
  {
    KeStackAttachProcess(v14, &ApcState);
    v71 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v15);
  v65 = Current;
  v17 = (__int64)Current;
  if ( !Current )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10672;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get current DXGPROCESS",
      10672LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_34;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry1(2LL, v17);
    WdLogGlobalForLineNumber = 10684;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v71 )
    {
      KeUnstackDetachProcess(&ApcState);
      v71 = 0;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v60);
    if ( v58[0] )
      DisplayScenarioContextDissociate(&v59);
    return 3221225506LL;
  }
  v21 = DxgkAcquireSessionModeChangeLock(1);
  v22 = v21;
  v23 = v21 >= 0;
  v63 = v21 >= 0;
  if ( v21 < 0 )
  {
    WdLogSingleEntry1(2LL, v21);
    WdLogGlobalForLineNumber = 10698;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v23 )
      DxgkReleaseSessionModeChangeLock();
    if ( v71 )
    {
      KeUnstackDetachProcess(&ApcState);
      v71 = 0;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v60);
    if ( v58[0] )
      DisplayScenarioContextDissociate(&v59);
    return (unsigned int)v22;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(v11, a1, v4);
  v64 = SessionViewFromSource;
  v27 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    WdLogSingleEntry3(2LL, v4, a1->HighPart, a1->LowPart);
    LowPart = a1->LowPart;
    HighPart = a1->HighPart;
    WdLogGlobalForLineNumber = 10714;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.",
      v4,
      HighPart,
      LowPart,
      0LL,
      0LL);
    if ( v23 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_34;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  if ( !PrimaryDisplaySource )
    goto LABEL_67;
  v31 = v65;
  while ( 1 )
  {
    v32 = *((unsigned int *)PrimaryDisplaySource + 4);
    v33 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    v34 = (unsigned int *)(v33 + 412);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v33 + 412), 0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v36 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry3(2LL, *(int *)(v33 + 416), *v34, CddDeviceAndContextForCurrentSession);
      v37 = *v34;
      v49 = *(int *)(v33 + 416);
      WdLogGlobalForLineNumber = 10771;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
        v49,
        v37,
        v36,
        0LL,
        0LL);
      v38 = (SESSION_VIEW *)*((_QWORD *)PrimaryDisplaySource + 7);
      v27 = v64;
      PrimaryDisplaySource = 0LL;
      if ( v38 != (SESSION_VIEW *)((char *)v64 + 48) )
        PrimaryDisplaySource = (SESSION_VIEW *)((char *)v38 - 56);
      goto LABEL_65;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v66, 0LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v69, (DXGPROCESS *)((char *)v31 + 360), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v69);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, 0LL, 1, v39, 0);
    v40 = COREDEVICEACCESS::AcquireExclusive((__int64)v73, 2u);
    if ( v40 != -1073741130 )
      break;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v69);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v66);
LABEL_65:
    if ( !PrimaryDisplaySource )
      goto LABEL_66;
  }
  if ( v40 < 0 )
  {
    v41 = v40;
    WdLogSingleEntry3(2LL, *(int *)(v33 + 416), *v34, v40);
    v52 = *v34;
    v50 = *(int *)(v33 + 416);
    WdLogGlobalForLineNumber = 10844;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire device lock on adapter 0x%I64x%08I64x (Status = 0x%I64x)",
      v50,
      v52,
      v41,
      0LL,
      0LL);
LABEL_59:
    v27 = v64;
    goto LABEL_61;
  }
  if ( a3 )
  {
    if ( a4 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v33 + 3120)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*(ADAPTER_DISPLAY **)(v33 + 3120), MEMORY[0x10]);
    if ( (int)DmmEnablePathsFromVidPnSource(0LL, v32, a4, (struct COREDEVICEACCESS *)v73, v68) >= 0 )
    {
      v43 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(ADAPTER_DISPLAY **)(v33 + 3120), v32);
      if ( v43 < 0 )
      {
        v44 = v43;
        WdLogSingleEntry4(2LL, v32, *(int *)(v33 + 416), *v34, v43);
        v55 = *v34;
        v53 = *(int *)(v33 + 416);
        WdLogGlobalForLineNumber = 10900;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on adapter 0x%I64x%08I64x (status = 0x%I64x)",
          v32,
          v53,
          v55,
          v44,
          0LL);
        goto LABEL_59;
      }
    }
  }
  else
  {
    DmmDisablePathsFromVidPnSource(0LL, v32);
  }
LABEL_61:
  COREACCESS::~COREACCESS((COREACCESS *)v75, v42);
  COREACCESS::~COREACCESS((COREACCESS *)v74, v45);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v69);
  if ( v67 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v66 + 136));
    KeLeaveCriticalRegion();
    v67 = 0;
  }
  v46 = (SESSION_VIEW *)*((_QWORD *)PrimaryDisplaySource + 7);
  if ( v46 != (SESSION_VIEW *)((char *)v27 + 48) )
  {
    PrimaryDisplaySource = (SESSION_VIEW *)((char *)v46 - 56);
    goto LABEL_65;
  }
LABEL_66:
  v23 = v63;
LABEL_67:
  if ( v23 )
    DxgkReleaseSessionModeChangeLock();
  if ( v71 )
  {
    KeUnstackDetachProcess(&ApcState);
    v71 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventProfilerExit, v48, v60);
  if ( v58[0] )
    DisplayScenarioContextDissociate(&v59);
  return 0LL;
}
