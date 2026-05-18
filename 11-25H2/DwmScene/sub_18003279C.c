/*
 * XREFs of sub_18003279C @ 0x18003279C
 * Callers:
 *     sub_1800151E8 @ 0x1800151E8 (sub_1800151E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18001E574 @ 0x18001E574 (sub_18001E574.c)
 *     sub_180025090 @ 0x180025090 (sub_180025090.c)
 *     sub_1800250B8 @ 0x1800250B8 (sub_1800250B8.c)
 *     sub_180028424 @ 0x180028424 (sub_180028424.c)
 *     sub_18002869C @ 0x18002869C (sub_18002869C.c)
 *     sub_18002B6B0 @ 0x18002B6B0 (sub_18002B6B0.c)
 *     sub_18002B938 @ 0x18002B938 (sub_18002B938.c)
 *     sub_18002BFB0 @ 0x18002BFB0 (sub_18002BFB0.c)
 *     sub_18002F00C @ 0x18002F00C (sub_18002F00C.c)
 *     sub_180030650 @ 0x180030650 (sub_180030650.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 *     sub_18003649C @ 0x18003649C (sub_18003649C.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall sub_18003279C(__int64 a1, _QWORD *a2)
{
  int v4; // esi
  unsigned int i; // r14d
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // r9
  const void *v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h]
  _BYTE v19[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[232]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v23; // [rsp+160h] [rbp+60h] BYREF
  __m128i si128; // [rsp+170h] [rbp+70h]
  _BYTE v25[32]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v26[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v27[32]; // [rsp+1C0h] [rbp+C0h] BYREF

  v17 = a2;
  v4 = 0;
  sub_18002F00C((__int64)v20);
  sub_18002869C(a1 + 112, (__int64)v19);
  for ( i = 0; i < (unsigned int)sub_180032570(a1); ++i )
  {
    sub_1800324D4(a1, &v17, i);
    v6 = (__int64)v17;
    if ( !_RTDynamicCast(
            v17,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v7 = sub_180025090(v6, (__int64)v27);
      v8 = sub_18002B938((__int64)v21, v7);
      v9 = sub_18002B6B0(v8, ": Hardware Feature Level ");
      sub_180012344((__int64)v25, v6 + 176);
      v4 |= 2u;
      v10 = sub_18002B938(v9, (__int64)v25);
      v11 = sub_18002B6B0(v10, ", Engine Feature Level ");
      v12 = sub_1800250B8(v6, (__int64)v26);
      v13 = sub_18002B938(v11, v12);
      sub_18002B6B0(v13, "; ");
      sub_180013128((__int64)v26);
      sub_180013128((__int64)v25);
      sub_180013128((__int64)v27);
    }
    if ( v18 )
      sub_18001050C(v18);
  }
  v23 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C3A0);
  LOWORD(v23) = 0;
  sub_18003649C(v22, &v17);
  if ( v17 )
    sub_18001E574((__int64)&v23, v17, v18);
  v14 = (_BYTE *)sub_1800130AC((__int64)&v23);
  v15 = 2 * si128.m128i_i64[0];
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  if ( v14 == &v14[v15] )
  {
    a2[2] = 0LL;
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    sub_18002BFB0(a2, v14, &v14[v15], v15 >> 1);
  }
  sub_180013128((__int64)&v23);
  sub_180028424((__int64)v19);
  sub_180030650((__int64)v20);
  return a2;
}
