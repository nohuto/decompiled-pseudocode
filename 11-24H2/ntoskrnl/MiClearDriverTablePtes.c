/*
 * XREFs of MiClearDriverTablePtes @ 0x1404F2870
 * Callers:
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReducePteUseCount @ 0x140212920 (MiReducePteUseCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiWriteWsle @ 0x140232940 (MiWriteWsle.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14039EEFC (MiDecreaseUsedPtesInPfn.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall MiClearDriverTablePtes(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rdi
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v4; // r13
  __int64 *ProcessorFlushList; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  char WsleContents; // al
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rbx
  ULONG_PTR v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int8 v17; // [rsp+90h] [rbp+8h]
  unsigned int v18; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL)
     + 8LL * ((unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0) + (*(_DWORD *)(a1 + 64) >> 12))
     - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v17 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v4 = v2
     + 8LL
     * (((unsigned int)(dword_140E374AC + dword_140E374B0) >> 12) + (((dword_140E374AC + dword_140E374B0) & 0xFFF) != 0));
  ProcessorFlushList = 0LL;
  v6 = (__int64)(v2 << 25) >> 16;
  if ( v2 >= v4 )
    goto LABEL_31;
  do
  {
    if ( v1 )
    {
      if ( (v2 & 0xFFF) != 0 )
        goto LABEL_8;
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v1);
    }
    v1 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)AnyMultiplexedVm, v1);
LABEL_8:
    v7 = MI_READ_PTE_LOCK_FREE(v2);
    if ( v7 )
    {
      if ( v7 == MiMakeDemandZeroPte(16) )
      {
        *(_QWORD *)v2 = CLFS_LSN_NULL_EXT;
        MiReducePteUseCount(v8, v2, 1u);
      }
      else
      {
        WsleContents = MiGetWsleContents(v8, v6);
        if ( (WsleContents & 0xF) == 9 )
        {
          LOBYTE(v10) = WsleContents & 0xF;
          MiWriteWsle(v10, v6, WsleContents & 0xF0 | 0xA);
        }
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList(
            (__int64)ProcessorFlushList,
            (__int64)AnyMultiplexedVm,
            *((_DWORD *)ProcessorFlushList + 3),
            8,
            1);
        }
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v6, 1LL, 0);
        v11 = 48 * ((v7 >> 12) & 0xFFFFFFFFFFLL);
        v19 = 0;
        v12 = v11 - 0x220000000000LL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v19);
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        MiDecrementShareCountEx(v11 - 0x220000000000LL, 0LL);
        *(_QWORD *)v2 = CLFS_LSN_NULL_EXT;
        if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          KeBugCheckEx(
            0x1Au,
            0x515C0uLL,
            v2,
            0xAAAAAAAAAAAAAAABuLL * (v11 >> 4),
            *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        v18 = *(_DWORD *)(v12 + 32);
        BYTE2(v18) = BYTE2(v18) & 0xF8 | 6;
        *(_DWORD *)(v12 + 32) = v18;
        *(_QWORD *)(v12 + 24) = (*(_QWORD *)(v12 + 24) + 1LL) ^ (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + 1LL)) & 0xC000000000000000uLL;
        *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
        v13 = 48 * (*(_QWORD *)(v12 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v18 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v18);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        MiDecreaseUsedPtesInPfn(v13, 1uLL);
        *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) - 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) - 1LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiSetPfnContainingFrame(v12, 0x3FFFFFFFFELL);
        v14 = qword_140E2DB80;
        *(_QWORD *)(v12 + 8) = 0LL;
        v15 = *(_QWORD *)(v12 + 16);
        if ( v14 && (v15 & 0x10) == 0 )
          v15 &= ~v14;
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v12 + 16), HIDWORD(v15));
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v2 += 8LL;
    v6 += 4096LL;
  }
  while ( v2 < v4 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
LABEL_31:
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v1);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v17);
}
