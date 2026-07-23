/*
 * XREFs of ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140415270
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402F613C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14060CB3C (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDmGetSpaceStats(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rdx
  _DWORD *result; // rax
  __int64 v7; // r8

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( *(_BYTE *)(a1 + 776) )
    v5 = 1LL;
  else
    v5 = 8LL;
  result = (_DWORD *)(a1 + 2212);
  v7 = v5;
  if ( a2 )
  {
    do
    {
      *a2 += *(result - 1);
      if ( a3 )
        *a3 += *result;
      result += 2;
      --v7;
    }
    while ( v7 );
  }
  else
  {
    do
    {
      if ( a3 )
        *a3 += *result;
      result += 2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
