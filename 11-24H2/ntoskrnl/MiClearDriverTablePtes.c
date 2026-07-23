/*
 * XREFs of MiClearDriverTablePtes @ 0x1404F0310
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiWriteWsle @ 0x140203470 (MiWriteWsle.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiDecreaseUsedPtesInPfn @ 0x14021D39C (MiDecreaseUsedPtesInPfn.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiReducePteUseCount @ 0x140305C80 (MiReducePteUseCount.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiClearDriverTablePtes(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rdi
  char *AnyMultiplexedVm; // r12
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // r13
  __int64 *ProcessorFlushList; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  char WsleContents; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rbx
  ULONG_PTR v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int8 v22; // [rsp+90h] [rbp+8h]
  unsigned int v23; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL)
     + 8LL * ((unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0) + (*(_DWORD *)(a1 + 64) >> 12))
     - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v22 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v4, v5, v6);
  v7 = v2
     + 8LL
     * (((unsigned int)(dword_140E375EC + dword_140E375F0) >> 12) + (((dword_140E375EC + dword_140E375F0) & 0xFFF) != 0));
  ProcessorFlushList = 0LL;
  v9 = (__int64)(v2 << 25) >> 16;
  if ( v2 >= v7 )
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
    v10 = MI_READ_PTE_LOCK_FREE(v2);
    if ( v10 )
    {
      if ( v10 == MiMakeDemandZeroPte(16) )
      {
        *(_QWORD *)v2 = CLFS_LSN_NULL_EXT;
        MiReducePteUseCount(v11, v2, 1LL);
      }
      else
      {
        WsleContents = MiGetWsleContents(v11, v9);
        if ( (WsleContents & 0xF) == 9 )
        {
          LOBYTE(v13) = WsleContents & 0xF;
          MiWriteWsle(v13, v9, WsleContents & 0xF0 | 0xA);
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
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v9, 1LL, 0);
        v16 = 48 * ((v10 >> 12) & 0xFFFFFFFFFFLL);
        v24 = 0;
        v17 = v16 - 0x220000000000LL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v24);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        MiDecrementShareCountEx(v16 - 0x220000000000LL, 0LL, v14, v15);
        *(_QWORD *)v2 = CLFS_LSN_NULL_EXT;
        if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          KeBugCheckEx(
            0x1Au,
            0x515C0uLL,
            v2,
            0xAAAAAAAAAAAAAAABuLL * (v16 >> 4),
            *(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        v23 = *(_DWORD *)(v17 + 32);
        BYTE2(v23) = BYTE2(v23) & 0xF8 | 6;
        *(_DWORD *)(v17 + 32) = v23;
        *(_QWORD *)(v17 + 24) = (*(_QWORD *)(v17 + 24) + 1LL) ^ (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) + 1LL)) & 0xC000000000000000uLL;
        *(_QWORD *)(v17 + 24) |= 0x4000000000000000uLL;
        v18 = 48 * (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v23 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v23);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        MiDecreaseUsedPtesInPfn(v18, 1uLL);
        *(_QWORD *)(v18 + 24) = (*(_QWORD *)(v18 + 24) - 1LL) ^ (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - 1LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiSetPfnContainingFrame(v17, 0x3FFFFFFFFELL);
        v19 = qword_140E2DCC0;
        *(_QWORD *)(v17 + 8) = 0LL;
        v20 = *(_QWORD *)(v17 + 16);
        if ( v19 && (v20 & 0x10) == 0 )
          v20 &= ~v19;
        *(_QWORD *)(v17 + 16) = 0LL;
        *(_QWORD *)(v17 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v17 + 16), HIDWORD(v20));
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v2 += 8LL;
    v9 += 4096LL;
  }
  while ( v2 < v7 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
LABEL_31:
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v1);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v22);
}
