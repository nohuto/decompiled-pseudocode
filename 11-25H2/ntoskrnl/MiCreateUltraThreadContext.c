/*
 * XREFs of MiCreateUltraThreadContext @ 0x14022CB40
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiZeroLargePage @ 0x140223DEC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140224150 (MiZeroInParallelWorker.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 *     MiInitializeScrubPacket @ 0x1407ED850 (MiInitializeScrubPacket.c)
 *     MiCreateZeroThreadContext @ 0x1407EF3FC (MiCreateZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x140A961D0 (MiCombineIdenticalPages.c)
 *     MiInitializeForkMaps @ 0x140AB7B44 (MiInitializeForkMaps.c)
 *     MmRelocatePfnList @ 0x140ABD000 (MmRelocatePfnList.c)
 *     MmInitializeProcessor @ 0x140B51F08 (MmInitializeProcessor.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiGetUltraPage @ 0x14022CD10 (MiGetUltraPage.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReplenishUltraPageTables @ 0x140436CB8 (MiReplenishUltraPageTables.c)
 */

__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  unsigned int v6; // r13d
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
  v6 = a4;
  while ( 1 )
  {
    if ( v4 >= 4 )
      return 1LL;
    if ( _bittest(&a3, v4) )
      break;
LABEL_4:
    ++v4;
  }
  v9 = dword_140E35CDC;
  v10 = a1 + 32LL * v4;
  v11 = v4;
  do
  {
    if ( v9 == dword_140E35CD8 )
      goto LABEL_24;
    v12 = v9;
    v9 = _InterlockedCompareExchange(&dword_140E35CDC, v9 + 1, v9);
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
  if ( !(unsigned int)MiChargeCommit(&MiSystemPartition, v11, 0LL, a4) )
  {
LABEL_23:
    _InterlockedDecrement(&dword_140E35CDC);
LABEL_24:
    MiDeleteUltraThreadContext(a1);
    return 0LL;
  }
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, v11, 0LL) )
  {
    MiReturnCommit(&MiSystemPartition, v11, 0LL);
    goto LABEL_23;
  }
  if ( byte_140E2D901 )
    MiReplenishUltraPageTables((*(_DWORD *)(v5 + 8) >> 9) & 0x3F, v6);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v11 )
    {
      v5 = a2;
      goto LABEL_20;
    }
    UltraPage = MiGetUltraPage(a2, v6);
    if ( UltraPage == -1 )
      break;
    *(_QWORD *)(v10 + 8 * i + 8) = UltraPage;
  }
  _InterlockedDecrement(&dword_140E35CDC);
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
