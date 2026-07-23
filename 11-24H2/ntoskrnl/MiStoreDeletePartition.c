/*
 * XREFs of MiStoreDeletePartition @ 0x14068CF54
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiStoreDrainWriteSupports @ 0x140470054 (MiStoreDrainWriteSupports.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404A73D8 (MiQueueSyncModifiedWriterApc.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404A7624 (MmStoreFlushOutstandingEvictions.c)
 *     MiStoreReleaseReservedPageCharges @ 0x14068D8B4 (MiStoreReleaseReservedPageCharges.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreDeletePartition(__int64 a1)
{
  __int64 result; // rax
  KIRQL v3; // bl
  void *v4; // rcx
  __int64 Object; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-41h] BYREF
  __int64 v7; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-29h] BYREF
  int v9[24]; // [rsp+78h] [rbp-9h] BYREF

  memset_0(v9, 0, 0x58uLL);
  result = *(unsigned int *)(a1 + 1204);
  if ( (_DWORD)result != -1 )
  {
    Object = 393216LL;
    v6[1] = v6;
    v7 = 393216LL;
    v6[0] = v6;
    v8[2] = a1;
    v8[1] = v8;
    v8[0] = v8;
    MiQueueSyncModifiedWriterApc(a1, (__int64)v9, (__int64)MiStoreRundownWritesApc, (__int64)&Object, &v7);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    MmStoreFlushOutstandingEvictions(*(_QWORD **)(a1 + 184));
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1704));
    KeSetEvent((PRKEVENT)(a1 + 1352), 0, 0);
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1704), v3);
    KeWaitForSingleObject(*(PVOID *)(a1 + 1320), WrKernel, 0, 0, 0LL);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 1320), 0x66506D4Du);
    v4 = *(void **)(a1 + 1416);
    *(_QWORD *)(a1 + 1320) = 0LL;
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 1416) = 0LL;
    MiStoreDrainWriteSupports((_SLIST_HEADER *)a1);
    return MiStoreReleaseReservedPageCharges(a1);
  }
  return result;
}
