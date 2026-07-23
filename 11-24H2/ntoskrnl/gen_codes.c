/*
 * XREFs of gen_codes @ 0x140600C0C
 * Callers:
 *     build_tree @ 0x140600320 (build_tree.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall gen_codes(__int64 a1, int a2, __int64 a3)
{
  int v3; // r10d
  __int64 i; // r9
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  _WORD v12[16]; // [rsp+0h] [rbp-38h]

  v3 = 0;
  for ( i = 1LL; i <= 15; ++i )
  {
    result = *(unsigned __int16 *)(a3 + 2 * i - 2);
    v3 = 2 * (result + v3);
    v12[i] = v3;
  }
  v7 = a2;
  if ( a2 >= 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(unsigned __int16 *)(a1 + 4 * v8 + 2);
      if ( *(_WORD *)(a1 + 4 * v8 + 2) )
      {
        v10 = (unsigned __int16)v12[v9];
        v11 = 0;
        v12[v9] = v10 + 1;
        do
        {
          LODWORD(v9) = v9 - 1;
          result = v10 & 1;
          v10 >>= 1;
          v11 = 2 * (result | v11);
        }
        while ( (int)v9 > 0 );
        *(_WORD *)(a1 + 4 * v8) = v11 >> 1;
      }
      ++v8;
    }
    while ( v8 <= v7 );
  }
  return result;
}
