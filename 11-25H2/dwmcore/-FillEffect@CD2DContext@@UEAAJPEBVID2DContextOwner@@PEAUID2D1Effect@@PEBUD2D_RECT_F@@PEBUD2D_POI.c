/*
 * XREFs of ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180080A10
 * Callers:
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801164E0 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180118418 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 * Callees:
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180080984 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ @ 0x180082590 (-Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::FillEffect(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Effect *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_POINT_2F *a5,
        enum D2D1_INTERPOLATION_MODE a6,
        enum D2D1_COMPOSITE_MODE a7)
{
  struct CD2DTarget *v11; // r15
  struct D2D_POINT_2F *v12; // r8
  FLOAT y; // xmm1_4
  __int64 result; // rax
  struct D2D_POINT_2F v15; // [rsp+30h] [rbp-68h] BYREF
  __int128 v16; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+48h] [rbp-50h]

  CD2DContext::FlushDrawList((CD2DContext *)this);
  v11 = CD2DTargetStack::Top((CD2DTargetStack *)(this + 41));
  v17 = 0LL;
  v16 = 0LL;
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  (**(void (__fastcall ***)(const struct ID2DContextOwner *, __int128 *))a2)(a2, &v16);
  (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)this[25] + 240LL))(this[25], &v16);
  v12 = 0LL;
  v15 = 0LL;
  if ( a5 )
  {
    v12 = &v15;
    y = a5->y;
    v15.x = a5->x;
    v15.y = y;
  }
  ID2D1DeviceContext::DrawImage(this[25], a3, v12, a4, a6, a7);
  result = 0LL;
  *((_BYTE *)v11 + 80) = 1;
  return result;
}
