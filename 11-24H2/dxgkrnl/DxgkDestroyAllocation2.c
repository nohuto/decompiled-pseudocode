/*
 * XREFs of DxgkDestroyAllocation2 @ 0x14032F7A0
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403EDDE0 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14032FBB8 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r13
  char CurrentThreadPreviousMode; // r15
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // r14
  struct DXGPROCESS *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v20; // [rsp+50h] [rbp-78h] BYREF
  __int64 v21; // [rsp+58h] [rbp-70h]
  char v22; // [rsp+60h] [rbp-68h]
  unsigned __int8 v23[8]; // [rsp+68h] [rbp-60h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // [rsp+70h] [rbp-58h] BYREF
  unsigned int *v25[2]; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v26[2]; // [rsp+88h] [rbp-40h]
  GUID v27; // [rsp+90h] [rbp-38h] BYREF

  v23[0] = 0;
  v27 = 0LL;
  EtwActivityIdControl(3u, &v27);
  DisplayScenarioContextEnsureAndAssociate(&v27, 0x34u, 0, &v24, v23);
  v4 = v24;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2105);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2105);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  CurrentProcess = PsGetCurrentProcess(v6);
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
  if ( v10 )
  {
    *(_OWORD *)v25 = 0LL;
    *(_QWORD *)v26 = 0LL;
    if ( CurrentThreadPreviousMode == 1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_QWORD *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v25, a1, 0x18uLL);
      if ( (v26[1] & 0x7FFFFFFC) != 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 10665;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
        if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v20);
        if ( v23[0] )
          DisplayScenarioContextDissociate(&v24);
        return -1073741811LL;
      }
    }
    else
    {
      *(_OWORD *)v25 = *(_OWORD *)a1;
      *(_QWORD *)v26 = a1[2];
    }
    v14 = DxgkDestroyAllocationHelper(
            v10,
            (unsigned int)v25[0],
            HIDWORD(v25[0]),
            v25[1],
            v26[0],
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v26[1],
            v4,
            CurrentThreadPreviousMode == 1);
  }
  else
  {
    v14 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 10650;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v20);
  if ( v23[0] )
    DisplayScenarioContextDissociate(&v24);
  return v14;
}
