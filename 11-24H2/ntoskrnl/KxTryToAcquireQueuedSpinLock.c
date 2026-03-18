/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x1402DA128
 * Callers:
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiCheckProcessShadow @ 0x1402E1370 (MiCheckProcessShadow.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E2E70 (MiReacquireHigherPageTableLock.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x1405BC0C0 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1405BC150 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402D5388 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(a2);
    if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
      _mm_pause();
    else
      return 1;
  }
  else
  {
    return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(a1, a2);
  }
  return v2;
}
