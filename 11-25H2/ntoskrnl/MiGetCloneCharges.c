/*
 * XREFs of MiGetCloneCharges @ 0x1402CF39C
 * Callers:
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiChargeCrossPartitionSharedPage @ 0x1402CF2DC (MiChargeCrossPartitionSharedPage.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x1402CFFF4 (MiWriteSharedDemandZeroPte.c)
 * Callees:
 *     MiGetCrossPartitionCharges @ 0x140215920 (MiGetCrossPartitionCharges.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
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
          MiReturnCommit(a1, 1LL, 0LL);
        return 0LL;
      }
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 19640), 1uLL);
    }
    if ( (a2 & 4) == 0 )
      return 1LL;
    if ( !(unsigned int)MiChargeResident((ULONG *)a1, 1uLL, 0LL) )
    {
      if ( v4 )
        MiReturnCommit(a1, 1LL, 0LL);
      if ( (a2 & 2) != 0 )
      {
        MiReturnCommit(a1, 1LL, 0LL);
        _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
      }
      return 0LL;
    }
    if ( (int)MiGetCrossPartitionCharges(a1, 6u, 0, 1LL) >= 0 )
      return 1LL;
    if ( v4 )
      MiReturnCommit(a1, 1LL, 0LL);
    if ( (a2 & 2) != 0 )
    {
      MiReturnCommit(a1, 1LL, 0LL);
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 19640));
    }
    MiReturnResident(a1, 1uLL);
  }
  return 0LL;
}
