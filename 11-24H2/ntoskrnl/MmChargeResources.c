/*
 * XREFs of MmChargeResources @ 0x14033BB60
 * Callers:
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x1402E98DC (SmKmAllocateMdlForLock.c)
 * Callees:
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 */

__int64 __fastcall MmChargeResources(__int64 *a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // r14
  int v4; // ebp

  v3 = *a1;
  v4 = 0;
  if ( (a3 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident(*a1, a2, 0LL) )
      return 0LL;
    v4 = 2;
  }
  if ( (a3 & 1) != 0 && !(unsigned int)MiChargeCommit(v3, a2, 1) )
  {
    if ( v4 )
      MiReturnResident(*a1, a2);
    return 0LL;
  }
  return 1LL;
}
