/*
 * XREFs of MmChargeResources @ 0x140212800
 * Callers:
 *     SmFpAllocate @ 0x14037C660 (SmFpAllocate.c)
 *     SmKmAllocateMdlForLock @ 0x14037C85C (SmKmAllocateMdlForLock.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
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
