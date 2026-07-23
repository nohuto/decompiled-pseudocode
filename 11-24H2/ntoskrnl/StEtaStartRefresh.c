/*
 * XREFs of StEtaStartRefresh @ 0x14060B670
 * Callers:
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404C66EC (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StEtaStartRefresh(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  unsigned int *i; // rcx

  v3 = 0;
  if ( *(int *)(a1 + 8) <= 0 )
  {
    _m_prefetchw((const void *)(a1 + 48));
    v4 = *(_DWORD *)(a1 + 48);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v4 | 1, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 1) == 0 )
    {
      for ( i = *(unsigned int **)(a1 + 8LL * a2 + 16); *i < a3; i += 8 )
        ;
      i[1] = 112;
      return 1;
    }
  }
  return v3;
}
