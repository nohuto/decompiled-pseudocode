/*
 * XREFs of ExCreateHandle @ 0x140A264F4
 * Callers:
 *     PsAssignThreadId @ 0x14046A77C (PsAssignThreadId.c)
 * Callees:
 *     ExCreateHandleEx @ 0x14084CE30 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(unsigned int *a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0, 0LL);
}
