/*
 * XREFs of DxgkSetQueuedLimit @ 0x140297C10
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140229EF0 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x140029BB0 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x140182E5C (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1403E7F6C (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_SETQUEUEDLIMIT *v3; // r15
  char CurrentThreadPreviousMode; // r13
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r12
  struct _D3DKMT_SETQUEUEDLIMIT *p_Src; // r14
  const void *v8; // rdx
  DXGDEVICE *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int Type; // eax
  int v14; // eax
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGADAPTER *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGDEVICE *v24; // [rsp+50h] [rbp-118h] BYREF
  DXGDEVICE *v25; // [rsp+58h] [rbp-110h] BYREF
  int v26; // [rsp+60h] [rbp-108h] BYREF
  __int64 v27; // [rsp+68h] [rbp-100h]
  char v28; // [rsp+70h] [rbp-F8h]
  DXGDEVICE *v29; // [rsp+78h] [rbp-F0h] BYREF
  int v30; // [rsp+80h] [rbp-E8h]
  __int128 Src; // [rsp+88h] [rbp-E0h] BYREF
  char v32[8]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v33[16]; // [rsp+A8h] [rbp-C0h] BYREF
  DXGADAPTER *v34; // [rsp+B8h] [rbp-B0h]
  char v35; // [rsp+C0h] [rbp-A8h]
  __int64 v36; // [rsp+C8h] [rbp-A0h]
  _BYTE v37[16]; // [rsp+E8h] [rbp-80h] BYREF
  DXGADAPTER *v38; // [rsp+F8h] [rbp-70h]
  char v39; // [rsp+100h] [rbp-68h]
  __int64 v40; // [rsp+108h] [rbp-60h]
  __int64 v41; // [rsp+128h] [rbp-40h]
  char v42; // [rsp+130h] [rbp-38h]

  v3 = (struct _D3DKMT_SETQUEUEDLIMIT *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2035);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2035);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v15 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5198;
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
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v26);
    }
    return (unsigned int)v15;
  }
  Src = 0LL;
  p_Src = (struct _D3DKMT_SETQUEUEDLIMIT *)&Src;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v8 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v8 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&Src, v8, 0x10uLL);
  }
  else
  {
    p_Src = v3;
  }
  v25 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, p_Src->hDevice, Current, &v25);
  v9 = v25;
  if ( !v25 )
  {
    v15 = -1073741811;
    WdLogSingleEntry2(2LL, p_Src->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 5232;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      p_Src->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_29:
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
    goto LABEL_32;
  }
  v29 = v25;
  v30 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v29);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v9, 2, v10, 0);
  if ( v42 )
  {
    if ( v39 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v37, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    v19 = v38;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v38 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v38 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventBlockThread, v21, 72);
        KeWaitForSingleObject((char *)v38 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v38, 0LL);
      v19 = v38;
    }
    v40 = 0LL;
    v39 = 1;
    if ( *((_DWORD *)v19 + 50) != 1 )
      goto LABEL_44;
  }
  if ( v35 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v33, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v34 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v34 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventBlockThread, v12, 72);
      KeWaitForSingleObject((char *)v34 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v34, 0LL);
  }
  v36 = 0LL;
  v35 = 1;
  if ( *(_DWORD *)(v41 + 608) == 1 )
  {
    if ( (*((_BYTE *)v25 + 1901) & 1) != 0 )
    {
      v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 4664LL),
              Current,
              v25,
              p_Src);
    }
    else
    {
      Type = p_Src->Type;
      if ( Type == 1 )
      {
        v14 = DXGDEVICE::SetQueuedPresentLimit(v25, p_Src->QueuedPresentLimit);
      }
      else
      {
        if ( Type != 2 )
        {
          v15 = -1073741811;
LABEL_21:
          if ( v15 >= 0 && CurrentThreadPreviousMode == 1 )
          {
            if ( (unsigned __int64)v3 >= MmUserProbeAddress )
              v3 = (struct _D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v3, p_Src, 0x10uLL);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
          if ( v29 && v30 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v29 + 17));
            KeLeaveCriticalRegion();
          }
          goto LABEL_29;
        }
        v14 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 736LL) + 8LL) + 176LL))(
                *((_QWORD *)v25 + 100),
                &p_Src->8);
      }
    }
    v15 = v14;
    goto LABEL_21;
  }
  COREACCESS::Release((COREACCESS *)v33);
  if ( v42 )
LABEL_44:
    COREACCESS::Release((COREACCESS *)v37);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v32);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v29);
  if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v26);
  return 3221226166LL;
}
