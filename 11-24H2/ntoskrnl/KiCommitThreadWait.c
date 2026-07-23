/*
 * XREFs of KiCommitThreadWait @ 0x140320100
 * Callers:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x14021EF60 (KiDecrementProcessStackCount.c)
 *     KiExitThreadWait @ 0x14027F5C0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x14027F7B0 (KiPerformWaitDeferredWork.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402D5900 (KiActivateWaiterQueueWithThreadLock.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     KiComputeDueTime @ 0x140316E40 (KiComputeDueTime.c)
 *     KiInsertTimerTable @ 0x140316F50 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x140471C1C (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v8; // r8
  char v9; // r15
  __int64 *v10; // rsi
  int v12; // eax
  struct _KPRCB *CurrentPrcb; // r13
  int v14; // ebp
  unsigned int v15; // ebx
  char v16; // al
  __int64 v17; // rdx
  unsigned int v18; // ebx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v20; // rax
  __int16 v21; // r15
  BOOL v22; // esi
  char v23; // bl
  __int64 v24; // rax
  __int64 v25; // rbp
  ULONG_PTR v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r14
  bool v31; // zf
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rbp
  unsigned int v36; // ebx
  __int64 *v37; // rbp
  volatile signed __int32 *v38; // rbx
  __int64 *v39; // rcx
  __int64 **v40; // rax
  int v42; // [rsp+30h] [rbp-58h]
  unsigned int v43; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v44; // [rsp+A8h] [rbp+20h]

  v44 = a4;
  v6 = BugCheckParameter1 + 256;
  v8 = 0LL;
  v43 = 0;
  v9 = 0;
  v10 = a2;
  _m_prefetchw((const void *)(BugCheckParameter1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(BugCheckParameter1 + 116) |= 0x200u;
    *(_DWORD *)v6 |= 0x40000080u;
  }
  v12 = *(_DWORD *)(BugCheckParameter1 + 120);
  if ( (v12 & 0x400000) != 0 )
    *(_DWORD *)(BugCheckParameter1 + 1160) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(BugCheckParameter1 + 208) = a2;
  if ( !*(_BYTE *)(BugCheckParameter1 + 391)
    || (v12 & 0x40) == 0
    || (v14 = 1, *(char *)(BugCheckParameter1 + 195) >= 25) )
  {
    v14 = 0;
  }
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v15);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v16 = *(_BYTE *)(BugCheckParameter1 + 112);
  if ( (v16 & 0xE7) == 0 )
  {
    v17 = a5;
    LOBYTE(v8) = 1;
    *(_BYTE *)(BugCheckParameter1 + 112) = v16 & 0xF8 | 1;
    KiPerformWaitDeferredWork(BugCheckParameter1, v17, v8, 0LL);
    if ( v14 )
    {
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentPrcb->WaitLock );
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v20 = (struct _LIST_ENTRY *)(BugCheckParameter1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
LABEL_112:
        __fastfail(3u);
      v20->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(BugCheckParameter1 + 224) = Blink;
      Blink->Flink = v20;
      CurrentPrcb->WaitListHead.Blink = v20;
      *(_QWORD *)(BugCheckParameter1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0xCu);
    v21 = 1;
    v22 = 0;
    if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x80000) != 0 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x4000) != 0 )
      v22 = !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x14u);
    v23 = 0;
    if ( a3 != 2
      || (v24 = *(unsigned int *)(BugCheckParameter1 + 952), !*(_BYTE *)(BugCheckParameter1 + 391))
      || *(_DWORD *)(BugCheckParameter1 + 484)
      || *(_BYTE *)(BugCheckParameter1 + 390) )
    {
      v25 = v44;
    }
    else
    {
      v25 = v44;
      if ( !*(_BYTE *)(BugCheckParameter1 + 192) )
      {
        v23 = 1;
        if ( (_DWORD)v24 )
          v25 = v24 + v44;
      }
    }
    if ( *(_BYTE *)(BugCheckParameter1 + 643) == 15 || (v26 = *(_QWORD *)(BugCheckParameter1 + 232)) == 0 )
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    else
      KiActivateWaiterQueueWithThreadLock(BugCheckParameter1, v26);
    if ( v22 )
      KiDecrementProcessStackCount(*(_QWORD *)(BugCheckParameter1 + 184));
    *(_BYTE *)(BugCheckParameter1 + 565) = 0;
    if ( !a3 )
      return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb, a6);
    if ( a3 == 2 )
    {
      v27 = v25 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(BugCheckParameter1 + 248);
      *(_QWORD *)(v6 + 24) = v27;
      v27 >>= 18;
      v43 = (unsigned __int8)v27;
      v42 = *(_DWORD *)v6;
      BYTE1(v42) = BYTE1(*(_DWORD *)v6) & 0xFE;
      BYTE2(v42) = v27;
      *(_DWORD *)v6 = v42;
      if ( v23 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1792LL));
    }
    else if ( !(unsigned int)KiComputeDueTime((int *)v6, v25, 0, &v43) )
    {
      goto LABEL_63;
    }
    if ( KiGlobalTimerResolutionRequests
      || (v28 = *(_QWORD *)(BugCheckParameter1 + 544), (*(_DWORD *)(v28 + 500) & 0x1000) != 0)
      && (*(_DWORD *)(v28 + 1532) & 0x4000000) == 0 )
    {
      v21 = 0;
    }
    *(_WORD *)(v6 + 58) = v21;
    if ( KiInsertTimerTable((__int64)CurrentPrcb, v6, 0LL, v43, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v29) = 1;
        KiTraceSetTimer(v6, 0LL, v29);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
      }
      return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb, a6);
    }
LABEL_63:
    KiTimerWaitTest((__int64)CurrentPrcb, v6, 0LL);
    return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb, a6);
  }
  if ( (v16 & 7) == 0 )
  {
    if ( (v16 & 0x20) != 0 )
    {
      *(_QWORD *)(BugCheckParameter1 + 200) = 256LL;
      *(_QWORD *)(BugCheckParameter1 + 976) = 0LL;
    }
    else
    {
      v31 = (v16 & 0x40) == 0;
      v9 = 1;
      v32 = 192LL;
      if ( v31 )
        v32 = 257LL;
      *(_QWORD *)(BugCheckParameter1 + 200) = v32;
      *(_QWORD *)(BugCheckParameter1 + 976) = 0LL;
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 388) = 2;
  if ( *(_BYTE *)(BugCheckParameter1 + 643) == 15 )
  {
    v33 = *(_QWORD *)(BugCheckParameter1 + 232);
    if ( v33 )
    {
      if ( (*(_BYTE *)v33 & 0x7F) == 0x15 )
      {
        v34 = (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 540);
        *(_DWORD *)(BugCheckParameter1 + 540) = v34;
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 4 * v34 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 40));
      }
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  if ( a3 )
    *(_DWORD *)(BugCheckParameter1 + 116) &= ~0x200u;
  v30 = *(_QWORD *)(BugCheckParameter1 + 200);
  if ( a6 )
    *a6 = *(_QWORD *)(BugCheckParameter1 + 976);
  if ( v9 )
  {
    v35 = *(char *)(BugCheckParameter1 + 391);
    v36 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v36 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v36);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    if ( v30 == 257 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v35 + BugCheckParameter1 + 114) )
        {
          *(_BYTE *)(v35 + BugCheckParameter1 + 114) = 0;
        }
        else if ( (_BYTE)v35 )
        {
          *(_BYTE *)(BugCheckParameter1 + 114) = 0;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 4u);
      }
    }
    else if ( *(_QWORD *)(BugCheckParameter1 + 168) != BugCheckParameter1 + 168 )
    {
      *(_BYTE *)(BugCheckParameter1 + 194) |= 2u;
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  v37 = &v10[6 * *(unsigned __int8 *)(BugCheckParameter1 + 587)];
  do
  {
    if ( *((_BYTE *)v10 + 17) < 5u )
    {
      v38 = (volatile signed __int32 *)v10[4];
      KiAcquireKobjectLockSafe(v38);
      if ( *((_BYTE *)v10 + 17) == 4 )
      {
        v39 = (__int64 *)*v10;
        v40 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v40 != v10 )
          goto LABEL_112;
        *v40 = v39;
        v39[1] = (__int64)v40;
      }
      _InterlockedAnd(v38, 0xFFFFFF7F);
    }
    v10 += 6;
  }
  while ( v10 != v37 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  KiExitThreadWait(CurrentPrcb, BugCheckParameter1, a5, a4);
  return v30;
}
