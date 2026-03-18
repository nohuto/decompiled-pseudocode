/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1402AECE8
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402AE7C0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1402AECD0 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
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
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1402AF2F0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 a1, bool a2, __int64 a3)
{
  __int128 *v4; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // r15
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rsi
  _BYTE *Pool2; // rbx
  __int64 v12; // r15
  const void *v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v29; // [rsp+50h] [rbp-88h] BYREF
  __int64 v30; // [rsp+58h] [rbp-80h]
  char v31; // [rsp+60h] [rbp-78h]
  struct DXGPROCESS *v32; // [rsp+68h] [rbp-70h]
  __int128 *v33; // [rsp+70h] [rbp-68h]
  __int128 v34; // [rsp+78h] [rbp-60h] BYREF
  __int64 v35; // [rsp+88h] [rbp-50h]
  const void *v36; // [rsp+90h] [rbp-48h]
  PVOID P; // [rsp+98h] [rbp-40h]
  _BYTE v38[16]; // [rsp+A0h] [rbp-38h] BYREF
  int v39; // [rsp+B0h] [rbp-28h]

  v4 = (__int128 *)a1;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2162);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 2162);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v9 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
      goto LABEL_5;
  }
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
      v10 = v8;
    }
  }
  v32 = v10;
  if ( !v10 )
  {
    v23 = PsGetCurrentProcess(v9);
    v20 = -1073741811;
    WdLogSingleEntry2(2LL, v23, -1073741811LL);
    WdLogGlobalForLineNumber = 1725;
    v25 = PsGetCurrentProcess(v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v25,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_39:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v29);
    }
    return v20;
  }
  Pool2 = 0LL;
  P = 0LL;
  v39 = 0;
  v34 = 0LL;
  v35 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (__int128 *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v34, v4, 0x18uLL);
    v4 = &v34;
    v33 = &v34;
    Pool2 = P;
  }
  else
  {
    v33 = v4;
  }
  v12 = *((unsigned int *)v4 + 1);
  if ( (_DWORD)v12 )
  {
    if ( !a2 )
    {
LABEL_37:
      v20 = SubmitWaitForSyncObjectsFromGpu(
              *((_DWORD *)v4 + 1),
              *((const unsigned int **)v4 + 1),
              *((const unsigned __int64 **)v4 + 2),
              *(_DWORD *)v4,
              v10,
              a2,
              0);
      if ( P != v38 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v39 = 0;
      goto LABEL_39;
    }
    if ( (unsigned int)v12 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v12 < 4 )
      {
LABEL_30:
        if ( Pool2 != v38 && Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        P = 0LL;
        v39 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
        if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v29);
        return 3221225495LL;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4 * v12, 1265072196LL);
      P = Pool2;
    }
    else
    {
      P = v38;
      memset(v38, 0, 4LL * (unsigned int)v12);
      Pool2 = P;
    }
    v39 = v12;
    if ( Pool2 )
    {
      v13 = (const void *)*((_QWORD *)v4 + 1);
      v36 = v13;
      v14 = (ULONG64)v13 + 4 * v12;
      if ( v14 < (unsigned __int64)v13 || v14 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v13, 4 * v12);
      *((_QWORD *)v4 + 1) = Pool2;
      goto LABEL_37;
    }
    goto LABEL_30;
  }
  WdLogSingleEntry2(2LL, *(unsigned int *)v4, -1073741811LL);
  WdLogGlobalForLineNumber = 1750;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
    *(unsigned int *)v4,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  if ( P != v38 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v39 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v29);
  return 3221225485LL;
}
