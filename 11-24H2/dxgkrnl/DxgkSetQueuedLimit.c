/*
 * XREFs of DxgkSetQueuedLimit @ 0x14029A720
 * Callers:
 *     ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402307E0 (-VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002A350 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_SETQUEUEDLIMIT@@@Z @ 0x1401851AC (-VmBusSendSetQueuedLimit@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1403E161C (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetQueuedLimit(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_SETQUEUEDLIMIT *v3; // r15
  char CurrentThreadPreviousMode; // r13
  struct _KTHREAD **Current; // r12
  struct _D3DKMT_SETQUEUEDLIMIT *p_Src; // r14
  const void *v7; // rdx
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int Type; // eax
  int v13; // eax
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  DXGADAPTER *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGDEVICE *v23; // [rsp+50h] [rbp-118h] BYREF
  struct DXGDEVICE *v24; // [rsp+58h] [rbp-110h] BYREF
  int v25; // [rsp+60h] [rbp-108h] BYREF
  __int64 v26; // [rsp+68h] [rbp-100h]
  char v27; // [rsp+70h] [rbp-F8h]
  struct DXGDEVICE *v28; // [rsp+78h] [rbp-F0h] BYREF
  int v29; // [rsp+80h] [rbp-E8h]
  __int128 Src; // [rsp+88h] [rbp-E0h] BYREF
  char v31[8]; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v32[16]; // [rsp+A8h] [rbp-C0h] BYREF
  DXGADAPTER *v33; // [rsp+B8h] [rbp-B0h]
  char v34; // [rsp+C0h] [rbp-A8h]
  __int64 v35; // [rsp+C8h] [rbp-A0h]
  _BYTE v36[16]; // [rsp+E8h] [rbp-80h] BYREF
  DXGADAPTER *v37; // [rsp+F8h] [rbp-70h]
  char v38; // [rsp+100h] [rbp-68h]
  __int64 v39; // [rsp+108h] [rbp-60h]
  __int64 v40; // [rsp+128h] [rbp-40h]
  char v41; // [rsp+130h] [rbp-38h]

  v3 = (struct _D3DKMT_SETQUEUEDLIMIT *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2035);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2035);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v14 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5338;
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
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v25);
    }
    return (unsigned int)v14;
  }
  Src = 0LL;
  p_Src = (struct _D3DKMT_SETQUEUEDLIMIT *)&Src;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v7 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&Src, v7, 0x10uLL);
  }
  else
  {
    p_Src = v3;
  }
  v24 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, p_Src->hDevice, Current, &v24);
  v8 = v24;
  if ( !v24 )
  {
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, p_Src->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 5372;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      p_Src->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_29:
    if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
    goto LABEL_32;
  }
  v28 = v24;
  v29 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v8, 2, v9, 0);
  if ( v41 )
  {
    if ( v38 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v36, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    v18 = v37;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v37 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v37 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventBlockThread, v20, 72);
        KeWaitForSingleObject((char *)v37 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v37, 0LL);
      v18 = v37;
    }
    v39 = 0LL;
    v38 = 1;
    if ( *((_DWORD *)v18 + 50) != 1 )
      goto LABEL_44;
  }
  if ( v34 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v32, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v33 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v33 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventBlockThread, v11, 72);
      KeWaitForSingleObject((char *)v33 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v33, 0LL);
  }
  v35 = 0LL;
  v34 = 1;
  if ( *(_DWORD *)(v40 + 608) == 1 )
  {
    if ( (*((_BYTE *)v24 + 1917) & 1) != 0 )
    {
      v13 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetQueuedLimit(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 4664LL),
              (struct DXGPROCESS *)Current,
              v24,
              p_Src);
    }
    else
    {
      Type = p_Src->Type;
      if ( Type == 1 )
      {
        v13 = DXGDEVICE::SetQueuedPresentLimit(v24, p_Src->QueuedPresentLimit);
      }
      else
      {
        if ( Type != 2 )
        {
          v14 = -1073741811;
LABEL_21:
          if ( v14 >= 0 && CurrentThreadPreviousMode == 1 )
          {
            if ( (unsigned __int64)v3 >= MmUserProbeAddress )
              v3 = (struct _D3DKMT_SETQUEUEDLIMIT *)MmUserProbeAddress;
            RtlCopyVolatileMemory(v3, p_Src, 0x10uLL);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
          if ( v28 && v29 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v28 + 17));
            KeLeaveCriticalRegion();
          }
          goto LABEL_29;
        }
        v13 = (*(__int64 (__fastcall **)(_QWORD, union _D3DKMT_SETQUEUEDLIMIT::$A93923BD602231B9E75A21ABFFB5534A *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 736LL) + 8LL) + 176LL))(
                *((_QWORD *)v24 + 100),
                &p_Src->8);
      }
    }
    v14 = v13;
    goto LABEL_21;
  }
  COREACCESS::Release((COREACCESS *)v32);
  if ( v41 )
LABEL_44:
    COREACCESS::Release((COREACCESS *)v36);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
  if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v25);
  return 3221226166LL;
}
