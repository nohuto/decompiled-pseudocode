/*
 * XREFs of ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180023410
 * Callers:
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18002324C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsOverlayRevokable(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx

  if ( *((_BYTE *)this + 296) )
    return 1;
  v1 = *((_QWORD *)this + 26);
  if ( !v1 )
    return 1;
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 160LL))(v1);
}
