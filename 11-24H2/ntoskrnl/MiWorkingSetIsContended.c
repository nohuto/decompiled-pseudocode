/*
 * XREFs of MiWorkingSetIsContended @ 0x1403915E0
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiMapUserLargePages @ 0x14026A20C (MiMapUserLargePages.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x1403491DC (MiSoftFaultMappedView.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiGetPageChainYield @ 0x14038F588 (MiGetPageChainYield.c)
 *     MiFastTrimWorkingSet @ 0x140390500 (MiFastTrimWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C8524 (MiInsertViewOfPhysicalSection.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiQueryAddressSpan @ 0x14044AF24 (MiQueryAddressSpan.c)
 *     MiDecommitHardwareEnclavePages @ 0x14046CF84 (MiDecommitHardwareEnclavePages.c)
 *     MiCommitEnclavePages @ 0x14046D738 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404BC78C (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404C49B8 (MiVadRangeIsIoSpace.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F0C98 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     MiSetGraphicsPtes @ 0x140673868 (MiSetGraphicsPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x140681F6C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWorkingSetIsContended(__int64 a1, int a2)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  _DWORD *MmInternal; // rdx
  unsigned int i; // edx

  if ( (*(_DWORD *)(a1 + 184) & 0xFu) <= 5 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
      v2 = (__int64 *)&unk_140E38880;
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
