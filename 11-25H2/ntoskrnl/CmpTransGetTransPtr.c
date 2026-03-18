/*
 * XREFs of CmpTransGetTransPtr @ 0x140A18570
 * Callers:
 *     CmpTransIsTransActive @ 0x1404D9480 (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
