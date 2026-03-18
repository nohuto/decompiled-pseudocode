/*
 * XREFs of MiWorkingSetIsContended @ 0x140338960
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiInsertViewOfPhysicalSection @ 0x1402A496C (MiInsertViewOfPhysicalSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403381B0 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSoftFaultMappedView @ 0x140339FC4 (MiSoftFaultMappedView.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140391464 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x1403FCC78 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiMapUserLargePages @ 0x14040538C (MiMapUserLargePages.c)
 *     MiQueryAddressSpan @ 0x14045AA68 (MiQueryAddressSpan.c)
 *     MiGetPageChainYield @ 0x14045F44C (MiGetPageChainYield.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB75C (MiVadRangeIsIoSpace.c)
 *     MiSetGraphicsPtes @ 0x140666BE8 (MiSetGraphicsPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWorkingSetIsContended(__int64 a1, int a2)
{
  __int64 *v2; // rcx
  __int64 v3; // r8
  _DWORD *MmInternal; // rdx
  unsigned int i; // edx

  if ( (*(_DWORD *)(a1 + 184) & 0xFu) <= 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v2 = (__int64 *)&unk_140E38500;
    else
      v2 = (__int64 *)(a1 + 192);
    v3 = *v2;
    if ( a2 )
    {
      for ( i = 0; i < 4; ++i )
      {
        if ( (*(_DWORD *)(((unsigned __int64)i << 6) + v3) & 0x40000000) != 0 )
          return 1LL;
      }
    }
    else
    {
      MmInternal = KeGetCurrentPrcb()->MmInternal;
      if ( MmInternal )
        LODWORD(MmInternal) = MmInternal[81];
      if ( (*(_DWORD *)(((unsigned __int64)(unsigned int)MmInternal << 6) + v3) & 0x40000000) != 0 )
        return 1LL;
    }
  }
  return 0LL;
}
