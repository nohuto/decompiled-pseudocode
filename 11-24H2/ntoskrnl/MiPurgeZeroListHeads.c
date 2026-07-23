/*
 * XREFs of MiPurgeZeroListHeads @ 0x1404BFB80
 * Callers:
 *     <none>
 * Callees:
 *     MiPurgeZeroListHead @ 0x1404BFBD4 (MiPurgeZeroListHead.c)
 */

__int64 __fastcall MiPurgeZeroListHeads(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  __int64 v5; // rbx

  v4 = a4;
  v5 = a3;
  if ( !*(_DWORD *)(a3 + 12) && a4 )
  {
    do
    {
      MiPurgeZeroListHead(a2, v5);
      v5 += 88LL;
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
