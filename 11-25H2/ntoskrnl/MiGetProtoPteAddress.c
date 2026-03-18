/*
 * XREFs of MiGetProtoPteAddress @ 0x1402454D0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     MiResolveSharedZeroFault @ 0x140243D50 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiPteNeedsCommitCharge @ 0x140246380 (MiPteNeedsCommitCharge.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiMakePerSessionProtoPte @ 0x1402CF61C (MiMakePerSessionProtoPte.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiExpandSharedZeroCluster @ 0x14037C52C (MiExpandSharedZeroCluster.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14047031C (MiIsCfgBitMapPageShared.c)
 *     MiUpControlAreaRefs @ 0x1404B95EC (MiUpControlAreaRefs.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     MiGetLargeVadMappingIndex @ 0x1404F5CEC (MiGetLargeVadMappingIndex.c)
 *     MiComputeImageVadCommitCharge @ 0x14065E224 (MiComputeImageVadCommitCharge.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407DFF34 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiIsRangeFullyCommitted @ 0x1408F8634 (MiIsRangeFullyCommitted.c)
 *     MiFillMapFileInfo @ 0x140903B10 (MiFillMapFileInfo.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x1409FC6A4 (MiCommitPagefileBackedSection.c)
 *     MiCfgMarkValidEntries @ 0x1409FDA5C (MiCfgMarkValidEntries.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x140219A20 (MiLocateSubsectionNode.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 **a4)
{
  unsigned __int64 **v4; // rbx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rax
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
  v10 = 0LL;
  *a4 = 0LL;
  v11 = *v4;
  v12 = *v11;
  v13 = v8 + ((__int64)(*(_QWORD *)(a1 + 80) - v11[1]) >> 3) - v7;
  if ( !*(_QWORD *)(*v11 + 64) )
  {
    v8 = *(unsigned int *)(v12 + 96);
    if ( (*(_DWORD *)(v12 + 56) & 0x1000) != 0 || *((_DWORD *)v11 + 12) >= 0x40000000u )
    {
      v10 = 0x40000LL;
      if ( *((_DWORD *)v11 + 12) < 0x40000000u )
        v10 = 0x20000LL;
      v18 = (unsigned int)(v13 / v10);
      v19 = v13 / v10;
      v13 %= v10;
      v9 = v18 + 1;
      if ( !v13 )
        v9 = v18;
      if ( v9 > v8 )
        return 0LL;
      v11 += 11 * v19;
      if ( v13 >= *((unsigned int *)v11 + 11) )
        return 0LL;
    }
    else if ( v13 >= *((unsigned int *)v11 + 11) )
    {
      return 0LL;
    }
    if ( v11 )
    {
      *a4 = v11;
      v17 = v11[1];
      if ( !v17 )
        return 0LL;
      goto LABEL_15;
    }
    return 0LL;
  }
  v9 = v8 + ((__int64)(*(_QWORD *)(a1 + 80) - v11[1]) >> 3) - v7;
  v14 = v11;
  do
  {
    v15 = *((unsigned int *)v14 + 11);
    if ( v9 < v15 )
    {
      v13 = v9;
      v11 = v14;
      goto LABEL_13;
    }
    v14 = (unsigned __int64 *)v14[2];
    v9 -= v15;
    ++v10;
  }
  while ( (v10 != 3 || (*(_DWORD *)(v12 + 56) & 0x20) != 0) && v14 );
  if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
    return 0LL;
  v20 = ((*((unsigned int *)v11 + 9) | ((v11[4] & 0xFFC0) << 26)) + v13) << 12;
  SubsectionNode = (unsigned __int64 *)MiLocateSubsectionNode(*v11, v20, a3);
  v11 = SubsectionNode;
  if ( !SubsectionNode )
    return 0LL;
  v9 = *((unsigned int *)SubsectionNode + 9) | ((SubsectionNode[4] & 0xFFC0) << 26);
  v13 = (v20 >> 12) - v9;
LABEL_13:
  if ( v13 >= *((_DWORD *)v11 + 11) - (*((_DWORD *)v11 + 13) & 0x3FFFFFFFu) )
    return 0LL;
  v17 = v11[1];
  *a4 = v11;
LABEL_15:
  if ( (v11[4] & 0x20000) != 0 )
  {
    LOBYTE(v9) = (*(_DWORD *)(v12 + 56) & 0x8000000) != 0;
    if ( ((unsigned __int8)v9 & ((a3 & 2) == 0)) != 0 )
    {
      SessionId = PsGetSessionIdEx(KeGetCurrentThread()->ApcState.Process, v9, v10, v8);
      v17 = *(_QWORD *)(MiGetSharedProtos(v12, SessionId, v11) + 72);
    }
  }
  return v17 + 8 * v13;
}
