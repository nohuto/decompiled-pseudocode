/*
 * XREFs of MiIsPteEvaluated @ 0x140212B2C
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x1402E548C (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsPteEvaluated(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 HasShadow; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned int v11; // r10d

  v2 = *a1;
  v3 = (unsigned int)a2;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL && (v2 & 1) != 0 )
  {
    LOBYTE(a1) = (v2 & 0x42) != 0;
    if ( ((unsigned __int8)a1 & ((v2 & 0x20) != 0)) == 0 )
    {
      HasShadow = MiPteHasShadow(a1, a2);
      if ( HasShadow )
      {
        v8 = *(_QWORD *)(HasShadow + 1288);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v9 & 0x20) != 0 )
            v6 |= 0x20uLL;
          v2 = v6 | 0x42;
          if ( (v9 & 0x42) == 0 )
            v2 = v6;
        }
      }
    }
  }
  if ( !v2 )
    return 0LL;
  if ( (v2 & 1) != 0 || (v2 & 0x400) == 0 || !(unsigned int)MiIsPrototypePteVadLookup(v2) )
    return 1LL;
  LOBYTE(v11) = ((v10 >> 5) & 0x1F) != v3;
  return v11;
}
