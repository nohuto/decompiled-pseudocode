/*
 * XREFs of CmpQueryKeyName @ 0x14096A4C0
 * Callers:
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 * Callees:
 *     CmpDoQueryKeyName @ 0x14041EA20 (CmpDoQueryKeyName.c)
 *     CmpFatalFilter @ 0x1407DAE8C (CmpFatalFilter.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  return CmpDoQueryKeyName(a1, a2, a3, a4, a5);
}
