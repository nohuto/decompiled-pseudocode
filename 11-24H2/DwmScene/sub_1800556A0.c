/*
 * XREFs of sub_1800556A0 @ 0x1800556A0
 * Callers:
 *     sub_180056950 @ 0x180056950 (sub_180056950.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800556A0(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r10
  __int128 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm0

  v3 = a2 - a1;
  v4 = a1;
  v5 = 4LL;
  do
  {
    v6 = (__int128 *)(v4 + v3 + 32);
    v7 = 4LL;
    v8 = a1 - a2;
    do
    {
      v9 = *v6;
      v10 = v6[1];
      v11 = *(v6 - 2);
      *(__int128 *)((char *)v6 + v8 - 16) = *(v6 - 1);
      *(__int128 *)((char *)v6 + v8 - 32) = v11;
      *(__int128 *)((char *)v6 + v8) = v9;
      *(__int128 *)((char *)v6 + v8 + 16) = v10;
      v6 += 4;
      --v7;
    }
    while ( v7 );
    v4 += 256LL;
    --v5;
  }
  while ( v5 );
  return a1;
}
