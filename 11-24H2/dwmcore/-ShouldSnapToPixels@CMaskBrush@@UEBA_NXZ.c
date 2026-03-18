/*
 * XREFs of ?ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ @ 0x1801AA660
 * Callers:
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AA270 (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x1801AA5A0 (-HasPixelSnappedContent@CVisual@@IEBA_NXZ.c)
 * Callees:
 *     ?ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ @ 0x1801AA550 (-ShouldSnapToPixels@CNineGridBrush@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ @ 0x1801AA6F0 (-ShouldSnapToPixels@CSurfaceBrush@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMaskBrush::ShouldSnapToPixels(CMaskBrush *this)
{
  char v2; // bl
  __int64 v3; // rcx
  CSurfaceBrush *v4; // rcx
  char (__fastcall *v5)(CNineGridBrush *); // rax
  char ShouldSnapToPixels; // al

  v2 = 0;
  v3 = *((_QWORD *)this + 15);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 328LL))(v3) )
    return 1;
  v4 = (CSurfaceBrush *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    v5 = *(char (__fastcall **)(CNineGridBrush *))(*(_QWORD *)v4 + 328LL);
    if ( (char *)v5 == (char *)CSurfaceBrush::ShouldSnapToPixels )
      ShouldSnapToPixels = CSurfaceBrush::ShouldSnapToPixels(v4);
    else
      ShouldSnapToPixels = v5 == CNineGridBrush::ShouldSnapToPixels
                         ? CNineGridBrush::ShouldSnapToPixels(v4)
                         : ((__int64 (*)(void))v5)();
    if ( ShouldSnapToPixels )
      return 1;
  }
  return v2;
}
