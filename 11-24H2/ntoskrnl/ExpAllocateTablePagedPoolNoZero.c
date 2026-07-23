/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x14094D42C
 * Callers:
 *     ExpAllocateLowLevelTable @ 0x14094D3F8 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x14094D7D0 (ExpAllocateTablePagedPool.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x14089EAD0 (PsChargeProcessPagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void *__fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, ULONG_PTR a2)
{
  void *Pool2; // rbx

  Pool2 = (void *)ExAllocatePool2(0x100uLL, a2, 0x6274624Fu);
  if ( Pool2 && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(Pool2, 0x6274624Fu);
    return 0LL;
  }
  return Pool2;
}
