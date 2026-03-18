/*
 * XREFs of ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x140339C04
 * Callers:
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x140339754 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403502AC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ @ 0x140030700 (--1DXGVALIDATIONPROCESSATTACH@@QEAA@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCloseAllocation(
        ADAPTER_RENDER *this,
        void *a2,
        const struct _DXGKARG_CLOSEALLOCATION *a3)
{
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rdi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v11; // rbx
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  KIRQL CurrentIrql; // al
  __int64 v15; // r15
  struct DXGTHREAD *v16; // rbx
  struct DXGTHREAD *v17; // rax
  int v18; // edi
  __int64 v19; // r14
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
  v30 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 5029);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 5029);
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_12;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( v11 )
      goto LABEL_13;
    goto LABEL_12;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  if ( !v11 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2925;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
    v11 = v9;
  }
LABEL_13:
  v34 = 0;
  v33 = (DXGPUSHLOCK *)(((unsigned __int64)v11 + 152) & -(__int64)(v11 != 0LL));
  if ( v33 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *(struct _KTHREAD **)((((unsigned __int64)v11 + 152) & -(__int64)(v11 != 0LL)) + 8) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( v11 )
  {
    DXGPUSHLOCK::AcquireExclusive(v33);
    v34 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v15 = CurrentIrql;
  v16 = 0LL;
  if ( CurrentIrql < 2u && (v17 = DXGTHREAD::GetCurrent(), (v16 = v17) != 0LL) )
    v18 = *((_DWORD *)v17 + 12);
  else
    v18 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v19 = (*(int (__fastcall **)(void *, const struct _DXGKARG_CLOSEALLOCATION *))(*((_QWORD *)this + 2) + 728LL))(a2, a3);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v35);
  if ( (_BYTE)v15 != KeGetCurrentIrql() )
  {
    v24 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v15, v24);
    WdLogGlobalForLineNumber = 3070;
  }
  if ( v16 )
  {
    v21 = *((int *)v16 + 12);
    if ( (_DWORD)v21 != v18 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v16 + 12), v18, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
  v25[3] = v19;
  v25[4] = a2;
  v25[5] = a3->NumAllocations;
  v25[6] = *a3->pOpenHandleList;
  WdLogGlobalForLineNumber = 3076;
  if ( (_DWORD)v19 )
  {
    WdLogSingleEntry1(2LL, v19);
    WdLogGlobalForLineNumber = 3078;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v19,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v29);
  return (unsigned int)v19;
}
