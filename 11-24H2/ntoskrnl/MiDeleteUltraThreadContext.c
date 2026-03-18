/*
 * XREFs of MiDeleteUltraThreadContext @ 0x14020C870
 * Callers:
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14030A090 (MiZeroInParallelWorker.c)
 *     MiDeleteZeroThreadContext @ 0x1403C6608 (MiDeleteZeroThreadContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403F98CC (MiInitializeNewUltraHugeContext.c)
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 *     MiHugePageOperation @ 0x140685BC0 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 *     MiFreeForkMappingPte @ 0x1406FBF5C (MiFreeForkMappingPte.c)
 *     MmDeleteProcessor @ 0x1407E8154 (MmDeleteProcessor.c)
 *     MiReleaseScrubPacket @ 0x1407FD9F4 (MiReleaseScrubPacket.c)
 *     MmRelocatePfnList @ 0x140932988 (MmRelocatePfnList.c)
 *     MiCombineIdenticalPages @ 0x140A9C0E0 (MiCombineIdenticalPages.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
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
      _InterlockedDecrement(&dword_140E35F1C);
      v7 = 0LL;
      v8 = *(_QWORD *)(v1 - 8);
      if ( v8 != -1LL )
      {
        v9 = 48 * v8 - 0x220000000000LL;
        if ( byte_140E2DB41 )
        {
          v12 = MI_PAGE_TO_FULL_COLOR(v8);
          MiManageUltraSpacePageTable(v9, v12, v5);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E30170 & MmPageValidationFrequency) == 0 )
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
        if ( byte_140E2DB41 )
        {
          v13 = MI_PAGE_TO_FULL_COLOR(v10);
          MiManageUltraSpacePageTable(v11, v13, v5);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL && (++dword_140E30170 & MmPageValidationFrequency) == 0 )
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
