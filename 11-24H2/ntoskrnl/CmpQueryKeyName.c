/*
 * XREFs of CmpQueryKeyName @ 0x140952F50
 * Callers:
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 * Callees:
 *     CmpDoQueryKeyName @ 0x140414760 (CmpDoQueryKeyName.c)
 *     CmpFatalFilter @ 0x1407DB3DC (CmpFatalFilter.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  return CmpDoQueryKeyName(a1, a2, a3, a4, a5);
}
