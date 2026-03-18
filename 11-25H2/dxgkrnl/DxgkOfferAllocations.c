/*
 * XREFs of DxgkOfferAllocations @ 0x140295550
 * Callers:
 *     ?VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021EAB0 (-VmBusOfferAllocations@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1402947A4 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkOfferAllocations(_D3DKMT_OFFERALLOCATIONS *a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  struct DXGPROCESS *Current; // rdi
  char CurrentThreadPreviousMode; // r12
  const void *v7; // rdx
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // rcx
  struct _KEVENT *v10; // r14
  DXGPUSHLOCK *v11; // rsi
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // rdi
  UINT *p_Flags; // rdx
  UINT Value; // eax
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  DXGADAPTER *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KEVENT *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  struct DXGDEVICE *v35; // [rsp+50h] [rbp-128h] BYREF
  struct DXGDEVICE *v36; // [rsp+58h] [rbp-120h] BYREF
  int v37; // [rsp+60h] [rbp-118h] BYREF
  __int64 v38; // [rsp+68h] [rbp-110h]
  char v39; // [rsp+70h] [rbp-108h]
  struct DXGDEVICE *v40; // [rsp+78h] [rbp-100h] BYREF
  int v41; // [rsp+80h] [rbp-F8h]
  _D3DKMT_OFFERALLOCATIONS v42; // [rsp+88h] [rbp-F0h] BYREF
  _BYTE v43[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v44[16]; // [rsp+B8h] [rbp-C0h] BYREF
  DXGADAPTER *v45; // [rsp+C8h] [rbp-B0h]
  char v46; // [rsp+D0h] [rbp-A8h]
  __int64 v47; // [rsp+D8h] [rbp-A0h]
  _BYTE v48[16]; // [rsp+F8h] [rbp-80h] BYREF
  DXGADAPTER *v49; // [rsp+108h] [rbp-70h]
  char v50; // [rsp+110h] [rbp-68h]
  __int64 v51; // [rsp+118h] [rbp-60h]
  __int64 v52; // [rsp+138h] [rbp-40h]
  char v53; // [rsp+140h] [rbp-38h]

  v37 = -1;
  v4 = 0;
  v38 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2070;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2070);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2070);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 12155;
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
LABEL_44:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v26 = v39 == 0;
LABEL_45:
    if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v37);
    return 3221225485LL;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  memset(&v42, 0, sizeof(v42));
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v42, v7, 0x20uLL);
  }
  else
  {
    v42 = *a1;
  }
  v35 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v36, v42.hDevice, Current, &v35);
  v8 = v35;
  if ( !v35 )
  {
    WdLogSingleEntry2(2LL, v42.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 12188;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v42.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
    goto LABEL_44;
  }
  v40 = v35;
  v9 = *(_QWORD *)(*((_QWORD *)v35 + 2) + 16LL);
  if ( *(int *)(v9 + 2736) >= 0x2000 || *(_BYTE *)(v9 + 3036) )
    v4 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 332);
  v41 = v4;
  v10 = (struct _KEVENT *)*((_QWORD *)v8 + 2);
  if ( *((_DWORD *)v8 + 116) != 2 )
  {
    if ( KeReadStateEvent(v10 + 4) )
      goto LABEL_13;
    v30 = v10 + 4;
    goto LABEL_59;
  }
  if ( !KeReadStateEvent(v10 + 5) )
  {
    v30 = v10 + 5;
LABEL_59:
    KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
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
      v8 = v35;
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
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventBlockThread, v32, 40);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)v8 + 17), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL));
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v8, 0, v12, 0);
  if ( v53 )
  {
    if ( v50 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v48, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    v27 = v49;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v49 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v49 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventBlockThread, v29, 72);
        KeWaitForSingleObject((char *)v49 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v49, 0LL);
      v27 = v49;
    }
    v51 = 0LL;
    v50 = 1;
    if ( *((_DWORD *)v27 + 50) != 1 )
      goto LABEL_53;
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
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventBlockThread, v16, 72);
      KeWaitForSingleObject((char *)v45 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v45, 0LL);
  }
  v47 = 0LL;
  v46 = 1;
  if ( *(_DWORD *)(v52 + 608) == 1 )
  {
    v17 = v35;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 2) + 16LL) + 2280LL) < 0x5010u )
      goto LABEL_31;
    if ( CurrentThreadPreviousMode == 1 )
    {
      p_Flags = (UINT *)&a1->Flags;
      if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
        p_Flags = (UINT *)MmUserProbeAddress;
      Value = *p_Flags;
      v42.Flags.Value = *p_Flags;
      v17 = v35;
    }
    else
    {
      Value = a1->Flags.Value;
      v42.Flags.Value = Value;
    }
    if ( (Value & 0xFFFFFFFC) == 0 )
    {
LABEL_31:
      v20 = DXGDEVICE::OfferAllocations(v17, &v42, CurrentThreadPreviousMode == 1, v14);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
      if ( v41 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v17 + 40);
        ExReleasePushLockSharedEx((char *)v17 + 144, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v17 + 17));
      }
      KeLeaveCriticalRegion();
      if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
      if ( v39 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v37);
      }
      return v20;
    }
    WdLogSingleEntry1(3LL, (unsigned __int64)Value >> 2);
    WdLogGlobalForLineNumber = 12233;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v40);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v26 = v39 == 0;
    goto LABEL_45;
  }
  COREACCESS::Release((COREACCESS *)v44);
  if ( v53 )
LABEL_53:
    COREACCESS::Release((COREACCESS *)v48);
  WdLogSingleEntry2(3LL, v35, -1073741130LL);
  WdLogGlobalForLineNumber = 12202;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v40);
  if ( v36 && _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36 + 2), v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v37);
  return 3221226166LL;
}
