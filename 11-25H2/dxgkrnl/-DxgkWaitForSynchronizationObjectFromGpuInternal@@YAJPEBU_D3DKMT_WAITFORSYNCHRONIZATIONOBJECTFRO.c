/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1402AB300
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14029CC80 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1402AB2A0 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1402AB2D0 (DxgkWaitForSynchronizationObjectFromGpu.c)
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
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1402ABA40 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
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
  __int64 v15; // r9
  __int64 v16; // r15
  unsigned int *ObjectHandleArray; // rbx
  const void *v18; // rdx
  char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-D0h]
  char v40; // [rsp+70h] [rbp-C8h]
  struct DXGPROCESS *v41; // [rsp+78h] [rbp-C0h]
  void *Src[2]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int64 v43[2]; // [rsp+90h] [rbp-A8h]
  __int128 v44; // [rsp+A0h] [rbp-98h]
  __int128 v45; // [rsp+B0h] [rbp-88h]
  __int128 v46; // [rsp+C0h] [rbp-78h]
  PVOID P; // [rsp+D0h] [rbp-68h]
  _BYTE v48[16]; // [rsp+D8h] [rbp-60h] BYREF
  int v49; // [rsp+E8h] [rbp-50h]

  v6 = a3;
  v8 = a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2043);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2043);
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
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v14 = v13;
    }
  }
  v41 = v14;
  if ( v14 )
  {
    P = 0LL;
    v49 = 0;
    *(_OWORD *)Src = 0LL;
    *(_OWORD *)v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
      *(_OWORD *)v43 = *(_OWORD *)&v8->MonitoredFenceValueArray;
      v44 = *(_OWORD *)&v8->Reserved[2];
      v45 = *(_OWORD *)&v8->Reserved[4];
      v46 = *(_OWORD *)&v8->Reserved[6];
      ObjectHandleArray = (unsigned int *)v8->ObjectHandleArray;
LABEL_35:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v43[0];
      v25 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(Src[0]),
              ObjectHandleArray,
              a4,
              v43[0],
              (unsigned int)Src[0],
              v14,
              a2,
              0,
              v6,
              a5,
              0);
      if ( v25 < 0 )
      {
        if ( P != v48 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v49 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v38);
        return (unsigned int)v25;
      }
      else
      {
        if ( P != v48 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v49 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v38);
        }
        return 0LL;
      }
    }
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Src, v8, 0x50uLL);
    v16 = HIDWORD(Src[0]);
    if ( HIDWORD(Src[0]) )
    {
      if ( HIDWORD(Src[0]) > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
        {
          ObjectHandleArray = (unsigned int *)P;
LABEL_27:
          if ( ObjectHandleArray != (unsigned int *)v48 && ObjectHandleArray )
            ExFreePoolWithTag(ObjectHandleArray, 0);
          P = 0LL;
          v49 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
          if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v38);
          return 3221225495LL;
        }
        ObjectHandleArray = (unsigned int *)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL, v15);
        P = ObjectHandleArray;
      }
      else
      {
        P = v48;
        memset(v48, 0, 4LL * HIDWORD(Src[0]));
        ObjectHandleArray = (unsigned int *)P;
      }
      v49 = v16;
      if ( ObjectHandleArray )
      {
        v18 = Src[1];
        v19 = (char *)Src[1] + 4 * v16;
        if ( v19 < Src[1] || (unsigned __int64)v19 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(ObjectHandleArray, v18, 4 * v16);
        Src[1] = ObjectHandleArray;
        goto LABEL_35;
      }
      goto LABEL_27;
    }
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 2355;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v48 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v49 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v38);
    return 3221225485LL;
  }
  else
  {
    v31 = PsGetCurrentProcess(v12);
    WdLogSingleEntry2(2LL, v31, -1073741811LL);
    WdLogGlobalForLineNumber = 2337;
    v33 = PsGetCurrentProcess(v32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
}
