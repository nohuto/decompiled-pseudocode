/*
 * XREFs of FsRtlpAllocateOplock @ 0x140A1F320
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403EE930 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 FsRtlpAllocateOplock()
{
  __int64 v0; // rax
  __int64 Pool2; // [rsp+20h] [rbp-18h]

  Pool2 = ExAllocatePool2(0x120uLL);
  v0 = ExAllocatePool2(0x60uLL);
  *(_QWORD *)(Pool2 + 152) = v0;
  *(_DWORD *)v0 = 1;
  *(_QWORD *)(v0 + 8) = 0LL;
  *(_DWORD *)(v0 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v0 + 24), SynchronizationEvent, 0);
  *(_QWORD *)(Pool2 + 48) = Pool2 + 40;
  *(_QWORD *)(Pool2 + 40) = Pool2 + 40;
  *(_QWORD *)(Pool2 + 64) = Pool2 + 56;
  *(_QWORD *)(Pool2 + 56) = Pool2 + 56;
  *(_QWORD *)(Pool2 + 80) = Pool2 + 72;
  *(_QWORD *)(Pool2 + 72) = Pool2 + 72;
  *(_QWORD *)(Pool2 + 96) = Pool2 + 88;
  *(_QWORD *)(Pool2 + 88) = Pool2 + 88;
  *(_QWORD *)(Pool2 + 112) = Pool2 + 104;
  *(_QWORD *)(Pool2 + 104) = Pool2 + 104;
  *(_QWORD *)(Pool2 + 128) = Pool2 + 120;
  *(_QWORD *)(Pool2 + 120) = Pool2 + 120;
  *(_DWORD *)(Pool2 + 144) = 1;
  return Pool2;
}
