/*
 * XREFs of MiReturnCloneCharges @ 0x140206FD0
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiDecrementCloneBlock @ 0x140294E14 (MiDecrementCloneBlock.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 */

__int64 __fastcall MiReturnCloneCharges(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
    result = MiReturnCommit(a1, 1LL, 0LL);
  if ( (a2 & 2) != 0 )
  {
    result = MiReturnCommit(a1, 1LL, 0LL);
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
  }
  if ( (a2 & 4) != 0 )
  {
    MiReturnResident(a1, 1LL);
    return MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
  }
  return result;
}
