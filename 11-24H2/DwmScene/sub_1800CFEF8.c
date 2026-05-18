/*
 * XREFs of sub_1800CFEF8 @ 0x1800CFEF8
 * Callers:
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800CF89C @ 0x1800CF89C (sub_1800CF89C.c)
 * Callees:
 *     sub_1800CFF6C @ 0x1800CFF6C (sub_1800CFF6C.c)
 */

__int64 __fastcall sub_1800CFEF8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800CFF6C(v2 + 32);
  return sub_1800CFDAC(a1);
}
