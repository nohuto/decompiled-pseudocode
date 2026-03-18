/*
 * XREFs of MiReturnCloneCharges @ 0x14033FDD4
 * Callers:
 *     MiDecrementCloneBlock @ 0x140224FE8 (MiDecrementCloneBlock.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 * Callees:
 *     MiReturnCrossPartitionCharges @ 0x14022F804 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

void __fastcall MiReturnCloneCharges(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    MiReturnCommit(a1, 1LL, 0);
  if ( (a2 & 2) != 0 )
  {
    MiReturnCommit(a1, 1LL, 0);
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
  }
  if ( (a2 & 4) != 0 )
  {
    MiReturnResident(a1, 1uLL);
    MiReturnCrossPartitionCharges(a1, 6u, 0);
  }
}
