/*
 * XREFs of SymCryptSha256Result @ 0x1801599C4
 * Callers:
 *     SymCryptSha256 @ 0x180158618 (SymCryptSha256.c)
 * Callees:
 *     SymCryptWipeAsm @ 0x18012F7C0 (SymCryptWipeAsm.c)
 *     SymCryptSha256AppendBlocks_ul1 @ 0x180158774 (SymCryptSha256AppendBlocks_ul1.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha256Result(__m128i *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __m128i *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-28h] BYREF

  v10 = 0LL;
  v3 = a1->m128i_u32[0];
  a1[2].m128i_i8[v3] = 0x80;
  v5 = (unsigned int)(v3 + 1);
  if ( (unsigned int)v5 > 0x38 )
  {
    SymCryptWipeAsm((__int64)a1[2].m128i_i64 + v5, (unsigned int)(64 - v5));
    SymCryptSha256AppendBlocks_ul1(a1 + 6, (__int64)a1[2].m128i_i64, 0x40uLL, &v10);
    v5 = 0LL;
  }
  SymCryptWipeAsm((__int64)a1[2].m128i_i64 + v5, (unsigned int)(64 - v5));
  a1[5].m128i_i64[1] = _byteswap_uint64(8 * a1[1].m128i_i64[0]);
  SymCryptSha256AppendBlocks_ul1(a1 + 6, (__int64)a1[2].m128i_i64, 0x40uLL, &v10);
  v6 = a1 + 6;
  v7 = 4LL;
  do
  {
    v8 = v6->m128i_i64[0];
    v6 = (__m128i *)((char *)v6 + 8);
    *a2++ = _byteswap_uint64(__ROL8__(v8, 32));
    --v7;
  }
  while ( v7 );
  result = SymCryptWipeAsm((__int64)a1, 0x80uLL);
  a1[6] = (__m128i)xmmword_1801995A8;
  a1[7] = (__m128i)xmmword_1801995B8;
  return result;
}
