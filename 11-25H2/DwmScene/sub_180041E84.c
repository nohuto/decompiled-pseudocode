/*
 * XREFs of sub_180041E84 @ 0x180041E84
 * Callers:
 *     sub_1800420D4 @ 0x1800420D4 (sub_1800420D4.c)
 *     sub_180042298 @ 0x180042298 (sub_180042298.c)
 * Callees:
 *     sub_180017298 @ 0x180017298 (sub_180017298.c)
 *     sub_180041DC4 @ 0x180041DC4 (sub_180041DC4.c)
 *     sub_1800443D8 @ 0x1800443D8 (sub_1800443D8.c)
 */

_QWORD *sub_180041E84(_QWORD *a1, __int64 a2, _DWORD *a3, ...)
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
  sub_1800443D8(a1, 1LL);
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
    sub_180041DC4((__int64)&v8, (__int64)a3);
    v6 = v9;
  }
  v11 = 0LL;
  a1[1] = v6;
  sub_180017298((__int64 *)va);
  return a1;
}
