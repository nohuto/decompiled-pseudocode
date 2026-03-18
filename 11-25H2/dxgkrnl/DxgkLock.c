/*
 * XREFs of DxgkLock @ 0x14037A890
 * Callers:
 *     ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14037A740 (-VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401D795C (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1403808B0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  char CurrentThreadPreviousMode; // r13
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  const void *v7; // rdx
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rcx
  int v10; // r14d
  struct _KEVENT *v11; // r12
  DXGPUSHLOCK *v12; // r14
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ebx
  _QWORD *p_pData; // rcx
  void *p_hAllocation; // rcx
  char *v21; // rcx
  char *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  struct _KEVENT *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGDEVICE *v31; // [rsp+50h] [rbp-168h] BYREF
  int v32; // [rsp+58h] [rbp-160h] BYREF
  __int64 v33; // [rsp+60h] [rbp-158h]
  char v34; // [rsp+68h] [rbp-150h]
  struct DXGDEVICE *v35; // [rsp+70h] [rbp-148h] BYREF
  struct _D3DKMT_UNLOCK v36; // [rsp+78h] [rbp-140h]
  struct _D3DKMT_LOCK Src; // [rsp+88h] [rbp-130h] BYREF
  struct DXGDEVICE *v38; // [rsp+B8h] [rbp-100h] BYREF
  int v39; // [rsp+C0h] [rbp-F8h]
  __int64 v40; // [rsp+C8h] [rbp-F0h] BYREF
  DXGADAPTER *v41; // [rsp+D0h] [rbp-E8h]
  char v42; // [rsp+D8h] [rbp-E0h]
  _BYTE v43[8]; // [rsp+E0h] [rbp-D8h] BYREF
  _BYTE v44[16]; // [rsp+E8h] [rbp-D0h] BYREF
  DXGADAPTER *v45; // [rsp+F8h] [rbp-C0h]
  char v46; // [rsp+100h] [rbp-B8h]
  __int64 v47; // [rsp+108h] [rbp-B0h]
  _BYTE v48[16]; // [rsp+128h] [rbp-90h] BYREF
  __int64 v49; // [rsp+138h] [rbp-80h]
  __int64 v50; // [rsp+168h] [rbp-50h]
  char v51; // [rsp+170h] [rbp-48h]

  *(_QWORD *)&v36.hDevice = a1;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2011);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2011);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = DXGPROCESS::GetCurrent(v5);
  if ( Current )
  {
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
    v31 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, Src.hDevice, Current, &v31);
    v8 = v31;
    if ( !v31 )
    {
      v18 = -1073741811;
      WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid hDevice specified: 0x%I64x, returning 0x%I64x",
        Src.hDevice,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_37:
      if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      goto LABEL_40;
    }
    v38 = v31;
    v9 = *(_QWORD *)(*((_QWORD *)v31 + 2) + 16LL);
    if ( *(int *)(v9 + 2736) >= 0x2000 || *(_BYTE *)(v9 + 3036) )
    {
      v10 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 332);
      v39 = v10;
    }
    else
    {
      v10 = 0;
      v39 = 0;
    }
    v11 = (struct _KEVENT *)*((_QWORD *)v8 + 2);
    if ( *((_DWORD *)v8 + 116) == 2 )
    {
      if ( KeReadStateEvent(v11 + 5) )
        goto LABEL_14;
      v28 = v11 + 5;
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
            v8 = v31;
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
              McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventBlockThread, v30, 40);
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v8 + 17), 1u);
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL));
          }
        }
        v14 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
        v41 = (DXGADAPTER *)v14;
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
        v40 = -1LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v14 + 136, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 152));
        v42 = 1;
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v31, 0, v15, 0);
        if ( v51 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v48, 0LL);
          if ( *(_DWORD *)(v49 + 200) != 1 )
            goto LABEL_46;
        }
        if ( v46 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v44, 0LL, 0LL);
          WdLogGlobalForLineNumber = 7603;
        }
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v45 + 23) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v45 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventBlockThread, v17, 72);
            KeWaitForSingleObject((char *)v45 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v45, 0LL);
        }
        v47 = 0LL;
        v46 = 1;
        if ( *(_DWORD *)(v50 + 608) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v44);
          if ( !v51 )
          {
LABEL_47:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v40);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v38);
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v35);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v32);
            return 3221226166LL;
          }
LABEL_46:
          COREACCESS::Release((COREACCESS *)v48);
          goto LABEL_47;
        }
        Src.hDevice = 0;
        v18 = DXGDEVICE::Lock(v31, &Src, (struct COREDEVICEACCESS *)v43, 0);
        if ( v18 >= 0 )
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
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
        v21 = (char *)v41 + 136;
        _InterlockedAdd((volatile signed __int32 *)v41 + 38, 0xFFFFFFFF);
        ExReleasePushLockSharedEx(v21, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::ReleaseReference(v41);
        if ( v39 )
        {
          v22 = (char *)v31 + 144;
          _InterlockedAdd((volatile signed __int32 *)v31 + 40, 0xFFFFFFFF);
          ExReleasePushLockSharedEx(v22, 0LL);
        }
        else
        {
          ExReleaseResourceLite(*((PERESOURCE *)v31 + 17));
        }
        KeLeaveCriticalRegion();
        goto LABEL_37;
      }
      v28 = v11 + 4;
    }
    KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
    goto LABEL_14;
  }
  v18 = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 613;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Invalid process context, returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v32);
  }
  return (unsigned int)v18;
}
