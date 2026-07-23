/*
 * XREFs of PnprRecopyMirrorPages @ 0x1405A4E2C
 * Callers:
 *     PnprSwapFinalize @ 0x1405A51C4 (PnprSwapFinalize.c)
 * Callees:
 *     PnprCopyReservedMapping @ 0x1405A46F4 (PnprCopyReservedMapping.c)
 *     PnprGetStackLimits @ 0x1405A4ADC (PnprGetStackLimits.c)
 *     PnprRecopyAddress @ 0x1405A4D20 (PnprRecopyAddress.c)
 *     PnprRecopyMappingReserve @ 0x1405A4D78 (PnprRecopyMappingReserve.c)
 */

__int64 PnprRecopyMirrorPages()
{
  __int64 Number; // rcx
  __int64 i; // rbx
  int v2; // edx
  int v3; // r8d
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // eax

  Number = KeGetPcr()->Prcb.Number;
  PnprGetStackLimits((_QWORD *)(PnprContext + 216 + 8 * Number), PnprContext + 16600 + 8 * Number);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(PnprContext + 176); i = (unsigned int)(i + 1) )
  {
    v2 = PnprRecopyAddress(
           *(_QWORD *)(PnprContext + 8 * i + 216),
           *(_DWORD *)(PnprContext + 8 * i + 16600) - (unsigned int)*(_QWORD *)(PnprContext + 8 * i + 216));
    if ( v2 < 0 )
    {
      v3 = 5607;
      goto LABEL_11;
    }
    if ( (_DWORD)i != *(_DWORD *)(PnprContext + 180) )
    {
      v2 = PnprRecopyMappingReserve((__int64 *)(*(_QWORD *)(PnprContext + 144) + 24 * i));
      if ( v2 < 0 )
      {
        v3 = 5623;
        goto LABEL_11;
      }
      v2 = PnprRecopyMappingReserve((__int64 *)(*(_QWORD *)(PnprContext + 136) + 24 * i));
      if ( v2 < 0 )
      {
        v3 = 5631;
LABEL_11:
        v4 = PnprContext;
        v5 = *(_DWORD *)(PnprContext + 33288);
        if ( !v5 )
          v5 = v3;
        *(_DWORD *)(PnprContext + 33288) = v5;
        v6 = *(_DWORD *)(v4 + 33292);
        if ( !v6 )
          v6 = 1;
        *(_DWORD *)(v4 + 33292) = v6;
        return (unsigned int)v2;
      }
    }
  }
  v8 = PnprRecopyAddress(PnprContext, 0x8248u);
  if ( v8 >= 0 )
  {
    v8 = PnprCopyReservedMapping();
    if ( v8 >= 0 )
      return 0LL;
    v9 = 5655;
  }
  else
  {
    v9 = 5643;
  }
  v10 = PnprContext;
  v11 = *(_DWORD *)(PnprContext + 33288);
  if ( !v11 )
    v11 = v9;
  *(_DWORD *)(PnprContext + 33288) = v11;
  v12 = *(_DWORD *)(v10 + 33292);
  if ( !v12 )
    v12 = 1;
  *(_DWORD *)(v10 + 33292) = v12;
  return (unsigned int)v8;
}
