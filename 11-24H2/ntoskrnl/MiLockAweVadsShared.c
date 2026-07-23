/*
 * XREFs of MiLockAweVadsShared @ 0x1404BE2A0
 * Callers:
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14031F040 (ExAcquireAutoExpandPushLockShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiUnlockAweVadsShared @ 0x1404B5F4C (MiUnlockAweVadsShared.c)
 */

ULONG_PTR __fastcall MiLockAweVadsShared(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  ULONG_PTR result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v1 + 1040);
  --*(_WORD *)(a1 + 486);
  while ( 1 )
  {
    result = ExAcquireAutoExpandPushLockShared(v3 + 1112, 0LL);
    if ( !*(_QWORD *)(v1 + 624) )
      break;
    MiUnlockAweVadsShared(a1, result);
    MiCopyOnWriteCheckConditions(v1 + 1024, -1073740748, 0LL);
    --*(_WORD *)(a1 + 486);
  }
  return result;
}
