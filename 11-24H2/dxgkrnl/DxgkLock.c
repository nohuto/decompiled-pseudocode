/*
 * XREFs of DxgkLock @ 0x140365AD0
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140365980 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
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
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401DCBEC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402A8BD4 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  char CurrentThreadPreviousMode; // r13
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rbx
  const void *v7; // rdx
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rcx
  int v10; // r15d
  struct _KEVENT *v11; // r12
  DXGPUSHLOCK *v12; // r15
  int v13; // eax
  __int64 v14; // rbx
  DXGDEVICE *v15; // r15
  __int64 v16; // r9
  int v17; // ebx
  _QWORD *p_pData; // rcx
  void *p_hAllocation; // rcx
  char *v20; // rcx
  char *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KEVENT *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGDEVICE *v28; // [rsp+50h] [rbp-168h] BYREF
  int v29; // [rsp+58h] [rbp-160h] BYREF
  __int64 v30; // [rsp+60h] [rbp-158h]
  char v31; // [rsp+68h] [rbp-150h]
  struct DXGDEVICE *v32; // [rsp+70h] [rbp-148h] BYREF
  struct _D3DKMT_UNLOCK v33; // [rsp+78h] [rbp-140h]
  struct _D3DKMT_LOCK Src; // [rsp+88h] [rbp-130h] BYREF
  struct DXGDEVICE *v35; // [rsp+B8h] [rbp-100h] BYREF
  int v36; // [rsp+C0h] [rbp-F8h]
  __int64 v37; // [rsp+C8h] [rbp-F0h] BYREF
  DXGADAPTER *v38; // [rsp+D0h] [rbp-E8h]
  char v39; // [rsp+D8h] [rbp-E0h]
  _BYTE v40[160]; // [rsp+E0h] [rbp-D8h] BYREF

  *(_QWORD *)&v33.hDevice = a1;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2011);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 2011);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v17 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 613;
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
    goto LABEL_34;
  }
  memset(&Src, 0, sizeof(Src));
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&Src, v7, 0x30uLL);
  }
  else
  {
    Src = *a1;
  }
  v28 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, Src.hDevice, Current, &v28);
  v8 = v28;
  if ( v28 )
  {
    v35 = v28;
    v9 = *(_QWORD *)(*((_QWORD *)v28 + 2) + 16LL);
    if ( *(int *)(v9 + 2736) >= 0x2000 || *(_BYTE *)(v9 + 3036) )
    {
      v10 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
      v36 = v10;
    }
    else
    {
      v10 = 0;
      v36 = 0;
    }
    v11 = (struct _KEVENT *)*((_QWORD *)v8 + 2);
    if ( *((_DWORD *)v8 + 116) == 2 )
    {
      if ( KeReadStateEvent(v11 + 5) )
        goto LABEL_14;
      v25 = v11 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v11 + 4) )
      {
LABEL_14:
        if ( v10 )
        {
          v12 = (struct DXGDEVICE *)((char *)v8 + 144);
          KeEnterCriticalRegion();
          if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v8 + 144, 0LL) )
          {
            _InterlockedIncrement((volatile signed __int32 *)v8 + 40);
            v13 = 1;
            v8 = v28;
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
            DXGPUSHLOCK::AcquireShared(v12);
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
              McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventBlockThread, v27, 40);
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v8 + 17), 1u);
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL));
          }
        }
        v14 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
        v38 = (DXGADAPTER *)v14;
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
        v37 = -1LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v14 + 136, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 152));
        v39 = 1;
        v15 = v28;
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v28, 0, v16, 0);
        v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40, 0LL);
        if ( v17 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v37);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v35);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v32);
          goto LABEL_34;
        }
        Src.hDevice = 0;
        v17 = DXGDEVICE::Lock(v15, &Src, (struct COREDEVICEACCESS *)v40, 0);
        if ( v17 >= 0 )
        {
          p_pData = &a1->pData;
          if ( CurrentThreadPreviousMode == 1 )
          {
            if ( (unsigned __int64)p_pData >= MmUserProbeAddress )
              p_pData = (_QWORD *)MmUserProbeAddress;
            *p_pData = Src.pData;
            p_hAllocation = &a1->hAllocation;
            if ( (unsigned __int64)&a1->hAllocation >= MmUserProbeAddress )
              p_hAllocation = (void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(p_hAllocation, &Src.hAllocation, 4uLL);
          }
          else
          {
            *p_pData = Src.pData;
            a1->hAllocation = Src.hAllocation;
          }
        }
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
        v20 = (char *)v38 + 136;
        _InterlockedAdd((volatile signed __int32 *)v38 + 38, 0xFFFFFFFF);
        ExReleasePushLockSharedEx(v20, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference(v38);
        if ( v36 )
        {
          v21 = (char *)v28 + 144;
          _InterlockedAdd((volatile signed __int32 *)v28 + 40, 0xFFFFFFFF);
          ExReleasePushLockSharedEx(v21, 0LL);
        }
        else
        {
          ExReleaseResourceLite(*((PERESOURCE *)v28 + 17));
        }
        KeLeaveCriticalRegion();
        goto LABEL_31;
      }
      v25 = v11 + 4;
    }
    KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
    goto LABEL_14;
  }
  v17 = -1073741811;
  WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
  WdLogGlobalForLineNumber = 645;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
    Src.hDevice,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_31:
  if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
LABEL_34:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v29);
  return (unsigned int)v17;
}
