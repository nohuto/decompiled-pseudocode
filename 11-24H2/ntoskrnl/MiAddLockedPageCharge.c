/*
 * XREFs of MiAddLockedPageCharge @ 0x1402F6F40
 * Callers:
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiHandleCollidedFault @ 0x14023B504 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402F6DBC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140455840 (MiMirrorPerformBrownWrites.c)
 *     MiMakeFaultPfnActive @ 0x140462FB4 (MiMakeFaultPfnActive.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiMapSystemCachePage @ 0x1404C9858 (MiMapSystemCachePage.c)
 *     MiLockDownWorkingSet @ 0x1404CA2DC (MiLockDownWorkingSet.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 *     MiDbgMarkPfnModified @ 0x14067ECDC (MiDbgMarkPfnModified.c)
 * Callees:
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
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
      v12 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
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
      v12 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
      goto LABEL_14;
    }
  }
  v11 = 1;
  v12 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  result = MiChargeCommit((__int64)v12, 1uLL, 4 * (v9 ^ 1u) + 4);
  if ( (_DWORD)result )
    goto LABEL_14;
  return result;
}
