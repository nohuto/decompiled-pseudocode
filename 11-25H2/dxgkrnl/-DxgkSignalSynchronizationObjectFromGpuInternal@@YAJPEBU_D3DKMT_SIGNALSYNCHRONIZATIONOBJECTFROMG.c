/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H_N@Z @ 0x1402A92F0
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1402A8CA0 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1402A92B0 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402AA44C (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
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
  __int64 v11; // r9
  unsigned int v12; // ebx
  PVOID Pool2; // rcx
  size_t v14; // r8
  const void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-D0h]
  char v36; // [rsp+60h] [rbp-C8h]
  int v37; // [rsp+68h] [rbp-C0h] BYREF
  struct DXGPROCESS *v38; // [rsp+70h] [rbp-B8h]
  void **v39; // [rsp+78h] [rbp-B0h]
  void *Src[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+90h] [rbp-98h]
  __int128 v42; // [rsp+A0h] [rbp-88h]
  __int128 v43; // [rsp+B0h] [rbp-78h]
  __int128 v44; // [rsp+C0h] [rbp-68h]
  size_t v45; // [rsp+D0h] [rbp-58h]
  PVOID v46; // [rsp+D8h] [rbp-50h]
  PVOID P; // [rsp+E0h] [rbp-48h]
  _BYTE v48[16]; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int v49; // [rsp+F8h] [rbp-30h]

  v4 = (void **)a1;
  v34 = -1;
  v35 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2190);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2190);
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
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v10 = v9;
    }
  }
  v38 = v10;
  if ( !v10 )
  {
    v29 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v29, -1073741811LL);
    WdLogGlobalForLineNumber = 6051;
    v31 = PsGetCurrentProcess(v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v31,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_45;
  }
  P = 0LL;
  v49 = 0;
  *(_OWORD *)Src = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( !a2 )
  {
    v39 = v4;
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_33:
      v37 = *(_DWORD *)v4;
      v21 = SignalSynchronizationObjectInternal(
              *((unsigned int *)v4 + 1),
              v4[1],
              0LL,
              1LL,
              &v37,
              v4[2],
              0LL,
              0LL,
              v10,
              (unsigned int)(a2 != 0) + 4);
      if ( v21 < 0 )
      {
        if ( P != v48 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v49 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
        if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v34);
        return (unsigned int)v21;
      }
      else
      {
        if ( P != v48 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v49 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
        if ( v36 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v34);
        }
        return 0LL;
      }
    }
    WdLogSingleEntry2(2LL, *(unsigned int *)v4, -1073741811LL);
    WdLogGlobalForLineNumber = 6106;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      *(unsigned int *)v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v48 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v49 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_45:
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v34);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v4, 0x50uLL);
  v12 = HIDWORD(Src[0]);
  if ( !HIDWORD(Src[0]) )
  {
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 6070;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v48 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v49 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v34);
    return 3221225485LL;
  }
  if ( HIDWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
    {
      v12 = v49;
      Pool2 = P;
      goto LABEL_14;
    }
    Pool2 = (PVOID)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL, v11);
    P = Pool2;
  }
  else
  {
    P = v48;
    memset(v48, 0, 4LL * HIDWORD(Src[0]));
    Pool2 = P;
  }
  v49 = v12;
LABEL_14:
  if ( Pool2 )
  {
    v14 = 4LL * v12;
    v45 = v14;
    v46 = Pool2;
    v15 = Src[1];
    if ( (char *)Src[1] + v14 < Src[1] || (char *)Src[1] + v14 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Pool2, v15, v14);
    Src[1] = P;
    v4 = Src;
    v39 = Src;
    goto LABEL_33;
  }
  P = 0LL;
  v49 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v34);
  return 3221225495LL;
}
