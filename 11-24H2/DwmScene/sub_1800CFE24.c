/*
 * XREFs of sub_1800CFE24 @ 0x1800CFE24
 * Callers:
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 *     sub_1800CFAC4 @ 0x1800CFAC4 (sub_1800CFAC4.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 *     sub_1800E24E9 @ 0x1800E24E9 (sub_1800E24E9.c)
 *     sub_1800E2523 @ 0x1800E2523 (sub_1800E2523.c)
 * Callees:
 *     sub_1800CFF6C @ 0x1800CFF6C (sub_1800CFF6C.c)
 */

__int64 __fastcall sub_1800CFE24(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800CFF6C(v2 + 16);
  return sub_1800CFD88(a1);
}
