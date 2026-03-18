/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x14093C154
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x14093BCFC (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14093C120 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x140896630 (PsChargeProcessPagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void *__fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, unsigned __int64 a2)
{
  void *Pool2; // rbx

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(Pool2, 0x6274624Fu);
    return 0LL;
  }
  return Pool2;
}
