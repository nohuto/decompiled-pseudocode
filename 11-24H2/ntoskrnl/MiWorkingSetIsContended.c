/*
 * XREFs of MiWorkingSetIsContended @ 0x1403D01B0
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiSoftFaultMappedView @ 0x1402E7B9C (MiSoftFaultMappedView.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiMapUserLargePages @ 0x14036E280 (MiMapUserLargePages.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiQueryAddressSpan @ 0x1403CE718 (MiQueryAddressSpan.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403CEF18 (MiInsertViewOfPhysicalSection.c)
 *     MiGetPageChainYield @ 0x1403CF100 (MiGetPageChainYield.c)
 *     MiFastTrimWorkingSet @ 0x1403CF450 (MiFastTrimWorkingSet.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiCommitEnclavePages @ 0x140473ACC (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C119C (MiUpdatePrivateDemandZeroView.c)
 *     MiProtectEnclavePages @ 0x1404CACEC (MiProtectEnclavePages.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB498 (MiVadRangeIsIoSpace.c)
 *     MiMoveDirtyBitsToPfns @ 0x1404F32E4 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     MiSetGraphicsPtes @ 0x140672698 (MiSetGraphicsPtes.c)
 *     MiQueryVaPhysicalContiguity @ 0x140680DC0 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14068D548 (MiScrubLargeMappedPage.c)
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
      v2 = (__int64 *)&unk_140E38740;
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
