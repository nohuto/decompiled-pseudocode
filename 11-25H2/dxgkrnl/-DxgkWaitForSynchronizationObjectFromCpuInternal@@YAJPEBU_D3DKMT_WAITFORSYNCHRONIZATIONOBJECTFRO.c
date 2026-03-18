/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402A61E0
 * Callers:
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1402A61C0 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1403D1B20 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E5400 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x140228BDC (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1402A6DD0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
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
  __int64 v13; // r9
  unsigned int v14; // ebx
  _BYTE *Pool2; // rcx
  size_t v16; // r8
  const void *v17; // rdx
  _BYTE *v18; // r9
  unsigned int v19; // ebx
  _BYTE *v20; // rcx
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // [rsp+50h] [rbp-108h] BYREF
  __int64 v45; // [rsp+58h] [rbp-100h]
  char v46; // [rsp+60h] [rbp-F8h]
  struct DXGDEVICE *v47[2]; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGDEVICE *v48[2]; // [rsp+78h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-D0h] BYREF
  void *v50[2]; // [rsp+98h] [rbp-C0h]
  __int64 v51; // [rsp+A8h] [rbp-B0h]
  void **v52; // [rsp+B0h] [rbp-A8h]
  size_t v53; // [rsp+B8h] [rbp-A0h]
  _BYTE *v54; // [rsp+C0h] [rbp-98h]
  size_t v55; // [rsp+C8h] [rbp-90h]
  PVOID v56; // [rsp+D0h] [rbp-88h]
  _BYTE v57[16]; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int v58; // [rsp+E8h] [rbp-70h]
  PVOID P; // [rsp+F0h] [rbp-68h]
  _BYTE v60[32]; // [rsp+F8h] [rbp-60h] BYREF
  unsigned int v61; // [rsp+118h] [rbp-40h]

  v6 = a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2043);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2043);
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
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v12 = v11;
    }
  }
  v47[1] = v12;
  if ( !v12 )
  {
    v41 = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, v41, -1073741811LL);
    WdLogGlobalForLineNumber = 5591;
    v43 = PsGetCurrentProcess(v42);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v43,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_111;
  }
  v56 = 0LL;
  v58 = 0;
  P = 0LL;
  v61 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v50 = 0LL;
  v51 = 0LL;
  if ( !a2 )
  {
    v52 = (void **)v6;
    if ( v6->ObjectCount && v6->Flags.Value < 2 )
      goto LABEL_72;
LABEL_111:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( !v46 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_93;
  }
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v6, 0x28uLL);
  v14 = HIDWORD(Src[0]);
  if ( !HIDWORD(Src[0]) )
  {
    if ( P != v60 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v61 = 0;
    if ( v56 != v57 && v56 )
      ExFreePoolWithTag(v56, 0);
    v56 = 0LL;
    v58 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v44);
    return 3221225485LL;
  }
  if ( (v51 & 0xFFFFFFFE) != 0 )
  {
    if ( P != v60 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v61 = 0;
    if ( v56 != v57 && v56 )
      ExFreePoolWithTag(v56, 0);
    v56 = 0LL;
    v58 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v44);
    return 3221225485LL;
  }
  if ( HIDWORD(Src[0]) <= 4 )
  {
    v56 = v57;
    memset(v57, 0, 4LL * HIDWORD(Src[0]));
    Pool2 = v56;
LABEL_14:
    v58 = v14;
    goto LABEL_15;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) >= 4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL, v13);
    v56 = Pool2;
    goto LABEL_14;
  }
  v14 = v58;
  Pool2 = v56;
LABEL_15:
  if ( !Pool2 )
  {
    if ( P != v60 && P )
    {
      ExFreePoolWithTag(P, 0);
      Pool2 = v56;
    }
    P = 0LL;
    v61 = 0;
    if ( Pool2 != v57 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v56 = 0LL;
    v58 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v44);
    return 3221225495LL;
  }
  v16 = 4LL * v14;
  v53 = v16;
  v54 = Pool2;
  v17 = Src[1];
  if ( (char *)Src[1] + v16 < Src[1] || (char *)Src[1] + v16 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Pool2, v17, v16);
  v18 = v56;
  Src[1] = v56;
  v19 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 8 )
    {
      v19 = v61;
      v20 = P;
      goto LABEL_23;
    }
    v20 = (_BYTE *)ExAllocatePool2(64LL, 8LL * HIDWORD(Src[0]), 1265072196LL, v56);
    P = v20;
    goto LABEL_21;
  }
  v20 = v60;
  P = v60;
  if ( HIDWORD(Src[0]) )
  {
    memset(v60, 0, 8LL * HIDWORD(Src[0]));
    v20 = P;
LABEL_21:
    v18 = v56;
  }
  v61 = v19;
LABEL_23:
  if ( v20 )
  {
    v21 = 8LL * v19;
    v55 = v21;
    v48[1] = (struct DXGDEVICE *)v20;
    v22 = v50[0];
    if ( (char *)v50[0] + v21 < v50[0] || (char *)v50[0] + v21 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, v22, v21);
    v50[0] = P;
    v6 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)Src;
    v52 = Src;
LABEL_72:
    v48[0] = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v47, v6->hDevice, v12, v48);
    if ( v48[0] )
    {
      v32 = *(_QWORD *)(*((_QWORD *)v48[0] + 2) + 16LL);
      if ( *(_BYTE *)(v32 + 209) )
      {
        v33 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                (struct DXGADAPTER **)(v32 + 4664),
                v12,
                *((_DWORD *)v48[0] + 118),
                v6,
                0);
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v47);
        if ( P != v60 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v61 = 0;
        if ( v56 != v57 && v56 )
          ExFreePoolWithTag(v56, 0);
        v56 = 0LL;
        v58 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
        if ( !v46 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
          return v33;
      }
      else
      {
        v33 = WaitForSynchronizationObjectFromCpu(v6, v12, v48[0], a3);
        if ( v47[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v47[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47[0] + 2), v47[0]);
        if ( P != v60 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v61 = 0;
        if ( v56 != v57 && v56 )
          ExFreePoolWithTag(v56, 0);
        v56 = 0LL;
        v58 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
        if ( !v46 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
          return v33;
      }
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v44);
      return v33;
    }
    WdLogSingleEntry2(2LL, v6->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 5675;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v6->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v47[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v47[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v47[0] + 2), v47[0]);
    if ( P != v60 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v61 = 0;
    if ( v56 != v57 && v56 )
      ExFreePoolWithTag(v56, 0);
    v56 = 0LL;
    v58 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( !v46 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_93:
    McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v44);
    return 3221225485LL;
  }
  P = 0LL;
  v61 = 0;
  if ( v18 != v57 && v18 )
    ExFreePoolWithTag(v18, 0);
  v56 = 0LL;
  v58 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit, v31, v44);
  return 3221225495LL;
}
