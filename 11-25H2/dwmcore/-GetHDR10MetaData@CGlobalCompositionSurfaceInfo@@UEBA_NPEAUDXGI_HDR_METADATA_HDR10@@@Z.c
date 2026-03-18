/*
 * XREFs of ?GetHDR10MetaData@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801E0BF0
 * Callers:
 *     ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x1801E0A30 (-UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::GetHDR10MetaData(
        CGlobalCompositionSurfaceInfo *this,
        struct DXGI_HDR_METADATA_HDR10 *a2)
{
  char v2; // r8

  v2 = 1;
  if ( *((_DWORD *)this + 60) != 1 )
    return 0;
  *a2 = *(struct DXGI_HDR_METADATA_HDR10 *)((char *)this + 244);
  return v2;
}
