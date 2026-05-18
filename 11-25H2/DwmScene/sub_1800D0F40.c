/*
 * XREFs of sub_1800D0F40 @ 0x1800D0F40
 * Callers:
 *     sub_1800CF62C @ 0x1800CF62C (sub_1800CF62C.c)
 *     sub_1800CF964 @ 0x1800CF964 (sub_1800CF964.c)
 *     sub_1800D1394 @ 0x1800D1394 (sub_1800D1394.c)
 * Callees:
 *     sub_18003FE84 @ 0x18003FE84 (sub_18003FE84.c)
 */

unsigned __int64 __fastcall sub_1800D0F40(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_18003FE84((__int64)a1, a1[2] + 1LL);
  return sub_1800D0D64(a1, v2);
}
