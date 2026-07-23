/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1404834D4
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140AA3638 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     MiPerformSafePdeWrite @ 0x140483594 (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiGetWsAndMakePageTablesNx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int8 v5; // bl
  __int64 v6; // r8

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v5 = MiLockWorkingSetShared((__int64)p_Blink, a2, a3, a4);
  MiLockNestedPageTable((__int64)p_Blink, 0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(p_Blink, 0xFFFFF6FB7DBEDF68uLL, MEMORY[0xFFFFF6FB7DBEDF68], 2LL);
  MiUnlockPageTableInternal((__int64)p_Blink, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)p_Blink, v5);
  return MiIssueFlushTbEntire(1LL, 0xFFFFFFFFLL, v6);
}
