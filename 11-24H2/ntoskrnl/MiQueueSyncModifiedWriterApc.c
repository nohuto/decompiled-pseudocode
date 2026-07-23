/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x1404A73D8
 * Callers:
 *     MiStoreDeletePartition @ 0x14068CF54 (MiStoreDeletePartition.c)
 * Callees:
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  __int64 v5; // rax

  v5 = *(_QWORD *)(a1 + 992);
  *(_WORD *)(a2 + 80) = 0;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 8) = v5;
  *(_QWORD *)(a2 + 48) = a3;
  *(_QWORD *)(a2 + 32) = xHalTimerWatchdogStop;
  *(_WORD *)a2 = 18;
  *(_BYTE *)(a2 + 2) = 88;
  *(_QWORD *)(a2 + 56) = a4 & -(__int64)(a3 != 0);
  *(_BYTE *)(a2 + 82) = 0;
  KeInsertQueueApc(a2, (__int64)Object, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
