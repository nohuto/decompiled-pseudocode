/*
 * XREFs of ?Init@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1400FD740
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Init(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_PROCESS *a2)
{
  struct _KEVENT *v3; // rax
  struct _LOOKASIDE_LIST_EX *v4; // rax
  NTSTATUS v5; // edi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rsi
  PVOID v8; // rax
  struct _LOOKASIDE_LIST_EX *v9; // rax
  NTSTATUS v10; // eax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  PVOID v13; // rax
  struct _KTHREAD **v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v20; // rcx
  _BYTE v21[32]; // [rsp+50h] [rbp-28h] BYREF

  *((_QWORD *)this + 1) = a2;
  v3 = (struct _KEVENT *)operator new(24LL, 0x30316956u, 64LL);
  *((_QWORD *)this + 199) = v3;
  if ( !v3 )
  {
    _InterlockedIncrement(dword_14008175C);
    WdLogSingleEntry0(6LL);
    v18 = 9764;
LABEL_17:
    WdLogGlobalForLineNumber = v18;
    DxgkLogInternalTriageEvent(v17, 262145LL);
    return 3221225495LL;
  }
  KeInitializeEvent(v3, NotificationEvent, 0);
  v4 = (struct _LOOKASIDE_LIST_EX *)operator new(96LL, 0x30316956u, 64LL);
  *((_QWORD *)this + 164) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(dword_14008175C);
    WdLogSingleEntry0(6LL);
    v18 = 9778;
    goto LABEL_17;
  }
  v5 = ExInitializeLookasideListEx(v4, 0LL, 0LL, PagedPool, 0, 0xB0uLL, 0x32316956u, 0);
  if ( v5 < 0 )
  {
    _InterlockedIncrement(dword_14008175C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 9787;
LABEL_21:
    DxgkLogInternalTriageEvent(v20, 262145LL);
    return (unsigned int)v5;
  }
  else
  {
    v6 = 0LL;
    v7 = (_QWORD *)((char *)this + 1624);
    while ( v6 < 4 )
    {
      v8 = ExAllocateFromLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 164));
      *v7 = v8;
      if ( !v8 )
      {
        _InterlockedIncrement(dword_14008175C);
        WdLogSingleEntry0(6LL);
        v18 = 9799;
        goto LABEL_17;
      }
      ++v6;
      ++v7;
    }
    *((_DWORD *)this + 404) = 4;
    v9 = (struct _LOOKASIDE_LIST_EX *)operator new(96LL, 0x30316956u, 64LL);
    *((_QWORD *)this + 165) = v9;
    if ( !v9 )
    {
      _InterlockedIncrement(dword_14008175C);
      WdLogSingleEntry0(6LL);
      v18 = 9810;
      goto LABEL_17;
    }
    v10 = ExInitializeLookasideListEx(v9, 0LL, 0LL, PagedPool, 0, 0xD0uLL, 0x32316956u, 0);
    v5 = v10;
    if ( v10 < 0 )
    {
      _InterlockedIncrement(dword_14008175C);
      WdLogSingleEntry1(6LL, v10);
      WdLogGlobalForLineNumber = 9819;
      goto LABEL_21;
    }
    v11 = 0LL;
    v12 = (_QWORD *)((char *)this + 1656);
    while ( v11 < 4 )
    {
      v13 = ExAllocateFromLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 165));
      *v12 = v13;
      if ( !v13 )
      {
        _InterlockedIncrement(dword_14008175C);
        WdLogSingleEntry0(6LL);
        v18 = 9831;
        goto LABEL_17;
      }
      ++v11;
      ++v12;
    }
    v14 = (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock;
    *((_DWORD *)this + 405) = 4;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, v14);
    v15 = (_QWORD *)qword_1400819F8;
    v16 = (_QWORD *)((char *)this + 1600);
    if ( *(struct _LIST_ENTRY **)qword_1400819F8 != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead )
      __fastfail(3u);
    *v16 = &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
    v16[1] = v15;
    *v15 = v16;
    qword_1400819F8 = (__int64)v16;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    return 0LL;
  }
}
