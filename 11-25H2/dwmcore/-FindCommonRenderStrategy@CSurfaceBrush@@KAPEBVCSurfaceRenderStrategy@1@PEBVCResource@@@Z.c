/*
 * XREFs of ?FindCommonRenderStrategy@CSurfaceBrush@@KAPEBVCSurfaceRenderStrategy@1@PEBVCResource@@@Z @ 0x180023120
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x180022644 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z @ 0x180113FBC (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void **__fastcall CSurfaceBrush::FindCommonRenderStrategy(const struct CResource *a1)
{
  if ( !a1 )
    return &off_1803058B0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 41LL) )
    return &off_1803022B0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 41LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 13LL) )
  {
    return &off_1803021F0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 188LL) )
    return off_1803022A0;
  return (void **)((unsigned __int64)off_1803022A8 & -(__int64)((*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 64LL))(
                                                                  a1,
                                                                  117LL) != 0));
}
