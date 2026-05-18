/*
 * XREFs of sub_180081740 @ 0x180081740
 * Callers:
 *     sub_18004CA78 @ 0x18004CA78 (sub_18004CA78.c)
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 */

char __fastcall sub_180081740(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_180017054((__int64)v5, a2);
  return sub_180027D84(a1, v3);
}
