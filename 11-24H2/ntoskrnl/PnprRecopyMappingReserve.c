/*
 * XREFs of PnprRecopyMappingReserve @ 0x1405A4D78
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1405A4E2C (PnprRecopyMirrorPages.c)
 * Callees:
 *     PnprRecopyAddress @ 0x1405A4D20 (PnprRecopyAddress.c)
 *     MmContainingPageForReservedMapping @ 0x1406703E4 (MmContainingPageForReservedMapping.c)
 *     PnprMarkOrMirrorPages @ 0x140B562B8 (PnprMarkOrMirrorPages.c)
 */

__int64 __fastcall PnprRecopyMappingReserve(__int64 *a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v4 = MmContainingPageForReservedMapping(a1[1] + (unsigned int)(v3 << 12));
    if ( v4 != v1 )
    {
      v1 = v4;
      LOBYTE(v5) = 1;
      v6 = PnprMarkOrMirrorPages(v4 << 12, 4096LL, v5);
      if ( v6 < 0 )
        break;
    }
    if ( (unsigned int)++v3 >= 0x10 )
    {
      PnprRecopyAddress(*a1, 0x30u);
      return 0LL;
    }
  }
  v8 = PnprContext;
  v9 = *(_DWORD *)(PnprContext + 33288);
  if ( !v9 )
    v9 = 5731;
  *(_DWORD *)(PnprContext + 33288) = v9;
  v10 = *(_DWORD *)(v8 + 33292);
  if ( !v10 )
    v10 = 1;
  *(_DWORD *)(v8 + 33292) = v10;
  return (unsigned int)v6;
}
