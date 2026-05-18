/*
 * XREFs of sub_180090EB8 @ 0x180090EB8
 * Callers:
 *     sub_1800917DC @ 0x1800917DC (sub_1800917DC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180090EB8(_DWORD *a1, char *a2, _DWORD *a3)
{
  _DWORD *v3; // r9
  signed __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  _DWORD *v9; // rdi
  unsigned __int64 v10; // rcx

  v3 = a1;
  v4 = a2 - (char *)a1;
  result = 0LL;
  if ( *a3 == _mm_cvtsi128_si32((__m128i)0LL) )
    return (unsigned __int64)memset(v3, 0, v4 & 0xFFFFFFFFFFFFFFFCuLL);
  v7 = (unsigned __int64)(v4 + 3) >> 2;
  if ( v3 > (_DWORD *)a2 )
    v7 = 0LL;
  if ( v7 >= 4 )
  {
    result = (unsigned __int64)&v3[v7 - 1];
    if ( v3 > a3 || result < (unsigned __int64)a3 )
    {
      v8 = 4 * (v7 & 0xFFFFFFFFFFFFFFFCuLL);
      v9 = v3;
      v10 = v8 >> 2;
      result = _mm_cvtsi128_si32((__m128i)(unsigned int)*a3);
      v3 = (_DWORD *)((char *)v3 + v8);
      while ( v10 )
      {
        *v9++ = result;
        --v10;
      }
    }
  }
  while ( v3 != (_DWORD *)a2 )
  {
    result = (unsigned int)*a3;
    *v3++ = result;
  }
  return result;
}
