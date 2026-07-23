/*
 * XREFs of PopPowerAggregatorAllowModernStandbyPromotion @ 0x140757550
 * Callers:
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140757B40 (PopPowerAggregatorHandleModernStandbyIntent.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPowerAggregatorAllowModernStandbyPromotion(__int64 a1, __int64 a2)
{
  char v2; // r8
  char v3; // al
  int v4; // eax

  v2 = 1;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v3 = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(a1 + 40) )
    {
      if ( !v3 )
        return v2;
    }
    else if ( v3 )
    {
      return 0;
    }
    if ( *(_BYTE *)(a1 + 43) == *(_BYTE *)(a2 + 27) )
    {
      v4 = *(_DWORD *)(a2 + 8);
      if ( v4 == 4 )
      {
        if ( dword_140F0B2CC )
          return v2;
        return 0;
      }
      if ( v4 != 43 && v4 != 46 && (v4 != 45 || *(_DWORD *)(a1 + 24) == 45) )
        return 0;
    }
  }
  return v2;
}
