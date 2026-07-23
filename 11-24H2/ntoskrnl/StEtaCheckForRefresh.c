/*
 * XREFs of StEtaCheckForRefresh @ 0x14060B400
 * Callers:
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404C66EC (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StEtaCheckForRefresh(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned __int64 *v5; // r11
  __int64 i; // r10
  unsigned __int64 j; // rcx
  int v8; // eax

  v4 = 0;
  v5 = (unsigned __int64 *)(a1 + 16);
  for ( i = 0LL; ; ++i )
  {
    if ( i >= 2 )
      return 0LL;
    if ( *v5 )
      break;
LABEL_9:
    ++v4;
    ++v5;
  }
  for ( j = *v5; *(_WORD *)(j + 4) <= 0x80u || !*(_QWORD *)(j + 8); j += 32LL )
  {
    if ( *(_DWORD *)j == -1 )
      goto LABEL_9;
  }
  if ( j <= *v5 )
    v8 = 0;
  else
    v8 = *(_DWORD *)(j - 32) + 1;
  if ( a3 )
    *a3 = v8;
  if ( a4 )
    *a4 = *(_DWORD *)j;
  if ( a2 )
    *a2 = v4;
  return 1LL;
}
