/*
 * XREFs of MiUnmapKernelScp @ 0x14049DF98
 * Callers:
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     MiWriteWsle @ 0x140232940 (MiWriteWsle.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 */

char __fastcall MiUnmapKernelScp(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r12
  __int64 v3; // r15
  __int64 *ProcessorFlushList; // rdi
  __int64 v5; // rsi
  unsigned __int8 v6; // r13
  __int64 v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  char WsleContents; // al
  __int64 v12; // rcx
  __int64 ContainingPageTable; // rax
  __int64 v14; // rcx
  unsigned __int8 v15; // [rsp+70h] [rbp+8h]
  __int64 v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+78h] [rbp+10h]

  v1 = 0LL;
  v2 = *(_QWORD *)(a1 + 48)
     + ((dword_140E374AC + dword_140E374B0) & 0xFFFFF000)
     + ((((_WORD)dword_140E374AC + (_WORD)dword_140E374B0) & 0xFFF) != 0 ? 0x1000 : 0)
     + (*(_DWORD *)(a1 + 64) & 0xFFFFF000);
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProcessorFlushList = 0LL;
  v16 = qword_140E2D740;
  v5 = 0LL;
  v15 = MiLockWorkingSetShared((__int64)&unk_140E37D40);
  v6 = v15;
  if ( !dword_140E2D73C )
    return MiUnlockWorkingSetShared((__int64)&unk_140E37D40, v6);
  v8 = v16;
  do
  {
    v9 = *(_QWORD *)(v8 + 8 * v5 + 48);
    v10 = v3 + 8 * v5;
    v17 = v9;
    if ( v1 )
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_6;
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal((__int64)&unk_140E37D40, v1);
    }
    v1 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)&unk_140E37D40, v1);
LABEL_6:
    if ( *(_QWORD *)v10 )
    {
      WsleContents = MiGetWsleContents(v9, v2 + (unsigned int)((_DWORD)v5 << 12));
      MiWriteWsle(v12, v2 + (unsigned int)((_DWORD)v5 << 12), WsleContents & 0xF0 | 0xA);
      *(_QWORD *)v10 = CLFS_LSN_NULL_EXT;
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)&unk_140E37D40,
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          1);
      }
      MiInsertTbFlushEntry((__int64)ProcessorFlushList, v2 + (unsigned int)((_DWORD)v5 << 12), 1LL, 0);
      MiLockAndDecrementShareCount(48 * v17 - 0x220000000000LL, 2);
      ContainingPageTable = MiGetContainingPageTable(v3 + 8 * v5);
      MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 2);
      MiDecreaseUsedPtes(v14, v1, 1u);
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < dword_140E2D73C );
  v6 = v15;
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v1 )
    MiUnlockPageTableInternal((__int64)&unk_140E37D40, v1);
  return MiUnlockWorkingSetShared((__int64)&unk_140E37D40, v6);
}
