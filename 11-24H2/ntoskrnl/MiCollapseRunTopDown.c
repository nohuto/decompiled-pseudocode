/*
 * XREFs of MiCollapseRunTopDown @ 0x14030F6D0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiFindBestLargePageStealCandidates @ 0x140443E10 (MiFindBestLargePageStealCandidates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCollapseRunTopDown(__int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v9; // r11

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v1 - 1 > v2 )
  {
    v1 = v2 + 1;
    *(_QWORD *)(a1 + 8) = v2 + 1;
  }
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 < v4 )
  {
    *(_QWORD *)a1 = v4;
    v3 = v4;
  }
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v6 = ~(v5 - 1);
    v3 = v6 & (v5 + v3 - 1);
    *(_QWORD *)a1 = v3;
    v1 &= v6;
    *(_QWORD *)(a1 + 8) = v1;
  }
  while ( v3 < v1 && (*(_BYTE *)(a1 + 56) || *(_QWORD *)(a1 + 40) <= v1 - v3) )
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( v7 )
    {
      v9 = ~(v7 - 1);
      if ( (((v1 - 1) ^ (v1 - *(_QWORD *)(a1 + 40))) & v9) != 0 )
        continue;
    }
    return 1LL;
    if ( (v9 & v1) != v1 )
    {
      *(_QWORD *)(a1 + 8) = v9 & v1;
      v1 &= v9;
    }
    if ( (v9 & v3) != v3 )
    {
      v3 = v9 & (v7 + v3 - 1);
      *(_QWORD *)a1 = v3;
      if ( !v3 )
        break;
    }
  }
  return 0LL;
}
