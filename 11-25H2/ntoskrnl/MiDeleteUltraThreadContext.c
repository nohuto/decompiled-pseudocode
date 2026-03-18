/*
 * XREFs of MiDeleteUltraThreadContext @ 0x140211630
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140224150 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x140440768 (MiDeleteZeroThreadContext.c)
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 *     MiFreeForkMappingPte @ 0x1406F0174 (MiFreeForkMappingPte.c)
 *     MmDeleteProcessor @ 0x1407D8294 (MmDeleteProcessor.c)
 *     MiReleaseScrubPacket @ 0x1407EDB64 (MiReleaseScrubPacket.c)
 *     MiCombineIdenticalPages @ 0x140A961D0 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140ABD000 (MmRelocatePfnList.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiManageUltraSpacePageTable @ 0x140450E6C (MiManageUltraSpacePageTable.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiDeleteUltraThreadContext(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 *v3; // r14
  __int64 result; // rax
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbp
  ULONG_PTR v8; // rcx
  __int64 v9; // rdi
  ULONG_PTR v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax

  v1 = a1 + 16;
  v2 = 0;
  v3 = MiPageSizes;
  result = 1LL;
  do
  {
    if ( *(_BYTE *)(v1 + 8) )
    {
      v5 = 3;
      if ( *(_BYTE *)(v1 + 9) )
        v5 = 1;
      v6 = 6;
      if ( KeGetCurrentIrql() != 2 )
        v6 = 2;
      MiGetUltraMapping(v1 - 16, v2, *v3, v6);
      _InterlockedDecrement(&dword_140E35CDC);
      v7 = 0LL;
      v8 = *(_QWORD *)(v1 - 8);
      if ( v8 != -1LL )
      {
        v9 = 48 * v8 - 0x220000000000LL;
        if ( byte_140E2D901 )
        {
          v12 = MI_PAGE_TO_FULL_COLOR(v8);
          MiManageUltraSpacePageTable(v9, v12, v5);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(v8);
          if ( (v6 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v9);
          else
            MiReleaseFreshPage(v9);
          v7 = 1LL;
        }
        *(_QWORD *)(v1 - 8) = -1LL;
      }
      v10 = *(_QWORD *)v1;
      if ( *(_QWORD *)v1 != -1LL )
      {
        v11 = 48 * v10 - 0x220000000000LL;
        if ( byte_140E2D901 )
        {
          v13 = MI_PAGE_TO_FULL_COLOR(v10);
          MiManageUltraSpacePageTable(v11, v13, v5);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(v10);
          if ( (v6 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v11);
          else
            MiReleaseFreshPage(v11);
          ++v7;
        }
        *(_QWORD *)v1 = -1LL;
      }
      *(_BYTE *)(v1 + 8) = 0;
      if ( v7 )
        MiReleaseNonPagedResources((__int64)&MiSystemPartition, v7);
      result = 1LL;
    }
    ++v2;
    v1 += 32LL;
    ++v3;
  }
  while ( v2 < 4 );
  return result;
}
