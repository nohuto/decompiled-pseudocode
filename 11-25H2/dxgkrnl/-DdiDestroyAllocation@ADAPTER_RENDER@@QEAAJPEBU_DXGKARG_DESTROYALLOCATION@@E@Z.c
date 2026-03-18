/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x14033A0A0
 * Callers:
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x140339754 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14033AFE0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403502AC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x14035D9B8 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
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
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x140076058 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rsi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v12; // rbx
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v15; // rax
  bool v16; // zf
  char v17; // al
  __int64 v18; // rcx
  MOCKDRIVERSTATE *v19; // rcx
  KIRQL CurrentIrql; // al
  __int64 v21; // r15
  struct DXGTHREAD *v22; // rbx
  struct DXGTHREAD *v23; // rax
  int v24; // esi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  KIRQL v30; // al
  _QWORD *v31; // rax
  const HANDLE *v32; // rcx
  HANDLE v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  PVOID BackTrace; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h]
  char v39; // [rsp+68h] [rbp-98h]
  _DWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  const HANDLE *pAllocationList; // [rsp+78h] [rbp-88h]
  char v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+81h] [rbp-7Fh]
  __int16 v44; // [rsp+85h] [rbp-7Bh]
  char v45; // [rsp+87h] [rbp-79h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  PVOID v49; // [rsp+A0h] [rbp-60h]
  char v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+A9h] [rbp-57h]
  __int16 v52; // [rsp+ADh] [rbp-53h]
  char v53; // [rsp+AFh] [rbp-51h]
  _BYTE v54[8]; // [rsp+B0h] [rbp-50h] BYREF
  DXGPUSHLOCK *v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+C0h] [rbp-40h]
  _BYTE v57[56]; // [rsp+C8h] [rbp-38h] BYREF

  v3 = a3;
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0LL;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 5005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5005);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 5005);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_14;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v12 )
      goto LABEL_15;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2925;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_14;
  }
  v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v12 )
LABEL_14:
    v12 = v10;
LABEL_15:
  v56 = 0;
  v55 = (DXGPUSHLOCK *)(((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL));
  if ( v55 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *(struct _KTHREAD **)((((unsigned __int64)v12 + 152) & -(__int64)(v12 != 0LL)) + 8) == KeGetCurrentThread() )
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
  if ( v12 )
  {
    DXGPUSHLOCK::AcquireExclusive(v55);
    v56 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  if ( !v3 )
  {
    v15 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(v15 + 4976) || (v16 = *(_DWORD *)(v15 + 296) == 1, v17 = 1, !v16) )
      v17 = 0;
    if ( v17 )
    {
      v46 = 0LL;
      v40[1] = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v47 = 0LL;
      v48 = 0LL;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      BackTrace = 0LL;
      RtlCaptureStackBackTrace(2u, 1u, &BackTrace, 0LL);
      v18 = *((_QWORD *)this + 2);
      v40[0] = a2->NumAllocations;
      pAllocationList = a2->pAllocationList;
      v19 = *(MOCKDRIVERSTATE **)(v18 + 4968);
      v49 = BackTrace;
      v42 = 0;
      LODWORD(v48) = 1;
      v50 = 1;
      MOCKDRIVERSTATE::ValidateMockDriverState(v19, 0, (const struct _MOCKDRIVERSTATE_VALIDATE_FBR *)v40);
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL), 1u);
  CurrentIrql = KeGetCurrentIrql();
  v21 = CurrentIrql;
  v22 = 0LL;
  if ( CurrentIrql < 2u && (v23 = DXGTHREAD::GetCurrent(), (v22 = v23) != 0LL) )
    v24 = *((_DWORD *)v23 + 12);
  else
    v24 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v57,
    *((struct DXGADAPTER **)this + 2));
  v25 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 480LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 288LL),
          a2);
  DXGVALIDATIONPROCESSATTACH::~DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v57);
  if ( (_BYTE)v21 != KeGetCurrentIrql() )
  {
    v30 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v21, v30);
    WdLogGlobalForLineNumber = 436;
  }
  if ( v22 )
  {
    v27 = *((int *)v22 + 12);
    if ( (_DWORD)v27 != v24 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v22 + 12), v24, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4804LL));
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
  v31[3] = v25;
  v31[4] = a2->Flags.Value;
  v31[5] = a2->hResource;
  v31[6] = a2->NumAllocations;
  v32 = a2->pAllocationList;
  if ( v32 )
    v33 = *v32;
  else
    v33 = 0LL;
  v31[7] = v33;
  WdLogGlobalForLineNumber = 443;
  if ( (_DWORD)v25 )
  {
    WdLogSingleEntry1(2LL, v25);
    WdLogGlobalForLineNumber = 445;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v25,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v37);
  }
  return (unsigned int)v25;
}
