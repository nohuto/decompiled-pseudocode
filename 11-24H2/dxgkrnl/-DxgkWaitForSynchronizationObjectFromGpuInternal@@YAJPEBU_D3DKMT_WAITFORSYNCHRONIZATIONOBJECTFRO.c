/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x14029E9F0
 * Callers:
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x14029E990 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x14029E9C0 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402AE7C0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x14029F130 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        __int64 a3,
        const unsigned __int64 *a4,
        bool a5)
{
  bool v6; // r12
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v8; // r15
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rbx
  struct DXGPROCESS *v14; // rdi
  __int64 v15; // r15
  unsigned int *ObjectHandleArray; // rbx
  const void *v17; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-D0h]
  char v39; // [rsp+70h] [rbp-C8h]
  struct DXGPROCESS *v40; // [rsp+78h] [rbp-C0h]
  void *Src[2]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int64 v42[2]; // [rsp+90h] [rbp-A8h]
  __int128 v43; // [rsp+A0h] [rbp-98h]
  __int128 v44; // [rsp+B0h] [rbp-88h]
  __int128 v45; // [rsp+C0h] [rbp-78h]
  PVOID P; // [rsp+D0h] [rbp-68h]
  _BYTE v47[16]; // [rsp+D8h] [rbp-60h] BYREF
  int v48; // [rsp+E8h] [rbp-50h]

  v6 = a3;
  v8 = a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2043);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2043);
  CurrentProcess = PsGetCurrentProcess(v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v14 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v14 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v14 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v14 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v14 = v13;
    }
  }
  v40 = v14;
  if ( v14 )
  {
    P = 0LL;
    v48 = 0;
    *(_OWORD *)Src = 0LL;
    *(_OWORD *)v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
      *(_OWORD *)v42 = *(_OWORD *)&v8->MonitoredFenceValueArray;
      v43 = *(_OWORD *)&v8->Reserved[2];
      v44 = *(_OWORD *)&v8->Reserved[4];
      v45 = *(_OWORD *)&v8->Reserved[6];
      ObjectHandleArray = (unsigned int *)v8->ObjectHandleArray;
LABEL_35:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v42[0];
      v24 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(Src[0]),
              ObjectHandleArray,
              a4,
              v42[0],
              (unsigned int)Src[0],
              v14,
              a2,
              0,
              v6,
              a5,
              0);
      if ( v24 < 0 )
      {
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v37);
        return (unsigned int)v24;
      }
      else
      {
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( v39 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v37);
        }
        return 0LL;
      }
    }
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Src, v8, 0x50uLL);
    v15 = HIDWORD(Src[0]);
    if ( HIDWORD(Src[0]) )
    {
      if ( HIDWORD(Src[0]) > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
        {
          ObjectHandleArray = (unsigned int *)P;
LABEL_27:
          if ( ObjectHandleArray != (unsigned int *)v47 && ObjectHandleArray )
            ExFreePoolWithTag(ObjectHandleArray, 0);
          P = 0LL;
          v48 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
          if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v37);
          return 3221225495LL;
        }
        ObjectHandleArray = (unsigned int *)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL);
        P = ObjectHandleArray;
      }
      else
      {
        P = v47;
        memset(v47, 0, 4LL * HIDWORD(Src[0]));
        ObjectHandleArray = (unsigned int *)P;
      }
      v48 = v15;
      if ( ObjectHandleArray )
      {
        v17 = Src[1];
        v18 = (char *)Src[1] + 4 * v15;
        if ( v18 < Src[1] || (unsigned __int64)v18 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(ObjectHandleArray, v17, 4 * v15);
        Src[1] = ObjectHandleArray;
        goto LABEL_35;
      }
      goto LABEL_27;
    }
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 2379;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v48 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v37);
    return 3221225485LL;
  }
  else
  {
    v30 = PsGetCurrentProcess(v12);
    WdLogSingleEntry2(2LL, v30, -1073741811LL);
    WdLogGlobalForLineNumber = 2361;
    v32 = PsGetCurrentProcess(v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v32,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v37);
    return 3221225485LL;
  }
}
