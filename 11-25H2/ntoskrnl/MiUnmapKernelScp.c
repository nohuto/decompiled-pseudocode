/*
 * XREFs of MiUnmapKernelScp @ 0x14049F14C
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiWriteWsle @ 0x14037CA80 (MiWriteWsle.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiDecreaseUsedPtes @ 0x14038BCF0 (MiDecreaseUsedPtes.c)
 */

char __fastcall MiUnmapKernelScp(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r12
  __int64 v3; // r15
  __int64 *ProcessorFlushList; // rdi
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // r13
  __int64 v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  char WsleContents; // al
  __int64 v14; // rcx
  __int64 ContainingPageTable; // rax
  __int64 v16; // rcx
  unsigned __int8 v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  v1 = 0LL;
  v2 = *(_QWORD *)(a1 + 48)
     + ((dword_140E3726C + dword_140E37270) & 0xFFFFF000)
     + ((((_WORD)dword_140E3726C + (_WORD)dword_140E37270) & 0xFFF) != 0 ? 0x1000 : 0)
     + (*(_DWORD *)(a1 + 64) & 0xFFFFF000);
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ProcessorFlushList = 0LL;
  v18 = qword_140E2D500;
  v5 = 0LL;
  v17 = MiLockWorkingSetShared((__int64)&unk_140E37B00);
  v8 = v17;
  if ( !dword_140E2D4FC )
    return MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v8);
  v10 = v18;
  do
  {
    v11 = *(_QWORD *)(v10 + 8 * v5 + 48);
    v12 = v3 + 8 * v5;
    v19 = v11;
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
      MiUnlockPageTable((__int64)&unk_140E37B00, v1);
    }
    v1 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockNestedPageTable((__int64)&unk_140E37B00, v1, v6, v7);
LABEL_6:
    if ( *(_QWORD *)v12 )
    {
      WsleContents = MiGetWsleContents(v11, v2 + (unsigned int)((_DWORD)v5 << 12));
      MiWriteWsle(v14, v2 + (unsigned int)((_DWORD)v5 << 12), WsleContents & 0xF0 | 0xA);
      *(_QWORD *)v12 = CLFS_LSN_NULL_EXT;
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)&unk_140E37B00,
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          1);
      }
      MiInsertTbFlushEntry((__int64)ProcessorFlushList, v2 + (unsigned int)((_DWORD)v5 << 12), 1LL, 0);
      MiLockAndDecrementShareCount(48 * v19 - 0x220000000000LL, 2);
      ContainingPageTable = MiGetContainingPageTable(v3 + 8 * v5);
      MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 2);
      MiDecreaseUsedPtes(v16, v1, 1u);
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < dword_140E2D4FC );
  v8 = v17;
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( v1 )
    MiUnlockPageTable((__int64)&unk_140E37B00, v1);
  return MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v8);
}
