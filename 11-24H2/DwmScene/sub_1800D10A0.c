/*
 * XREFs of sub_1800D10A0 @ 0x1800D10A0
 * Callers:
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 *     sub_1800CFAC4 @ 0x1800CFAC4 (sub_1800CFAC4.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 * Callees:
 *     sub_18003FFE4 @ 0x18003FFE4 (sub_18003FFE4.c)
 */

unsigned __int64 __fastcall sub_1800D10A0(_QWORD *a1)
{
  unsigned __int64 v2; // rax

  v2 = sub_18003FFE4((__int64)a1, a1[2] + 1LL);
  return sub_1800D0EC4(a1, v2);
}
