/*
 * XREFs of sub_180041FE4 @ 0x180041FE4
 * Callers:
 *     sub_180042234 @ 0x180042234 (sub_180042234.c)
 *     sub_1800423F8 @ 0x1800423F8 (sub_1800423F8.c)
 * Callees:
 *     sub_180017398 @ 0x180017398 (sub_180017398.c)
 *     sub_180041F24 @ 0x180041F24 (sub_180041F24.c)
 *     sub_180044538 @ 0x180044538 (sub_180044538.c)
 */

_QWORD *sub_180041FE4(_QWORD *a1, __int64 a2, _DWORD *a3, ...)
{
  _DWORD *v5; // rdx
  _DWORD *v6; // rdx
  _DWORD *v8; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v9; // [rsp+28h] [rbp-20h]
  _QWORD *v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_180044538(a1, 1LL);
  v5 = (_DWORD *)*a1;
  if ( *a3 == _mm_cvtsi128_si32((__m128i)0LL) )
  {
    *v5 = 0;
    v6 = v5 + 1;
  }
  else
  {
    v8 = (_DWORD *)*a1;
    v9 = v5;
    v10 = a1;
    sub_180041F24((__int64)&v8, (__int64)a3);
    v6 = v9;
  }
  v11 = 0LL;
  a1[1] = v6;
  sub_180017398((__int64 *)va);
  return a1;
}
