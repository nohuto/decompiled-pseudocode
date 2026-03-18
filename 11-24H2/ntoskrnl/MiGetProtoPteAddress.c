/*
 * XREFs of MiGetProtoPteAddress @ 0x140301740
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiIsCfgBitMapPageShared @ 0x140234458 (MiIsCfgBitMapPageShared.c)
 *     MiCountSharedPages @ 0x140235F64 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiExpandSharedZeroCluster @ 0x1402E548C (MiExpandSharedZeroCluster.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiCheckUserVirtualAddress @ 0x1402FF820 (MiCheckUserVirtualAddress.c)
 *     MiResolveSharedZeroFault @ 0x1402FFD60 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 *     MiPteNeedsCommitCharge @ 0x140302DC0 (MiPteNeedsCommitCharge.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiUpControlAreaRefs @ 0x1404172CC (MiUpControlAreaRefs.c)
 *     MiMakePerSessionProtoPte @ 0x14046D870 (MiMakePerSessionProtoPte.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C119C (MiUpdatePrivateDemandZeroView.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     MiGetLargeVadMappingIndex @ 0x1404F84A0 (MiGetLargeVadMappingIndex.c)
 *     MiComputeImageVadCommitCharge @ 0x140669D44 (MiComputeImageVadCommitCharge.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407EFDD4 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     MiIsRangeFullyCommitted @ 0x1408DD80C (MiIsRangeFullyCommitted.c)
 *     MiFillMapFileInfo @ 0x1408E3144 (MiFillMapFileInfo.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiCommitPagefileBackedSection @ 0x1408F7B54 (MiCommitPagefileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     MiCfgMarkValidEntries @ 0x1409E9AAC (MiCfgMarkValidEntries.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x1402C31C0 (MiLocateSubsectionNode.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x1403025FC (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 **a4)
{
  unsigned __int64 **v4; // rbx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 *v12; // rbx
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rdi
  unsigned __int64 *SubsectionNode; // rax
  unsigned int SessionId; // eax

  v4 = (unsigned __int64 **)(a1 + 72);
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = a2;
  if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (v9 = **v4, (*(_DWORD *)(v9 + 56) & 0x8000000) == 0) )
  {
    v9 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3;
    if ( v9 >= v8 - v7 && (a3 & 4) == 0 )
    {
      *a4 = *v4;
      return *(_QWORD *)(a1 + 80) + 8 * (v8 - v7);
    }
  }
  v11 = 0LL;
  *a4 = 0LL;
  v12 = *v4;
  v13 = *v12;
  v14 = v8 + ((__int64)(*(_QWORD *)(a1 + 80) - v12[1]) >> 3) - v7;
  if ( *(_QWORD *)(*v12 + 64) )
  {
    v9 = v8 + ((__int64)(*(_QWORD *)(a1 + 80) - v12[1]) >> 3) - v7;
    v15 = v12;
    do
    {
      v16 = *((unsigned int *)v15 + 11);
      if ( v9 < v16 )
      {
        v14 = v9;
        v12 = v15;
        goto LABEL_14;
      }
      v15 = (unsigned __int64 *)v15[2];
      v9 -= v16;
      ++v11;
    }
    while ( (v11 != 3 || (*(_DWORD *)(v13 + 56) & 0x20) != 0) && v15 );
    if ( (*(_DWORD *)(v13 + 56) & 0x20) != 0 )
      return 0LL;
    v20 = ((*((unsigned int *)v12 + 9) | ((v12[4] & 0xFFC0) << 26)) + v14) << 12;
    SubsectionNode = (unsigned __int64 *)MiLocateSubsectionNode(*v12, v20, a3);
    v12 = SubsectionNode;
    if ( !SubsectionNode )
      return 0LL;
    v9 = *((unsigned int *)SubsectionNode + 9) | ((SubsectionNode[4] & 0xFFC0) << 26);
    v14 = (v20 >> 12) - v9;
LABEL_14:
    if ( v14 >= *((_DWORD *)v12 + 11) - (*((_DWORD *)v12 + 13) & 0x3FFFFFFFu) )
      return 0LL;
    v17 = v12[1];
    *a4 = v12;
    goto LABEL_16;
  }
  v8 = *(unsigned int *)(v13 + 96);
  if ( (*(_DWORD *)(v13 + 56) & 0x1000) != 0 || *((_DWORD *)v12 + 12) >= 0x40000000u )
  {
    v11 = 0x40000LL;
    if ( *((_DWORD *)v12 + 12) < 0x40000000u )
      v11 = 0x20000LL;
    v18 = (unsigned int)(v14 / v11);
    v19 = v14 / v11;
    v14 %= v11;
    v9 = v18 + 1;
    if ( !v14 )
      v9 = v18;
    if ( v9 > v8 )
      return 0LL;
    v12 += 11 * v19;
    if ( v14 >= *((unsigned int *)v12 + 11) )
      return 0LL;
  }
  else if ( v14 >= *((unsigned int *)v12 + 11) )
  {
    return 0LL;
  }
  if ( !v12 )
    return 0LL;
  *a4 = v12;
  v17 = v12[1];
  if ( !v17 )
    return 0LL;
LABEL_16:
  if ( (v12[4] & 0x20000) != 0 )
  {
    LOBYTE(v9) = (*(_DWORD *)(v13 + 56) & 0x8000000) != 0;
    if ( ((unsigned __int8)v9 & ((a3 & 2) == 0)) != 0 )
    {
      SessionId = PsGetSessionIdEx(KeGetCurrentThread()->ApcState.Process, v9, v11, v8);
      v17 = *(_QWORD *)(MiGetSharedProtos(v13, SessionId, v12) + 72);
    }
  }
  return v17 + 8 * v14;
}
