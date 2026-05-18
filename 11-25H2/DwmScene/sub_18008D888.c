/*
 * XREFs of sub_18008D888 @ 0x18008D888
 * Callers:
 *     sub_18008D908 @ 0x18008D908 (sub_18008D908.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

char __fastcall sub_18008D888(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  sub_180016F54(a2, a3);
  result = *(_BYTE *)(a3 + 32);
  *(_BYTE *)(a2 + 32) = result;
  return result;
}
