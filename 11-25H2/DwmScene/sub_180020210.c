/*
 * XREFs of sub_180020210 @ 0x180020210
 * Callers:
 *     sub_18002057C @ 0x18002057C (sub_18002057C.c)
 * Callees:
 *     sub_180023180 @ 0x180023180 (sub_180023180.c)
 */

__int64 __fastcall sub_180020210(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  sub_180023180(a1, v4);
  return a1;
}
