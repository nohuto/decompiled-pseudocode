/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1402A9AC0
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1402A92D0 (DxgkSignalSynchronizationObjectFromGpu2.c)
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
  __int64 v10; // r9
  __int64 v11; // rbx
  _BYTE *Pool2; // rdi
  const void *v13; // rdx
  char *v14; // rax
  __int64 v15; // rbx
  _BYTE *v16; // rdi
  const void *v17; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // [rsp+50h] [rbp-118h] BYREF
  __int64 v40; // [rsp+58h] [rbp-110h]
  char v41; // [rsp+60h] [rbp-108h]
  struct DXGPROCESS *v42; // [rsp+68h] [rbp-100h]
  void *Src[2]; // [rsp+70h] [rbp-F8h] BYREF
  void *v44[2]; // [rsp+80h] [rbp-E8h]
  _OWORD v45[4]; // [rsp+90h] [rbp-D8h] BYREF
  PVOID v46; // [rsp+D0h] [rbp-98h]
  _BYTE v47[16]; // [rsp+D8h] [rbp-90h] BYREF
  int v48; // [rsp+E8h] [rbp-80h]
  PVOID P; // [rsp+F0h] [rbp-78h]
  _BYTE v50[64]; // [rsp+F8h] [rbp-70h] BYREF
  int v51; // [rsp+138h] [rbp-30h]

  v3 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2191);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2191);
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
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v9 = v7;
    }
  }
  v42 = v9;
  if ( !v9 )
  {
    v32 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v32, -1073741811LL);
    WdLogGlobalForLineNumber = 1726;
    v34 = PsGetCurrentProcess(v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v34,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v39);
    return 3221225485LL;
  }
  v46 = 0LL;
  v48 = 0;
  P = 0LL;
  v51 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v44 = 0LL;
  memset(v45, 0, sizeof(v45));
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Src, v3, 0x60uLL);
  v11 = LODWORD(Src[0]);
  if ( LODWORD(Src[0]) )
  {
    if ( LODWORD(Src[0]) > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Src[0]) < 4 )
      {
        Pool2 = v46;
        goto LABEL_29;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4LL * LODWORD(Src[0]), 1265072196LL, v10);
      v46 = Pool2;
    }
    else
    {
      v46 = v47;
      memset(v47, 0, 4LL * LODWORD(Src[0]));
      Pool2 = v46;
    }
    v48 = v11;
    if ( Pool2 )
    {
      v13 = Src[1];
      v14 = (char *)Src[1] + 4 * v11;
      if ( v14 < Src[1] || (unsigned __int64)v14 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v13, 4 * v11);
      Src[1] = Pool2;
      goto LABEL_16;
    }
LABEL_29:
    if ( P != v50 && P )
    {
      ExFreePoolWithTag(P, 0);
      Pool2 = v46;
    }
    P = 0LL;
    v51 = 0;
    if ( Pool2 != v47 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v46 = 0LL;
    v48 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v39);
    return 3221225495LL;
  }
LABEL_16:
  v15 = HIDWORD(v44[0]);
  if ( HIDWORD(v44[0]) )
  {
    if ( HIDWORD(v44[0]) > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v44[0]) < 4 )
      {
        v16 = P;
LABEL_50:
        if ( v16 != v50 && v16 )
          ExFreePoolWithTag(v16, 0);
        P = 0LL;
        v51 = 0;
        if ( v46 != v47 && v46 )
          ExFreePoolWithTag(v46, 0);
        v46 = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v39);
        return 3221225495LL;
      }
      v16 = (_BYTE *)ExAllocatePool2(256LL, 4LL * HIDWORD(v44[0]), 1265072196LL, v10);
      P = v16;
    }
    else
    {
      P = v50;
      memset(v50, 0, 4LL * HIDWORD(v44[0]));
      v16 = P;
    }
    v51 = v15;
    if ( v16 )
    {
      v17 = v44[1];
      v18 = (char *)v44[1] + 4 * v15;
      if ( v18 < v44[1] || (unsigned __int64)v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, v17, 4 * v15);
      v44[1] = v16;
      v26 = SignalSynchronizationObjectInternal(
              LODWORD(Src[0]),
              Src[1],
              LODWORD(v44[0]),
              HIDWORD(v44[0]),
              v16,
              *(_QWORD *)&v45[0],
              *(_QWORD *)&v45[0],
              v45,
              v9,
              1);
      if ( v26 < 0 )
      {
        if ( P != v50 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v51 = 0;
        if ( v46 != v47 && v46 )
          ExFreePoolWithTag(v46, 0);
        v46 = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
        if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v39);
        return (unsigned int)v26;
      }
      else
      {
        if ( P != v50 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v51 = 0;
        if ( v46 != v47 && v46 )
          ExFreePoolWithTag(v46, 0);
        v46 = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
        if ( v41 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v39);
        }
        return 0LL;
      }
    }
    goto LABEL_50;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 1758;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"There should be at least one broadcast context passed to signal.",
    1758LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v50 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v51 = 0;
  if ( v46 != v47 && v46 )
    ExFreePoolWithTag(v46, 0);
  v46 = 0LL;
  v48 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v39);
  return 3221225485LL;
}
