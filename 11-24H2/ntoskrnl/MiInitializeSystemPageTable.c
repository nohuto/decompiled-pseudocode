/*
 * XREFs of MiInitializeSystemPageTable @ 0x14038F158
 * Callers:
 *     MiCreateSystemPageTable @ 0x14038EDA0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14020EDF8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiFillPhysicalPages @ 0x14024BCF0 (MiFillPhysicalPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiTransformValidPteInPlace @ 0x14038D668 (MiTransformValidPteInPlace.c)
 *     MiCopyPtes @ 0x14038D998 (MiCopyPtes.c)
 *     MiClearPteAccessedBitRange @ 0x14038DA30 (MiClearPteAccessedBitRange.c)
 *     MiIsPageAGapPage @ 0x14038F0FC (MiIsPageAGapPage.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiInitializeUsedPtesCount @ 0x140432950 (MiInitializeUsedPtesCount.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     MiReplicatePteChange @ 0x1404F4EFC (MiReplicatePteChange.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x140684AA8 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 *     MxCopyPage @ 0x140C54604 (MxCopyPage.c)
 */

void __fastcall MiInitializeSystemPageTable(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  char v9; // si
  __int64 v10; // rdi
  __int64 v11; // r13
  unsigned __int64 LeafVa; // rax
  __int64 ContainingPageTable; // r12
  unsigned int v14; // r8d
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 *ProcessorFlushList; // rax
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // r13
  __int64 v25; // r8
  _QWORD *i; // rbx
  int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+98h] [rbp+10h]
  int v32; // [rsp+A0h] [rbp+18h] BYREF
  int v33; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)a3;
  v28 = v4;
  v9 = 0;
  v10 = (__int64)(a3 << 25) >> 16;
  v31 = a2 != 0 ? 6 : 4;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
  v29 = v11;
  if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4));
    v4 = v28;
  }
  if ( a2 )
  {
    if ( (v5 & 1) != 0 )
    {
      if ( KeGetCurrentPrcb()->MmInternal )
      {
        v24 = (_QWORD *)MiMapPageInHyperSpaceWorker(v11, 0LL, 0x80000000);
        MiCopyPtes(v24, v10, 512LL);
        if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140E2DC09) != 0 )
        {
          for ( i = v24; i < v24 + 512; ++i )
          {
            if ( (*i & 0x21) == 0x21 )
              MiWriteValidPteNewProtection((ULONG_PTR)i, *i & 0xFFFFFFFFFFFFFFDFuLL, v25);
          }
        }
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v24, 0x11u, 0x80000000);
        v11 = v29;
      }
      else
      {
        MxCopyPage(v11, v10);
      }
    }
  }
  else
  {
    if ( (v5 & 1) != 0 )
    {
      if ( (PVOID)((v5 >> 12) & 0xFFFFFFFFFFLL) == qword_140E37480[0] )
        goto LABEL_4;
      v22 = *(_QWORD *)v10;
    }
    else
    {
      v22 = *(_QWORD *)(v4 + 168);
    }
    MiFillPhysicalPages(0LL, v11, a3, v22);
  }
LABEL_4:
  LeafVa = MiGetLeafVa(a3);
  if ( LeafVa <= 0x7FFFFFFEFFFFLL
    || LeafVa >= qword_140E2F3C0 && LeafVa <= qword_140E2F3D0
    || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 2;
  }
  *(_QWORD *)a4 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v14 = v31 | 0x90000000;
  if ( a2 )
    v14 = v31 | 0x98000000;
  ValidPte = MiMakeValidPte(a3, v11, v14);
  if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140E2DC09) != 0 )
    ValidPte &= ~0x20uLL;
  if ( a2 == 3 && (MiFlags & 0x30) != 0 && (v9 & 2) == 0 )
  {
    v23 = MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(PsInitialSystemProcess, a3);
    v16 = *(_QWORD *)a3;
    ContainingPageTable = v23;
  }
  else
  {
    v16 = *(_QWORD *)a3;
    if ( a2 != 3 && !v16 )
    {
      v17 = 4608LL;
      v18 = 0LL;
      goto LABEL_13;
    }
  }
  v17 = 512LL;
  v18 = v16 & 1;
  if ( (v16 & 1) != 0 && ContainingPageTable != v11 )
    v17 = 2560LL;
LABEL_13:
  MiInitializePfnForOtherProcess(v11, a3, ContainingPageTable, v17);
  if ( a2 )
  {
    if ( v18 && (unsigned int)MiIsPageAGapPage((PVOID)((v16 >> 12) & 0xFFFFFFFFFFLL), a2) )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiLockNestedPageTable(*(_QWORD *)(a1 + 32), a3);
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32);
        while ( *(__int64 *)(a4 + 24) < 0 );
      }
      *(_QWORD *)(a4 + 24) = *(_QWORD *)(a4 + 24) & 0xC000000000000000uLL | 0x201;
      MiInitializeUsedPtesCount(a4, 512LL);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), a3);
    }
    if ( a2 == 3 )
      ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  }
  if ( (v16 & 1) != 0 )
  {
    if ( (v16 & 0x20) != 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140E2DC09) != 0 )
      MiClearPteAccessedBitRange(a1, a2, a3);
    MiTransformValidPteInPlace(a3, a3, ValidPte, 0x40u, a2);
    if ( a2 != 3 )
      goto LABEL_20;
    v19 = v28;
    v20 = *(_QWORD *)(v28 + 136);
    if ( !v20 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      MiInitializeTbFlushList(
        (__int64)ProcessorFlushList,
        *(_QWORD *)(a1 + 32),
        *((_DWORD *)ProcessorFlushList + 3),
        8,
        116);
      *(_QWORD *)(v28 + 136) = v20;
    }
    MiInsertRecursiveTbFlushEntries(v20, 3, a3);
  }
  else
  {
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && a3 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(a3, ValidPte, 128LL);
    *(_QWORD *)a3 = ValidPte;
    if ( a2 != 3 )
    {
LABEL_20:
      if ( !a2 && *(_DWORD *)(v28 + 120) == 3 )
      {
        v33 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v33);
          while ( *(__int64 *)(a4 + 24) < 0 );
        }
        v27 = *(_DWORD *)(a4 + 32);
        LOWORD(v27) = 2;
        *(_DWORD *)(a4 + 32) = v27;
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      return;
    }
    v19 = v28;
  }
  if ( *(_DWORD *)(v19 + 120) != 1 )
    MiReplicatePteChange(a3, 1LL);
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
}
