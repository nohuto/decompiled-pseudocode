/*
 * XREFs of sub_1800815E0 @ 0x1800815E0
 * Callers:
 *     sub_18004C918 @ 0x18004C918 (sub_18004C918.c)
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 */

char __fastcall sub_1800815E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_180016F54((__int64)v5, a2);
  return sub_180027C24(a1, v3);
}
