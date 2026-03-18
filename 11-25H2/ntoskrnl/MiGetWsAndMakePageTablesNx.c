/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x140488518
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140AA4AB4 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiIssueFlushTbEntire @ 0x14026F7B8 (MiIssueFlushTbEntire.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiPerformSafePdeWrite @ 0x1404885D8 (MiPerformSafePdeWrite.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int8 v1; // bl
  __int64 v2; // r8
  __int64 v3; // r9

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v1 = MiLockWorkingSetShared((__int64)p_Blink);
  MiLockNestedPageTable((__int64)p_Blink, 0xFFFFF6FB7DBEDF68uLL, v2, v3);
  MiPerformSafePdeWrite(p_Blink, 0xFFFFF6FB7DBEDF68uLL, MEMORY[0xFFFFF6FB7DBEDF68], 2LL);
  MiUnlockPageTable((__int64)p_Blink, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)p_Blink, v1);
  return MiIssueFlushTbEntire(1LL, -1);
}
