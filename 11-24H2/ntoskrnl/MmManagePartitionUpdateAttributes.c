/*
 * XREFs of MmManagePartitionUpdateAttributes @ 0x1407FD274
 * Callers:
 *     NtManagePartition @ 0x140933FF0 (NtManagePartition.c)
 * Callees:
 *     MiUpdateSlabContextSlabSize @ 0x1406889D4 (MiUpdateSlabContextSlabSize.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407FEF40 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmManagePartitionUpdateAttributes(ULONG **a1, __int64 *a2, KPROCESSOR_MODE a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned int v5; // ebx
  ULONG *v7; // rdi
  __int64 v9; // rdx

  v4 = *a2;
  v5 = 0;
  if ( *a2 )
  {
    if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      return 3221225485LL;
    v7 = *a1;
    if ( (v4 & 4) != 0 )
    {
      if ( (v4 & 0xFFFFFFFFFFFFFFFBuLL) == 0 && (v7[1] & 0x80u) != 0 )
        return MiUpdateSpecialPurposeMemoryCacheEligibility(*a1, a4);
      return 3221225485LL;
    }
    if ( (v7[1] & 0x80u) == 0 )
    {
      if ( (v4 & 8) != 0 )
      {
        if ( (v4 & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
        {
          if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
          {
            LOBYTE(v5) = a4 == 0;
            return MiUpdateSlabContextSlabSize((__int64)v7, v9, v5);
          }
          return 3221225569LL;
        }
        return 3221225485LL;
      }
      if ( a4 )
      {
        if ( v7 == &MiSystemPartition )
          return 3221225485LL;
        if ( a3 )
          return 3221225569LL;
        if ( (v4 & 1) == 0 )
          return (v4 & 2) != 0 ? 0xC00000BB : 0;
      }
    }
    return 3221225659LL;
  }
  return 0LL;
}
