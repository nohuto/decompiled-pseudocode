/*
 * XREFs of MiAddLockedPageCharge @ 0x14033F050
 * Callers:
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033EECC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiHandleCollidedFault @ 0x140426D4C (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     MiMirrorPerformBrownWrites @ 0x14044A580 (MiMirrorPerformBrownWrites.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiMapSystemCachePage @ 0x1404C2D08 (MiMapSystemCachePage.c)
 *     MiLockDownWorkingSet @ 0x1404C3800 (MiLockDownWorkingSet.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 *     MiDbgMarkPfnModified @ 0x14067FEDC (MiDbgMarkPfnModified.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  unsigned int v3; // edi
  int v4; // r8d
  __int64 v5; // rax
  int v6; // ecx
  int v7; // eax
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // r14
  char v11; // bp
  ULONG *v12; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v15; // ett
  unsigned int v16; // eax

  if ( (a2 & 1) == 0 && (unsigned __int16)*(_DWORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  v3 = 1;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    goto LABEL_9;
  v4 = *(_DWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v6 = 0;
  if ( (_WORD)v4 )
  {
    if ( (_WORD)v4 == 1 )
    {
      if ( v5 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
        v6 = 1;
      if ( !v6 )
        goto LABEL_9;
    }
    else if ( (_WORD)v4 != 2 || !v5 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      goto LABEL_9;
    }
  }
  v9 = a2 & 1;
  v10 = (unsigned int)-(v9 != 0);
  v11 = 0;
  if ( *(__int64 *)(a1 + 40) >= 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) > 0xFFFFF6BFFFFFFF78uLL
      || (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL )
    {
      v12 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
LABEL_14:
      if ( v12 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
        {
          v15 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v15 == CachedResidentAvailable )
            goto LABEL_9;
        }
      }
      v16 = MiChargePartitionResidentAvailable((__int64)v12, 1uLL, v10);
      if ( !v16 && v11 )
      {
        MiReturnCommit((__int64)v12, 1LL, 0);
        return 0LL;
      }
      v3 = v16;
      if ( !v16 )
        return 0LL;
LABEL_9:
      v7 = *(_DWORD *)(a1 + 32);
      LOWORD(v7) = v7 + 1;
      *(_DWORD *)(a1 + 32) = v7;
      return v3;
    }
    if ( (*(_BYTE *)(a1 + 35) & 0x20) == 0 )
    {
      v12 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      goto LABEL_14;
    }
  }
  v11 = 1;
  v12 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  result = MiChargeCommit((__int64)v12, 1uLL, 4 * (v9 ^ 1u) + 4);
  if ( (_DWORD)result )
    goto LABEL_14;
  return result;
}
