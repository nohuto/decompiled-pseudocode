/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x14029FAB0
 * Callers:
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402A1FC8 (KiPriQueueThreadPriorityChanged.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 *     KiSwitchPriQueue @ 0x140494D80 (KiSwitchPriQueue.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiActivateWaiterKQueue @ 0x1402A03F0 (KiActivateWaiterKQueue.c)
 *     KiAttemptFastRemovePriQueue @ 0x1402A1AE0 (KiAttemptFastRemovePriQueue.c)
 *     KiWakePriQueueWaiter @ 0x1402E6BE0 (KiWakePriQueueWaiter.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // ett
  ULONG_PTR v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  ULONG_PTR v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (_DWORD *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v5);
    LODWORD(result) = *v5 & 0x7FFFFFFF;
    while ( 1 )
    {
      v7 = (unsigned int)(result + 1);
      v8 = result;
      result = (unsigned int)_InterlockedCompareExchange(v5, v7, result);
      if ( v8 == (_DWORD)result )
        break;
      if ( (int)result < 0 )
      {
        LOBYTE(a2) = -1;
        result = ExpWaitForSpinLockSharedAndAcquire(v5, a2);
        break;
      }
    }
  }
  else
  {
    result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, 0xFFu);
  }
  v9 = *(_QWORD *)(a1 + 232);
  if ( v9 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232));
    result = *(_QWORD *)(a1 + 232);
    if ( !result )
    {
      _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
      v9 = 0LL;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(v5, 0xBFFFFFFF);
    _InterlockedDecrement(v5);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr, a3);
  }
  if ( v9 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v9 & 0x7F) == 0x15 )
      {
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
            {
              HvlNotifyLongSpinWait(v14);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(a1 + 64) );
        }
        v15 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 4 * v15 + 536));
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 40));
      }
      v10 = *a3;
      v11 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v11 != a3 )
        goto LABEL_21;
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v9 & 0x7F) != 0x15 )
      return KiActivateWaiterKQueue(v9);
    result = v9 + 8;
    if ( *(_QWORD *)result == result )
      goto LABEL_12;
    if ( !*(_DWORD *)(v9 + 4) )
      goto LABEL_12;
    result = KiAttemptFastRemovePriQueue(v9);
    v12 = (_QWORD *)result;
    if ( !result )
      goto LABEL_12;
    result = KiWakePriQueueWaiter(KeGetCurrentPrcb(), v9, result, 0LL);
    if ( (_BYTE)result )
      goto LABEL_12;
    ++*(_DWORD *)(v9 + 4);
    v13 = v9 + 24;
    result = *(_QWORD *)(v9 + 24);
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) == v13 )
    {
      *v12 = result;
      v12[1] = v13;
      *(_QWORD *)(result + 8) = v12;
      *(_QWORD *)v13 = v12;
LABEL_12:
      _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
      return result;
    }
LABEL_21:
    __fastfail(3u);
  }
  return result;
}
