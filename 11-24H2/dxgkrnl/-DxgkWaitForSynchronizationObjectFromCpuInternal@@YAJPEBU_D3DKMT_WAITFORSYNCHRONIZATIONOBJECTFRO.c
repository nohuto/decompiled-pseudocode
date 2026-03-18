/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402AC610
 * Callers:
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1402AC5F0 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1403C8930 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403DD930 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x14022F4C8 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1402AD200 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        void *a3,
        void *a4)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rbx
  struct DXGDEVICE *v12; // rdi
  unsigned int v13; // ebx
  _BYTE *Pool2; // rcx
  size_t v15; // r8
  const void *v16; // rdx
  _BYTE *v17; // r9
  unsigned int v18; // ebx
  _BYTE *v19; // rcx
  size_t v20; // r8
  const void *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // [rsp+50h] [rbp-108h] BYREF
  __int64 v44; // [rsp+58h] [rbp-100h]
  char v45; // [rsp+60h] [rbp-F8h]
  struct DXGDEVICE *v46[2]; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGDEVICE *v47[2]; // [rsp+78h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-D0h] BYREF
  void *v49[2]; // [rsp+98h] [rbp-C0h]
  __int64 v50; // [rsp+A8h] [rbp-B0h]
  void **v51; // [rsp+B0h] [rbp-A8h]
  size_t v52; // [rsp+B8h] [rbp-A0h]
  _BYTE *v53; // [rsp+C0h] [rbp-98h]
  size_t v54; // [rsp+C8h] [rbp-90h]
  PVOID v55; // [rsp+D0h] [rbp-88h]
  _BYTE v56[16]; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int v57; // [rsp+E8h] [rbp-70h]
  PVOID P; // [rsp+F0h] [rbp-68h]
  _BYTE v59[32]; // [rsp+F8h] [rbp-60h] BYREF
  unsigned int v60; // [rsp+118h] [rbp-40h]

  v6 = a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2043);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2043);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGDEVICE *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v12 = (struct DXGDEVICE *)*((_QWORD *)Current + 3);
    if ( !v12 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v12 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v12 = v11;
    }
  }
  v46[1] = v12;
  if ( !v12 )
  {
    v40 = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, v40, -1073741811LL);
    WdLogGlobalForLineNumber = 5596;
    v42 = PsGetCurrentProcess(v41);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v42,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_111;
  }
  v55 = 0LL;
  v57 = 0;
  P = 0LL;
  v60 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  if ( !a2 )
  {
    v51 = (void **)v6;
    if ( v6->ObjectCount && v6->Flags.Value < 2 )
      goto LABEL_72;
LABEL_111:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_93;
  }
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v6, 0x28uLL);
  v13 = HIDWORD(Src[0]);
  if ( !HIDWORD(Src[0]) )
  {
    if ( P != v59 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v60 = 0;
    if ( v55 != v56 && v55 )
      ExFreePoolWithTag(v55, 0);
    v55 = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v43);
    return 3221225485LL;
  }
  if ( (v50 & 0xFFFFFFFE) != 0 )
  {
    if ( P != v59 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v60 = 0;
    if ( v55 != v56 && v55 )
      ExFreePoolWithTag(v55, 0);
    v55 = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v43);
    return 3221225485LL;
  }
  if ( HIDWORD(Src[0]) <= 4 )
  {
    v55 = v56;
    memset(v56, 0, 4LL * HIDWORD(Src[0]));
    Pool2 = v55;
LABEL_14:
    v57 = v13;
    goto LABEL_15;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) >= 4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL);
    v55 = Pool2;
    goto LABEL_14;
  }
  v13 = v57;
  Pool2 = v55;
LABEL_15:
  if ( !Pool2 )
  {
    if ( P != v59 && P )
    {
      ExFreePoolWithTag(P, 0);
      Pool2 = v55;
    }
    P = 0LL;
    v60 = 0;
    if ( Pool2 != v56 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v55 = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v43);
    return 3221225495LL;
  }
  v15 = 4LL * v13;
  v52 = v15;
  v53 = Pool2;
  v16 = Src[1];
  if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Pool2, v16, v15);
  v17 = v55;
  Src[1] = v55;
  v18 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 8 )
    {
      v18 = v60;
      v19 = P;
      goto LABEL_23;
    }
    v19 = (_BYTE *)ExAllocatePool2(64LL, 8LL * HIDWORD(Src[0]), 1265072196LL);
    P = v19;
    goto LABEL_21;
  }
  v19 = v59;
  P = v59;
  if ( HIDWORD(Src[0]) )
  {
    memset(v59, 0, 8LL * HIDWORD(Src[0]));
    v19 = P;
LABEL_21:
    v17 = v55;
  }
  v60 = v18;
LABEL_23:
  if ( v19 )
  {
    v20 = 8LL * v18;
    v54 = v20;
    v47[1] = (struct DXGDEVICE *)v19;
    v21 = v49[0];
    if ( (char *)v49[0] + v20 < v49[0] || (char *)v49[0] + v20 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v19, v21, v20);
    v49[0] = P;
    v6 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)Src;
    v51 = Src;
LABEL_72:
    v47[0] = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v46, v6->hDevice, (struct _KTHREAD **)v12, v47);
    if ( v47[0] )
    {
      v31 = *(_QWORD *)(*((_QWORD *)v47[0] + 2) + 16LL);
      if ( *(_BYTE *)(v31 + 209) )
      {
        v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                (struct DXGADAPTER **)(v31 + 4664),
                v12,
                *((_DWORD *)v47[0] + 118),
                v6,
                0);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v46);
        if ( P != v59 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v60 = 0;
        if ( v55 != v56 && v55 )
          ExFreePoolWithTag(v55, 0);
        v55 = 0LL;
        v57 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
        if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
          return v32;
      }
      else
      {
        v32 = WaitForSynchronizationObjectFromCpu(v6, v12, v47[0], a3);
        if ( v46[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v46[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46[0] + 2), v46[0]);
        if ( P != v59 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v60 = 0;
        if ( v55 != v56 && v55 )
          ExFreePoolWithTag(v55, 0);
        v55 = 0LL;
        v57 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
        if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
          return v32;
      }
      McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v43);
      return v32;
    }
    WdLogSingleEntry2(2LL, v6->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 5680;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v6->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v46[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v46[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46[0] + 2), v46[0]);
    if ( P != v59 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v60 = 0;
    if ( v55 != v56 && v55 )
      ExFreePoolWithTag(v55, 0);
    v55 = 0LL;
    v57 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_93:
    McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v43);
    return 3221225485LL;
  }
  P = 0LL;
  v60 = 0;
  if ( v17 != v56 && v17 )
    ExFreePoolWithTag(v17, 0);
  v55 = 0LL;
  v57 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v43);
  return 3221225495LL;
}
