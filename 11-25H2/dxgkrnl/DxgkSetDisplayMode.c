/*
 * XREFs of DxgkSetDisplayMode @ 0x14030F550
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z @ 0x14001EA80 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400362B0 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x14003BBA4 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400419B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140041DBC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047630 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE@@JQEBE@Z @ 0x140188F1C (-DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE.c)
 *     ?IsAllocationPinnableOrNoNeedPin@DXGDEVICE@@QEAAHIPEBVDXGALLOCATION@@@Z @ 0x1401B8A50 (-IsAllocationPinnableOrNoNeedPin@DXGDEVICE@@QEAAHIPEBVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x14030F070 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140310DD0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x140310EFC (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140311258 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140311874 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DpiPollDisplayChildren @ 0x1403CB24C (DpiPollDisplayChildren.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403DA520 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rbx
  const void *v8; // rdx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // r9
  int v12; // r14d
  __int64 v13; // r15
  struct DXGALLOCATION *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // r13d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 CurrentProcess; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  bool v39; // zf
  __int64 v40; // rdx
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  void *v46; // rcx
  __int64 v47; // rbx
  void *v48; // rdi
  struct DXGALLOCATION *v49; // [rsp+50h] [rbp-1C8h] BYREF
  struct DXGDEVICE *v50; // [rsp+58h] [rbp-1C0h] BYREF
  int v51; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v52; // [rsp+68h] [rbp-1B0h]
  char v53; // [rsp+70h] [rbp-1A8h]
  _BYTE v54[16]; // [rsp+78h] [rbp-1A0h] BYREF
  _BYTE v55[16]; // [rsp+88h] [rbp-190h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v56; // [rsp+98h] [rbp-180h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v57; // [rsp+A0h] [rbp-178h] BYREF
  unsigned int Src; // [rsp+A8h] [rbp-170h] BYREF
  unsigned int v59; // [rsp+ACh] [rbp-16Ch]
  _BYTE v60[24]; // [rsp+B0h] [rbp-168h] BYREF
  struct DXGPROCESS *v61; // [rsp+C8h] [rbp-150h]
  ULONG64 v62; // [rsp+D0h] [rbp-148h]
  struct DXGDEVICE *v63; // [rsp+D8h] [rbp-140h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v64; // [rsp+E0h] [rbp-138h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v65[4]; // [rsp+E8h] [rbp-130h] BYREF
  struct _D3DKMT_SETDISPLAYMODE_FLAGS v66[2]; // [rsp+F8h] [rbp-120h] BYREF
  _QWORD v67[2]; // [rsp+108h] [rbp-110h] BYREF
  __int128 v68; // [rsp+118h] [rbp-100h]
  struct _GUID v69; // [rsp+128h] [rbp-F0h] BYREF
  _BYTE v70[160]; // [rsp+140h] [rbp-D8h] BYREF

  v62 = a1;
  LOBYTE(v56) = 0;
  v69 = 0LL;
  EtwActivityIdControl(3u, &v69);
  DisplayScenarioContextEnsureAndAssociate(&v69, 0x31u, 0, &v57, (unsigned __int8 *)&v56);
  v64 = v57;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2018);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 2018);
  Current = DXGPROCESS::GetCurrent(v4);
  v61 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 6303;
    v36 = PsGetCurrentProcess(v35);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v36,
      0LL,
      0LL,
      0LL);
LABEL_77:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    v39 = v53 == 0;
LABEL_84:
    if ( !v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v51);
    goto LABEL_63;
  }
  *(_OWORD *)v65 = 0LL;
  memset(v66, 0, 12);
  v7 = 0LL;
  v59 = 0;
  v8 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v65, v8, 0x1CuLL);
  v63 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v65[0], Current, &v63);
  v10 = v63;
  if ( !v63 )
  {
    v41 = v65[0];
    v42 = PsGetCurrentProcess(v9);
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v42, (unsigned int)v41);
    WdLogGlobalForLineNumber = 6333;
    v43 = (unsigned int)v65[0];
    v45 = PsGetCurrentProcess(v44);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x returned due to an invalid device handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v45,
      v43,
      0LL,
      0LL);
    goto LABEL_83;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55, v63);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v60, Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v60, 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v54);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, (__int64)v10, 1, v11, 0);
  v12 = COREDEVICEACCESS::AcquireExclusive((__int64)v70, 2u);
  if ( v12 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v60);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v50);
    goto LABEL_77;
  }
  v13 = *((_QWORD *)v10 + 235);
  if ( !v13 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, v10, -1073741811LL);
    WdLogGlobalForLineNumber = 6367;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Set display mode on render only device 0x%I64x, returning 0x%I64x.",
      (__int64)v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_82;
  }
  ++*(_DWORD *)(*(_QWORD *)(v13 + 3120) + 416LL);
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v49, v65[1]);
  v14 = v49;
  if ( !v49 )
  {
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v10, (unsigned int)v65[1]);
    WdLogGlobalForLineNumber = 6380;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: Invalid primary specified: 0x%I64x",
      -1073741811LL,
      (__int64)v10,
      (unsigned int)v65[1],
      0LL,
      0LL);
    v40 = 0xFFFFFFFFLL;
    goto LABEL_80;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v49 + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL) )
  {
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, v10, v49, -1073741811LL);
    WdLogGlobalForLineNumber = 6395;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v10,
      (__int64)v49,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_79;
  }
  v15 = *((_QWORD *)v49 + 6);
  if ( (*(_DWORD *)(v15 + 4) & 1) == 0 )
  {
    v12 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, v10, (unsigned int)v65[1], v49, (*(_DWORD *)(v15 + 4) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 6410;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: Only primary can be used 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)v10,
      (unsigned int)v65[1],
      (__int64)v49,
      (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
    DmmCacheInvalidDisplayModeChangeRequest(v13, (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v60);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v51);
    v26 = (_BYTE)v56 == 0;
    goto LABEL_47;
  }
  if ( v13 != *((_QWORD *)v10 + 235) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6421;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter == pDevice->GetDisplayAdapter(PrimaryAllocationReference.m_pAllocation->m_pAllocation->m_VidPnSourceId)",
      6421LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = v49;
  }
  if ( (unsigned int)(v65[2] - 1) > 2 )
  {
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v10, v65[2]);
    WdLogGlobalForLineNumber = 6428;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: Invalid ScanLineOrdering specified 0x%I64x",
      -1073741811LL,
      (__int64)v10,
      v65[2],
      0LL,
      0LL);
LABEL_93:
    DmmCacheInvalidDisplayModeChangeRequest(v13, (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v60);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    v39 = v53 == 0;
    goto LABEL_84;
  }
  if ( (unsigned int)(v65[3] - 1) > 3 )
  {
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v10, v65[3]);
    WdLogGlobalForLineNumber = 6445;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: Invalid DisplayOrientation specified 0x%I64x",
      -1073741811LL,
      (__int64)v10,
      v65[3],
      0LL,
      0LL);
    goto LABEL_93;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(ADAPTER_DISPLAY **)(v13 + 3120),
          v10,
          (*(_DWORD *)(*((_QWORD *)v14 + 6) + 4LL) >> 6) & 0xF) )
  {
    v12 = -1071775744;
    WdLogSingleEntry5(
      7LL,
      -1071775744LL,
      v10,
      (unsigned int)v65[1],
      v49,
      (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 6461;
LABEL_79:
    v40 = (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF;
LABEL_80:
    DmmCacheInvalidDisplayModeChangeRequest(v13, v40);
LABEL_81:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
LABEL_82:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v60);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
LABEL_83:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    v39 = v53 == 0;
    goto LABEL_84;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(ADAPTER_DISPLAY **)(v13 + 3120),
                        (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v10 + 116) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v13 + 3120),
         (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v12 = -1071774910;
    WdLogSingleEntry5(
      7LL,
      -1071774910LL,
      v10,
      (unsigned int)v65[1],
      v49,
      (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 6479;
    goto LABEL_79;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(ADAPTER_DISPLAY **)(v13 + 3120),
          (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF) )
  {
    v12 = -1071774972;
    WdLogSingleEntry5(
      7LL,
      -1071774972LL,
      v10,
      (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF,
      (unsigned int)v65[1],
      v49);
    WdLogGlobalForLineNumber = 6495;
    goto LABEL_79;
  }
  if ( *((struct DXGDEVICE **)v49 + 1) != v10 )
  {
    v12 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, v10, (unsigned int)v65[1], v49, *((_QWORD *)v49 + 1));
    WdLogGlobalForLineNumber = 6510;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: Primary (0x%I64x 0x%I64x) must be on allocated on the specified device (0x%I64x)",
      -1073741811LL,
      (__int64)v10,
      (unsigned int)v65[1],
      (__int64)v49,
      *((_QWORD *)v49 + 1));
    DmmCacheInvalidDisplayModeChangeRequest(v13, (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
    DxgCreateLiveDumpWithWdLogs(403LL, 2055LL);
    goto LABEL_81;
  }
  v16 = *((_QWORD *)v49 + 6);
  if ( *((_DWORD *)v10 + 116) != 1 )
  {
    if ( (*(_DWORD *)(v16 + 4) & 0x10) == 0 )
    {
LABEL_27:
      WdLogSingleEntry2(7LL, (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF, v13);
      WdLogGlobalForLineNumber = 6582;
      if ( v12 >= 0 )
      {
        Src = 0;
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304800) )
          *((_BYTE *)v66 + 4) |= 1u;
        v20 = DXGDEVICE::SetDisplayMode(
                v10,
                v49,
                v65[2],
                (enum _D3DDDI_ROTATION)v65[3],
                *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)((char *)v66 + 4),
                &Src,
                v64);
        v12 = v20;
        if ( v20 == -1071774891 )
        {
          v46 = (void *)(v62 + 16);
          if ( v62 + 16 >= MmUserProbeAddress )
            v46 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v46, &Src, 4uLL);
        }
        else if ( v20 >= 0 )
        {
          v21 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                  *(ADAPTER_DISPLAY **)(v13 + 3120),
                  (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
          if ( v21 < 0 )
          {
            v47 = v21;
            WdLogSingleEntry3(2LL, v13, (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF, v21);
            WdLogGlobalForLineNumber = 6618;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on DXGADAPTER 0x%I64x (status = 0x%I64x)",
              v13,
              (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF,
              v47,
              0LL,
              0LL);
          }
          v67[0] = 7LL;
          v67[1] = 0LL;
          v68 = 0LL;
          if ( (int)DxgkStatusChangeNotify((int *)v67, v22, v23) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6626;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"NT_SUCCESS(NotificationStatus)",
              6626LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v7 = *(_QWORD *)(v13 + 412);
          v59 = (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF;
        }
      }
      if ( v12 == -1071774920 )
      {
        v48 = *(void **)(v13 + 216);
        ObfReferenceObject(v48);
        WdLogSingleEntry1(7LL, v48);
        WdLogGlobalForLineNumber = 6643;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)v70);
        DpiPollDisplayChildren(v48, 4LL, v64);
        ObfDereferenceObject(v48);
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v60);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
      if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
      if ( v12 >= 0 && (*(int (__fastcall **)(__int64, _QWORD))(*((_QWORD *)Current + 11) + 424LL))(v7, v59) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6659;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(_Status)", 6659LL, 0LL, 0LL, 0LL, 0LL);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v51);
      v26 = (_BYTE)v56 == 0;
      goto LABEL_47;
    }
    WdLogSingleEntry5(7LL, -1071775482LL, v10, (unsigned int)v65[1], v49, (*(_DWORD *)(v16 + 4) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 6570;
    DmmCacheInvalidDisplayModeChangeRequest(v13, (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v60);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v51);
    v12 = -1071775482;
LABEL_63:
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v56);
    return (unsigned int)v12;
  }
  v17 = (*(_DWORD *)(v16 + 4) >> 6) & 0xF;
  CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v13 + 3120), v17, 0);
  if ( CddPrimaryAllocation == *((struct DXGADAPTERALLOCATION **)v49 + 6)
    || (unsigned int)DXGDEVICE::IsAllocationPinnableOrNoNeedPin(v10, v17, v49) )
  {
    v19 = DXGDEVICE::PinPrimaryAllocations(v10, v17);
    v12 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry5(7LL, v19, v10, (unsigned int)v65[1], v49, v17);
      WdLogGlobalForLineNumber = 6563;
    }
    Current = v61;
    goto LABEL_27;
  }
  v12 = -1073741811;
  WdLogSingleEntry5(
    7LL,
    -1073741811LL,
    v10,
    (unsigned int)v65[1],
    v49,
    (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
  WdLogGlobalForLineNumber = 6538;
  DmmCacheInvalidDisplayModeChangeRequest(v13, (*(_DWORD *)(*((_QWORD *)v49 + 6) + 4LL) >> 6) & 0xF);
  DxgCreateLiveDumpWithWdLogs(403LL, 2056LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v49);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v54);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v60);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v55);
  if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v51);
  v26 = (_BYTE)v56 == 0;
LABEL_47:
  if ( !v26 )
    DisplayScenarioContextDissociate(&v57);
  return (unsigned int)v12;
}
