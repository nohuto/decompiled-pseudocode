/*
 * XREFs of SmmGetAnyFreeBlockFromPool @ 0x140093020
 * Callers:
 *     SmmAcquireBlock @ 0x140058844 (SmmAcquireBlock.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmRemoveBlockFromPool @ 0x1400932BC (SmmRemoveBlockFromPool.c)
 */

_QWORD *__fastcall SmmGetAnyFreeBlockFromPool(_QWORD *a1)
{
  _QWORD *v2; // rbx

  if ( (_QWORD *)*a1 == a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 702;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!IsListEmpty(&pPool->FreeListHead)",
      702LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = (_QWORD *)*a1;
  SmmRemoveBlockFromPool(a1, *a1 - 16LL);
  return v2 - 2;
}
