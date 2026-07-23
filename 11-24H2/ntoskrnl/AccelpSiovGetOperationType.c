/*
 * XREFs of AccelpSiovGetOperationType @ 0x140664BD0
 * Callers:
 *     AccelpSiovUpdateStatsOnSubmitWork @ 0x140665260 (AccelpSiovUpdateStatsOnSubmitWork.c)
 *     AccelpSiovUpdateStatsOnWorkCompletion @ 0x1406652E0 (AccelpSiovUpdateStatsOnWorkCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccelpSiovGetOperationType(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx

  if ( !a1 || !a2 || !a3 )
    return (unsigned int)-1073741811;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 188LL);
  if ( v3 != 1 )
  {
    if ( v3 != 2 )
      return (unsigned int)-1073741823;
    v8 = *(unsigned __int8 *)(a2 + 7);
    v5 = 0;
    if ( v8 )
    {
      v9 = v8 - 3;
      if ( v9 )
      {
        v10 = v9 - 63;
        if ( !v10 )
        {
          *a3 = 7;
          return v5;
        }
        if ( v10 == 1 )
        {
          *a3 = 6;
          return v5;
        }
        return (unsigned int)-1073741823;
      }
LABEL_11:
      *a3 = 4;
      return v5;
    }
LABEL_20:
    *a3 = 1;
    return v5;
  }
  v4 = *(unsigned __int8 *)(a2 + 7);
  v5 = 0;
  if ( !v4 )
    goto LABEL_20;
  v6 = v4 - 1;
  if ( !v6 )
  {
    *a3 = 2;
    return v5;
  }
  v7 = v6 - 2;
  if ( !v7 )
    goto LABEL_11;
  if ( v7 == 1 )
  {
    *a3 = 3;
    return v5;
  }
  return (unsigned int)-1073741823;
}
