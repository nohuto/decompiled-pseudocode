/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400C4010
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1400286D0 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14003652C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x140047D90 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1400C35A8 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400C4444 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C666C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C73F4 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C80B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  PRKPROCESS *v2; // rcx
  char *v3; // rcx
  __int64 v4; // rax
  char **v5; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v7; // rdi
  struct VIDMM_RECYCLE_RANGE *v8; // r14
  unsigned __int8 v9; // dl
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  VIDMM_RECYCLE_RANGE *v12; // rsi
  unsigned __int8 v13; // dl
  PVOID *v14; // rdi
  __int64 v15; // rsi
  void *v16; // rdx
  struct _LOOKASIDE_LIST_EX *v17; // rcx
  struct _LOOKASIDE_LIST_EX *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rcx
  bool v21; // [rsp+58h] [rbp-29h] BYREF
  int v22; // [rsp+5Ch] [rbp-25h] BYREF
  char *v23; // [rsp+60h] [rbp-21h] BYREF
  char v24; // [rsp+68h] [rbp-19h]
  _BYTE v25[24]; // [rsp+70h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp+7h] BYREF

  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  v2 = (PRKPROCESS *)*((_QWORD *)this + 1);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*v2, &ApcState);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  v3 = (char *)this + 1600;
  v4 = *((_QWORD *)this + 200);
  if ( v4 )
  {
    if ( *(char **)(v4 + 8) != v3 || (v5 = (char **)*((_QWORD *)this + 201), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
  v24 = 0;
  v23 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(v20, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v23);
  _InterlockedExchange((volatile __int32 *)this + 396, 1);
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 384);
  if ( (_DWORD)v6 && !KeCancelTimer((PKTIMER)((char *)this + 1376)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v23);
    KeWaitForSingleObject(*((PVOID *)this + 199), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v23);
  }
  v7 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 193);
  while ( v7 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
  {
    v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v7 - 104);
    v7 = *(VIDMM_RECYCLE_HEAP_MGR **)v7;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, v8);
    v21 = 0;
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v8, &v21);
    if ( !v21 )
    {
      v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v8 + 17);
      if ( v6 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v6, v9);
    }
  }
  v10 = (_QWORD *)((char *)this + 1560);
  while ( 1 )
  {
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
      break;
    v12 = (VIDMM_RECYCLE_RANGE *)(v11 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v6, (struct VIDMM_RECYCLE_RANGE *)(v11 - 13));
    v22 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v12, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v22);
    if ( !v22 )
    {
      v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v12 + 17);
      if ( v6 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v6, v13);
    }
  }
  v14 = (PVOID *)((char *)this + 1656);
  v15 = 4LL;
  do
  {
    v16 = *(v14 - 4);
    if ( v16 )
      ExFreeToLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 164), v16);
    if ( *v14 )
      ExFreeToLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 165), *v14);
    ++v14;
    --v15;
  }
  while ( v15 );
  v17 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v17 )
  {
    ExDeleteLookasideListEx(v17);
    operator delete(*((void **)this + 164));
  }
  v18 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v18 )
  {
    ExDeleteLookasideListEx(v18);
    operator delete(*((void **)this + 165));
  }
  v19 = (void *)*((_QWORD *)this + 199);
  if ( v19 )
    operator delete(v19);
  KeUnstackDetachProcess(&ApcState);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v23);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1240));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1168));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1096));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1024));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 952));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 880));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
