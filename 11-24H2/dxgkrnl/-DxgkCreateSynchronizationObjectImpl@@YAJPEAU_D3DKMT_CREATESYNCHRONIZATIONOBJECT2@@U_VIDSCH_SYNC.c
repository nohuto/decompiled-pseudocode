/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403708E8
 * Callers:
 *     DxgkCreateSynchronizationObjectInternal @ 0x1401F5860 (DxgkCreateSynchronizationObjectInternal.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x140370880 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkCreateSynchronizationObject @ 0x1403708C0 (DxgkCreateSynchronizationObject.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140425A10 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002A350 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1400301A0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140048D4C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1402F9BAC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403ABF4C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1403E2E90 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(ULONG64 a1, unsigned int a2, __int64 a3, struct DXGADAPTER *a4)
{
  int v5; // r13d
  unsigned int v6; // ebx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // r12
  int v11; // ebx
  const void *v12; // rdx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E Value; // ecx
  __int64 v14; // r9
  __int64 v15; // r13
  volatile signed __int64 *v16; // r15
  struct DXGDEVICE *v17; // r13
  int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rcx
  void *v28; // rcx
  __int64 Type; // rcx
  void *v30; // rcx
  void *v31; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r9
  struct _KTHREAD **v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 hSyncObject; // r14
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-2E0h]
  char v46; // [rsp+60h] [rbp-2D8h]
  struct DXGDEVICE *v47; // [rsp+68h] [rbp-2D0h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v48; // [rsp+70h] [rbp-2C8h] BYREF
  struct DXGDEVICE *v49; // [rsp+78h] [rbp-2C0h] BYREF
  int v50; // [rsp+80h] [rbp-2B8h]
  struct DXGADAPTER *v51; // [rsp+88h] [rbp-2B0h] BYREF
  struct DXGDEVICE *v52; // [rsp+90h] [rbp-2A8h] BYREF
  int v53; // [rsp+98h] [rbp-2A0h]
  DXGADAPTER *v54[2]; // [rsp+A0h] [rbp-298h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-288h] BYREF
  struct DXGSYNCOBJECT *v56; // [rsp+B8h] [rbp-280h] BYREF
  _QWORD v57[2]; // [rsp+C0h] [rbp-278h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v58; // [rsp+D0h] [rbp-268h] BYREF
  __int64 v59; // [rsp+130h] [rbp-208h] BYREF
  _BYTE v60[144]; // [rsp+140h] [rbp-1F8h] BYREF
  _BYTE v61[160]; // [rsp+1D0h] [rbp-168h] BYREF
  _BYTE v62[144]; // [rsp+270h] [rbp-C8h] BYREF
  unsigned int v63; // [rsp+348h] [rbp+10h]

  v63 = a2;
  v51 = a4;
  v5 = a3;
  v48.hSyncObject = a3;
  v6 = a2;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2041);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2041);
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = Current;
  v54[0] = Current;
  if ( !Current )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 371;
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
    goto LABEL_126;
  }
  v50 = *((_DWORD *)Current + 102) & 0x180;
  memset(&v58, 0, sizeof(v58));
  if ( v5 )
  {
    v12 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v58, v12, 0x60uLL);
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v58.Info.Flags.Value;
    if ( (v6 & 0x7FFFFFFF) == 1 && (v58.Info.Flags.Value & 0x80000000) != 0 )
    {
      v6 = v6 & 0x80000000 | 5;
      v63 = v6;
    }
  }
  else
  {
    v58 = *(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v58.hDevice, 12));
  }
  v58.hSyncObject = 0;
  if ( (v58.Info.Flags.Value & 0x7FFFF800) != 0 )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 413;
LABEL_126:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v44);
    }
    return (unsigned int)v11;
  }
  if ( ((*(unsigned int *)&Value >> 1) & 1) != 0 && (*(_BYTE *)&Value & 1) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gDxgkrnlCounterAccumulated);
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 421;
    goto LABEL_52;
  }
  if ( (unsigned int)(v58.Info.Type - 5) <= 1 )
  {
    if ( a4 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 430;
      goto LABEL_52;
    }
    if ( (*(_BYTE *)&Value & 1) != 0 && ((*(unsigned int *)&Value >> 1) & 1) == 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 435;
      goto LABEL_52;
    }
    if ( (*(_BYTE *)&Value & 0x10) != 0 && (*(_BYTE *)&Value & 0x20) != 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 441;
      goto LABEL_52;
    }
  }
  else if ( *(_BYTE *)&Value < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 447;
    goto LABEL_52;
  }
  v49 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v58.hDevice, (struct _KTHREAD **)v10, &v49);
  if ( !v49 && (v5 || v58.hDevice) )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, v58.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 467;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v58.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_123:
    if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
    goto LABEL_126;
  }
  v56 = 0LL;
  v15 = 0LL;
  v59 = 0LL;
  v16 = 0LL;
  v57[0] = 0LL;
  v52 = v49;
  v53 = 0;
  if ( !v51 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v49, 0, v14, 0);
    v17 = v49;
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v60,
      *(struct DXGADAPTER *const *)(*((_QWORD *)v49 + 2) + 16LL),
      0LL);
    if ( (unsigned int)(v58.Info.Type - 5) > 1 )
    {
      v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60, 0LL);
      if ( v18 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v57, 0LL);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v47);
LABEL_46:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
        if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v44);
        return (unsigned int)v18;
      }
LABEL_56:
      v16 = *(volatile signed __int64 **)(*((_QWORD *)v17 + 2) + 16LL);
      v57[0] = v16;
      if ( v16 )
      {
        _InterlockedIncrement64(v16 + 3);
        v57[1] = -1LL;
        v6 = v63;
        v16 = (volatile signed __int64 *)v57[0];
      }
      v55 = 0LL;
      v11 = CreateSynchronizationObjectInternal(
              (__int64)v49,
              1,
              *((ADAPTER_RENDER **)v17 + 2),
              (__int64)&v58,
              v6,
              0,
              &v56,
              &v55,
              (__int64)&v59);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
      v15 = v59;
      goto LABEL_65;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61, 0LL);
    if ( v18 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
      if ( v52 && v53 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v52 + 17));
        KeLeaveCriticalRegion();
      }
      if ( v47 && _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47 + 2), v47);
      goto LABEL_46;
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v17 + 2) + 16LL)) )
      goto LABEL_56;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 501;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v57, 0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v47);
LABEL_52:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v44);
    return (unsigned int)-1073741811;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v51, 0LL);
  LODWORD(v55) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62, 0LL);
  if ( (int)v55 >= 0 )
  {
    v11 = CreateSynchronizationObjectInternal(
            (__int64)v49,
            1,
            *((ADAPTER_RENDER **)v51 + 391),
            (__int64)&v58,
            v6,
            0,
            &v56,
            0LL,
            0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
LABEL_65:
    if ( v11 >= 0 )
    {
      if ( v48.hSyncObject )
      {
        v27 = (void *)(a1 + 88);
        if ( a1 + 88 >= MmUserProbeAddress )
          v27 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v27, &v58.hSyncObject, 4uLL);
        if ( (*(_BYTE *)&v58.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v58.Info.Flags.0 & 2) == 0 || v50) )
        {
          v28 = (void *)(a1 + 80);
          if ( a1 + 80 >= MmUserProbeAddress )
            v28 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v28, &v58.Info.SharedHandle, 4uLL);
        }
        Type = (unsigned int)v58.Info.Type;
        if ( v58.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          v30 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v30 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v30, &v58.Info.SynchronizationMutex, 0x20uLL);
          Type = (unsigned int)v58.Info.Type;
        }
        if ( (_DWORD)Type == 6 )
        {
          v31 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v31 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v31, &v58.Info.SynchronizationMutex, 0x28uLL);
          Type = (unsigned int)v58.Info.Type;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 88) = v58.hSyncObject;
        if ( (*(_BYTE *)&v58.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v58.Info.Flags.0 & 2) == 0 || v50) )
          *(_DWORD *)(a1 + 80) = v58.Info.SharedHandle;
        Type = (unsigned int)v58.Info.Type;
        if ( v58.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v58.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(a1 + 32) = *(_OWORD *)&v58.Info.Reserved.Reserved[2];
        }
        if ( (_DWORD)Type == 6 )
        {
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v58.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(a1 + 32) = *(_OWORD *)&v58.Info.Reserved.Reserved[2];
          *(_QWORD *)(a1 + 48) = v58.Info.Reserved.Reserved[4];
        }
      }
      if ( bTracingEnabled )
      {
        if ( v15 ? *(_QWORD *)(v15 + 32) : 0LL )
        {
          v34 = v15 ? *(_QWORD *)(v15 + 32) : 0LL;
          v33 = *(_QWORD *)(v34 + 16);
        }
        else
        {
          v33 = 0LL;
        }
        v35 = v15 ? *(_QWORD *)(v15 + 32) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          McTemplateK0pppp_EtwWriteTransfer((__int64)v49, &EventOpenSyncObject, v24, v35, v58.hSyncObject, v49, v33);
          Type = (unsigned int)v58.Info.Type;
        }
      }
      if ( (_DWORD)Type == 6 )
      {
        v51 = 0LL;
        v36 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(Type);
        DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v54, v58.Info.Semaphore.MaxCount, v36, &v51, 1);
        if ( v51 )
        {
          v11 = CreatePeriodicMonitoredFenceNotificationInternal(v51, (struct DXGADAPTER *)v16, v56, &v58, 0);
        }
        else
        {
          v11 = -1073741811;
          WdLogSingleEntry2(3LL, v58.Info.Semaphore.MaxCount, -1073741811LL);
          WdLogGlobalForLineNumber = 635;
        }
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v54, v37);
      }
      hSyncObject = v58.hSyncObject;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v10 + 248));
      v39 = ((unsigned int)hSyncObject >> 6) & 0xFFFFFF;
      if ( (unsigned int)v39 < *((_DWORD *)v10 + 74) )
      {
        v40 = *((_QWORD *)v10 + 35);
        if ( (((unsigned int)hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60)
          && (*(_DWORD *)(v40 + 16 * v39 + 8) & 0x1F) != 0 )
        {
          v41 = 2 * ((hSyncObject >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v40 + 8 * v41 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*((_QWORD *)v10 + 35) + 8 * v41 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)v10 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v10 + 248, 0LL);
      KeLeaveCriticalRegion();
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
      if ( v11 < 0 )
      {
        v48.hSyncObject = v58.hSyncObject;
        DxgkDestroySynchronizationObjectImpl(&v48, 0);
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v57, 0LL);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v47);
      goto LABEL_126;
    }
    WdLogSingleEntry1(3LL, v11);
    WdLogGlobalForLineNumber = 621;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
    if ( v16 )
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    goto LABEL_123;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v57, 0LL);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v47);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v44);
  return (unsigned int)v55;
}
