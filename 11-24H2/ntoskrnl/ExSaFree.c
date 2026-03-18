/*
 * XREFs of ExSaFree @ 0x14043A42C
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x14043A400 (ExCleanupAutoExpandPushLock.c)
 *     RtlpHpHeapDestroy @ 0x1406050DC (RtlpHpHeapDestroy.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 * Callees:
 *     ExpSaAllocatorFree @ 0x1402B980C (ExpSaAllocatorFree.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 */

void __fastcall ExSaFree(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  unsigned int v4; // ecx
  unsigned __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rdx
  ULONG_PTR v8; // rcx

  v3 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v4, v3);
  v5 = ((unsigned __int64)a2 + 7) >> 3;
  CurrentThread = KeGetCurrentThread();
  v7 = *(__int64 **)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v4 - 2)) + 8 * (v3 ^ (unsigned int)(1 << v4)) + 8);
  v8 = v7[2];
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v8, v7, a1, v5);
  KeLeaveGuardedRegion();
}
