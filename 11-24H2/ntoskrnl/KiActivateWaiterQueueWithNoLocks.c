/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x1402A5864
 * Callers:
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KeTerminateThread @ 0x1402A6488 (KeTerminateThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1404337D0 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchPriQueue @ 0x140493CB4 (KiSwitchPriQueue.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiActivateWaiterKQueue @ 0x1402A6120 (KiActivateWaiterKQueue.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiWakePriQueueWaiter @ 0x1403248F0 (KiWakePriQueueWaiter.c)
 *     KiAttemptFastRemovePriQueue @ 0x140433950 (KiAttemptFastRemovePriQueue.c)
 */

__int64 __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _DWORD *v5; // rdi
  __int64 result; // rax
  int v7; // ett
  ULONG_PTR v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  ULONG_PTR v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v5 = (_DWORD *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v5);
    LODWORD(result) = *v5 & 0x7FFFFFFF;
    while ( 1 )
    {
      v7 = result;
      result = (unsigned int)_InterlockedCompareExchange(v5, result + 1, result);
      if ( v7 == (_DWORD)result )
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
    LOBYTE(a2) = -1;
    result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, a2);
  }
  v8 = *(_QWORD *)(a1 + 232);
  if ( v8 )
  {
    KiAcquireKobjectLockSafe(*(_QWORD *)(a1 + 232));
    result = *(_QWORD *)(a1 + 232);
    if ( !result )
    {
      _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
      v8 = 0LL;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(v5, 0xBFFFFFFF);
    _InterlockedDecrement(v5);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
  }
  if ( v8 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
      {
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v13);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(a1 + 64) );
        }
        v14 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 4 * v14 + 536));
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v8 + 40));
      }
      v9 = *a3;
      v10 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v10 != a3 )
        goto LABEL_23;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v8 & 0x7F) != 0x15 )
      return KiActivateWaiterKQueue(v8);
    result = v8 + 8;
    if ( *(_QWORD *)result == result )
      goto LABEL_14;
    if ( !*(_DWORD *)(v8 + 4) )
      goto LABEL_14;
    result = KiAttemptFastRemovePriQueue(v8);
    v11 = (_QWORD *)result;
    if ( !result )
      goto LABEL_14;
    result = KiWakePriQueueWaiter(KeGetCurrentPrcb(), v8, result, 0LL);
    if ( (_BYTE)result )
      goto LABEL_14;
    ++*(_DWORD *)(v8 + 4);
    v12 = v8 + 24;
    result = *(_QWORD *)(v8 + 24);
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) == v12 )
    {
      *v11 = result;
      v11[1] = v12;
      *(_QWORD *)(result + 8) = v11;
      *(_QWORD *)v12 = v11;
LABEL_14:
      _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
      return result;
    }
LABEL_23:
    __fastfail(3u);
  }
  return result;
}
