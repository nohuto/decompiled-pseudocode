/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x140684C24
 * Callers:
 *     MiPfnRangeIsZero @ 0x14066F480 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializeColorBase @ 0x14026DA0C (MiInitializeColorBase.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiConvertLargePfnToSmall @ 0x1402EE180 (MiConvertLargePfnToSmall.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUpdateDemotedSubPage @ 0x1402EF390 (MiUpdateDemotedSubPage.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiInitializeUsedPtesCount @ 0x140432950 (MiInitializeUsedPtesCount.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiDemoteValidLargePageOneLevel(unsigned __int64 a1)
{
  int v2; // r12d
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rcx
  __int16 v7; // di
  __int64 v8; // rcx
  __int64 v9; // r14
  _QWORD *v10; // rax
  int v11; // eax
  __int64 *v13; // rax
  int v14; // eax
  int v15; // r8d
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v17; // rbx
  ULONG_PTR v18; // r12
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  int v25; // ebx
  void *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned int v30; // r13d
  __int64 v31; // r14
  int v32; // r15d
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // r14
  __int64 v36; // rbx
  __int64 v37; // rdx
  unsigned __int8 v38[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-CCh] BYREF
  int v40; // [rsp+38h] [rbp-C8h]
  __int64 v41; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 *ProcessorFlushList; // [rsp+68h] [rbp-98h]
  ULONG_PTR v47; // [rsp+70h] [rbp-90h]
  unsigned __int64 v48; // [rsp+78h] [rbp-88h]
  __int64 *v49; // [rsp+80h] [rbp-80h]
  unsigned __int64 v50; // [rsp+88h] [rbp-78h]
  unsigned __int64 v51; // [rsp+90h] [rbp-70h]
  __int128 v52; // [rsp+98h] [rbp-68h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-58h]
  _BYTE v54[96]; // [rsp+B0h] [rbp-50h] BYREF
  ULONG *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+128h] [rbp+28h]
  _BYTE v57[40]; // [rsp+148h] [rbp+48h] BYREF

  v50 = a1;
  v38[0] = 0;
  v53 = 0LL;
  v52 = 0LL;
  memset_0(v54, 0, 0xB8uLL);
  ProcessorFlushList = 0LL;
  v40 = MI_IS_PHYSICAL_ADDRESS(a1);
  v2 = v40;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 1LL;
  v5 = 0x200000LL;
  v44 = 0x200000LL;
  if ( v40 != 1 )
  {
    v6 = (unsigned int)(v40 - 1);
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v5 <<= 9;
      v4 <<= 9;
      --v6;
    }
    while ( v6 );
    v44 = v5;
  }
  v42 = MI_READ_PTE_LOCK_FREE(v3);
  v7 = v42;
  v8 = 4LL;
  v9 = (v42 >> 12) & 0xFFFFFFFFFFLL;
  v10 = v54;
  v45 = v9;
  do
  {
    v10[2] = 0LL;
    v10[1] = v10;
    *v10 = v10;
    v10 += 3;
    --v8;
  }
  while ( v8 );
  v55 = &MiSystemPartition;
  v39 = 3;
  v56 = 3;
  v11 = MiPageToNode(v9);
  MiInitializeColorBase(a1, v11 + 1, (__int64)v57);
  if ( (int)MiGetPageTablePages((__int64)v54, 1uLL, 2u, (__int64)&v52) < 0 )
    return 0LL;
  v13 = MiUnlinkPageChainHead((__int64)&v52);
  v49 = v13;
  *v13 = 0LL;
  v43 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v13 + 0x44000000000LL) >> 4);
  v48 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v14 = -2080374780;
  if ( v2 == 1 )
    v14 = -2147483644;
  v15 = v14;
  if ( (v7 & 0x100) != 0 && v2 == 1 )
    v15 = v14 | 0x20000000;
  v51 = v3 << 25;
  ValidPte = MiMakeValidPte((__int64)(v3 << 25) >> 16, v9, v15);
  v17 = ValidPte;
  if ( ((unsigned __int8)(1 << (v2 - 1)) & (unsigned __int8)byte_140E2DC09) != 0 )
    v17 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
  v47 = MiMapPageInHyperSpaceWorker(v43, v38, 0x80000000);
  v18 = v47;
  do
  {
    if ( _bittest64(&MiFlags, 0x24u) && (v17 & 0x20) == 0 && v18 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v18, v17, 128LL);
    *(_QWORD *)v18 = v17;
    v18 += 8LL;
    v17 = (v17 + (v4 << 12)) ^ ((v17 + (v4 << 12)) ^ v17) & 0xFFF0000000000FFFuLL;
  }
  while ( (v18 & 0xFFF) != 0 );
  MiUnmapPageInHyperSpaceWorker(v47, v38[0], 0x80000000);
  v19 = v45;
  v20 = MiMakeValidPte(v3, v45, ((_DWORD)v42 << 21) & 0x20000000 | 0x88000004);
  v21 = v43;
  v22 = v20;
  MiInitializePfnForOtherProcess(v43, v3, v48, 2560LL);
  LODWORD(v42) = 0;
  v23 = (__int64)v49;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx((unsigned int *)&v42);
    while ( *(__int64 *)(v23 + 24) < 0 );
  }
  v24 = (*(_QWORD *)(v23 + 24) + 512LL) ^ (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 512LL)) & 0xC000000000000000uLL;
  v41 = 512LL;
  *(_QWORD *)(v23 + 24) = v24;
  MiInitializeUsedPtesCount(v23, 0x200u);
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v25 = v40;
  MiTransformValidPteInPlace(v3, v3, (v21 << 12) ^ (v22 ^ (v21 << 12)) & 0xFFF0000000000FFFuLL, 0x60u, v40);
  if ( v25 == 3 )
  {
    v26 = MiVaToFlushVm(v50);
    ProcessorFlushList = MiGetProcessorFlushList();
    MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v26, *((_DWORD *)ProcessorFlushList + 3), 8, 1);
    MiInsertLargeTbFlushEntry(v27, 3, v3);
  }
  v28 = 48 * v19 - 0x220000000000LL;
  if ( (*(_QWORD *)(v28 + 40) & 0x10000000000LL) != 0 )
    v39 = MiGetPfnPageSizeIndex(48 * v19 - 0x220000000000LL) + 1;
  v29 = 3 * v4;
  v30 = v39;
  v31 = 3 * v4;
  v32 = v40;
  v33 = v28 + (v29 << 13);
  v34 = (__int64)(v51 + 0x10000000) >> 16;
  v35 = 16 * v31;
  v36 = v33 + 24;
  do
  {
    v33 -= v35;
    v36 -= v35;
    v34 -= 8LL;
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( *(__int64 *)v36 < 0 );
    }
    if ( (*(_BYTE *)(v36 + 11) & 0x10) == 0 )
    {
      if ( (*(_QWORD *)(v36 + 16) & 0x10000000000LL) != 0 )
      {
        if ( v32 == 1 )
          MiConvertLargePfnToSmall(v28, v33, 0LL);
        else
          MiUpdateDemotedSubPage(v28, v33, v30);
      }
      v37 = v43;
      *(_QWORD *)(v36 - 16) = v34;
      MiSetPfnContainingFrame(v33, v37);
    }
    _InterlockedAnd64((volatile signed __int64 *)v36, 0x7FFFFFFFFFFFFFFFuLL);
    --v41;
  }
  while ( v41 );
  if ( v32 == 1 )
    MiUpdateLargePageBitMap((unsigned __int64)&MiSystemPartition, v45, v44 >> 12, 6);
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  return 1LL;
}
