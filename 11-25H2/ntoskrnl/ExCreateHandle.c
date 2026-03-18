/*
 * XREFs of ExCreateHandle @ 0x140A1B200
 * Callers:
 *     PsAssignThreadId @ 0x14046BB40 (PsAssignThreadId.c)
 * Callees:
 *     ExCreateHandleEx @ 0x140851070 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(unsigned int *a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
