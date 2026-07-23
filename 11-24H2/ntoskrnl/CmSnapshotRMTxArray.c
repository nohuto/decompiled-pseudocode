/*
 * XREFs of CmSnapshotRMTxArray @ 0x140963404
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     CmpReserveRollbackPacketSpace @ 0x1406F810C (CmpReserveRollbackPacketSpace.c)
 *     CmpAddEnlistmentToRollbackPacket @ 0x1407E0568 (CmpAddEnlistmentToRollbackPacket.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  bool v5; // zf
  unsigned int v6; // eax
  __int64 NextElement; // rax
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = a1 + 16;
    while ( 1 )
    {
      LOCK_TRANSACTION_LIST();
      v4 = 0;
      v10 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v3, &v10, 0LL);
        if ( !NextElement )
          break;
        v5 = (*(_DWORD *)(NextElement + 48) & 8) == 0;
        v6 = v4 + 1;
        if ( !v5 )
          v6 = v4;
        v4 = v6;
      }
      if ( v4 <= a2[1] - *a2 )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      result = CmpReserveRollbackPacketSpace(a2, v4);
      if ( (int)result < 0 )
        return result;
    }
    v10 = 0LL;
    while ( 1 )
    {
      v9 = CmListGetNextElement(v3, &v10, 0LL);
      if ( !v9 )
        break;
      if ( (*(_DWORD *)(v9 + 48) & 8) == 0 )
        CmpAddEnlistmentToRollbackPacket((__int64)a2, *(void **)(v9 + 72));
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
