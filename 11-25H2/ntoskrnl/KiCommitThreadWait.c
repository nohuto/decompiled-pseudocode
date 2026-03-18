/*
 * XREFs of KiCommitThreadWait @ 0x14029DDA0
 * Callers:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KeWaitForAlertByThreadId @ 0x140305CB0 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x140228DE0 (KiDecrementProcessStackCount.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402A1650 (KiActivateWaiterQueueWithThreadLock.c)
 *     KiExitThreadWait @ 0x1402E5EA0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x1402E6090 (KiPerformWaitDeferredWork.c)
 *     KiInsertTimerTable @ 0x1402EDE10 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x1402F4350 (KiComputeDueTime.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiTraceSetTimer @ 0x1403F95AC (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        int a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  int *v6; // r14
  char v8; // r15
  __int64 *v9; // rsi
  int v11; // eax
  struct _KPRCB *CurrentPrcb; // r13
  int v13; // ebp
  unsigned int v14; // ebx
  char v15; // al
  __int64 v16; // rcx
  unsigned int v17; // ebx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v19; // rax
  __int16 v20; // r15
  BOOL v21; // esi
  char v22; // bl
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r14
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rbp
  unsigned int v35; // ebx
  __int64 *v36; // rbp
  volatile signed __int32 *v37; // rbx
  __int64 *v38; // rcx
  __int64 **v39; // rax
  int v41; // [rsp+30h] [rbp-58h]
  int v42; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v43; // [rsp+A8h] [rbp+20h]

  v43 = a4;
  v6 = (int *)(BugCheckParameter1 + 256);
  v42 = 0;
  v8 = 0;
  v9 = a2;
  _m_prefetchw((const void *)(BugCheckParameter1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(BugCheckParameter1 + 116) |= 0x200u;
    *v6 |= 0x40000080u;
  }
  v11 = *(_DWORD *)(BugCheckParameter1 + 120);
  if ( (v11 & 0x400000) != 0 )
    *(_DWORD *)(BugCheckParameter1 + 1160) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(BugCheckParameter1 + 208) = a2;
  if ( !*(_BYTE *)(BugCheckParameter1 + 391)
    || (v11 & 0x40) == 0
    || (v13 = 1, *(char *)(BugCheckParameter1 + 195) >= 25) )
  {
    v13 = 0;
  }
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1) )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v15 = *(_BYTE *)(BugCheckParameter1 + 112);
  if ( (v15 & 0xE7) == 0 )
  {
    *(_BYTE *)(BugCheckParameter1 + 112) = v15 & 0xF8 | 1;
    KiPerformWaitDeferredWork(BugCheckParameter1);
    if ( v13 )
    {
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16) )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentPrcb->WaitLock );
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v19 = (struct _LIST_ENTRY *)(BugCheckParameter1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
LABEL_112:
        __fastfail(3u);
      v19->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(BugCheckParameter1 + 224) = Blink;
      Blink->Flink = v19;
      CurrentPrcb->WaitListHead.Blink = v19;
      *(_QWORD *)(BugCheckParameter1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0xCu);
    v20 = 1;
    v21 = 0;
    if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x80000) != 0 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x4000) != 0 )
      v21 = !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x14u);
    v22 = 0;
    if ( a3 != 2
      || (v23 = *(unsigned int *)(BugCheckParameter1 + 952), !*(_BYTE *)(BugCheckParameter1 + 391))
      || *(_DWORD *)(BugCheckParameter1 + 484)
      || *(_BYTE *)(BugCheckParameter1 + 390) )
    {
      v24 = v43;
    }
    else
    {
      v24 = v43;
      if ( !*(_BYTE *)(BugCheckParameter1 + 192) )
      {
        v22 = 1;
        if ( (_DWORD)v23 )
          v24 = v23 + v43;
      }
    }
    if ( *(_BYTE *)(BugCheckParameter1 + 643) == 15 || !*(_QWORD *)(BugCheckParameter1 + 232) )
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    else
      KiActivateWaiterQueueWithThreadLock(BugCheckParameter1);
    if ( v21 )
      KiDecrementProcessStackCount(*(_QWORD *)(BugCheckParameter1 + 184));
    *(_BYTE *)(BugCheckParameter1 + 565) = 0;
    if ( !a3 )
      return KiSwapThread(BugCheckParameter1, CurrentPrcb);
    if ( a3 == 2 )
    {
      v25 = v24 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(BugCheckParameter1 + 248);
      *((_QWORD *)v6 + 3) = v25;
      v25 >>= 18;
      v42 = (unsigned __int8)v25;
      v41 = *v6;
      BYTE1(v41) = BYTE1(*v6) & 0xFE;
      BYTE2(v41) = v25;
      *v6 = v41;
      if ( v22 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1792LL));
    }
    else if ( !(unsigned int)KiComputeDueTime(v6, v24, 0LL, &v42) )
    {
      goto LABEL_63;
    }
    if ( KiGlobalTimerResolutionRequests
      || (v26 = *(_QWORD *)(BugCheckParameter1 + 544), (*(_DWORD *)(v26 + 500) & 0x1000) != 0)
      && (*(_DWORD *)(v26 + 1532) & 0x4000000) == 0 )
    {
      v20 = 0;
    }
    *((_WORD *)v6 + 29) = v20;
    if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)v6, 0, v42, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v27) = 1;
        KiTraceSetTimer(v6, 0LL, v27);
      }
      else
      {
        _InterlockedAnd(v6, 0xFFFFFF7F);
      }
      return KiSwapThread(BugCheckParameter1, CurrentPrcb);
    }
LABEL_63:
    KiTimerWaitTest(CurrentPrcb, v6, 0LL);
    return KiSwapThread(BugCheckParameter1, CurrentPrcb);
  }
  if ( (v15 & 7) == 0 )
  {
    if ( (v15 & 0x20) != 0 )
    {
      *(_QWORD *)(BugCheckParameter1 + 200) = 256LL;
      *(_QWORD *)(BugCheckParameter1 + 976) = 0LL;
    }
    else
    {
      v29 = (v15 & 0x40) == 0;
      v8 = 1;
      v30 = 192LL;
      if ( v29 )
        v30 = 257LL;
      *(_QWORD *)(BugCheckParameter1 + 200) = v30;
      *(_QWORD *)(BugCheckParameter1 + 976) = 0LL;
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 388) = 2;
  if ( *(_BYTE *)(BugCheckParameter1 + 643) == 15 )
  {
    v31 = *(_QWORD *)(BugCheckParameter1 + 232);
    if ( v31 )
    {
      if ( (*(_BYTE *)v31 & 0x7F) == 0x15 )
      {
        v32 = (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 540);
        *(_DWORD *)(BugCheckParameter1 + 540) = v32;
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 4 * v32 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 40));
      }
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  if ( a3 )
    *(_DWORD *)(BugCheckParameter1 + 116) &= ~0x200u;
  v33 = a6;
  v28 = *(_QWORD *)(BugCheckParameter1 + 200);
  if ( a6 )
    *a6 = *(_QWORD *)(BugCheckParameter1 + 976);
  if ( v8 )
  {
    v34 = *(char *)(BugCheckParameter1 + 391);
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33) )
        {
          HvlNotifyLongSpinWait(v35);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    if ( v28 == 257 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v34 + BugCheckParameter1 + 114) )
        {
          *(_BYTE *)(v34 + BugCheckParameter1 + 114) = 0;
        }
        else if ( (_BYTE)v34 )
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
  v36 = &v9[6 * *(unsigned __int8 *)(BugCheckParameter1 + 587)];
  do
  {
    if ( *((_BYTE *)v9 + 17) < 5u )
    {
      v37 = (volatile signed __int32 *)v9[4];
      KiAcquireKobjectLockSafe(v37);
      if ( *((_BYTE *)v9 + 17) == 4 )
      {
        v38 = (__int64 *)*v9;
        v39 = (__int64 **)v9[1];
        if ( *(__int64 **)(*v9 + 8) != v9 || *v39 != v9 )
          goto LABEL_112;
        *v39 = v38;
        v38[1] = (__int64)v39;
      }
      _InterlockedAnd(v37, 0xFFFFFF7F);
    }
    v9 += 6;
  }
  while ( v9 != v36 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64 *)CurrentPrcb, 1u, 0, 0);
  KiExitThreadWait(CurrentPrcb, BugCheckParameter1);
  return v28;
}
