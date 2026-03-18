/*
 * XREFs of CmpTransGetTransPtr @ 0x140A228E4
 * Callers:
 *     CmpTransIsTransActive @ 0x1404D8500 (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
