/*
 * XREFs of SymCryptSha512Result @ 0x140524730
 * Callers:
 *     SymCryptSha384Result @ 0x1405230A0 (SymCryptSha384Result.c)
 *     HashpFinalizeHash @ 0x14083088C (HashpFinalizeHash.c)
 * Callees:
 *     SymCryptWipe @ 0x14051B504 (SymCryptWipe.c)
 *     SymCryptSha512AppendBlocks_ull @ 0x140523214 (SymCryptSha512AppendBlocks_ull.c)
 */

__int64 __fastcall SymCryptSha512Result(unsigned int *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = *a1;
  *((_BYTE *)a1 + v3 + 32) = 0x80;
  v5 = (unsigned int)(v3 + 1);
  if ( (unsigned int)v5 > 0x70 )
  {
    SymCryptWipe((__int64)a1 + v5 + 32, (unsigned int)(128 - v5));
    SymCryptSha512AppendBlocks_ull((__int64 *)a1 + 20, (__int64)(a1 + 8), 0x80uLL, &v11);
    v5 = 0LL;
  }
  SymCryptWipe((__int64)a1 + v5 + 32, (unsigned int)(128 - v5));
  v6 = 8LL * *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 18) = _byteswap_uint64((*((_QWORD *)a1 + 2) >> 61) + 8LL * *((_QWORD *)a1 + 3));
  *((_QWORD *)a1 + 19) = _byteswap_uint64(v6);
  SymCryptSha512AppendBlocks_ull((__int64 *)a1 + 20, (__int64)(a1 + 8), 0x80uLL, &v11);
  v7 = (unsigned __int64 *)(a1 + 40);
  v8 = 8LL;
  do
  {
    v9 = *v7++;
    *a2++ = _byteswap_uint64(v9);
    --v8;
  }
  while ( v8 );
  result = SymCryptWipe((__int64)a1, 0xE0uLL);
  *((_OWORD *)a1 + 10) = SymCryptSha512InitialState;
  *((_OWORD *)a1 + 11) = xmmword_1400202A0;
  *((_OWORD *)a1 + 12) = xmmword_1400202B0;
  *((_OWORD *)a1 + 13) = xmmword_1400202C0;
  return result;
}
