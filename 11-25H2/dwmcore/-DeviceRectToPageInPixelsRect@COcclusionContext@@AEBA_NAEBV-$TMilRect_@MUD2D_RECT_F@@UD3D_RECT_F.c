/*
 * XREFs of ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180213AF4
 * Callers:
 *     ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x1800CB080 (-GetLargestOccluder@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

bool __fastcall COcclusionContext::DeviceRectToPageInPixelsRect(
        __int64 a1,
        const struct D2D_RECT_F *a2,
        struct D2D_RECT_F *a3)
{
  bool v3; // zf
  struct D2D_RECT_F *v4; // r11
  struct D2D_RECT_F v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_BYTE *)(a1 + 1564) == 0;
  v6 = 0LL;
  v4 = a3;
  if ( v3 )
  {
    *a3 = *a2;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 1640, a2, &v6.left);
    *v4 = v6;
  }
  return !IsEmpty(v4);
}
