/*
 * XREFs of ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400B4EC8
 * Callers:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400B4A74 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400C5030 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z @ 0x1400C75C0 (-UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z.c)
 *     ?LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB560 (-LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C5784 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(bool a1)
{
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v3; // rbx
  __int64 v4; // rcx
  PRKPROCESS *Blink; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+58h] [rbp-19h] BYREF
  char v10; // [rsp+60h] [rbp-11h]
  _BYTE v11[24]; // [rsp+68h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+Fh] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v11,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  for ( i = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
        i != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        i = i->Flink )
  {
    v3 = i - 100;
    v10 = 0;
    v9 = (__int64)&i[-17];
    if ( i == (struct _LIST_ENTRY *)272 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(v4, 262146LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v9);
    if ( v3[96].Blink != (struct _LIST_ENTRY *)&v3[96].Blink || v3[97].Blink != (struct _LIST_ENTRY *)&v3[97].Blink )
    {
      Blink = (PRKPROCESS *)v3->Blink;
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*Blink, &ApcState);
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)&i[-100], 0, a1);
      KeUnstackDetachProcess(&ApcState);
    }
    if ( v10 )
    {
      v6 = v9;
      v10 = 0;
      if ( *(struct _KTHREAD **)(v9 + 24) != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v9, 0LL, 0LL);
        WdLogGlobalForLineNumber = 570;
      }
      if ( *(int *)(v6 + 32) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 573;
        DxgkLogInternalTriageEvent(v7, 262146LL);
      }
      if ( (*(_DWORD *)(v6 + 32))-- == 1 )
      {
        *(_QWORD *)(v6 + 24) = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 8, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
}
