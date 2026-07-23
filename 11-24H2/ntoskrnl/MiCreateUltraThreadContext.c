/*
 * XREFs of MiCreateUltraThreadContext @ 0x14033BC80
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140313F70 (MiZeroInParallelWorker.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403EF7D8 (MiInitializeNewUltraHugeContext.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x140687F90 (MiDefragmentSlabWorker.c)
 *     MiInitializeScrubPacket @ 0x1407FDE50 (MiInitializeScrubPacket.c)
 *     MiCreateZeroThreadContext @ 0x1407FF9F4 (MiCreateZeroThreadContext.c)
 *     MmRelocatePfnList @ 0x1408F754C (MmRelocatePfnList.c)
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 *     MiInitializeForkMaps @ 0x140AB6CF8 (MiInitializeForkMaps.c)
 *     MmInitializeProcessor @ 0x140B64108 (MmInitializeProcessor.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiGetUltraPage @ 0x14033BE50 (MiGetUltraPage.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 */

__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  signed __int32 v9; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  signed __int32 v12; // ett
  __int64 i; // rbp
  __int64 UltraPage; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rax

  v4 = 0;
  v5 = a2;
  while ( 1 )
  {
    if ( v4 >= 4 )
      return 1LL;
    if ( _bittest(&a3, v4) )
      break;
LABEL_4:
    ++v4;
  }
  v9 = dword_140E3605C;
  v10 = a1 + 32LL * v4;
  v11 = v4;
  do
  {
    if ( v9 == dword_140E36058 )
      goto LABEL_24;
    v12 = v9;
    v9 = _InterlockedCompareExchange(&dword_140E3605C, v9 + 1, v9);
  }
  while ( v12 != v9 );
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 8) = -1LL;
  *(_QWORD *)(v10 + 16) = -1LL;
  if ( !v4 )
  {
LABEL_20:
    *(_WORD *)(v10 + 24) = 1;
    goto LABEL_4;
  }
  if ( v4 > 2uLL )
    v11 = 2LL;
  if ( !(unsigned int)MiChargeCommit((__int64)&MiSystemPartition, v11, 0) )
  {
LABEL_23:
    _InterlockedDecrement(&dword_140E3605C);
LABEL_24:
    MiDeleteUltraThreadContext(a1);
    return 0LL;
  }
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, v11, 0LL) )
  {
    MiReturnCommit((__int64)&MiSystemPartition, v11, 0);
    goto LABEL_23;
  }
  if ( byte_140E2DC81 )
    MiReplenishUltraPageTables((*(_DWORD *)(v5 + 8) >> 9) & 0x3F, a4);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v11 )
    {
      v5 = a2;
      goto LABEL_20;
    }
    UltraPage = MiGetUltraPage(a2, a4);
    if ( UltraPage == -1 )
      break;
    *(_QWORD *)(v10 + 8 * i + 8) = UltraPage;
  }
  _InterlockedDecrement(&dword_140E3605C);
  if ( (_DWORD)i )
  {
    v16 = (_QWORD *)(v10 + 8 * i + 8);
    do
    {
      v17 = *--v16;
      MiReleaseFreshPage(48 * v17 - 0x220000000000LL);
      *v16 = -1LL;
      LODWORD(i) = i - 1;
    }
    while ( (_DWORD)i );
  }
  MiReleaseNonPagedResources((__int64)&MiSystemPartition, v11);
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}
