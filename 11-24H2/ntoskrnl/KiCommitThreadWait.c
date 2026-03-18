/*
 * XREFs of KiCommitThreadWait @ 0x140340C20
 * Callers:
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x14020765C (KeWaitForAlertByThreadId.c)
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 * Callees:
 *     KiExitThreadWait @ 0x14024EFB0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x14024F1A0 (KiPerformWaitDeferredWork.c)
 *     KiDecrementProcessStackCount @ 0x1402699D0 (KiDecrementProcessStackCount.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402A61D0 (KiActivateWaiterQueueWithThreadLock.c)
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KiInsertTimerTable @ 0x140334E60 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x140401CDC (KiTraceSetTimer.c)
 *     KiComputeDueTime @ 0x14043F680 (KiComputeDueTime.c)
 */

__int64 __fastcall KiCommitThreadWait(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        int a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  char v8; // r15
  __int64 *v9; // rsi
  int v11; // eax
  struct _KPRCB *CurrentPrcb; // r13
  int v13; // ebp
  unsigned int v14; // ebx
  char v15; // al
  char v16; // dl
  unsigned int v17; // ebx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v19; // rax
  __int16 v20; // r15
  BOOL v21; // esi
  char v22; // bl
  __int64 v23; // rax
  __int64 v24; // rbp
  ULONG_PTR v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r14
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rbp
  unsigned int v35; // ebx
  __int64 *v36; // rbp
  volatile signed __int32 *v37; // rbx
  __int64 *v38; // rcx
  __int64 **v39; // rax
  int v41; // [rsp+30h] [rbp-58h]
  unsigned int v42; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v43; // [rsp+A8h] [rbp+20h]

  v43 = a4;
  v6 = BugCheckParameter1 + 256;
  v42 = 0;
  v8 = 0;
  v9 = a2;
  _m_prefetchw((const void *)(BugCheckParameter1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(BugCheckParameter1 + 116) |= 0x200u;
    *(_DWORD *)v6 |= 0x40000080u;
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
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
    v16 = a5;
    *(_BYTE *)(BugCheckParameter1 + 112) = v15 & 0xF8 | 1;
    KiPerformWaitDeferredWork(BugCheckParameter1, v16, 1, 0LL);
    if ( v13 )
    {
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
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
    if ( *(_BYTE *)(BugCheckParameter1 + 643) == 15 || (v25 = *(_QWORD *)(BugCheckParameter1 + 232)) == 0 )
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    else
      KiActivateWaiterQueueWithThreadLock(BugCheckParameter1, v25);
    if ( v21 )
      KiDecrementProcessStackCount(*(_QWORD *)(BugCheckParameter1 + 184));
    *(_BYTE *)(BugCheckParameter1 + 565) = 0;
    if ( !a3 )
      return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb, a6);
    if ( a3 == 2 )
    {
      v26 = v24 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(BugCheckParameter1 + 248);
      *(_QWORD *)(v6 + 24) = v26;
      v26 >>= 18;
      v42 = (unsigned __int8)v26;
      v41 = *(_DWORD *)v6;
      BYTE1(v41) = BYTE1(*(_DWORD *)v6) & 0xFE;
      BYTE2(v41) = v26;
      *(_DWORD *)v6 = v41;
      if ( v22 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1792LL));
    }
    else if ( !(unsigned int)KiComputeDueTime(v6, v24, 0LL, &v42) )
    {
      goto LABEL_63;
    }
    if ( KiGlobalTimerResolutionRequests
      || (v27 = *(_QWORD *)(BugCheckParameter1 + 544), (*(_DWORD *)(v27 + 500) & 0x1000) != 0)
      && (*(_DWORD *)(v27 + 1532) & 0x4000000) == 0 )
    {
      v20 = 0;
    }
    *(_WORD *)(v6 + 58) = v20;
    if ( KiInsertTimerTable((__int64)CurrentPrcb, v6, 0LL, v42, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v28) = 1;
        KiTraceSetTimer(v6, 0LL, v28);
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
  if ( (v15 & 7) == 0 )
  {
    if ( (v15 & 0x20) != 0 )
    {
      *(_QWORD *)(BugCheckParameter1 + 200) = 256LL;
      *(_QWORD *)(BugCheckParameter1 + 976) = 0LL;
    }
    else
    {
      v30 = (v15 & 0x40) == 0;
      v8 = 1;
      v31 = 192LL;
      if ( v30 )
        v31 = 257LL;
      *(_QWORD *)(BugCheckParameter1 + 200) = v31;
      *(_QWORD *)(BugCheckParameter1 + 976) = 0LL;
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 388) = 2;
  if ( *(_BYTE *)(BugCheckParameter1 + 643) == 15 )
  {
    v32 = *(_QWORD *)(BugCheckParameter1 + 232);
    if ( v32 )
    {
      if ( (*(_BYTE *)v32 & 0x7F) == 0x15 )
      {
        v33 = (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 540);
        *(_DWORD *)(BugCheckParameter1 + 540) = v33;
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 4 * v33 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 40));
      }
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  if ( a3 )
    *(_DWORD *)(BugCheckParameter1 + 116) &= ~0x200u;
  v29 = *(_QWORD *)(BugCheckParameter1 + 200);
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
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
    if ( v29 == 257 )
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
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  KiExitThreadWait(CurrentPrcb, BugCheckParameter1, a5);
  return v29;
}
