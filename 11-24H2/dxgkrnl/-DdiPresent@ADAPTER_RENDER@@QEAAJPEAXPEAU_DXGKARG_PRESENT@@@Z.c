/*
 * XREFs of ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1403243B0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F5CF8 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14034A950 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1403F8340 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1404201A0 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400156B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140015B10 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresent(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  int v3; // r14d
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v11; // rbx
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct _KTHREAD **v14; // rbp
  int v15; // r13d
  KIRQL CurrentIrql; // al
  __int64 v17; // r15
  struct DXGTHREAD *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  KIRQL v24; // al
  _QWORD *v25; // rax
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-A8h] BYREF
  void *v31; // [rsp+58h] [rbp-A0h]
  int v32; // [rsp+60h] [rbp-98h] BYREF
  __int64 v33; // [rsp+68h] [rbp-90h]
  char v34; // [rsp+70h] [rbp-88h]
  _BYTE v35[8]; // [rsp+78h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  v3 = 0;
  v31 = a2;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 5031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5031);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 5031);
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_12;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v11 )
      goto LABEL_13;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2926;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_12;
  }
  v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v11 )
LABEL_12:
    v11 = v9;
LABEL_13:
  v14 = (struct _KTHREAD **)((char *)v11 + 152);
  v15 = 0;
  if ( !v11 )
    v14 = 0LL;
  if ( v14 && v14[1] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v11 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v14);
    v15 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v17 = CurrentIrql;
  v18 = 0LL;
  if ( CurrentIrql < 2u )
  {
    DxgThread = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
    {
      v18 = DxgThread;
      if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v18 = DxgThread) != 0LL) )
        v3 = *((_DWORD *)v18 + 12);
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 744LL))(v31, a3);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v17 != KeGetCurrentIrql() )
  {
    v24 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v17, v24);
    WdLogGlobalForLineNumber = 3146;
  }
  if ( v18 )
  {
    v21 = *((int *)v18 + 12);
    if ( (_DWORD)v21 != v3 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v18 + 12), v3, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
  v26 = v31;
  v25[3] = v19;
  v25[4] = v26;
  v25[5] = a3->SubRectCnt;
  v25[6] = a3->pDmaBuffer;
  v25[7] = a3->DmaSize;
  WdLogGlobalForLineNumber = 3153;
  if ( (_DWORD)v19 )
  {
    if ( (int)v19 <= -1073741670 )
    {
      if ( (_DWORD)v19 == -1073741670
        || (_DWORD)v19 == -1073741816
        || (_DWORD)v19 == -1073741801
        || (_DWORD)v19 == -1073741795
        || (_DWORD)v19 == -1073741674 )
      {
        goto LABEL_44;
      }
LABEL_43:
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 3155;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_44;
    }
    if ( (_DWORD)v19 != -1071775743 && (_DWORD)v19 != -1071775736 && (_DWORD)v19 != -1071775232 )
      goto LABEL_43;
  }
LABEL_44:
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v15 == 2 )
  {
    v14[1] = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v32);
  return (unsigned int)v19;
}
