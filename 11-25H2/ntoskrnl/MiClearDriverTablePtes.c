/*
 * XREFs of MiClearDriverTablePtes @ 0x1404EE8A0
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiDecreaseUsedPtesInPfn @ 0x1402274AC (MiDecreaseUsedPtesInPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiWriteWsle @ 0x14037CA80 (MiWriteWsle.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiReducePteUseCount @ 0x14042F6B0 (MiReducePteUseCount.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiClearDriverTablePtes(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rdi
  char *AnyMultiplexedVm; // r12
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // r13
  __int64 *ProcessorFlushList; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  char WsleContents; // al
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rbx
  ULONG_PTR v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int8 v19; // [rsp+90h] [rbp+8h]
  int v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 0LL;
  v2 = ((*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL)
     + 8LL * ((unsigned int)((*(_DWORD *)(a1 + 64) & 0xFFF) != 0) + (*(_DWORD *)(a1 + 64) >> 12))
     - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v19 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v5 = (unsigned int)(dword_140E3726C + dword_140E37270) >> 12;
  v6 = v2 + 8LL * ((unsigned int)v5 + (((dword_140E3726C + dword_140E37270) & 0xFFF) != 0));
  ProcessorFlushList = 0LL;
  v8 = (__int64)(v2 << 25) >> 16;
  if ( v2 >= v6 )
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
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v1);
    }
    v1 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)AnyMultiplexedVm, v1, v5, v4);
LABEL_8:
    v9 = MI_READ_PTE_LOCK_FREE(v2);
    if ( v9 )
    {
      if ( v9 == MiMakeDemandZeroPte(16) )
      {
        *(_QWORD *)v2 = CLFS_LSN_NULL_EXT;
        MiReducePteUseCount(v10, v2, 1u);
      }
      else
      {
        WsleContents = MiGetWsleContents(v10, v8);
        if ( (WsleContents & 0xF) == 9 )
        {
          LOBYTE(v12) = WsleContents & 0xF;
          MiWriteWsle(v12, v8, WsleContents & 0xF0 | 0xA);
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
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v8, 1LL, 0);
        v13 = 48 * ((v9 >> 12) & 0xFFFFFFFFFFLL);
        v21 = 0;
        v14 = v13 - 0x220000000000LL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v21);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        MiDecrementShareCountEx(v13 - 0x220000000000LL, 0LL);
        *(_QWORD *)v2 = CLFS_LSN_NULL_EXT;
        if ( (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
          KeBugCheckEx(
            0x1Au,
            0x515C0uLL,
            v2,
            0xAAAAAAAAAAAAAAABuLL * (v13 >> 4),
            *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        v20 = *(_DWORD *)(v14 + 32);
        BYTE2(v20) = BYTE2(v20) & 0xF8 | 6;
        *(_DWORD *)(v14 + 32) = v20;
        *(_QWORD *)(v14 + 24) = (*(_QWORD *)(v14 + 24) + 1LL) ^ (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0xC000000000000000uLL;
        *(_QWORD *)(v14 + 24) |= 0x4000000000000000uLL;
        v15 = 48 * (*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v20);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        MiDecreaseUsedPtesInPfn(v15, 1uLL);
        *(_QWORD *)(v15 + 24) = (*(_QWORD *)(v15 + 24) - 1LL) ^ (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) - 1LL)) & 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiSetPfnContainingFrame(v14, 0x3FFFFFFFFELL);
        v16 = qword_140E2D940;
        *(_QWORD *)(v14 + 8) = 0LL;
        v17 = *(_QWORD *)(v14 + 16);
        if ( v16 && (v17 & 0x10) == 0 )
          v17 &= ~v16;
        *(_QWORD *)(v14 + 16) = 0LL;
        *(_QWORD *)(v14 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v14 + 16), HIDWORD(v17));
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v2 += 8LL;
    v8 += 4096LL;
  }
  while ( v2 < v6 );
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
LABEL_31:
  MiUnlockPageTable((__int64)AnyMultiplexedVm, v1);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v19);
}
