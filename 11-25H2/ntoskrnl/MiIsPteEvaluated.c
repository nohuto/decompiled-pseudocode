/*
 * XREFs of MiIsPteEvaluated @ 0x14024A588
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14037C52C (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 */

__int64 __fastcall MiIsPteEvaluated(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rbx
  unsigned __int64 v5; // r8
  unsigned int v6; // r10d
  unsigned __int64 v7; // r9
  __int64 HasShadow; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = *a1;
  v3 = (unsigned int)a2;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v7 = *a1;
    if ( (v2 & 1) != 0 )
    {
      LOBYTE(a1) = (v2 & 0x42) != 0;
      if ( ((unsigned __int8)a1 & ((v2 & 0x20) != 0)) == 0 )
      {
        HasShadow = MiPteHasShadow(a1, a2, v2, v7);
        if ( HasShadow )
        {
          v11 = *(_QWORD *)(HasShadow + 1288);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 8 * ((v10 >> 3) & 0x1FF));
            if ( (v12 & 0x20) != 0 )
              v9 |= 0x20uLL;
            v2 = v9 | 0x42;
            if ( (v12 & 0x42) == 0 )
              v2 = v9;
          }
        }
      }
    }
  }
  if ( !v2 )
    return 0LL;
  if ( (v2 & 1) != 0 || (v2 & 0x400) == 0 || !MiIsPrototypePteVadLookup(v2) )
    return 1LL;
  LOBYTE(v6) = ((v5 >> 5) & 0x1F) != v3;
  return v6;
}
