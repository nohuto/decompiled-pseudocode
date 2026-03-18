/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1402B2040
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1402B1850 (DxgkSignalSynchronizationObjectFromGpu2.c)
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

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2Impl(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *a1,
        void *a2,
        __int64 a3)
{
  const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *v3; // r14
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rdi
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rsi
  __int64 v10; // rbx
  _BYTE *Pool2; // rdi
  const void *v12; // rdx
  char *v13; // rax
  __int64 v14; // rbx
  _BYTE *v15; // rdi
  const void *v16; // rdx
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+50h] [rbp-118h] BYREF
  __int64 v39; // [rsp+58h] [rbp-110h]
  char v40; // [rsp+60h] [rbp-108h]
  struct DXGPROCESS *v41; // [rsp+68h] [rbp-100h]
  void *Src[2]; // [rsp+70h] [rbp-F8h] BYREF
  void *v43[2]; // [rsp+80h] [rbp-E8h]
  _OWORD v44[4]; // [rsp+90h] [rbp-D8h] BYREF
  PVOID v45; // [rsp+D0h] [rbp-98h]
  _BYTE v46[16]; // [rsp+D8h] [rbp-90h] BYREF
  int v47; // [rsp+E8h] [rbp-80h]
  PVOID P; // [rsp+F0h] [rbp-78h]
  _BYTE v49[64]; // [rsp+F8h] [rbp-70h] BYREF
  int v50; // [rsp+138h] [rbp-30h]

  v3 = a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2191);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2191);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v8 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
      goto LABEL_5;
  }
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v9 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v9 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v9 = v7;
    }
  }
  v41 = v9;
  if ( !v9 )
  {
    v31 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v31, -1073741811LL);
    WdLogGlobalForLineNumber = 1750;
    v33 = PsGetCurrentProcess(v32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v33,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v38);
    return 3221225485LL;
  }
  v45 = 0LL;
  v47 = 0;
  P = 0LL;
  v50 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v43 = 0LL;
  memset(v44, 0, sizeof(v44));
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v3, 0x60uLL);
  v10 = LODWORD(Src[0]);
  if ( LODWORD(Src[0]) )
  {
    if ( LODWORD(Src[0]) > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Src[0]) < 4 )
      {
        Pool2 = v45;
        goto LABEL_29;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4LL * LODWORD(Src[0]), 1265072196LL);
      v45 = Pool2;
    }
    else
    {
      v45 = v46;
      memset(v46, 0, 4LL * LODWORD(Src[0]));
      Pool2 = v45;
    }
    v47 = v10;
    if ( Pool2 )
    {
      v12 = Src[1];
      v13 = (char *)Src[1] + 4 * v10;
      if ( v13 < Src[1] || (unsigned __int64)v13 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v12, 4 * v10);
      Src[1] = Pool2;
      goto LABEL_16;
    }
LABEL_29:
    if ( P != v49 && P )
    {
      ExFreePoolWithTag(P, 0);
      Pool2 = v45;
    }
    P = 0LL;
    v50 = 0;
    if ( Pool2 != v46 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v45 = 0LL;
    v47 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v38);
    return 3221225495LL;
  }
LABEL_16:
  v14 = HIDWORD(v43[0]);
  if ( HIDWORD(v43[0]) )
  {
    if ( HIDWORD(v43[0]) > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v43[0]) < 4 )
      {
        v15 = P;
LABEL_50:
        if ( v15 != v49 && v15 )
          ExFreePoolWithTag(v15, 0);
        P = 0LL;
        v50 = 0;
        if ( v45 != v46 && v45 )
          ExFreePoolWithTag(v45, 0);
        v45 = 0LL;
        v47 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v38);
        return 3221225495LL;
      }
      v15 = (_BYTE *)ExAllocatePool2(256LL, 4LL * HIDWORD(v43[0]), 1265072196LL);
      P = v15;
    }
    else
    {
      P = v49;
      memset(v49, 0, 4LL * HIDWORD(v43[0]));
      v15 = P;
    }
    v50 = v14;
    if ( v15 )
    {
      v16 = v43[1];
      v17 = (char *)v43[1] + 4 * v14;
      if ( v17 < v43[1] || (unsigned __int64)v17 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, v16, 4 * v14);
      v43[1] = v15;
      v25 = SignalSynchronizationObjectInternal(
              LODWORD(Src[0]),
              Src[1],
              LODWORD(v43[0]),
              HIDWORD(v43[0]),
              v15,
              *(_QWORD *)&v44[0],
              *(_QWORD *)&v44[0],
              v44,
              v9,
              1);
      if ( v25 < 0 )
      {
        if ( P != v49 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v50 = 0;
        if ( v45 != v46 && v45 )
          ExFreePoolWithTag(v45, 0);
        v45 = 0LL;
        v47 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v38);
        return (unsigned int)v25;
      }
      else
      {
        if ( P != v49 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v50 = 0;
        if ( v45 != v46 && v45 )
          ExFreePoolWithTag(v45, 0);
        v45 = 0LL;
        v47 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v38);
        }
        return 0LL;
      }
    }
    goto LABEL_50;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1782;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"There should be at least one broadcast context passed to signal.",
    1782LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v49 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v50 = 0;
  if ( v45 != v46 && v45 )
    ExFreePoolWithTag(v45, 0);
  v45 = 0LL;
  v47 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v38);
  return 3221225485LL;
}
