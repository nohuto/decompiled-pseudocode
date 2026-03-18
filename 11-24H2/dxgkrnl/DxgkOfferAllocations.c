/*
 * XREFs of DxgkOfferAllocations @ 0x14029B100
 * Callers:
 *     ?VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224F10 (-VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x140299D04 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(_D3DKMT_OFFERALLOCATIONS *a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  struct _KTHREAD **Current; // rdi
  char CurrentThreadPreviousMode; // r12
  const void *v7; // rdx
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // rcx
  struct _KEVENT *v10; // r14
  DXGPUSHLOCK *v11; // rsi
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDEVICE *v16; // rdi
  UINT *p_Flags; // rdx
  UINT Value; // eax
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // zf
  DXGADAPTER *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KEVENT *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGDEVICE *v34; // [rsp+50h] [rbp-128h] BYREF
  struct DXGDEVICE *v35; // [rsp+58h] [rbp-120h] BYREF
  int v36; // [rsp+60h] [rbp-118h] BYREF
  __int64 v37; // [rsp+68h] [rbp-110h]
  char v38; // [rsp+70h] [rbp-108h]
  struct DXGDEVICE *v39; // [rsp+78h] [rbp-100h] BYREF
  int v40; // [rsp+80h] [rbp-F8h]
  _D3DKMT_OFFERALLOCATIONS v41; // [rsp+88h] [rbp-F0h] BYREF
  _BYTE v42[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v43[16]; // [rsp+B8h] [rbp-C0h] BYREF
  DXGADAPTER *v44; // [rsp+C8h] [rbp-B0h]
  char v45; // [rsp+D0h] [rbp-A8h]
  __int64 v46; // [rsp+D8h] [rbp-A0h]
  _BYTE v47[16]; // [rsp+F8h] [rbp-80h] BYREF
  DXGADAPTER *v48; // [rsp+108h] [rbp-70h]
  char v49; // [rsp+110h] [rbp-68h]
  __int64 v50; // [rsp+118h] [rbp-60h]
  __int64 v51; // [rsp+138h] [rbp-40h]
  char v52; // [rsp+140h] [rbp-38h]

  v36 = -1;
  v4 = 0;
  v37 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2070);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2070);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12221;
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
LABEL_44:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    v25 = v38 == 0;
LABEL_45:
    if ( !v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v36);
    return 3221225485LL;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  memset(&v41, 0, sizeof(v41));
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v41, v7, 0x20uLL);
  }
  else
  {
    v41 = *a1;
  }
  v34 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, v41.hDevice, Current, &v34);
  v8 = v34;
  if ( !v34 )
  {
    WdLogSingleEntry2(2LL, v41.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 12254;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v41.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
    goto LABEL_44;
  }
  v39 = v34;
  v9 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL);
  if ( *(int *)(v9 + 2736) >= 0x2000 || *(_BYTE *)(v9 + 3036) )
    v4 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  v40 = v4;
  v10 = (struct _KEVENT *)*((_QWORD *)v8 + 2);
  if ( *((_DWORD *)v8 + 116) != 2 )
  {
    if ( KeReadStateEvent(v10 + 4) )
      goto LABEL_13;
    v29 = v10 + 4;
    goto LABEL_59;
  }
  if ( !KeReadStateEvent(v10 + 5) )
  {
    v29 = v10 + 5;
LABEL_59:
    KeWaitForSingleObject(v29, Executive, 0, 0, 0LL);
  }
LABEL_13:
  if ( v4 )
  {
    v11 = (struct DXGDEVICE *)((char *)v8 + 144);
    KeEnterCriticalRegion();
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v8 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v8 + 40);
      v13 = 1;
      v8 = v34;
    }
    else
    {
      KeLeaveCriticalRegion();
      v13 = 0;
    }
    if ( !v13 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared(v11);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v8 + 17), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventBlockThread, v31, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v8 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v8, 0, v12, 0);
  if ( v52 )
  {
    if ( v49 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v47, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    v26 = v48;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v48 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v48 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventBlockThread, v28, 72);
        KeWaitForSingleObject((char *)v48 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v48, 0LL);
      v26 = v48;
    }
    v50 = 0LL;
    v49 = 1;
    if ( *((_DWORD *)v26 + 50) != 1 )
      goto LABEL_53;
  }
  if ( v45 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v43, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v44 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v44 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventBlockThread, v15, 72);
      KeWaitForSingleObject((char *)v44 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v44, 0LL);
  }
  v46 = 0LL;
  v45 = 1;
  if ( *(_DWORD *)(v51 + 608) == 1 )
  {
    v16 = v34;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL) + 2280LL) < 0x5010u )
      goto LABEL_31;
    if ( CurrentThreadPreviousMode == 1 )
    {
      p_Flags = (UINT *)&a1->Flags;
      if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
        p_Flags = (UINT *)MmUserProbeAddress;
      Value = *p_Flags;
      v41.Flags.Value = *p_Flags;
      v16 = v34;
    }
    else
    {
      Value = a1->Flags.Value;
      v41.Flags.Value = Value;
    }
    if ( (Value & 0xFFFFFFFC) == 0 )
    {
LABEL_31:
      v19 = DXGDEVICE::OfferAllocations(v16, &v41, CurrentThreadPreviousMode == 1);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
      if ( v40 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v16 + 40);
        ExReleasePushLockSharedEx((char *)v16 + 144, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v16 + 17));
      }
      KeLeaveCriticalRegion();
      if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v36);
      }
      return v19;
    }
    WdLogSingleEntry1(3LL, (unsigned __int64)Value >> 2);
    WdLogGlobalForLineNumber = 12299;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v39);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    v25 = v38 == 0;
    goto LABEL_45;
  }
  COREACCESS::Release((COREACCESS *)v43);
  if ( v52 )
LABEL_53:
    COREACCESS::Release((COREACCESS *)v47);
  WdLogSingleEntry2(3LL, v34, -1073741130LL);
  WdLogGlobalForLineNumber = 12268;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v39);
  if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v36);
  return 3221226166LL;
}
