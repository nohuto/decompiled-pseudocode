/*
 * XREFs of sub_180017768 @ 0x180017768
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003BB7C @ 0x18003BB7C (sub_18003BB7C.c)
 *     sub_180058F40 @ 0x180058F40 (sub_180058F40.c)
 *     sub_180059534 @ 0x180059534 (sub_180059534.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001A638 @ 0x18001A638 (sub_18001A638.c)
 */

_OWORD *__fastcall sub_180017768(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm5
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  _OWORD *v10; // rcx
  _OWORD *result; // rax
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3[1];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v12[0] = *a3;
  v8 = a3[2];
  v12[1] = v3;
  v9 = a3[3];
  v12[2] = v8;
  v12[3] = v9;
  *(double *)&v4 = sub_18001A638(a1, v12);
  *v10 = v4;
  result = v10;
  v10[1] = v5;
  v10[2] = v6;
  v10[3] = v7;
  return result;
}
