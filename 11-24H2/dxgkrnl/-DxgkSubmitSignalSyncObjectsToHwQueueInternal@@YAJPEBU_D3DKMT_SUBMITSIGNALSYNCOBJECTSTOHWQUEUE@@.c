/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x14029D7B8
 * Callers:
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x14039CAE0 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1403AF4E0 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1403260EC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
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
  __int64 v8; // rdi
  PVOID v9; // rsi
  const void *v10; // rdx
  char *v11; // rcx
  __int64 v12; // rsi
  PVOID v13; // rdi
  const void *v14; // rdx
  char *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 CurrentProcess; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-F0h]
  char v35; // [rsp+60h] [rbp-E8h]
  void *v36[2]; // [rsp+68h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-D0h]
  __int64 v38; // [rsp+88h] [rbp-C0h]
  struct DXGPROCESS *v39; // [rsp+90h] [rbp-B8h]
  void **v40; // [rsp+98h] [rbp-B0h]
  PVOID P; // [rsp+A0h] [rbp-A8h]
  _BYTE v42[16]; // [rsp+A8h] [rbp-A0h] BYREF
  int v43; // [rsp+B8h] [rbp-90h]
  PVOID Pool2; // [rsp+C0h] [rbp-88h]
  _BYTE v45[64]; // [rsp+C8h] [rbp-80h] BYREF
  int v46; // [rsp+108h] [rbp-40h]

  v4 = (void **)a1;
  v33 = -1;
  v34 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2161);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2161);
  Current = DXGPROCESS::GetCurrent(v5);
  v39 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 2216;
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
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v33);
    return 3221225485LL;
  }
  P = 0LL;
  v43 = 0;
  Pool2 = 0LL;
  v46 = 0;
  *(_OWORD *)v36 = 0LL;
  *(_OWORD *)Src = 0LL;
  v38 = 0LL;
  if ( !a2 )
  {
LABEL_66:
    v25 = SubmitSignalSyncObjectsToHwQueue(
            *((_DWORD *)v4 + 4),
            (const unsigned int *)v4[3],
            *(struct _D3DDDICB_SIGNALFLAGS *)v4,
            *((_DWORD *)v4 + 1),
            (const unsigned int *)v4[1],
            (const unsigned __int64 *)v4[4],
            Current,
            a2,
            0);
    if ( Pool2 != v45 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v46 = 0;
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v43 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v33);
    }
    return v25;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  RtlCopyVolatileMemory(v36, v4, 0x28uLL);
  v8 = LODWORD(Src[0]);
  if ( !LODWORD(Src[0]) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2238;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"There should be at least one sync object passed to signal.",
      2238LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( Pool2 != v45 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v46 = 0;
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v43 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v33);
    return 3221225485LL;
  }
  if ( LODWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Src[0]) < 4 )
    {
LABEL_55:
      if ( Pool2 != v45 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
      v46 = 0;
      if ( P != v42 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v43 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v33);
      return 3221225495LL;
    }
    P = (PVOID)ExAllocatePool2(256LL, 4LL * LODWORD(Src[0]), 1265072196LL);
  }
  else
  {
    P = v42;
    memset(v42, 0, 4LL * LODWORD(Src[0]));
  }
  v43 = v8;
  v9 = P;
  if ( !P )
    goto LABEL_55;
  v10 = Src[1];
  v11 = (char *)Src[1] + 4 * v8;
  if ( v11 < Src[1] || (unsigned __int64)v11 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v9, v10, 4 * v8);
  Src[1] = v9;
  v12 = HIDWORD(v36[0]);
  if ( HIDWORD(v36[0]) )
  {
    if ( HIDWORD(v36[0]) > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v36[0]) < 4 )
      {
LABEL_31:
        if ( Pool2 != v45 && Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
        v46 = 0;
        if ( P != v42 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v43 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v33);
        return 3221225495LL;
      }
      Pool2 = (PVOID)ExAllocatePool2(256LL, 4LL * HIDWORD(v36[0]), 1265072196LL);
    }
    else
    {
      Pool2 = v45;
      memset(v45, 0, 4LL * HIDWORD(v36[0]));
    }
    v46 = v12;
    v13 = Pool2;
    if ( Pool2 )
    {
      v14 = v36[1];
      v15 = (char *)v36[1] + 4 * v12;
      if ( v15 < v36[1] || (unsigned __int64)v15 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v13, v14, 4 * v12);
      v36[1] = v13;
      v4 = v36;
      v40 = v36;
      goto LABEL_66;
    }
    goto LABEL_31;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2255;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"There should be at least one broadcast hardware queue passed to signal.",
    2255LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( Pool2 != v45 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
  v46 = 0;
  if ( P != v42 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v43 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v33);
  return 3221225485LL;
}
