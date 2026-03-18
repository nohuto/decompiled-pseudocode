/*
 * XREFs of ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x140324E20
 * Callers:
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x140324850 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
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
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030E00 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiOpenAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_OPENALLOCATION *a3)
{
  int v3; // esi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rdi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v12; // rbx
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL CurrentIrql; // al
  __int64 v16; // r15
  struct DXGTHREAD *v17; // rdi
  struct DXGTHREAD *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  KIRQL v24; // al
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // [rsp+50h] [rbp-49h] BYREF
  __int64 v30; // [rsp+58h] [rbp-41h]
  char v31; // [rsp+60h] [rbp-39h]
  _BYTE v32[8]; // [rsp+68h] [rbp-31h] BYREF
  DXGPUSHLOCK *v33; // [rsp+70h] [rbp-29h]
  int v34; // [rsp+78h] [rbp-21h]
  _BYTE v35[56]; // [rsp+80h] [rbp-19h] BYREF

  v29 = -1;
  v3 = 0;
  v30 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5028);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 5028);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_12;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v12 )
      goto LABEL_13;
    goto LABEL_12;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v12 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v12 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2926;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
    v12 = v10;
  }
LABEL_13:
  v34 = 0;
  v33 = (DXGPUSHLOCK *)(((unsigned __int64)v12 + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64));
  if ( v33
    && *(struct _KTHREAD **)((((unsigned __int64)v12 + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64))
                           + 8) == KeGetCurrentThread() )
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
  if ( v12 )
  {
    DXGPUSHLOCK::AcquireExclusive(v33);
    v34 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v16 = CurrentIrql;
  v17 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v18 = DXGTHREAD::GetCurrent();
    v17 = v18;
    if ( v18 )
      v3 = *((_DWORD *)v18 + 12);
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(void *, const struct _DXGKARG_OPENALLOCATION *))(*((_QWORD *)this + 2) + 720LL))(a2, a3);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v35);
  if ( (_BYTE)v16 != KeGetCurrentIrql() )
  {
    v24 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v16, v24);
    WdLogGlobalForLineNumber = 3035;
  }
  if ( v17 )
  {
    v21 = *((int *)v17 + 12);
    if ( (_DWORD)v21 != v3 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v17 + 12), v3, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
  v25[3] = v19;
  v25[4] = a2;
  v25[5] = a3->pOpenAllocation->hAllocation;
  v25[6] = a3->pOpenAllocation->pPrivateDriverData;
  v25[7] = a3->pOpenAllocation->hDeviceSpecificAllocation;
  WdLogGlobalForLineNumber = 3042;
  if ( (_DWORD)v19 != -1073741811 && (_DWORD)v19 != -1073741801 && (_DWORD)v19 )
  {
    WdLogSingleEntry1(2LL, v19);
    WdLogGlobalForLineNumber = 3044;
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
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( !a3->pOpenAllocation->hDeviceSpecificAllocation && (int)v19 >= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3052;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pArgKmOpenAllocation->pOpenAllocation->hDeviceSpecificAllocation != NULL) || !NT_SUCCESS(Status)",
      3052LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v29);
  return (unsigned int)v19;
}
