/*
 * XREFs of sub_180017828 @ 0x180017828
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_1800590A0 @ 0x1800590A0 (sub_1800590A0.c)
 *     sub_180059694 @ 0x180059694 (sub_180059694.c)
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180084280 @ 0x180084280 (sub_180084280.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001A6F8 @ 0x18001A6F8 (sub_18001A6F8.c)
 */

_OWORD *__fastcall sub_180017828(__int64 a1, __int128 *a2, _OWORD *a3)
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
  *(double *)&v4 = sub_18001A6F8(a1, v12);
  *v10 = v4;
  result = v10;
  v10[1] = v5;
  v10[2] = v6;
  v10[3] = v7;
  return result;
}
