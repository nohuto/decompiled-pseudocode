/*
 * XREFs of MiUnmapKernelScp @ 0x140498D98
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiWriteWsle @ 0x140203470 (MiWriteWsle.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiDecreaseUsedPtes @ 0x14021C060 (MiDecreaseUsedPtes.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 */

char __fastcall MiUnmapKernelScp(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  __int64 *ProcessorFlushList; // rdi
  __int64 v7; // rsi
  unsigned __int8 v8; // r13
  __int64 v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  char WsleContents; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 ContainingPageTable; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int8 v21; // [rsp+70h] [rbp+8h]
  __int64 v22; // [rsp+78h] [rbp+10h]
  __int64 v23; // [rsp+78h] [rbp+10h]

  v1 = 0LL;
  v2 = (((_WORD)dword_140E375EC + (_WORD)dword_140E375F0) & 0xFFF) != 0 ? 0x1000 : 0;
  v3 = (dword_140E375EC + dword_140E375F0) & 0xFFFFF000;
  v4 = *(_QWORD *)(a1 + 48) + (unsigned int)v3 + (_DWORD)v2 + (*(_DWORD *)(a1 + 64) & 0xFFFFF000);
  v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProcessorFlushList = 0LL;
  v22 = qword_140E2D880;
  v7 = 0LL;
  v21 = MiLockWorkingSetShared((__int64)&unk_140E37E80, v2, v3, 4294963200LL);
  v8 = v21;
  if ( !dword_140E2D87C )
    return MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v8);
  v10 = v22;
  do
  {
    v11 = *(_QWORD *)(v10 + 8 * v7 + 48);
    v12 = v5 + 8 * v7;
    v23 = v11;
    if ( v1 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_6;
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      MiUnlockPageTableInternal((__int64)&unk_140E37E80, v1);
    }
    v1 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)&unk_140E37E80, v1);
LABEL_6:
    if ( *(_QWORD *)v12 )
    {
      WsleContents = MiGetWsleContents(v11, v4 + (unsigned int)((_DWORD)v7 << 12));
      MiWriteWsle(v14, v4 + (unsigned int)((_DWORD)v7 << 12), WsleContents & 0xF0 | 0xA);
      *(_QWORD *)v12 = CLFS_LSN_NULL_EXT;
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)&unk_140E37E80,
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          1);
      }
      MiInsertTbFlushEntry((__int64)ProcessorFlushList, v4 + (unsigned int)((_DWORD)v7 << 12), 1LL, 0);
      MiLockAndDecrementShareCount(48 * v23 - 0x220000000000LL, 2LL, v15, v16);
      ContainingPageTable = MiGetContainingPageTable(v5 + 8 * v7);
      MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 2LL, v18, v19);
      MiDecreaseUsedPtes(v20, v1, 1LL);
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < dword_140E2D87C );
  v8 = v21;
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v1 )
    MiUnlockPageTableInternal((__int64)&unk_140E37E80, v1);
  return MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v8);
}
