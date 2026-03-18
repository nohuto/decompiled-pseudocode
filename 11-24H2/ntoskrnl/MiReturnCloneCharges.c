/*
 * XREFs of MiReturnCloneCharges @ 0x14023EE80
 * Callers:
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiDecrementCloneBlock @ 0x1402F9160 (MiDecrementCloneBlock.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14020F5E4 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 */

LONG __fastcall MiReturnCloneCharges(__int64 a1, char a2)
{
  LONG result; // eax

  if ( (a2 & 1) != 0 )
    result = MiReturnCommit(a1, 1LL, 0LL);
  if ( (a2 & 2) != 0 )
  {
    result = MiReturnCommit(a1, 1LL, 0LL);
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
  }
  if ( (a2 & 4) != 0 )
  {
    MiReturnResident(a1, 1uLL);
    return MiReturnCrossPartitionCharges(a1, 6u, 0, 1LL);
  }
  return result;
}
