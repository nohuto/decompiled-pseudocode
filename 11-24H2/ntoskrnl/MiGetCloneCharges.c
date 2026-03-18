/*
 * XREFs of MiGetCloneCharges @ 0x14036E068
 * Callers:
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiChargeCrossPartitionSharedPage @ 0x14036DFA8 (MiChargeCrossPartitionSharedPage.c)
 *     MiWriteSharedDemandZeroPte @ 0x1403951B4 (MiWriteSharedDemandZeroPte.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiGetCrossPartitionCharges @ 0x14036E19C (MiGetCrossPartitionCharges.c)
 */

__int64 __fastcall MiGetCloneCharges(__int64 a1, char a2)
{
  int v4; // edi

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1uLL, 0) )
  {
    if ( (a2 & 2) != 0 )
    {
      if ( !(unsigned int)MiChargeCommit(a1, 1uLL, 0) )
      {
        if ( v4 )
          MiReturnCommit(a1, 1LL, 0);
        return 0LL;
      }
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 19640), 1uLL);
    }
    if ( (a2 & 4) == 0 )
      return 1LL;
    if ( !(unsigned int)MiChargeResident((ULONG *)a1, 1uLL, 0LL) )
    {
      if ( v4 )
        MiReturnCommit(a1, 1LL, 0);
      if ( (a2 & 2) != 0 )
      {
        MiReturnCommit(a1, 1LL, 0);
        _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
      }
      return 0LL;
    }
    if ( (int)MiGetCrossPartitionCharges(a1, 6LL, 0LL, 1LL) >= 0 )
      return 1LL;
    if ( v4 )
      MiReturnCommit(a1, 1LL, 0);
    if ( (a2 & 2) != 0 )
    {
      MiReturnCommit(a1, 1LL, 0);
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
    }
    MiReturnResident(a1, 1uLL);
  }
  return 0LL;
}
