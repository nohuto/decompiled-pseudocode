/*
 * XREFs of MiGetProtoPteAddress @ 0x14030BEC0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiMakePerSessionProtoPte @ 0x140269F88 (MiMakePerSessionProtoPte.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 *     MiResolveSharedZeroFault @ 0x14030A4E0 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14030C130 (MiGetPageProtection.c)
 *     MiPteNeedsCommitCharge @ 0x14030CCA0 (MiPteNeedsCommitCharge.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiExpandSharedZeroCluster @ 0x14034162C (MiExpandSharedZeroCluster.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14046208C (MiIsCfgBitMapPageShared.c)
 *     MiUpControlAreaRefs @ 0x1404B355C (MiUpControlAreaRefs.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404BC78C (MiUpdatePrivateDemandZeroView.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MiGetLargeVadMappingIndex @ 0x1404F5D80 (MiGetLargeVadMappingIndex.c)
 *     MiComputeImageVadCommitCharge @ 0x14066AF14 (MiComputeImageVadCommitCharge.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407F03A4 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiIsRangeFullyCommitted @ 0x1408DBA3C (MiIsRangeFullyCommitted.c)
 *     MiFillMapFileInfo @ 0x140919CF4 (MiFillMapFileInfo.c)
 *     MiCommitPagefileBackedSection @ 0x140974DD4 (MiCommitPagefileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     MiCfgMarkValidEntries @ 0x1409E4A6C (MiCfgMarkValidEntries.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 *v4; // rbx
  unsigned __int64 v7; // r10
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 SubsectionNode; // rax
  unsigned int SessionId; // eax

  v4 = (__int64 *)(a1 + 72);
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( ((*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (*(_DWORD *)(*(_QWORD *)*v4 + 56LL) & 0x8000000) == 0)
    && (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= a2 - v7
    && (a3 & 4) == 0 )
  {
    *a4 = *v4;
    return *(_QWORD *)(a1 + 80) + 8 * (a2 - v7);
  }
  v9 = 0LL;
  *a4 = 0LL;
  v10 = *v4;
  v11 = *(_QWORD *)v10;
  v12 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v10 + 8)) >> 3) - v7;
  if ( *(_QWORD *)(*(_QWORD *)v10 + 64LL) )
  {
    v13 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v10 + 8)) >> 3) - v7;
    v14 = v10;
    do
    {
      v15 = *(unsigned int *)(v14 + 44);
      if ( v13 < v15 )
      {
        v12 = v13;
        v10 = v14;
        goto LABEL_14;
      }
      v14 = *(_QWORD *)(v14 + 16);
      v13 -= v15;
      ++v9;
    }
    while ( (v9 != 3 || (*(_DWORD *)(v11 + 56) & 0x20) != 0) && v14 );
    if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 )
      return 0LL;
    v21 = ((*(unsigned int *)(v10 + 36) | ((unsigned __int64)(*(_DWORD *)(v10 + 32) & 0xFFC0) << 26)) + v12) << 12;
    SubsectionNode = MiLocateSubsectionNode(*(_QWORD *)v10, v21, a3);
    v10 = SubsectionNode;
    if ( !SubsectionNode )
      return 0LL;
    v12 = (v21 >> 12)
        - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_DWORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
LABEL_14:
    if ( v12 >= *(_DWORD *)(v10 + 44) - (*(_DWORD *)(v10 + 52) & 0x3FFFFFFFu) )
      return 0LL;
    v16 = *(_QWORD *)(v10 + 8);
    *a4 = v10;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v11 + 56) & 0x1000) != 0 || *(_DWORD *)(v10 + 48) >= 0x40000000u )
  {
    v17 = 0x40000LL;
    if ( *(_DWORD *)(v10 + 48) < 0x40000000u )
      v17 = 0x20000LL;
    v18 = (unsigned int)(v12 / v17);
    v19 = v12 / v17;
    v12 %= v17;
    v20 = v18 + 1;
    if ( !v12 )
      v20 = v18;
    if ( v20 > *(unsigned int *)(v11 + 96) )
      return 0LL;
    v10 += 88 * v19;
    if ( v12 >= *(unsigned int *)(v10 + 44) )
      return 0LL;
  }
  else if ( v12 >= *(unsigned int *)(v10 + 44) )
  {
    return 0LL;
  }
  if ( !v10 )
    return 0LL;
  *a4 = v10;
  v16 = *(_QWORD *)(v10 + 8);
  if ( !v16 )
    return 0LL;
LABEL_16:
  if ( (*(_DWORD *)(v10 + 32) & 0x20000) != 0 && (*(_DWORD *)(v11 + 56) & 0x8000000) != 0 && (a3 & 2) == 0 )
  {
    SessionId = PsGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v16 = *(_QWORD *)(MiGetSharedProtos(v11, SessionId, v10) + 72);
  }
  return v16 + 8 * v12;
}
