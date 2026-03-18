/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1403AB220
 * Callers:
 *     ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x14034ED20 (-DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x14018894C (-TraceCloseParavirtualizedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z @ 0x14032578C (-DdiCloseAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_CLOSEALLOCATION@@@Z.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140325B54 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x140325C3C (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140352CD4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x140373870 (--1DXGALLOCATION@@QEAA@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x140388F00 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v5; // rdi
  DXGDEVICE *v6; // r14
  HANDLE *v7; // r15
  __int64 v8; // rax
  struct DXGALLOCATION *i; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  void *v12; // rdx
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rdx
  char v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  unsigned int v20; // ebx
  __int64 k; // rcx
  __int64 j; // rcx
  volatile signed __int32 *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r13
  struct DXGADAPTERALLOCATION *v26; // rdx
  void *v27; // rcx
  void *v28; // rsi
  void *v30; // [rsp+58h] [rbp-B0h]
  struct _DXGKARG_CLOSEALLOCATION v31; // [rsp+60h] [rbp-A8h] BYREF
  struct _DXGKARG_DESTROYALLOCATION v32; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v33[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v34[16]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v35[8]; // [rsp+B8h] [rbp-50h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = a2;
  v6 = this;
  memset(v35, 0, sizeof(v35));
  if ( !v4 || (v7 = *(HANDLE **)(v4 + 64)) == 0LL )
    v7 = (HANDLE *)v35;
  v31 = 0LL;
  if ( v4 )
  {
    v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = *(_QWORD *)v5;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v5 + 8LL);
    this = (DXGDEVICE *)*((_QWORD *)a2 + 5);
    *(_QWORD *)(v8 + 32) = this;
    WdLogGlobalForLineNumber = 1850;
  }
  for ( i = (struct DXGALLOCATION *)*((_QWORD *)v5 + 1); i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
  {
    v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = i;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(*((_QWORD *)i + 1) + 40LL);
    v11 = *((_QWORD *)i + 3);
    WdLogGlobalForLineNumber = 1865;
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 760LL)
                                                                          + 8LL)
                                                              + 136LL))(
        *(_QWORD *)(*((_QWORD *)v6 + 2) + 768LL),
        v11,
        0LL,
        *((unsigned int *)v5 + 12));
      *((_QWORD *)i + 3) = 0LL;
    }
    else
    {
      DXGDEVICE::TraceCloseParavirtualizedAllocation(v6, i);
    }
    this = (DXGDEVICE *)*((_QWORD *)i + 4);
    if ( this )
    {
      v7[v31.NumAllocations++] = this;
      *((_QWORD *)i + 4) = 0LL;
    }
  }
  if ( v31.NumAllocations )
  {
    v12 = (void *)*((_QWORD *)v6 + 77);
    v13 = (ADAPTER_RENDER *)*((_QWORD *)v6 + 2);
    v31.pOpenHandleList = v7;
    ADAPTER_RENDER::DdiCloseAllocation(v13, v12, &v31);
  }
  v14 = *(_QWORD *)v5;
  v15 = 0LL;
  v30 = 0LL;
  v16 = 1;
  if ( *(_QWORD *)v5 )
  {
    if ( (*(_DWORD *)(v14 + 4) & 1) != 0 )
    {
      v17 = *(_QWORD *)(v14 + 56);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 152);
        if ( v18 )
        {
          if ( *(DXGDEVICE **)(v18 + 80) == v6 )
          {
            v19 = (*(_DWORD *)(v18 + 72))-- == 1;
            if ( v19 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v33,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 152LL) + 8LL),
                0);
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 56LL) + 152LL) + 80LL) = 0LL;
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v33);
            }
          }
        }
        v20 = 0;
        if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (struct DXGFASTMUTEX *const)(*(_QWORD *)v5 + 80LL), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
          for ( j = *(_QWORD *)(*(_QWORD *)v5 + 24LL); j; ++v20 )
            j = *(_QWORD *)(j + 64);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
        }
        else
        {
          for ( k = *(_QWORD *)(*(_QWORD *)v5 + 24LL); k; ++v20 )
            k = *(_QWORD *)(k + 64);
        }
        v23 = *(volatile signed __int32 **)(*(_QWORD *)v5 + 56LL);
        if ( _InterlockedExchangeAdd(v23 + 17, 0xFFFFFFFF) == 1 )
          DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v23, v7, v20);
        v15 = 0LL;
        *(_QWORD *)(*(_QWORD *)v5 + 56LL) = 0LL;
      }
      v16 = 0;
    }
    else
    {
      v15 = *(void **)(v14 + 56);
      v30 = v15;
    }
  }
  v24 = *((_QWORD *)v5 + 1);
  memset(&v32, 0, sizeof(v32));
  if ( v24 )
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(v24 + 64);
      if ( (*(_DWORD *)(v24 + 72) & 0x800) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2003;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pCurrentAlloc->m_Pinned == FALSE",
          2003LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*(_DWORD *)(v24 + 72) & 0x7FE) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2004;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pCurrentAlloc->m_DirectFlipIndex == 0",
          2004LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v26 = *(struct DXGADAPTERALLOCATION **)(v24 + 48);
      if ( v26 )
      {
        if ( !v16 )
          goto LABEL_44;
        DXGDEVICE::DestroyAdapterAllocation(v6, v26);
        v27 = *(void **)(*(_QWORD *)(v24 + 48) + 16LL);
        if ( v27 )
        {
          v7[v32.NumAllocations++] = v27;
          *(_QWORD *)(*(_QWORD *)(v24 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v16 )
      {
LABEL_44:
        if ( !*(_QWORD *)v5 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2026;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pTracker->m_pResource", 2026LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)v5 + 4LL) & 1) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2027;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pTracker->m_pResource->m_SharedResource",
            2027LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      if ( !*(_QWORD *)v5 || (*(_DWORD *)(*(_QWORD *)v5 + 4LL) & 1) == 0 )
      {
        v28 = *(void **)(v24 + 48);
        if ( v28 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(void ***)(v24 + 48));
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v28);
        }
      }
      DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v24);
      ExFreePoolWithTag((PVOID)v24, 0);
      v24 = v25;
      if ( !v25 )
      {
        v15 = v30;
        break;
      }
    }
  }
  if ( v16 )
  {
    v19 = *(_QWORD *)v5 == 0LL;
    v32.hResource = v15;
    v32.Flags.Value = !v19;
    if ( v32.NumAllocations )
    {
      v32.pAllocationList = v7;
LABEL_59:
      ADAPTER_RENDER::DdiDestroyAllocation(*((ADAPTER_RENDER **)v6 + 2), &v32, 0LL);
      goto LABEL_60;
    }
    v32.pAllocationList = 0LL;
    if ( v15 )
      goto LABEL_59;
  }
LABEL_60:
  if ( v6 != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)v6 + 23) == KeGetCurrentThread() )
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
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)v6 + 176));
  if ( --*((_DWORD *)v6 + 480) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1278;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_OutstandingDeferredDestroys >= 0",
      1278LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_DWORD *)v6 + 480) )
    KeSetEvent(*((PRKEVENT *)v6 + 241), 0, 0);
  *((_QWORD *)v6 + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v6 + 176, 0LL);
  KeLeaveCriticalRegion();
}
