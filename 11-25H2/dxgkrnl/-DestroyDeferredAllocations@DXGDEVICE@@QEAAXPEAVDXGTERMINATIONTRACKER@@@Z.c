/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14033AFE0
 * Callers:
 *     ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x140359410 (-DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140021B00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018887C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140339FE4 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x14033A0A0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x14035D984 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x140387770 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x140394FE0 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v5; // rsi
  DXGDEVICE *v6; // r14
  void **v7; // rdi
  __int64 v8; // rax
  struct DXGALLOCATION *v9; // rbx
  int i; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rbx
  struct _KTHREAD **v16; // rdi
  struct DXGTHREAD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  KIRQL v22; // al
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  void *v27; // rdx
  char v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // zf
  __int64 j; // rax
  volatile signed __int32 *v33; // rcx
  const HANDLE *v34; // r15
  __int64 v35; // rbx
  __int64 v36; // r13
  struct DXGADAPTERALLOCATION *v37; // rdx
  void *v38; // rcx
  void *v39; // rdi
  __int64 v41; // rcx
  KIRQL CurrentIrql; // [rsp+58h] [rbp-B0h]
  int v43; // [rsp+60h] [rbp-A8h]
  void *v44; // [rsp+60h] [rbp-A8h]
  void **v45; // [rsp+68h] [rbp-A0h]
  _QWORD v46[3]; // [rsp+70h] [rbp-98h] BYREF
  struct DXGTHREAD *DxgThread; // [rsp+88h] [rbp-80h] BYREF
  __int64 v48; // [rsp+90h] [rbp-78h]
  int v49; // [rsp+98h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h]
  char v51; // [rsp+A8h] [rbp-60h]
  struct _DXGKARG_DESTROYALLOCATION v52; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v53[8]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+E0h] [rbp-28h]
  _BYTE v56[16]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v57[8]; // [rsp+F8h] [rbp-10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v59[8]; // [rsp+138h] [rbp+30h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = a2;
  v6 = this;
  memset(v59, 0, sizeof(v59));
  if ( !v4 || (v7 = *(void ***)(v4 + 64), (v45 = v7) == 0LL) )
  {
    v7 = (void **)v59;
    v45 = (void **)v59;
  }
  *(_OWORD *)&v46[1] = 0LL;
  if ( v4 )
  {
    v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)v5;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v5 + 8LL);
    this = (DXGDEVICE *)*((_QWORD *)a2 + 5);
    *(_QWORD *)(v8 + 32) = this;
    WdLogGlobalForLineNumber = 1833;
  }
  v9 = (struct DXGALLOCATION *)*((_QWORD *)v5 + 1);
  for ( i = 0; v9; v9 = (struct DXGALLOCATION *)*((_QWORD *)v9 + 8) )
  {
    v11 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(*((_QWORD *)v9 + 1) + 40LL);
    v12 = *((_QWORD *)v9 + 3);
    WdLogGlobalForLineNumber = 1848;
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 760LL)
                                                                          + 8LL)
                                                              + 136LL))(
        *(_QWORD *)(*((_QWORD *)v6 + 2) + 768LL),
        v12,
        0LL,
        *((unsigned int *)v5 + 12));
      *((_QWORD *)v9 + 3) = 0LL;
    }
    else
    {
      DXGDEVICE::TraceCloseParavirtualizedAllocation(v6, v9);
    }
    this = (DXGDEVICE *)*((_QWORD *)v9 + 4);
    if ( this )
    {
      v7[LODWORD(v46[1])] = this;
      ++LODWORD(v46[1]);
      *((_QWORD *)v9 + 4) = 0LL;
    }
  }
  if ( LODWORD(v46[1]) )
  {
    v13 = *((_QWORD *)v6 + 2);
    v48 = *((_QWORD *)v6 + 77);
    v46[2] = v7;
    v49 = -1;
    v50 = 0LL;
    if ( (qword_14015B4C0 & 2) != 0 )
    {
      v51 = 1;
      v49 = 5029;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5029);
    }
    else
    {
      v51 = 0;
    }
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 5029);
    v43 = 0;
    Current = DXGPROCESS::GetCurrent(v14);
    v16 = (struct _KTHREAD **)((char *)Current + 152);
    if ( !Current )
      v16 = 0LL;
    if ( v16 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      if ( v16[1] == KeGetCurrentThread() )
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
    if ( Current )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v16);
      v43 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v13 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 4804LL));
    CurrentIrql = KeGetCurrentIrql();
    v17 = 0LL;
    if ( CurrentIrql < 2u )
    {
      DxgThread = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0 )
      {
        v17 = DxgThread;
        if ( DxgThread || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v17 = DxgThread) != 0LL) )
          i = *((_DWORD *)v17 + 12);
      }
    }
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v57,
      *(struct DXGADAPTER **)(v13 + 16));
    LODWORD(v46[0]) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v13 + 16) + 728LL))(v48, &v46[1]);
    if ( v57[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v22 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, v13, CurrentIrql, v22);
      WdLogGlobalForLineNumber = 3070;
    }
    if ( v17 )
    {
      v19 = *((int *)v17 + 12);
      if ( (_DWORD)v19 != i )
      {
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v17 + 12), i, 0LL);
        WdLogGlobalForLineNumber = 73;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 16) + 4804LL));
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
    v24 = v48;
    v23[3] = SLODWORD(v46[0]);
    v23[4] = v24;
    v23[5] = LODWORD(v46[1]);
    v23[6] = *(_QWORD *)v46[2];
    WdLogGlobalForLineNumber = 3076;
    if ( LODWORD(v46[0]) )
    {
      WdLogSingleEntry1(2LL, SLODWORD(v46[0]));
      WdLogGlobalForLineNumber = 3078;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        SLODWORD(v46[0]),
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v13 + 16));
    if ( v43 == 2 )
    {
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      v16[1] = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit, a3, v49);
  }
  v26 = *(_QWORD *)v5;
  v27 = 0LL;
  v28 = 1;
  v44 = 0LL;
  if ( !*(_QWORD *)v5 )
    goto LABEL_58;
  if ( (*(_DWORD *)(v26 + 4) & 1) == 0 )
  {
    v27 = *(void **)(v26 + 56);
    v44 = v27;
LABEL_58:
    v34 = v45;
    goto LABEL_59;
  }
  v29 = *(_QWORD *)(v26 + 56);
  if ( v29 )
  {
    v30 = *(_QWORD *)(v29 + 152);
    if ( v30 )
    {
      if ( *(DXGDEVICE **)(v30 + 80) == v6 )
      {
        v31 = (*(_DWORD *)(v30 + 72))-- == 1;
        if ( v31 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v56,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 152LL) + 8LL),
            0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v56);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 152LL) + 80LL) = 0LL;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v56);
        }
      }
    }
    a3 = 0LL;
    for ( j = *(_QWORD *)(*(_QWORD *)v5 + 24LL); j; a3 = (unsigned int)(a3 + 1) )
      j = *(_QWORD *)(j + 64);
    v33 = *(volatile signed __int32 **)(*(_QWORD *)v5 + 56LL);
    v34 = v45;
    if ( _InterlockedExchangeAdd(v33 + 17, 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v33, v45, a3);
    v27 = 0LL;
    v28 = 0;
    *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
  }
  else
  {
    v34 = v45;
    v28 = 0;
  }
LABEL_59:
  v35 = *((_QWORD *)v5 + 1);
  memset(&v52, 0, sizeof(v52));
  if ( !v35 )
    goto LABEL_79;
  do
  {
    v36 = *(_QWORD *)(v35 + 64);
    if ( (*(_DWORD *)(v35 + 72) & 0x800) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1968;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentAlloc->m_Pinned == FALSE",
        1968LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(v35 + 72) & 0x7FE) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1969;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentAlloc->m_DirectFlipIndex == 0",
        1969LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v37 = *(struct DXGADAPTERALLOCATION **)(v35 + 48);
    if ( v37 )
    {
      if ( v28 )
      {
        DXGDEVICE::DestroyAdapterAllocation(v6, v37, a3);
        v38 = *(void **)(*(_QWORD *)(v35 + 48) + 16LL);
        if ( v38 )
        {
          v34[v52.NumAllocations++] = v38;
          *(_QWORD *)(*(_QWORD *)(v35 + 48) + 16LL) = 0LL;
        }
        goto LABEL_73;
      }
    }
    else if ( v28 )
    {
      goto LABEL_73;
    }
    if ( !*(_QWORD *)v5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1991;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pTracker->m_pResource", 1991LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 4LL) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1992;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pTracker->m_pResource->m_SharedResource",
        1992LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_73:
    if ( !*(_QWORD *)v5 || (*(_DWORD *)(*(_QWORD *)v5 + 4LL) & 1) == 0 )
    {
      v39 = *(void **)(v35 + 48);
      if ( v39 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v35 + 48));
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v39);
      }
    }
    DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v35);
    ExFreePoolWithTag((PVOID)v35, 0);
    v35 = v36;
  }
  while ( v36 );
  v27 = v44;
LABEL_79:
  if ( v28 )
  {
    v31 = *(_QWORD *)v5 == 0LL;
    v52.hResource = v27;
    v52.Flags.Value = !v31;
    if ( v52.NumAllocations )
    {
      v52.pAllocationList = v34;
      goto LABEL_84;
    }
    v52.pAllocationList = 0LL;
    if ( v27 )
LABEL_84:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v6 + 2), &v52, 0LL);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v53, (struct _KTHREAD **)v6 + 22);
  if ( --*((_DWORD *)v6 + 476) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1261;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_OutstandingDeferredDestroys >= 0",
      1261LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_DWORD *)v6 + 476) )
    KeSetEvent(*((PRKEVENT *)v6 + 239), 0, 0);
  if ( v55 == 1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v54 + 16));
    ExReleasePushLockSharedEx(v54, 0LL);
    goto LABEL_93;
  }
  if ( v55 == 2 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v41 = v54;
    *(_QWORD *)(v54 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v41, 0LL);
LABEL_93:
    KeLeaveCriticalRegion();
  }
}
