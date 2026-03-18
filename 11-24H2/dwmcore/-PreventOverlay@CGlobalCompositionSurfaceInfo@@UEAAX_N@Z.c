/*
 * XREFs of ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x180291580
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1801DF02C (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::PreventOverlay(CGlobalCompositionSurfaceInfo *this, char a2)
{
  if ( a2 != *((_BYTE *)this + 296) )
  {
    *((_BYTE *)this + 296) = a2;
    if ( a2 )
    {
      if ( *((_BYTE *)this + 299) )
        CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
    }
  }
}
