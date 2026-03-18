/*
 * XREFs of MiInitializeSystemPageTable @ 0x1402D04C8
 * Callers:
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiFillPhysicalPages @ 0x14024D8D0 (MiFillPhysicalPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiIsPageAGapPage @ 0x1402D046C (MiIsPageAGapPage.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiClearPteAccessedBitRange @ 0x1402D1788 (MiClearPteAccessedBitRange.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402FB420 (MiInsertRecursiveTbFlushEntries.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeUsedPtesCount @ 0x1403859D0 (MiInitializeUsedPtesCount.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiCopyPtes @ 0x1403FDCB0 (MiCopyPtes.c)
 *     MiTransformValidPteInPlace @ 0x1403FF3E4 (MiTransformValidPteInPlace.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     MiReplicatePteChange @ 0x1404F4ED8 (MiReplicatePteChange.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406780F8 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 *     MxCopyPage @ 0x140C41244 (MxCopyPage.c)
 */

void __fastcall MiInitializeSystemPageTable(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  char v9; // si
  __int64 v10; // rdi
  __int64 v11; // r13
  unsigned __int64 LeafVa; // rax
  __int64 ContainingPageTable; // r12
  unsigned int v14; // r8d
  ULONG_PTR ValidPte; // rdi
  unsigned __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 ProcessorFlushList; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  ULONG_PTR v27; // r13
  __int64 v28; // rdx
  __int64 *v29; // rbx
  int v30; // eax
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  int v34; // [rsp+98h] [rbp+10h]
  int v35; // [rsp+A0h] [rbp+18h] BYREF
  int v36; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)a3;
  v31 = v4;
  v9 = 0;
  v10 = (__int64)(a3 << 25) >> 16;
  v34 = a2 != 0 ? 6 : 4;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
  v32 = v11;
  if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4));
    v4 = v31;
  }
  if ( a2 )
  {
    if ( (v5 & 1) != 0 )
    {
      if ( KeGetCurrentPrcb()->MmInternal )
      {
        v27 = MiMapPageInHyperSpaceWorker(v11, 0LL, 0x80000000);
        MiCopyPtes(v27);
        if ( (MiFlags & 0x2000000) == 0 )
        {
          v28 = (unsigned int)(1 << a2);
          if ( ((unsigned __int8)v28 & (unsigned __int8)byte_140E2D889) != 0 )
          {
            v29 = (__int64 *)v27;
            if ( v27 < v27 + 4096 )
            {
              do
              {
                v28 = *v29;
                if ( (*v29 & 0x21) == 0x21 )
                  MiWriteValidPteNewProtection((ULONG_PTR)v29, v28 & 0xFFFFFFFFFFFFFFDFuLL);
                ++v29;
              }
              while ( (unsigned __int64)v29 < v27 + 4096 );
            }
          }
        }
        LOBYTE(v28) = 17;
        MiUnmapPageInHyperSpaceWorker(v27, v28, 0x80000000LL);
        v11 = v32;
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
      if ( (PVOID)((v5 >> 12) & 0xFFFFFFFFFFLL) == qword_140E37100[0] )
        goto LABEL_4;
      v25 = *(_QWORD *)v10;
    }
    else
    {
      v25 = *(_QWORD *)(v4 + 168);
    }
    MiFillPhysicalPages(0LL, v11, a3, v25);
  }
LABEL_4:
  LeafVa = MiGetLeafVa(a3);
  if ( LeafVa <= 0x7FFFFFFEFFFFLL
    || LeafVa >= qword_140E2F040 && LeafVa <= qword_140E2F050
    || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 2;
  }
  *(_QWORD *)a4 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  v14 = v34 | 0x90000000;
  if ( a2 )
    v14 = v34 | 0x98000000;
  ValidPte = MiMakeValidPte(a3, v11, v14);
  if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140E2D889) != 0 )
    ValidPte &= ~0x20uLL;
  if ( a2 == 3 && (MiFlags & 0x30) != 0 && (v9 & 2) == 0 )
  {
    v26 = MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE(PsInitialSystemProcess, a3);
    v16 = *(_QWORD *)a3;
    ContainingPageTable = v26;
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
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( *(__int64 *)(a4 + 24) < 0 );
      }
      *(_QWORD *)(a4 + 24) = *(_QWORD *)(a4 + 24) & 0xC000000000000000uLL | 0x201;
      MiInitializeUsedPtesCount(a4, 512LL);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiUnlockPageTable(*(_QWORD *)(a1 + 32), a3);
    }
    if ( a2 == 3 )
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
  }
  if ( (v16 & 1) != 0 )
  {
    if ( (v16 & 0x20) != 0 && ((unsigned __int8)(1 << a2) & (unsigned __int8)byte_140E2D889) != 0 )
      MiClearPteAccessedBitRange(a1, a2, a3);
    MiTransformValidPteInPlace(a3, a3, ValidPte, 64, a2);
    if ( a2 != 3 )
      goto LABEL_20;
    v22 = v31;
    v23 = *(_QWORD *)(v31 + 136);
    if ( !v23 )
    {
      ProcessorFlushList = MiGetProcessorFlushList(0LL, v19, v20, v21);
      MiInitializeTbFlushList(ProcessorFlushList, *(_QWORD *)(a1 + 32), *(_DWORD *)(ProcessorFlushList + 12), 8, 116);
      *(_QWORD *)(v31 + 136) = v23;
    }
    MiInsertRecursiveTbFlushEntries(v23, 3LL, a3);
  }
  else
  {
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && a3 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(a3, ValidPte);
    *(_QWORD *)a3 = ValidPte;
    if ( a2 != 3 )
    {
LABEL_20:
      if ( !a2 && *(_DWORD *)(v31 + 120) == 3 )
      {
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v36);
          while ( *(__int64 *)(a4 + 24) < 0 );
        }
        v30 = *(_DWORD *)(a4 + 32);
        LOWORD(v30) = 2;
        *(_DWORD *)(a4 + 32) = v30;
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      return;
    }
    v22 = v31;
  }
  if ( *(_DWORD *)(v22 + 120) != 1 )
    MiReplicatePteChange(a3, 1LL);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E37180);
}
