/*
 * XREFs of sub_18008D6A4 @ 0x18008D6A4
 * Callers:
 *     sub_18008FA60 @ 0x18008FA60 (sub_18008FA60.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_18008D6A4(__int64 a1, __int64 a2, _BYTE *a3)
{
  sub_180017054(a1, a2);
  *(_BYTE *)(a1 + 32) = *a3;
  return a1;
}
