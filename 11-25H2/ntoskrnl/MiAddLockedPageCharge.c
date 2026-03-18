/*
 * XREFs of MiAddLockedPageCharge @ 0x14022C890
 * Callers:
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14022B5E4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiHandleCollidedFault @ 0x14033D7C8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiMakeFaultPfnActive @ 0x1403FD984 (MiMakeFaultPfnActive.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiMirrorPerformBrownWrites @ 0x140455630 (MiMirrorPerformBrownWrites.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiMapSystemCachePage @ 0x1404C945C (MiMapSystemCachePage.c)
 *     MiLockDownWorkingSet @ 0x1404CA1BC (MiLockDownWorkingSet.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x1406701CC (MiPurgeBadFileOnlyPages.c)
 *     MiDbgMarkPfnModified @ 0x1406734BC (MiDbgMarkPfnModified.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  int v6; // r8d
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // r14
  char v13; // bp
  ULONG *v14; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v17; // ett
  unsigned int v18; // eax

  if ( (a2 & 1) == 0 && (unsigned __int16)*(_DWORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  v5 = 1;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    goto LABEL_9;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v8 = 0;
  if ( (_WORD)v6 )
  {
    if ( (_WORD)v6 == 1 )
    {
      if ( v7 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
        v8 = 1;
      if ( !v8 )
        goto LABEL_9;
    }
    else if ( (_WORD)v6 != 2 || !v7 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      goto LABEL_9;
    }
  }
  v11 = a2 & 1;
  v12 = (unsigned int)-(v11 != 0);
  v13 = 0;
  if ( *(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    a4 = 0xFFFFF68000000000uLL;
    if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
      || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
    {
      v14 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
LABEL_14:
      if ( v14 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
        {
          v17 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v17 == CachedResidentAvailable )
            goto LABEL_9;
        }
      }
      v18 = MiChargePartitionResidentAvailable((__int64)v14, 1uLL, v12);
      if ( !v18 && v13 )
      {
        MiReturnCommit(v14, 1LL, 0LL);
        return 0LL;
      }
      v5 = v18;
      if ( !v18 )
        return 0LL;
LABEL_9:
      v9 = *(_DWORD *)(a1 + 32);
      LOWORD(v9) = v9 + 1;
      *(_DWORD *)(a1 + 32) = v9;
      return v5;
    }
    if ( (*(_BYTE *)(a1 + 35) & 0x20) == 0 )
    {
      v14 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      goto LABEL_14;
    }
  }
  v13 = 1;
  v14 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  result = MiChargeCommit(v14, 1LL, 4 * (v11 ^ 1u) + 4, a4);
  if ( (_DWORD)result )
    goto LABEL_14;
  return result;
}
