/*
 * XREFs of sub_180074540 @ 0x180074540
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_1800366CC @ 0x1800366CC (sub_1800366CC.c)
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_180059BF0 @ 0x180059BF0 (sub_180059BF0.c)
 *     sub_18005E620 @ 0x18005E620 (sub_18005E620.c)
 *     sub_180073CC4 @ 0x180073CC4 (sub_180073CC4.c)
 *     sub_180073F3C @ 0x180073F3C (sub_180073F3C.c)
 *     sub_180074660 @ 0x180074660 (sub_180074660.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 *     sub_18008F048 @ 0x18008F048 (sub_18008F048.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180074540(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // r8
  __m128i v7; // [rsp+20h] [rbp-19h] BYREF
  void *v8[2]; // [rsp+30h] [rbp-9h] BYREF
  const void *v9[2]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp+17h] BYREF
  _BYTE v11[32]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+88h] [rbp+4Fh] BYREF

  LOBYTE(a3) = 1;
  sub_18008F048(a1, a2, a3);
  sub_180073F3C(a1, a2);
  sub_180074660(a1, a2);
  sub_180016F54((__int64)v11, (__int64)&unk_1801C7EA8);
  v7.m128i_i64[0] = (__int64)v11;
  v7.m128i_i64[1] = (__int64)&v12;
  sub_18005E620((__int64 *)v8, &v7);
  sub_18000B2D4((__int64)v11, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180010F20);
  sub_180059BF0(v7.m128i_i64, v8);
  v7 = (__m128i)(unsigned __int64)sub_18004C644(a2, (void **)&v7);
  v9[0] = &v7;
  v9[1] = v8;
  sub_180073CC4(v10, v9, v5);
  sub_18008DDEC(a1, a2, v10);
  sub_1800366CC((__int64)v10);
  return sub_18004A4F4(v8, (__int64)v8);
}
