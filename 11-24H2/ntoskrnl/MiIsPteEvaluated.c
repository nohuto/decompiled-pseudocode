/*
 * XREFs of MiIsPteEvaluated @ 0x140305E8C
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14034162C (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsPteEvaluated(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 HasShadow; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned int v12; // r10d

  v2 = *a1;
  v3 = (unsigned int)a2;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v4 = *a1;
    if ( (v2 & 1) != 0 )
    {
      LOBYTE(a1) = (v2 & 0x42) != 0;
      if ( ((unsigned __int8)a1 & ((v2 & 0x20) != 0)) == 0 )
      {
        HasShadow = MiPteHasShadow(a1, a2, v2, v4);
        if ( HasShadow )
        {
          v9 = *(_QWORD *)(HasShadow + 1288);
          if ( v9 )
          {
            v10 = *(_QWORD *)(v9 + 8 * ((v8 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              v7 |= 0x20uLL;
            v2 = v7 | 0x42;
            if ( (v10 & 0x42) == 0 )
              v2 = v7;
          }
        }
      }
    }
  }
  if ( !v2 )
    return 0LL;
  if ( (v2 & 1) != 0 || (v2 & 0x400) == 0 || !(unsigned int)MiIsPrototypePteVadLookup(v2, a2) )
    return 1LL;
  LOBYTE(v12) = ((v11 >> 5) & 0x1F) != v3;
  return v12;
}
