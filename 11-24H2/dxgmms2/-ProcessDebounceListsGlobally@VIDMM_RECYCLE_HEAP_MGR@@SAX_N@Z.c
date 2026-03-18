/*
 * XREFs of ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400BCD7C
 * Callers:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400BC934 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F9CC0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 *     ?LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400F9D80 (-LockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_.c)
 *     ?UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z @ 0x1400FB8A0 (-UnlockHeapAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@_K1E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C58D0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(bool a1)
{
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v3; // rdi
  __int64 v4; // rcx
  PRKPROCESS *Blink; // rcx
  __int64 v6; // [rsp+50h] [rbp-68h] BYREF
  char v7; // [rsp+58h] [rbp-60h]
  _BYTE v8[24]; // [rsp+60h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-40h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v8,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  for ( i = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
        i != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        i = i->Flink )
  {
    v3 = i - 100;
    v7 = 0;
    v6 = (__int64)&i[-17];
    if ( i == (struct _LIST_ENTRY *)272 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(v4, 262146LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v6);
    if ( v3[96].Blink != (struct _LIST_ENTRY *)&v3[96].Blink || v3[97].Blink != (struct _LIST_ENTRY *)&v3[97].Blink )
    {
      Blink = (PRKPROCESS *)v3->Blink;
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*Blink, &ApcState);
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)&i[-100], 0, a1);
      KeUnstackDetachProcess(&ApcState);
    }
    DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v6);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8);
}
