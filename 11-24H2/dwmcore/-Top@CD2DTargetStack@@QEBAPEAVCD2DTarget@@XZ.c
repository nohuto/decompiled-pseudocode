/*
 * XREFs of ?Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ @ 0x1800F67F0
 * Callers:
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800F5FD0 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x1800F6434 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x1800F6768 (--1CSubDrawingContext@@QEAA@XZ.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x18020D4F0 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BBCC0 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?GetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@PEAUD2D_RECT_F@@PEAW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1802BC000 (-GetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@PEAUD2D_RECT_F@@PEAW4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

struct CD2DTarget *__fastcall CD2DTargetStack::Top(CD2DTargetStack *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 6);
  if ( v1 )
    return *(struct CD2DTarget **)(*(_QWORD *)this + 8LL * (unsigned int)(v1 - 1));
  else
    return 0LL;
}
