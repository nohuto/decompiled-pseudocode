/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x140971B08
 * Callers:
 *     ExpAllocateLowLevelTable @ 0x140971AD4 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1409726F4 (ExpAllocateTablePagedPool.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1408B0170 (PsChargeProcessPagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
