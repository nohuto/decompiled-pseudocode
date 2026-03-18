/*
 * XREFs of ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403B60A8
 * Callers:
 *     DxgkCreateSynchronizationObjectInternal @ 0x1401EF614 (DxgkCreateSynchronizationObjectInternal.c)
 *     ?VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403B5C60 (-VmBusCreateSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z @ 0x1403B6040 (-DxgkCddCreateSynchronizationObject@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkCreateSynchronizationObject @ 0x1403B6080 (DxgkCreateSynchronizationObject.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140029BB0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002FAA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140049660 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_2549395768__private_IsEnabledDeviceUsageNoInline @ 0x140078ADC (Feature_2549395768__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1402FAE28 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14032CEE8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x14033D52C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkCreateSynchronizationObjectImpl(ULONG64 a1, unsigned int a2, __int64 a3, struct DXGADAPTER *a4)
{
  int v5; // r12d
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v10; // r13
  int v11; // r14d
  const void *v12; // rdx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E Value; // ecx
  __int64 v14; // r9
  __int64 v15; // r12
  struct DXGDEVICE *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGDEVICE *v19; // rbx
  void *v20; // rcx
  void *v21; // rcx
  __int64 Type; // rcx
  void *v23; // rcx
  void *v24; // rcx
  __int64 hSyncObject; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r9
  struct DXGPROCESS *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // r8
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v44; // [rsp+20h] [rbp-328h]
  int v45; // [rsp+50h] [rbp-2F8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-2F0h]
  char v47; // [rsp+60h] [rbp-2E8h]
  _BYTE v48[8]; // [rsp+68h] [rbp-2E0h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v49[2]; // [rsp+70h] [rbp-2D8h] BYREF
  struct DXGDEVICE *v50; // [rsp+78h] [rbp-2D0h] BYREF
  int v51; // [rsp+80h] [rbp-2C8h]
  struct DXGDEVICE *v52; // [rsp+88h] [rbp-2C0h] BYREF
  int v53; // [rsp+90h] [rbp-2B8h]
  struct DXGADAPTER *v54[2]; // [rsp+98h] [rbp-2B0h] BYREF
  struct DXGSYNCOBJECT *v55; // [rsp+A8h] [rbp-2A0h] BYREF
  struct DXGADAPTER *v56; // [rsp+B0h] [rbp-298h] BYREF
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v57; // [rsp+C0h] [rbp-288h] BYREF
  __int64 v58; // [rsp+120h] [rbp-228h] BYREF
  DXGADAPTER *v59[3]; // [rsp+128h] [rbp-220h] BYREF
  _BYTE v60[144]; // [rsp+140h] [rbp-208h] BYREF
  _BYTE v61[160]; // [rsp+1D0h] [rbp-178h] BYREF
  _BYTE v62[144]; // [rsp+270h] [rbp-D8h] BYREF

  v56 = a4;
  v5 = a3;
  v49[0].hSyncObject = a3;
  v45 = -1;
  v46 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2041);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2041);
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = Current;
  v59[0] = Current;
  if ( !Current )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 373;
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
LABEL_117:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, (__int64)&EventProfilerExit, v42, v45);
    return (unsigned int)v11;
  }
  v51 = *((_DWORD *)Current + 102) & 0x180;
  memset(&v57, 0, sizeof(v57));
  if ( v5 )
  {
    v12 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v57, v12, 0x60uLL);
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v57.Info.Flags.Value;
    if ( (a2 & 0x7FFFFFFF) == 1 && (v57.Info.Flags.Value & 0x80000000) != 0 )
      a2 = a2 & 0x80000000 | 5;
  }
  else
  {
    v57 = *(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *)a1;
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v57.hDevice, 12));
  }
  v57.hSyncObject = 0;
  if ( (v57.Info.Flags.Value & 0x7FFFF800) != 0 )
  {
    v11 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 415;
    goto LABEL_117;
  }
  if ( ((*(unsigned int *)&Value >> 1) & 1) != 0 && (*(_BYTE *)&Value & 1) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)&gDxgkrnlCounterAccumulated, 1u);
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 423;
    goto LABEL_42;
  }
  if ( (unsigned int)(v57.Info.Type - 5) <= 1 )
  {
    if ( a4 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 432;
      goto LABEL_42;
    }
    if ( (*(_BYTE *)&Value & 1) != 0 && ((*(unsigned int *)&Value >> 1) & 1) == 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 437;
      goto LABEL_42;
    }
    if ( (*(_BYTE *)&Value & 0x10) != 0 && (*(_BYTE *)&Value & 0x20) != 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 443;
      goto LABEL_42;
    }
  }
  else if ( *(_BYTE *)&Value < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 449;
    goto LABEL_42;
  }
  v50 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v48, v57.hDevice, v10, &v50);
  if ( !v50 && (v5 || v57.hDevice) )
  {
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, v57.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 469;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v57.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_116:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v48);
    goto LABEL_117;
  }
  v55 = 0LL;
  v15 = 0LL;
  v58 = 0LL;
  v54[0] = 0LL;
  v52 = v50;
  v53 = 0;
  if ( a4 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, a4, 0LL);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62, 0LL);
    if ( v11 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      goto LABEL_115;
    }
    v44 = a2;
    v19 = v50;
    v11 = CreateSynchronizationObjectInternal(
            (__int64)v50,
            1,
            *((ADAPTER_RENDER **)v56 + 391),
            (__int64)&v57,
            v44,
            0,
            &v55,
            0LL,
            0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
LABEL_50:
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(3LL, v11);
      WdLogGlobalForLineNumber = 623;
    }
    else
    {
      if ( v49[0].hSyncObject )
      {
        v20 = (void *)(a1 + 88);
        if ( a1 + 88 >= MmUserProbeAddress )
          v20 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v20, &v57.hSyncObject, 4uLL);
        if ( (*(_BYTE *)&v57.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v57.Info.Flags.0 & 2) == 0 || v51) )
        {
          v21 = (void *)(a1 + 80);
          if ( a1 + 80 >= MmUserProbeAddress )
            v21 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v21, &v57.Info.SharedHandle, 4uLL);
        }
        Type = (unsigned int)v57.Info.Type;
        if ( v57.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          v23 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v23 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v23, &v57.Info.SynchronizationMutex, 0x20uLL);
          Type = (unsigned int)v57.Info.Type;
        }
        if ( (_DWORD)Type == 6 )
        {
          v24 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v24 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v24, &v57.Info.SynchronizationMutex, 0x28uLL);
          Type = (unsigned int)v57.Info.Type;
        }
        hSyncObject = v57.hSyncObject;
      }
      else
      {
        hSyncObject = v57.hSyncObject;
        *(_DWORD *)(a1 + 88) = v57.hSyncObject;
        if ( (*(_BYTE *)&v57.Info.Flags.0 & 1) != 0 && ((*(_BYTE *)&v57.Info.Flags.0 & 2) == 0 || v51) )
          *(_DWORD *)(a1 + 80) = v57.Info.SharedHandle;
        Type = (unsigned int)v57.Info.Type;
        if ( v57.Info.Type == D3DDDI_MONITORED_FENCE )
        {
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v57.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(a1 + 32) = *(_OWORD *)&v57.Info.Reserved.Reserved[2];
        }
        if ( (_DWORD)Type == 6 )
        {
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v57.Info.SynchronizationMutex.InitialState;
          *(_OWORD *)(a1 + 32) = *(_OWORD *)&v57.Info.Reserved.Reserved[2];
          *(_QWORD *)(a1 + 48) = v57.Info.Reserved.Reserved[4];
        }
      }
      if ( bTracingEnabled )
      {
        if ( v15 ? *(_QWORD *)(v15 + 32) : 0LL )
        {
          v28 = v15 ? *(_QWORD *)(v15 + 32) : 0LL;
          v27 = *(_QWORD *)(v28 + 16);
        }
        else
        {
          v27 = 0LL;
        }
        v29 = v15 ? *(_QWORD *)(v15 + 32) : 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          McTemplateK0pppp_EtwWriteTransfer(
            Type,
            &EventOpenSyncObject,
            hSyncObject,
            v29,
            (unsigned int)hSyncObject,
            v19,
            v27);
          Type = (unsigned int)v57.Info.Type;
        }
      }
      if ( (_DWORD)Type == 6 )
      {
        *(_QWORD *)&v49[0].hSyncObject = 0LL;
        v30 = DXGPROCESS::GetCurrent(Type);
        DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
          (DXGADAPTERBYHANDLE *)v59,
          v57.Info.Semaphore.MaxCount,
          v30,
          (struct DXGADAPTER **)v49,
          1);
        if ( *(_QWORD *)&v49[0].hSyncObject )
        {
          v11 = CreatePeriodicMonitoredFenceNotificationInternal(
                  *(struct DXGADAPTER **)&v49[0].hSyncObject,
                  v54[0],
                  v55,
                  &v57,
                  0);
        }
        else
        {
          v11 = -1073741811;
          WdLogSingleEntry2(3LL, v57.Info.Semaphore.MaxCount, -1073741811LL);
          WdLogGlobalForLineNumber = 637;
        }
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v59, v31);
      }
      if ( (unsigned int)Feature_2549395768__private_IsEnabledDeviceUsageNoInline() )
      {
        v32 = v57.hSyncObject;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v10 + 248));
        v33 = ((unsigned int)v32 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v33 < *((_DWORD *)v10 + 74) )
        {
          v34 = *((_QWORD *)v10 + 35);
          if ( (((unsigned int)v32 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60)
            && (*(_DWORD *)(v34 + 16 * v33 + 8) & 0x1F) != 0 )
          {
            v35 = 2 * ((v32 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v34 + 8 * v35 + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 224;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                224LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*((_QWORD *)v10 + 35) + 8 * v35 + 8) &= ~0x2000u;
          }
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)v10 + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v10 + 248, 0LL);
        KeLeaveCriticalRegion();
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
      }
      else
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
        v37 = v57.hSyncObject;
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v10 + 248));
        v38 = ((unsigned int)v37 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v38 < *((_DWORD *)v10 + 74) )
        {
          v39 = *((_QWORD *)v10 + 35);
          if ( (((unsigned int)v37 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60)
            && (*(_DWORD *)(v39 + 16 * v38 + 8) & 0x1F) != 0 )
          {
            v40 = 2 * ((v37 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v39 + 8 * v40 + 8) & 0x2000) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 224;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                224LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *(_DWORD *)(*((_QWORD *)v10 + 35) + 8 * v40 + 8) &= ~0x2000u;
          }
        }
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *((_QWORD *)v10 + 32) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v10 + 248, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v11 < 0 )
      {
        v49[0] = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT)v57.hSyncObject;
        DxgkDestroySynchronizationObjectImpl(v49, 0, v36);
      }
    }
    goto LABEL_115;
  }
  v16 = v50;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v50, 0, v14, 0);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v60,
    *(struct DXGADAPTER *const *)(*((_QWORD *)v16 + 2) + 16LL),
    0LL);
  if ( (unsigned int)(v57.Info.Type - 5) > 1 )
  {
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60, 0LL);
    if ( v11 < 0 )
    {
LABEL_38:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
LABEL_115:
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v54, 0LL);
      goto LABEL_116;
    }
LABEL_46:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v54, *(struct DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL));
    v56 = 0LL;
    v11 = CreateSynchronizationObjectInternal(
            (__int64)v16,
            1,
            *((ADAPTER_RENDER **)v16 + 2),
            (__int64)&v57,
            a2,
            0,
            &v55,
            (__int64 *)&v56,
            (__int64)&v58);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    v15 = v58;
    v19 = v50;
    goto LABEL_50;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61, 0LL);
  if ( v11 < 0 )
    goto LABEL_38;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL)) )
    goto LABEL_46;
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 503;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v52);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v54, 0LL);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v48);
LABEL_42:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v45);
  return (unsigned int)-1073741811;
}
