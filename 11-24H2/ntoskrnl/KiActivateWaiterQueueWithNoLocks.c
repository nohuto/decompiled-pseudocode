/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94
 * Callers:
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402D8290 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchPriQueue @ 0x14048E740 (KiSwitchPriQueue.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KiActivateWaiterKQueue @ 0x1402D5850 (KiActivateWaiterKQueue.c)
 *     KiAttemptFastRemovePriQueue @ 0x1402D6CB0 (KiAttemptFastRemovePriQueue.c)
 */

__int64 __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 result; // rax
  int v8; // ett
  ULONG_PTR v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  ULONG_PTR v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v6 = (_DWORD *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v6);
    LODWORD(result) = *v6 & 0x7FFFFFFF;
    while ( 1 )
    {
      v8 = result;
      result = (unsigned int)_InterlockedCompareExchange(v6, result + 1, result);
      if ( v8 == (_DWORD)result )
        break;
      if ( (int)result < 0 )
      {
        LOBYTE(a2) = -1;
        result = ExpWaitForSpinLockSharedAndAcquire(v6, a2, (__int64)a3, a4);
        break;
      }
    }
  }
  else
  {
    result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v6, 0xFFu);
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
    _InterlockedAnd(v6, 0xBFFFFFFF);
    _InterlockedDecrement(v6);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v6, retaddr);
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
              && KiCheckVpBackingLongSpinWaitHypercall() )
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
        goto LABEL_23;
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v9 & 0x7F) != 0x15 )
      return KiActivateWaiterKQueue(v9);
    result = v9 + 8;
    if ( *(_QWORD *)result == result )
      goto LABEL_14;
    if ( !*(_DWORD *)(v9 + 4) )
      goto LABEL_14;
    result = KiAttemptFastRemovePriQueue(v9);
    v12 = (_QWORD *)result;
    if ( !result )
      goto LABEL_14;
    result = KiWakePriQueueWaiter((__int64)KeGetCurrentPrcb(), v9, result, 0);
    if ( (_BYTE)result )
      goto LABEL_14;
    ++*(_DWORD *)(v9 + 4);
    v13 = v9 + 24;
    result = *(_QWORD *)(v9 + 24);
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) == v13 )
    {
      *v12 = result;
      v12[1] = v13;
      *(_QWORD *)(result + 8) = v12;
      *(_QWORD *)v13 = v12;
LABEL_14:
      _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
      return result;
    }
LABEL_23:
    __fastfail(3u);
  }
  return result;
}
