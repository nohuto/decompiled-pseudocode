/*
 * XREFs of MiCreateUltraThreadContext @ 0x1402F3EF0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiZeroLargePage @ 0x140308BDC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14030A090 (MiZeroInParallelWorker.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403F98CC (MiInitializeNewUltraHugeContext.c)
 *     MiHugePageOperation @ 0x140685BC0 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 *     MiInitializeScrubPacket @ 0x1407FD6E0 (MiInitializeScrubPacket.c)
 *     MiCreateZeroThreadContext @ 0x1407FF2B0 (MiCreateZeroThreadContext.c)
 *     MmRelocatePfnList @ 0x140932988 (MmRelocatePfnList.c)
 *     MiCombineIdenticalPages @ 0x140A9C0E0 (MiCombineIdenticalPages.c)
 *     MiInitializeForkMaps @ 0x140ABBCD8 (MiInitializeForkMaps.c)
 *     MmInitializeProcessor @ 0x140B62038 (MmInitializeProcessor.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiGetUltraPage @ 0x1402F40C0 (MiGetUltraPage.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v18; // rbx
  __int64 v19; // rax

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
  v9 = dword_140E35F1C;
  v10 = a1 + 32LL * v4;
  v11 = v4;
  do
  {
    if ( v9 == dword_140E35F18 )
      goto LABEL_24;
    v12 = v9;
    v9 = _InterlockedCompareExchange(&dword_140E35F1C, v9 + 1, v9);
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
    _InterlockedDecrement(&dword_140E35F1C);
LABEL_24:
    MiDeleteUltraThreadContext(a1);
    return 0LL;
  }
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, v11, 0LL) )
  {
    MiReturnCommit((__int64)&MiSystemPartition, v11, 0);
    goto LABEL_23;
  }
  if ( byte_140E2DB41 )
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
  _InterlockedDecrement(&dword_140E35F1C);
  if ( (_DWORD)i )
  {
    v18 = (_QWORD *)(v10 + 8 * i + 8);
    do
    {
      v19 = *--v18;
      MiReleaseFreshPage(48 * v19 - 0x220000000000LL, v15, v16);
      *v18 = -1LL;
      LODWORD(i) = i - 1;
    }
    while ( (_DWORD)i );
  }
  MiReleaseNonPagedResources((__int64)&MiSystemPartition, v11);
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}
