/*
 * XREFs of PnprSwapFinalize @ 0x1405A49C4
 * Callers:
 *     PnprSwap @ 0x1405A479C (PnprSwap.c)
 * Callees:
 *     PnprRecopyMirrorPages @ 0x1405A462C (PnprRecopyMirrorPages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnprGetMillisecondCounter @ 0x140B43B94 (PnprGetMillisecondCounter.c)
 */

__int64 PnprSwapFinalize()
{
  int v0; // ebx
  __int64 v1; // rax
  int MillisecondCounter; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // eax

  v0 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
    PnprRecopyMirrorPages();
  v1 = PnprContext;
  *(_DWORD *)(PnprContext + 64) &= ~4u;
  if ( (*(_DWORD *)(v1 + 64) & 0x20) == 0 )
    __wbinvd();
  if ( *(_QWORD *)(PnprContext + 33248) )
  {
    MillisecondCounter = PnprGetMillisecondCounter(0LL);
    v3 = PnprContext;
    *(_DWORD *)(PnprContext + 33316) = MillisecondCounter;
    v0 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 33184));
    if ( v0 < 0 )
    {
      v4 = PnprContext;
      v5 = *(_DWORD *)(PnprContext + 33288);
      if ( !v5 )
        v5 = 2988;
      v6 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v5;
      if ( !v6 )
        v6 = 8;
      *(_DWORD *)(v4 + 33292) = v6;
    }
    *(_DWORD *)(PnprContext + 33320) = PnprGetMillisecondCounter(0LL);
  }
  return (unsigned int)v0;
}
