/*
 * XREFs of sub_180024EC0 @ 0x180024EC0
 * Callers:
 *     sub_1800257F0 @ 0x1800257F0 (sub_1800257F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800236FC @ 0x1800236FC (sub_1800236FC.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_180052180 @ 0x180052180 (sub_180052180.c)
 *     sub_180069A0C @ 0x180069A0C (sub_180069A0C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180024EC0(__int64 a1)
{
  __int64 v2; // rsi
  __m128i *p_si128; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *result; // rax
  __int64 v8; // [rsp+20h] [rbp-29h] BYREF
  __int64 v9; // [rsp+28h] [rbp-21h]
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  __int64 v11; // [rsp+40h] [rbp-9h]
  __int64 v12; // [rsp+48h] [rbp-1h] BYREF
  __int64 v13; // [rsp+58h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+68h] [rbp+1Fh] BYREF
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  _QWORD v17[2]; // [rsp+80h] [rbp+37h] BYREF

  v2 = *(_QWORD *)(a1 + 3648);
  sub_180011D64(a1 + 8, &v10);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018D410);
  v15 = 4;
  v16 = 5;
  p_si128 = &si128;
  do
  {
    v4 = unknown_libname_81(&v12, &v10);
    sub_1800236FC(v2, &v8, v4);
    sub_180027DD0(v8, 2LL, 0LL);
    sub_180052180(v8, p_si128->m128i_u32[0], v5, a1);
    v6 = unknown_libname_81(&v13, &v8);
    sub_180069A0C(a1 + 560, v6, p_si128->m128i_u32[0]);
    if ( v9 )
      sub_18001060C(v9);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
    result = v17;
  }
  while ( p_si128 != (__m128i *)v17 );
  if ( v11 )
    return (_QWORD *)sub_18001060C(v11);
  return result;
}
