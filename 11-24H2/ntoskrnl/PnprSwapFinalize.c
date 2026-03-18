/*
 * XREFs of PnprSwapFinalize @ 0x1405A81D4
 * Callers:
 *     PnprSwap @ 0x1405A7FAC (PnprSwap.c)
 * Callees:
 *     PnprRecopyMirrorPages @ 0x1405A7E3C (PnprRecopyMirrorPages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprGetMillisecondCounter @ 0x140B53B94 (PnprGetMillisecondCounter.c)
 */

__int64 PnprSwapFinalize()
{
  int v0; // ebx
  __int64 v1; // rax
  int MillisecondCounter; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // eax

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
    v0 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 33184), v4, v5, v6);
    if ( v0 < 0 )
    {
      v7 = PnprContext;
      v8 = *(_DWORD *)(PnprContext + 33288);
      if ( !v8 )
        v8 = 2988;
      v9 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v8;
      if ( !v9 )
        v9 = 8;
      *(_DWORD *)(v7 + 33292) = v9;
    }
    *(_DWORD *)(PnprContext + 33320) = PnprGetMillisecondCounter(0LL);
  }
  return (unsigned int)v0;
}
