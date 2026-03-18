/*
 * XREFs of PnpiCmResourceToBiosIrq @ 0x1400A62A8
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1400A5714 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosIrq(__int64 a1, __int64 a2)
{
  unsigned int i; // ecx
  __int64 v4; // r8
  unsigned __int16 v5; // ax
  __int16 v6; // cx

  *(_WORD *)(a1 + 1) = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 16); ++i )
  {
    v4 = 5LL * i;
    if ( *(_BYTE *)(a2 + 20LL * i + 20) == 2 )
    {
      v5 = *(_WORD *)(a2 + 20LL * i + 24);
      if ( v5 < 0x10u )
      {
        *(_WORD *)(a1 + 1) = 1 << v5;
        if ( (*(_BYTE *)a1 & 7) == 3 )
        {
          *(_BYTE *)(a1 + 3) = 0;
          v6 = *(_WORD *)(a2 + 20LL * i + 22) & 1;
          *(_BYTE *)(a1 + 3) = v6 != 0 ? 1 : 8;
          if ( *(_BYTE *)(a2 + 4 * v4 + 21) == 3 )
            *(_BYTE *)(a1 + 3) = v6 != 0 ? 17 : 24;
        }
        *(_BYTE *)(a2 + 4 * v4 + 20) = 0;
        return 0LL;
      }
    }
  }
  return 0LL;
}
