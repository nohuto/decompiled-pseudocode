/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x14029B068
 * Callers:
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x14029B050 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14029CC80 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x14029B670 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 a1, bool a2, __int64 a3)
{
  __int128 *v4; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // r9
  struct DXGPROCESS *v9; // r15
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rsi
  _BYTE *Pool2; // rbx
  __int64 v13; // r15
  const void *v14; // rdx
  ULONG64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v30; // [rsp+50h] [rbp-88h] BYREF
  __int64 v31; // [rsp+58h] [rbp-80h]
  char v32; // [rsp+60h] [rbp-78h]
  struct DXGPROCESS *v33; // [rsp+68h] [rbp-70h]
  __int128 *v34; // [rsp+70h] [rbp-68h]
  __int128 v35; // [rsp+78h] [rbp-60h] BYREF
  __int64 v36; // [rsp+88h] [rbp-50h]
  const void *v37; // [rsp+90h] [rbp-48h]
  PVOID P; // [rsp+98h] [rbp-40h]
  _BYTE v39[16]; // [rsp+A0h] [rbp-38h] BYREF
  int v40; // [rsp+B0h] [rbp-28h]

  v4 = (__int128 *)a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2162);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 2162);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v10 = *(_DWORD *)(ProcessDxgProcess + 408) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
      goto LABEL_5;
  }
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v11 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v11 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v11 = v9;
    }
  }
  v33 = v11;
  if ( !v11 )
  {
    v24 = PsGetCurrentProcess(v10);
    v21 = -1073741811;
    WdLogSingleEntry2(2LL, v24, -1073741811LL);
    WdLogGlobalForLineNumber = 1725;
    v26 = PsGetCurrentProcess(v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v26,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_39:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v30);
    }
    return v21;
  }
  Pool2 = 0LL;
  P = 0LL;
  v40 = 0;
  v35 = 0LL;
  v36 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (__int128 *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v35, v4, 0x18uLL);
    v4 = &v35;
    v34 = &v35;
    Pool2 = P;
  }
  else
  {
    v34 = v4;
  }
  v13 = *((unsigned int *)v4 + 1);
  if ( (_DWORD)v13 )
  {
    if ( !a2 )
    {
LABEL_37:
      v21 = SubmitWaitForSyncObjectsFromGpu(
              *((_DWORD *)v4 + 1),
              *((const unsigned int **)v4 + 1),
              *((const unsigned __int64 **)v4 + 2),
              *(_DWORD *)v4,
              v11,
              a2,
              0);
      if ( P != v39 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v40 = 0;
      goto LABEL_39;
    }
    if ( (unsigned int)v13 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v13 < 4 )
      {
LABEL_30:
        if ( Pool2 != v39 && Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        P = 0LL;
        v40 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
        if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v30);
        return 3221225495LL;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4 * v13, 1265072196LL, v8);
      P = Pool2;
    }
    else
    {
      P = v39;
      memset(v39, 0, 4LL * (unsigned int)v13);
      Pool2 = P;
    }
    v40 = v13;
    if ( Pool2 )
    {
      v14 = (const void *)*((_QWORD *)v4 + 1);
      v37 = v14;
      v15 = (ULONG64)v14 + 4 * v13;
      if ( v15 < (unsigned __int64)v14 || v15 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v14, 4 * v13);
      *((_QWORD *)v4 + 1) = Pool2;
      goto LABEL_37;
    }
    goto LABEL_30;
  }
  WdLogSingleEntry2(2LL, *(unsigned int *)v4, -1073741811LL);
  WdLogGlobalForLineNumber = 1750;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
    *(unsigned int *)v4,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  if ( P != v39 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v40 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v30);
  return 3221225485LL;
}
