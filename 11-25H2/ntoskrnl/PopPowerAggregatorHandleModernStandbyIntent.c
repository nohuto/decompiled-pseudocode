/*
 * XREFs of PopPowerAggregatorHandleModernStandbyIntent @ 0x14074D420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyIntent(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ecx
  int v5; // r8d
  char v6; // al

  if ( *(_DWORD *)(a1 + 16) > 2u )
    return (unsigned int)-1073700861;
  *(_DWORD *)a2 = 1;
  if ( a3 == 2 )
    *(_BYTE *)(a2 + 24) = 1;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    *(_BYTE *)(a2 + 25) = *(_BYTE *)(a1 + 41);
  }
  else if ( PopPowerAggregatorOneWayEntry )
  {
    *(_BYTE *)(a2 + 25) = 1;
  }
  v5 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)(v5 - 53) <= 1 )
    *(_BYTE *)(a2 + 27) = 1;
  if ( PopEnforceAusterityMode )
    *(_BYTE *)(a2 + 27) = 1;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( *(_BYTE *)(a1 + 43) && v5 != 43 && v5 != 55 )
      *(_BYTE *)(a2 + 27) = 1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      v6 = *(_BYTE *)(a2 + 24);
      if ( *(_BYTE *)(a1 + 40) )
      {
        if ( !v6 )
          return v4;
      }
      else if ( v6 )
      {
        goto LABEL_31;
      }
      if ( *(_BYTE *)(a1 + 43) != *(_BYTE *)(a2 + 27) )
        return v4;
      if ( v5 == 4 )
      {
        if ( dword_140F0B64C )
          return v4;
        goto LABEL_31;
      }
      if ( v5 != 43 && v5 != 46 && (v5 != 45 || *(_DWORD *)(a1 + 24) == 45) )
      {
LABEL_31:
        *(_OWORD *)a2 = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 32);
        *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 48);
      }
    }
  }
  return v4;
}
