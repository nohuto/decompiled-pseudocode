/*
 * XREFs of CmpTransMgrRollback @ 0x140A06460
 * Callers:
 *     CmpRmUnDoPhase @ 0x1407E0B98 (CmpRmUnDoPhase.c)
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 *     CmpAbortLightWeightTransaction @ 0x140A06250 (CmpAbortLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140AA88D4 (CmRmFinalizeRecovery.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     CmListGetNextElement @ 0x140BB9940 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  __int64 NextElement; // rax
  int v5; // edx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  *a2 = 0;
  LOCK_TRANSACTION_LIST();
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a1 + 16, &v7, 0LL);
    if ( !NextElement )
      break;
    v5 = *(_DWORD *)(NextElement + 64);
    if ( (v5 & 1) == 0 )
    {
      ++*a2;
      if ( !*(_DWORD *)(NextElement + 68) && !*(_DWORD *)(NextElement + 88) )
        *(_DWORD *)(NextElement + 88) = *(_DWORD *)(*(_QWORD *)(NextElement + 48) + 40LL);
      *(_DWORD *)(NextElement + 64) = v5 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
