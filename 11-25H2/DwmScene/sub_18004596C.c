/*
 * XREFs of sub_18004596C @ 0x18004596C
 * Callers:
 *     sub_18004468C @ 0x18004468C (sub_18004468C.c)
 *     sub_180044734 @ 0x180044734 (sub_180044734.c)
 *     sub_1800447DC @ 0x1800447DC (sub_1800447DC.c)
 *     sub_180044884 @ 0x180044884 (sub_180044884.c)
 *     sub_180044924 @ 0x180044924 (sub_180044924.c)
 *     sub_1800449CC @ 0x1800449CC (sub_1800449CC.c)
 *     sub_180051DD4 @ 0x180051DD4 (sub_180051DD4.c)
 *     sub_18005226C @ 0x18005226C (sub_18005226C.c)
 *     sub_18007F7D4 @ 0x18007F7D4 (sub_18007F7D4.c)
 *     sub_18007FDEC @ 0x18007FDEC (sub_18007FDEC.c)
 *     sub_180081670 @ 0x180081670 (sub_180081670.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C53F0 @ 0x1800C53F0 (sub_1800C53F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18004596C(int a1)
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
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C440);
  v4 = 2;
  v5 = 4;
  v6 = 8;
  v7 = 4;
  v9 = 2;
  return (unsigned int)v2[a1];
}
