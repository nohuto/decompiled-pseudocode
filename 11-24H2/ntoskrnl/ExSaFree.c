/*
 * XREFs of ExSaFree @ 0x1402B9C7C
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x1402B9C50 (ExCleanupAutoExpandPushLock.c)
 *     RtlpHpHeapDestroy @ 0x14060271C (RtlpHpHeapDestroy.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     ExpSaAllocatorFree @ 0x140360F4C (ExpSaAllocatorFree.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 */

void __fastcall ExSaFree(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v2 - 2))
                             + 8 * (v1 ^ (unsigned int)(1 << v2))
                             + 8)
                 + 16LL);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v4);
  KeLeaveGuardedRegion();
}
