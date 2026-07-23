/*
 * XREFs of MiGetCloneCharges @ 0x140269B50
 * Callers:
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiChargeCrossPartitionSharedPage @ 0x140269A90 (MiChargeCrossPartitionSharedPage.c)
 *     MiWriteSharedDemandZeroPte @ 0x14026A080 (MiWriteSharedDemandZeroPte.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 * Callees:
 *     MiGetCrossPartitionCharges @ 0x140269C84 (MiGetCrossPartitionCharges.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 */

__int64 __fastcall MiGetCloneCharges(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v6; // edi

  v6 = a2 & 1;
  if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1LL, 0LL, a4) )
  {
    if ( (a2 & 2) != 0 )
    {
      if ( !(unsigned int)MiChargeCommit(a1, 1LL, 0LL, a4) )
      {
        if ( v6 )
          MiReturnCommit(a1, 1LL, 0LL);
        return 0LL;
      }
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 19640), 1uLL);
    }
    if ( (a2 & 4) == 0 )
      return 1LL;
    if ( !(unsigned int)MiChargeResident(a1, 1LL, 0LL) )
    {
      if ( v6 )
        MiReturnCommit(a1, 1LL, 0LL);
      if ( (a2 & 2) != 0 )
      {
        MiReturnCommit(a1, 1LL, 0LL);
        _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
      }
      return 0LL;
    }
    if ( (int)MiGetCrossPartitionCharges(a1, 6LL, 0LL, 1LL) >= 0 )
      return 1LL;
    if ( v6 )
      MiReturnCommit(a1, 1LL, 0LL);
    if ( (a2 & 2) != 0 )
    {
      MiReturnCommit(a1, 1LL, 0LL);
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
    }
    MiReturnResident(a1, 1LL);
  }
  return 0LL;
}
