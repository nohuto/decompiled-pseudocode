/*
 * XREFs of DxgkUnlock2 @ 0x1402A21C0
 * Callers:
 *     ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403FEFD0 (-VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     DxgkUnlock2Internal @ 0x1402A2B20 (DxgkUnlock2Internal.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkUnlock2(void *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char CurrentThreadPreviousMode; // r15
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v8; // rbx
  struct _KTHREAD **v9; // rdi
  unsigned int *v10; // r12
  struct DXGDEVICE *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  int v16; // r14d
  struct _KEVENT *v17; // r15
  DXGPUSHLOCK *v18; // r14
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGDEVICE *v23; // rbx
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r8
  DXGADAPTER *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KEVENT *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGDEVICE *v38; // [rsp+50h] [rbp-118h] BYREF
  int v39; // [rsp+58h] [rbp-110h] BYREF
  __int64 v40; // [rsp+60h] [rbp-108h]
  char v41; // [rsp+68h] [rbp-100h]
  struct DXGDEVICE *v42; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGDEVICE *v44; // [rsp+80h] [rbp-E8h] BYREF
  int v45; // [rsp+88h] [rbp-E0h]
  _BYTE v46[8]; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v47[16]; // [rsp+98h] [rbp-D0h] BYREF
  DXGADAPTER *v48; // [rsp+A8h] [rbp-C0h]
  char v49; // [rsp+B0h] [rbp-B8h]
  __int64 v50; // [rsp+B8h] [rbp-B0h]
  _BYTE v51[16]; // [rsp+D8h] [rbp-90h] BYREF
  DXGADAPTER *v52; // [rsp+E8h] [rbp-80h]
  char v53; // [rsp+F0h] [rbp-78h]
  __int64 v54; // [rsp+F8h] [rbp-70h]
  __int64 v55; // [rsp+118h] [rbp-50h]
  char v56; // [rsp+120h] [rbp-48h]

  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v39 = -1;
  v40 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2104;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2104);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2104);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
    if ( v9 )
      goto LABEL_7;
    goto LABEL_5;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v9 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2926;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v9 = v8;
  }
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1017;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_44;
  }
LABEL_7:
  v43 = 0LL;
  v10 = (unsigned int *)&v43;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v43, a1, 8uLL);
  }
  else
  {
    v10 = (unsigned int *)a1;
  }
  v38 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, *v10, v9, &v38);
  v11 = v38;
  if ( !v38 )
  {
    WdLogSingleEntry2(2LL, *v10, -1073741811LL);
    WdLogGlobalForLineNumber = 1050;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
      *v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( !v41 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_44:
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v39);
    return 3221225485LL;
  }
  v44 = v38;
  v15 = *(_QWORD *)(*((_QWORD *)v38 + 2) + 16LL);
  if ( *(int *)(v15 + 2736) >= 0x2000 || *(_BYTE *)(v15 + 3036) )
  {
    v16 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v45 = v16;
  }
  else
  {
    v16 = 0;
    v45 = 0;
  }
  v17 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
  if ( *((_DWORD *)v11 + 116) != 2 )
  {
    if ( KeReadStateEvent(v17 + 4) )
      goto LABEL_23;
    v30 = v17 + 4;
    goto LABEL_60;
  }
  if ( !KeReadStateEvent(v17 + 5) )
  {
    v30 = v17 + 5;
LABEL_60:
    KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
  }
LABEL_23:
  if ( v16 )
  {
    v18 = (struct DXGDEVICE *)((char *)v11 + 144);
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 40);
      v20 = 1;
      v11 = v38;
    }
    else
    {
      KeLeaveCriticalRegion();
      v20 = 0;
    }
    if ( !v20 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared(v18);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventBlockThread, v32, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v11, 2, v19, 0);
  if ( !v56 )
    goto LABEL_29;
  if ( v53 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v51, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  v27 = v52;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v52 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventBlockThread, v29, 72);
      KeWaitForSingleObject((char *)v52 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v52, 0LL);
    v27 = v52;
  }
  v54 = 0LL;
  v53 = 1;
  if ( *((_DWORD *)v27 + 50) == 1 )
  {
LABEL_29:
    if ( v49 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v47, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v48 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v48 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventBlockThread, v22, 72);
        KeWaitForSingleObject((char *)v48 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v48, 0LL);
    }
    v50 = 0LL;
    v49 = 1;
    if ( *(_DWORD *)(v55 + 608) == 1 )
    {
      v23 = v38;
      v24 = DxgkUnlock2Internal(v38);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
      if ( v45 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v23 + 40);
        ExReleasePushLockSharedEx((char *)v23 + 144, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v23 + 17));
      }
      KeLeaveCriticalRegion();
      if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v39);
      return v24;
    }
    COREACCESS::Release((COREACCESS *)v47);
    if ( v56 )
      COREACCESS::Release((COREACCESS *)v51);
  }
  else
  {
    v53 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v52 + 23) )
      DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v52, 0LL);
    v54 = 0LL;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v46);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v44);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v39);
  return 3221226166LL;
}
