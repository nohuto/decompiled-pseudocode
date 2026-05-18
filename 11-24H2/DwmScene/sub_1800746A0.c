/*
 * XREFs of sub_1800746A0 @ 0x1800746A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18003682C @ 0x18003682C (sub_18003682C.c)
 *     sub_18004A654 @ 0x18004A654 (sub_18004A654.c)
 *     sub_18004C7A4 @ 0x18004C7A4 (sub_18004C7A4.c)
 *     sub_180059D50 @ 0x180059D50 (sub_180059D50.c)
 *     sub_18005E780 @ 0x18005E780 (sub_18005E780.c)
 *     sub_180073E24 @ 0x180073E24 (sub_180073E24.c)
 *     sub_18007409C @ 0x18007409C (sub_18007409C.c)
 *     sub_1800747C0 @ 0x1800747C0 (sub_1800747C0.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800746A0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // r8
  __m128i v7; // [rsp+20h] [rbp-19h] BYREF
  void *v8[2]; // [rsp+30h] [rbp-9h] BYREF
  const void *v9[2]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp+17h] BYREF
  _BYTE v11[32]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+88h] [rbp+4Fh] BYREF

  LOBYTE(a3) = 1;
  sub_18008F1A8(a1, a2, a3);
  sub_18007409C(a1, a2);
  sub_1800747C0(a1, a2);
  sub_180017054((__int64)v11, (__int64)&unk_1801C8EB8);
  v7.m128i_i64[0] = (__int64)v11;
  v7.m128i_i64[1] = (__int64)&v12;
  sub_18005E780((__int64 *)v8, &v7);
  sub_18000B6A4((__int64)v11, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011020);
  sub_180059D50(v7.m128i_i64, v8);
  v7 = (__m128i)(unsigned __int64)sub_18004C7A4(a2, (void **)&v7);
  v9[0] = &v7;
  v9[1] = v8;
  sub_180073E24(v10, v9, v5);
  sub_18008DF4C(a1, a2, v10);
  sub_18003682C((__int64)v10);
  return sub_18004A654(v8, (__int64)v8);
}
