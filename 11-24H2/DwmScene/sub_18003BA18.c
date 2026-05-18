/*
 * XREFs of sub_18003BA18 @ 0x18003BA18
 * Callers:
 *     sub_18008C130 @ 0x18008C130 (sub_18008C130.c)
 * Callees:
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003B918 @ 0x18003B918 (sub_18003B918.c)
 */

__int64 __fastcall sub_18003BA18(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __m128 *v5; // rax
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v10[4]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v11[4]; // [rsp+60h] [rbp-48h] BYREF

  v5 = (__m128 *)sub_18003A3E0(a1, v11);
  v6 = v5[1];
  v10[0] = *v5;
  v7 = v5[2];
  v10[1] = v6;
  v8 = v5[3];
  v10[2] = v7;
  v10[3] = v8;
  sub_18003B918(a2, a3, v10);
  return a2;
}
