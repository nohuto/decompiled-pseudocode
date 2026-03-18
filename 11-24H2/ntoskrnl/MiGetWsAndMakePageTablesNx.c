/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x140488384
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140AA8538 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     MiPerformSafePdeWrite @ 0x140488444 (MiPerformSafePdeWrite.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int8 v1; // bl
  __int64 v2; // r8

  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v1 = MiLockWorkingSetShared((__int64)p_Blink);
  MiLockNestedPageTable((__int64)p_Blink, 0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(p_Blink, 0xFFFFF6FB7DBEDF68uLL, MEMORY[0xFFFFF6FB7DBEDF68], 2LL);
  MiUnlockPageTableInternal((__int64)p_Blink, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)p_Blink, v1);
  return MiIssueFlushTbEntire(1LL, 0xFFFFFFFFLL, v2);
}
