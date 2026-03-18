/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H_N@Z @ 0x1402B1870
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1402B1220 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1402B1830 (DxgkSignalSynchronizationObjectFromGpu.c)
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
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402B29CC (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2,
        __int64 a3)
{
  void **v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  struct DXGPROCESS *v10; // rdi
  unsigned int v11; // ebx
  PVOID Pool2; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-D0h]
  char v35; // [rsp+60h] [rbp-C8h]
  int v36; // [rsp+68h] [rbp-C0h] BYREF
  struct DXGPROCESS *v37; // [rsp+70h] [rbp-B8h]
  void **v38; // [rsp+78h] [rbp-B0h]
  void *Src[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+90h] [rbp-98h]
  __int128 v41; // [rsp+A0h] [rbp-88h]
  __int128 v42; // [rsp+B0h] [rbp-78h]
  __int128 v43; // [rsp+C0h] [rbp-68h]
  size_t v44; // [rsp+D0h] [rbp-58h]
  PVOID v45; // [rsp+D8h] [rbp-50h]
  PVOID P; // [rsp+E0h] [rbp-48h]
  _BYTE v47[16]; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int v48; // [rsp+F8h] [rbp-30h]

  v4 = (void **)a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2190);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2190);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v10 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v10 = v9;
    }
  }
  v37 = v10;
  if ( !v10 )
  {
    v28 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v28, -1073741811LL);
    WdLogGlobalForLineNumber = 6053;
    v30 = PsGetCurrentProcess(v29);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v30,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_45;
  }
  P = 0LL;
  v48 = 0;
  *(_OWORD *)Src = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  if ( !a2 )
  {
    v38 = v4;
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_33:
      v36 = *(_DWORD *)v4;
      v20 = SignalSynchronizationObjectInternal(
              *((unsigned int *)v4 + 1),
              v4[1],
              0LL,
              1LL,
              &v36,
              v4[2],
              0LL,
              0LL,
              v10,
              (unsigned int)(a2 != 0) + 4);
      if ( v20 < 0 )
      {
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v33);
        return (unsigned int)v20;
      }
      else
      {
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v33);
        }
        return 0LL;
      }
    }
    WdLogSingleEntry2(2LL, *(unsigned int *)v4, -1073741811LL);
    WdLogGlobalForLineNumber = 6108;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      *(unsigned int *)v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v48 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( !v35 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_45:
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v33);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v4, 0x50uLL);
  v11 = HIDWORD(Src[0]);
  if ( !HIDWORD(Src[0]) )
  {
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 6072;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v48 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v33);
    return 3221225485LL;
  }
  if ( HIDWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
    {
      v11 = v48;
      Pool2 = P;
      goto LABEL_14;
    }
    Pool2 = (PVOID)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL);
    P = Pool2;
  }
  else
  {
    P = v47;
    memset(v47, 0, 4LL * HIDWORD(Src[0]));
    Pool2 = P;
  }
  v48 = v11;
LABEL_14:
  if ( Pool2 )
  {
    v13 = 4LL * v11;
    v44 = v13;
    v45 = Pool2;
    v14 = Src[1];
    if ( (char *)Src[1] + v13 < Src[1] || (char *)Src[1] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Pool2, v14, v13);
    Src[1] = P;
    v4 = Src;
    v38 = Src;
    goto LABEL_33;
  }
  P = 0LL;
  v48 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v33);
  return 3221225495LL;
}
