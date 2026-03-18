/*
 * XREFs of DxgkLock2 @ 0x1402A3430
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140365980 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     DxgkLock2Internal @ 0x1402A3F00 (DxgkLock2Internal.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x140339948 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1403FAE8C (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 */

__int64 __fastcall DxgkLock2(struct DXGDEVICE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  char CurrentThreadPreviousMode; // r12
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGDEVICE *v8; // rbx
  struct DXGDEVICE *v9; // rdi
  unsigned int *v10; // r14
  const void *v11; // rdx
  struct DXGDEVICE *v12; // rbx
  __int64 v13; // rax
  int v14; // r12d
  struct _KEVENT *v15; // r13
  DXGPUSHLOCK *v16; // r12
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // r13
  int v22; // ebx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  DXGADAPTER *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _KEVENT *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // [rsp+50h] [rbp-168h]
  int v41; // [rsp+58h] [rbp-160h] BYREF
  __int64 v42; // [rsp+60h] [rbp-158h]
  char v43; // [rsp+68h] [rbp-150h]
  struct DXGDEVICE *v44; // [rsp+70h] [rbp-148h] BYREF
  struct DXGDEVICE *v45[4]; // [rsp+78h] [rbp-140h] BYREF
  struct DXGDEVICE *v46; // [rsp+98h] [rbp-120h]
  struct DXGDEVICE *v47; // [rsp+A8h] [rbp-110h] BYREF
  int v48; // [rsp+B0h] [rbp-108h]
  __int64 v49; // [rsp+B8h] [rbp-100h]
  __int128 v50; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-E8h]
  _BYTE v52[8]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v53[16]; // [rsp+E8h] [rbp-D0h] BYREF
  DXGADAPTER *v54; // [rsp+F8h] [rbp-C0h]
  char v55; // [rsp+100h] [rbp-B8h]
  __int64 v56; // [rsp+108h] [rbp-B0h]
  _BYTE v57[16]; // [rsp+128h] [rbp-90h] BYREF
  DXGADAPTER *v58; // [rsp+138h] [rbp-80h]
  char v59; // [rsp+140h] [rbp-78h]
  __int64 v60; // [rsp+148h] [rbp-70h]
  __int64 v61; // [rsp+168h] [rbp-50h]
  char v62; // [rsp+170h] [rbp-48h]

  v45[1] = a1;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v40 = CurrentThreadPreviousMode;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2103;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2103);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2103);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGDEVICE *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct DXGDEVICE *)*((_QWORD *)Current + 3);
    if ( !v9 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v9 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v9 = v8;
    }
  }
  v45[2] = v9;
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 818;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_60;
  }
  v50 = 0LL;
  v51 = 0LL;
  v10 = (unsigned int *)&v50;
  v46 = (struct DXGDEVICE *)&v50;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v50, v11, 0x18uLL);
  }
  else
  {
    v10 = (unsigned int *)a1;
    v46 = a1;
  }
  v44 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v45, *v10, (struct _KTHREAD **)v9, &v44);
  v12 = v44;
  if ( !v44 )
  {
    WdLogSingleEntry2(2LL, *v10, -1073741811LL);
    WdLogGlobalForLineNumber = 851;
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
    if ( v45[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v45[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45[0] + 2), v45[0]);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_60:
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v41);
    return 3221225485LL;
  }
  v13 = *(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL);
  v49 = v13;
  v45[3] = (struct DXGDEVICE *)v13;
  v47 = v44;
  if ( *(int *)(v13 + 2736) >= 0x2000 || *(_BYTE *)(v13 + 3036) )
  {
    v14 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v48 = v14;
  }
  else
  {
    v14 = 0;
    v48 = 0;
  }
  v15 = (struct _KEVENT *)*((_QWORD *)v12 + 2);
  if ( *((_DWORD *)v12 + 116) != 2 )
  {
    if ( KeReadStateEvent(v15 + 4) )
      goto LABEL_16;
    v32 = v15 + 4;
    goto LABEL_62;
  }
  if ( !KeReadStateEvent(v15 + 5) )
  {
    v32 = v15 + 5;
LABEL_62:
    KeWaitForSingleObject(v32, Executive, 0, 0, 0LL);
  }
LABEL_16:
  if ( v14 )
  {
    v16 = (struct DXGDEVICE *)((char *)v12 + 144);
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v12 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 40);
      v18 = 1;
      v12 = v44;
    }
    else
    {
      KeLeaveCriticalRegion();
      v18 = 0;
    }
    if ( !v18 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared(v16);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventBlockThread, v34, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v12 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, (__int64)v12, 0, v17, 0);
  if ( !v62 )
    goto LABEL_22;
  if ( v59 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v57, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  v29 = v58;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v58 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v58 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventBlockThread, v31, 72);
      KeWaitForSingleObject((char *)v58 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v58, 0LL);
    v29 = v58;
  }
  v60 = 0LL;
  v59 = 1;
  if ( *((_DWORD *)v29 + 50) == 1 )
  {
LABEL_22:
    if ( v55 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v53, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v54 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v54 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventBlockThread, v20, 72);
        KeWaitForSingleObject((char *)v54 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v54, 0LL);
    }
    v56 = 0LL;
    v55 = 1;
    if ( *(_DWORD *)(v61 + 608) == 1 )
    {
      v21 = v44;
      v22 = DxgkLock2Internal(v44);
      if ( v22 >= 0 && v40 == 1 )
      {
        v23 = (_QWORD *)((char *)a1 + 16);
        if ( (unsigned __int64)a1 + 16 >= MmUserProbeAddress )
          v23 = (_QWORD *)MmUserProbeAddress;
        *v23 = *((_QWORD *)v10 + 2);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v52);
      if ( v48 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v21 + 40);
        ExReleasePushLockSharedEx((char *)v21 + 144, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v21 + 17));
      }
      KeLeaveCriticalRegion();
      if ( v45[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v45[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45[0] + 2), v45[0]);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v41);
      }
      return (unsigned int)v22;
    }
    COREACCESS::Release((COREACCESS *)v53);
    if ( v62 )
      COREACCESS::Release((COREACCESS *)v57);
  }
  else
  {
    v59 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v58 + 23) )
      DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v58, 0LL);
    v60 = 0LL;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v52);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v47);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v45);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v41);
  return 3221226166LL;
}
