/*
 * XREFs of MiDeleteUltraThreadContext @ 0x140335BD0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140313F70 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     MiDeleteZeroThreadContext @ 0x140412560 (MiDeleteZeroThreadContext.c)
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x140687F90 (MiDefragmentSlabWorker.c)
 *     MiFreeForkMappingPte @ 0x1406F9B9C (MiFreeForkMappingPte.c)
 *     MmDeleteProcessor @ 0x1407E8724 (MmDeleteProcessor.c)
 *     MiReleaseScrubPacket @ 0x1407FE164 (MiReleaseScrubPacket.c)
 *     MmRelocatePfnList @ 0x1408F754C (MmRelocatePfnList.c)
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiDeleteUltraThreadContext(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 *v3; // r14
  __int64 result; // rax
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbp
  ULONG_PTR v11; // rcx
  __int64 v12; // rdi
  ULONG_PTR v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // eax

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
      _InterlockedDecrement(&dword_140E3605C);
      v10 = 0LL;
      v11 = *(_QWORD *)(v1 - 8);
      if ( v11 != -1LL )
      {
        v12 = 48 * v11 - 0x220000000000LL;
        if ( byte_140E2DC81 )
        {
          v15 = MI_PAGE_TO_FULL_COLOR(v11);
          MiManageUltraSpacePageTable(v12, v15, v5);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(v11);
          if ( (v6 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v12, v7, v8, v9);
          else
            MiReleaseFreshPage(v12);
          v10 = 1LL;
        }
        *(_QWORD *)(v1 - 8) = -1LL;
      }
      v13 = *(_QWORD *)v1;
      if ( *(_QWORD *)v1 != -1LL )
      {
        v14 = 48 * v13 - 0x220000000000LL;
        if ( byte_140E2DC81 )
        {
          v16 = MI_PAGE_TO_FULL_COLOR(v13);
          MiManageUltraSpacePageTable(v14, v16, v5);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(v13);
          if ( (v6 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v14, v7, v8, v9);
          else
            MiReleaseFreshPage(v14);
          ++v10;
        }
        *(_QWORD *)v1 = -1LL;
      }
      *(_BYTE *)(v1 + 8) = 0;
      if ( v10 )
        MiReleaseNonPagedResources((__int64)&MiSystemPartition, v10);
      result = 1LL;
    }
    ++v2;
    v1 += 32LL;
    ++v3;
  }
  while ( v2 < 4 );
  return result;
}
