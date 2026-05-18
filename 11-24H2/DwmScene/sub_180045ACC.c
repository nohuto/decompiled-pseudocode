/*
 * XREFs of sub_180045ACC @ 0x180045ACC
 * Callers:
 *     sub_1800447EC @ 0x1800447EC (sub_1800447EC.c)
 *     sub_180044894 @ 0x180044894 (sub_180044894.c)
 *     sub_18004493C @ 0x18004493C (sub_18004493C.c)
 *     sub_1800449E4 @ 0x1800449E4 (sub_1800449E4.c)
 *     sub_180044A84 @ 0x180044A84 (sub_180044A84.c)
 *     sub_180044B2C @ 0x180044B2C (sub_180044B2C.c)
 *     sub_180051F34 @ 0x180051F34 (sub_180051F34.c)
 *     sub_1800523CC @ 0x1800523CC (sub_1800523CC.c)
 *     sub_18007F934 @ 0x18007F934 (sub_18007F934.c)
 *     sub_18007FF4C @ 0x18007FF4C (sub_18007FF4C.c)
 *     sub_1800817D0 @ 0x1800817D0 (sub_1800817D0.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 *     sub_1800C5550 @ 0x1800C5550 (sub_1800C5550.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180045ACC(int a1)
{
  _DWORD v2[15]; // [rsp+0h] [rbp-80h]
  __m128i si128; // [rsp+3Ch] [rbp-44h]
  int v4; // [rsp+4Ch] [rbp-34h]
  int v5; // [rsp+50h] [rbp-30h]
  int v6; // [rsp+54h] [rbp-2Ch]
  int v7; // [rsp+58h] [rbp-28h]
  int v8; // [rsp+5Ch] [rbp-24h]
  int v9; // [rsp+60h] [rbp-20h]

  v2[0] = 0;
  v2[1] = 4;
  v2[2] = 4;
  v2[3] = 4;
  v2[5] = 12;
  v2[6] = 16;
  v2[11] = 16;
  v2[10] = 12;
  v2[4] = 8;
  v2[13] = 1;
  v8 = 1;
  v2[7] = 4;
  v2[8] = 4;
  v2[9] = 8;
  v2[12] = 2;
  v2[14] = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D430);
  v4 = 2;
  v5 = 4;
  v6 = 8;
  v7 = 4;
  v9 = 2;
  return (unsigned int)v2[a1];
}
