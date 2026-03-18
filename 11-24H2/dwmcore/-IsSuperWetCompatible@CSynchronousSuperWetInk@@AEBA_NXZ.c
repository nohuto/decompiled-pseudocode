/*
 * XREFs of ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801A2C14
 * Callers:
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A29D0 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ @ 0x1801A2BC4 (-HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x18022E730 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRender.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x1802A6EF8 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 *     ?GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A7010 (-GetBounds@CSynchronousSuperWetInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802A717C (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CSynchronousSuperWetInk::IsSuperWetCompatible(CSynchronousSuperWetInk *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 43) == 2 || *((_QWORD *)this + 23) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      if ( *((_QWORD *)this + 26) )
        return 1;
    }
  }
  return result;
}
