/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x14040D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14000F8F8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14002974C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140029B50 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x14003181C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1400395DC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005350C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x140056F04 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x140058E78 (DpiFdoIsMsBddAnchoredDevice.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140259BD0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x14028EE4C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1402919B0 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1402D7DA0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402D7EA4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x14030B714 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140346DD8 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkInvalidateQdcCache @ 0x140349C08 (DxgkInvalidateQdcCache.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403826AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403D47D8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1403ECA64 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403EF7C8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  int v3; // r12d
  __int64 v4; // r14
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // zf
  volatile signed __int32 *v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r14
  PERESOURCE ***v22; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  DXGSESSIONDATA *SessionData; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // r8
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  bool v43; // zf
  __int64 v44; // rdx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  char v46; // r14
  __int64 v47; // rdx
  unsigned int v48; // r12d
  __int64 v49; // rdi
  __int64 v50; // rcx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v52; // r9
  ADAPTER_RENDER *v53; // r10
  struct DXGDEVICE *v54; // rbx
  int v55; // eax
  char v56; // r8
  int v57; // eax
  ADAPTER_DISPLAY *v58; // rcx
  unsigned int v59; // ebx
  __int64 v60; // [rsp+20h] [rbp-E0h]
  __int64 v61; // [rsp+28h] [rbp-D8h]
  _BYTE v62[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v63; // [rsp+54h] [rbp-ACh]
  struct DXGDEVICE *v64; // [rsp+58h] [rbp-A8h] BYREF
  int v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-98h]
  char v67; // [rsp+70h] [rbp-90h]
  struct DISPLAY_SOURCE *v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  _BYTE v72[24]; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT v73; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v74[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v75[160]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v76[160]; // [rsp+1B0h] [rbp+B0h] BYREF

  v65 = -1;
  v3 = a2;
  v63 = a3;
  v69 = a2;
  v4 = (unsigned int)a1;
  v66 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 3003);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v65, 3003);
  Current = DXGPROCESS::GetCurrent(v5);
  v8 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 614;
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v11,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    v14 = v67 == 0;
LABEL_31:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v65);
    return 3221225485LL;
  }
  v15 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v16 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v8 + 296)
    && (v17 = *(_QWORD *)(v8 + 280), (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60))
    && (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) == 0
    && (v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F) != 0 )
  {
    if ( v18 == 3 )
    {
      v19 = *(_QWORD *)(v17 + 16LL * v16);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v19 = 0LL;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v19 = 0LL;
  }
  _InterlockedDecrement(v15 + 4);
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  v64 = (struct DXGDEVICE *)v19;
  if ( !v19 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v4, v8);
    WdLogGlobalForLineNumber = 622;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v4,
      v8,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    v14 = v67 == 0;
    goto LABEL_31;
  }
  v21 = *(_QWORD *)(v19 + 1896);
  v71 = v21;
  v22 = (PERESOURCE ***)(v21 + 3120);
  if ( !v21 || !*v22 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      628LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v3 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, v19, 1, v20, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v76);
    if ( v3 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner((ADAPTER_DISPLAY *)*v22) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*v22, *(struct ADAPTER_RENDER **)(v19 + 16));
    if ( *(_DWORD *)(v21 + 200) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v21 + 3120), v63, 0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    DxgkInvalidateQdcCache();
    goto LABEL_78;
  }
  if ( ((v3 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 669;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(OLD_MODE_CHANGE == Win32kCommand) || ((PRESERVE_ACTIVE_VIDPN | OLD_MODE_CHANGE) == Win32kCommand)",
      669LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v25, v24, v27, v28);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    WdLogGlobalForLineNumber = 679;
    v34 = PsGetCurrentProcessSessionId(v31, v30, v32, v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v34,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    v14 = v67 == 0;
    goto LABEL_31;
  }
  v62[0] = 0;
  v36 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v62, 1);
  v37 = v36;
  if ( v36 < 0 )
  {
    WdLogSingleEntry1(2LL, v36);
    WdLogGlobalForLineNumber = 693;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v37,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v65);
    return (unsigned int)v37;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, (const struct _LUID *)(v21 + 412), v63);
  if ( !SessionViewFromSource )
  {
    WdLogSingleEntry3(4LL, v63, *(int *)(v21 + 416), *(unsigned int *)(v21 + 412));
    WdLogGlobalForLineNumber = 709;
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    v43 = v67 == 0;
    goto LABEL_79;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  if ( !PrimaryDisplaySource )
    goto LABEL_74;
  v46 = v69;
  v47 = v44 + 48;
  v70 = v47;
  do
  {
    v48 = *((_DWORD *)PrimaryDisplaySource + 4);
    v49 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    v50 = *((_QWORD *)PrimaryDisplaySource + 7);
    PrimaryDisplaySource = 0LL;
    if ( v50 != v47 )
      PrimaryDisplaySource = (struct DISPLAY_SOURCE *)(v50 - 56);
    v68 = PrimaryDisplaySource;
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v49 + 412),
                                             &v64,
                                             0LL,
                                             0LL,
                                             0);
    v37 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(2LL, *(int *)(v49 + 416), *(unsigned int *)(v49 + 412), CddDeviceAndContextForCurrentSession);
      v61 = *(unsigned int *)(v49 + 412);
      v60 = *(int *)(v49 + 416);
      WdLogGlobalForLineNumber = 758;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
        v60,
        v61,
        v37,
        0LL,
        0LL);
      goto LABEL_72;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v72, v64);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, (__int64)v64, 1, v52, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v75);
    if ( *(_DWORD *)(v49 + 200) != 1 && *((_DWORD *)v64 + 152) == 4
      || *(_DWORD *)(v49 + 200) == 4
      || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 200LL) == 4 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v72);
      goto LABEL_72;
    }
    if ( *(_QWORD *)(v49 + 3128) )
    {
      if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v64 + 2) + 16LL)) )
        ADAPTER_RENDER::FlushScheduler((__int64)v53, 8, v48, 0);
      else
        ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v53, 1 << v48, 0LL, 1 << v48, 0);
    }
    if ( *(_DWORD *)(v49 + 200) == 1 )
    {
      if ( (v46 & 4) == 0 )
      {
        v56 = *(_BYTE *)(v49 + 3017)
           && *(_BYTE *)(v49 + 2936)
           && *(_DWORD *)(v49 + 420) != 1297040209
           && DpiFdoIsMsBddAnchoredDevice(*(_QWORD *)(v49 + 216));
        v54 = v64;
        v57 = DmmRemovePathsFromVidPnSource(v64, v48, v56);
        memset(v74, 0, sizeof(v74));
        LODWORD(v37) = v57;
        ADAPTER_DISPLAY::SetDisplayModeInfo(
          *(DXGADAPTER ***)(v49 + 3120),
          v48,
          (const struct _DXGK_DISPLAYMODE_INFO *const)v74);
        goto LABEL_69;
      }
      v54 = v64;
      v55 = DmmDisablePathsFromVidPnSource(v64, v48);
    }
    else
    {
      v54 = v64;
      v55 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v49 + 3120), v64, v48);
    }
    LODWORD(v37) = v55;
LABEL_69:
    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v49 + 3120), v48, 0);
    ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v49 + 3120), v48, 0);
    v58 = *(ADAPTER_DISPLAY **)(v49 + 3120);
    v73 = 0LL;
    ADAPTER_DISPLAY::SetContentRect(v58, v48, &v73);
    ADAPTER_DISPLAY::SetCddInterface(*(ADAPTER_DISPLAY **)(v49 + 3120), v48, 0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v72);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
    PrimaryDisplaySource = v68;
LABEL_72:
    v47 = v70;
  }
  while ( PrimaryDisplaySource );
  v21 = v71;
  v3 = v69;
LABEL_74:
  v59 = v63;
  if ( ((v3 - 0x40000000) & 0xFFFFFFFB) == 0 )
    DxgkRemoveSessionViewForCurrentSession((struct _LUID *)(v21 + 412), v63, 1u);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v62);
  DxgkInvalidateQdcCache();
  if ( (int)v37 < 0 )
  {
    v68 = 0LL;
    DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v21 + 412), v59, v37, 0LL);
  }
LABEL_78:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
  v43 = v67 == 0;
LABEL_79:
  if ( !v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit, v42, v65);
  return 0LL;
}
