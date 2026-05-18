/*
 * XREFs of sub_18001ABFC @ 0x18001ABFC
 * Callers:
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 * Callees:
 *     sub_18000B190 @ 0x18000B190 (sub_18000B190.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_18001ABFC(unsigned __int64 a1)
{
  __int64 v1; // rdi
  const __m128i *v3; // rsi
  const __m128i *v4; // rax
  __int64 *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  v1 = qword_1801C4448;
  *(_QWORD *)a1 = off_1800EC698;
  v3 = *(const __m128i **)(v1 + 120);
  v4 = sub_18000B190(*(const __m128i **)(v1 + 112), v3, a1);
  v5 = (__int64 *)v4;
  if ( v4 != v3 )
  {
    while ( 1 )
    {
      v4 = (const __m128i *)((char *)v4 + 8);
      if ( v4 == v3 )
        break;
      if ( v4->m128i_i64[0] != a1 )
        *v5++ = v4->m128i_i64[0];
    }
  }
  if ( v5 != *(__int64 **)(v1 + 120) )
    *(_QWORD *)(v1 + 120) = v5;
  sub_18000E954((__int64 *)(a1 + 40));
  result = sub_18000E954((__int64 *)(a1 + 32));
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
    result = sub_18001060C(v7);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
