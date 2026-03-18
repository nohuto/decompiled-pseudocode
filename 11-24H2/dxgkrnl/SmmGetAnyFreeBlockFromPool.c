/*
 * XREFs of SmmGetAnyFreeBlockFromPool @ 0x140095524
 * Callers:
 *     SmmAcquireBlock @ 0x1400582C4 (SmmAcquireBlock.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmRemoveBlockFromPool @ 0x1400957C0 (SmmRemoveBlockFromPool.c)
 */

_QWORD *__fastcall SmmGetAnyFreeBlockFromPool(_QWORD *a1)
{
  _QWORD *v2; // rbx

  if ( (_QWORD *)*a1 == a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 707;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!IsListEmpty(&pPool->FreeListHead)",
      707LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = (_QWORD *)*a1;
  SmmRemoveBlockFromPool(a1, *a1 - 16LL);
  return v2 - 2;
}
