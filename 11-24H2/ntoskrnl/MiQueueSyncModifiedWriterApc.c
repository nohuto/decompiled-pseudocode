/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x1404ACE38
 * Callers:
 *     MiStoreDeletePartition @ 0x14068BE24 (MiStoreDeletePartition.c)
 * Callees:
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
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
