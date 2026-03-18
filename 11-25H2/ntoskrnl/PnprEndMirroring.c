/*
 * XREFs of PnprEndMirroring @ 0x140B43B20
 * Callers:
 *     <none>
 * Callees:
 *     PnprQuiesce @ 0x1405A4478 (PnprQuiesce.c)
 *     PnprSwap @ 0x1405A479C (PnprSwap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnprWakeProcessors @ 0x140B45254 (PnprWakeProcessors.c)
 */

__int64 __fastcall PnprEndMirroring(int a1)
{
  int v1; // ebx

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v1 = PnprSwap();
      if ( v1 >= 0 )
      {
        PnprWakeProcessors();
        return 1073742484;
      }
      else
      {
        guard_dispatch_icall_no_overrides(3LL);
        PnprWakeProcessors();
      }
    }
  }
  else
  {
    *(_BYTE *)(PnprContext + 208) = 1;
    return (unsigned int)PnprQuiesce();
  }
  return (unsigned int)v1;
}
