/*
 * XREFs of PfPrefetchRequestVerifyPath @ 0x140934FD4
 * Callers:
 *     PfPrefetchRequestVerify @ 0x140934C2C (PfPrefetchRequestVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfPrefetchRequestVerifyPath(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // eax
  unsigned int v6; // r10d
  int v7; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // eax

  v3 = a3[2];
  if ( v3 >= 0x7FFF )
    return 10000LL;
  if ( !v3 )
    return 10500LL;
  v5 = *a3;
  if ( !*a3 )
    return 10750LL;
  v6 = *(_DWORD *)(a2 + 48);
  v7 = 2 * v3 + 2;
  if ( v5 < v6 )
    return 11000LL;
  v8 = *(_DWORD *)(a2 + 52);
  if ( v5 >= v8 )
  {
    if ( v7 )
      return 11000LL;
  }
  v9 = v7 + v5;
  if ( v9 < v6 || v9 > v8 || (v9 & 1) != 0 )
    return 11000LL;
  *(_DWORD *)(a2 + 48) = v9;
  return *(_WORD *)(a1 + *a3 + 2LL * a3[2]) != 0 ? 0x2EE0 : 0;
}
