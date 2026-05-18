/*
 * XREFs of sub_18008D544 @ 0x18008D544
 * Callers:
 *     sub_18008F900 @ 0x18008F900 (sub_18008F900.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_18008D544(__int64 a1, __int64 a2, _BYTE *a3)
{
  sub_180016F54(a1, a2);
  *(_BYTE *)(a1 + 32) = *a3;
  return a1;
}
