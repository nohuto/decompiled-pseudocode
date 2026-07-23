/*
 * XREFs of ExCreateHandle @ 0x140A1AF74
 * Callers:
 *     PsAssignThreadId @ 0x140463114 (PsAssignThreadId.c)
 * Callees:
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(unsigned int *a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
