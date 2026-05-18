/*
 * XREFs of sub_18008D9E8 @ 0x18008D9E8
 * Callers:
 *     sub_18008DA68 @ 0x18008DA68 (sub_18008DA68.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

char __fastcall sub_18008D9E8(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  sub_180017054(a2, a3);
  result = *(_BYTE *)(a3 + 32);
  *(_BYTE *)(a2 + 32) = result;
  return result;
}
