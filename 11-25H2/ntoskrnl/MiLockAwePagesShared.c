/*
 * XREFs of MiLockAwePagesShared @ 0x1404AE710
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407EA270 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407EA520 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14029A9C0 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 64, 0LL);
}
