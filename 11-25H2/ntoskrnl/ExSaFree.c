/*
 * XREFs of ExSaFree @ 0x14036D37C
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x14036D350 (ExCleanupAutoExpandPushLock.c)
 *     RtlpHpHeapDestroy @ 0x1405F8D9C (RtlpHpHeapDestroy.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 * Callees:
 *     ExpSaAllocatorFree @ 0x14031FD84 (ExpSaAllocatorFree.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 */

void __fastcall ExSaFree(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  unsigned int v4; // ecx
  unsigned __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rcx

  v3 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v4, v3);
  v5 = ((unsigned __int64)a2 + 7) >> 3;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v4 - 2)) + 8 * (v3 ^ (unsigned int)(1 << v4)) + 8);
  v8 = *(unsigned __int64 **)(v7 + 16);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v8, v7, a1, v5);
  KeLeaveGuardedRegion();
}
