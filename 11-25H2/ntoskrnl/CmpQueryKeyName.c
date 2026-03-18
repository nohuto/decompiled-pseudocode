/*
 * XREFs of CmpQueryKeyName @ 0x1408C1890
 * Callers:
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 * Callees:
 *     CmpDoQueryKeyName @ 0x140206830 (CmpDoQueryKeyName.c)
 *     CmpFatalFilter @ 0x1407CB6C8 (CmpFatalFilter.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  return CmpDoQueryKeyName(a1, a2, a3, a4, a5);
}
