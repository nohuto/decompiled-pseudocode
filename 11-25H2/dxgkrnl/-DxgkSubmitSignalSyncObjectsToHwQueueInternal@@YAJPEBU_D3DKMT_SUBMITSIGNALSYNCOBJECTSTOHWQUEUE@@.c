/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1402982F8
 * Callers:
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x140298C50 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1403BB360 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140298C68 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        bool a2,
        __int64 a3)
{
  void **v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v8; // r9
  __int64 v9; // rdi
  PVOID v10; // rsi
  const void *v11; // rdx
  char *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rsi
  PVOID v15; // rdi
  const void *v16; // rdx
  char *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 CurrentProcess; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-F0h]
  char v37; // [rsp+60h] [rbp-E8h]
  void *v38[2]; // [rsp+68h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-D0h]
  __int64 v40; // [rsp+88h] [rbp-C0h]
  struct DXGPROCESS *v41; // [rsp+90h] [rbp-B8h]
  void **v42; // [rsp+98h] [rbp-B0h]
  PVOID P; // [rsp+A0h] [rbp-A8h]
  _BYTE v44[16]; // [rsp+A8h] [rbp-A0h] BYREF
  int v45; // [rsp+B8h] [rbp-90h]
  PVOID Pool2; // [rsp+C0h] [rbp-88h]
  _BYTE v47[64]; // [rsp+C8h] [rbp-80h] BYREF
  int v48; // [rsp+108h] [rbp-40h]

  v4 = (void **)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2161);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2161);
  Current = DXGPROCESS::GetCurrent(v5);
  v41 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 2216;
    v32 = PsGetCurrentProcess(v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v32,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v35);
    return 3221225485LL;
  }
  P = 0LL;
  v45 = 0;
  Pool2 = 0LL;
  v48 = 0;
  *(_OWORD *)v38 = 0LL;
  *(_OWORD *)Src = 0LL;
  v40 = 0LL;
  if ( !a2 )
  {
LABEL_66:
    v27 = SubmitSignalSyncObjectsToHwQueue(
            *((_DWORD *)v4 + 4),
            (const unsigned int *)v4[3],
            *(struct _D3DDDICB_SIGNALFLAGS *)v4,
            *((_DWORD *)v4 + 1),
            (const unsigned int *)v4[1],
            (const unsigned __int64 *)v4[4],
            Current,
            a2,
            0);
    if ( Pool2 != v47 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v48 = 0;
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v35);
    }
    return v27;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  RtlCopyVolatileMemory(v38, v4, 0x28uLL);
  v9 = LODWORD(Src[0]);
  if ( !LODWORD(Src[0]) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2238;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"There should be at least one sync object passed to signal.",
      2238LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( Pool2 != v47 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v48 = 0;
    if ( P != v44 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v45 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v35);
    return 3221225485LL;
  }
  if ( LODWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Src[0]) < 4 )
    {
LABEL_55:
      if ( Pool2 != v47 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
      v48 = 0;
      if ( P != v44 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v45 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, v26, v35);
      return 3221225495LL;
    }
    P = (PVOID)ExAllocatePool2(256LL, 4LL * LODWORD(Src[0]), 1265072196LL, v8);
  }
  else
  {
    P = v44;
    memset(v44, 0, 4LL * LODWORD(Src[0]));
  }
  v45 = v9;
  v10 = P;
  if ( !P )
    goto LABEL_55;
  v11 = Src[1];
  v12 = (char *)Src[1] + 4 * v9;
  if ( v12 < Src[1] || (unsigned __int64)v12 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v10, v11, 4 * v9);
  Src[1] = v10;
  v14 = HIDWORD(v38[0]);
  if ( HIDWORD(v38[0]) )
  {
    if ( HIDWORD(v38[0]) > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v38[0]) < 4 )
      {
LABEL_31:
        if ( Pool2 != v47 && Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
        v48 = 0;
        if ( P != v44 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v45 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v35);
        return 3221225495LL;
      }
      Pool2 = (PVOID)ExAllocatePool2(256LL, 4LL * HIDWORD(v38[0]), 1265072196LL, v13);
    }
    else
    {
      Pool2 = v47;
      memset(v47, 0, 4LL * HIDWORD(v38[0]));
    }
    v48 = v14;
    v15 = Pool2;
    if ( Pool2 )
    {
      v16 = v38[1];
      v17 = (char *)v38[1] + 4 * v14;
      if ( v17 < v38[1] || (unsigned __int64)v17 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, v16, 4 * v14);
      v38[1] = v15;
      v4 = v38;
      v42 = v38;
      goto LABEL_66;
    }
    goto LABEL_31;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2255;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"There should be at least one broadcast hardware queue passed to signal.",
    2255LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( Pool2 != v47 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
  v48 = 0;
  if ( P != v44 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v45 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v35);
  return 3221225485LL;
}
