/*
 * XREFs of ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004B410
 * Callers:
 *     ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800FEDF0 (-CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180100510 (-CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?IsOpaqueRect@CColorBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18004B520 (-IsOpaqueRect@CColorBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18004B5D0 (-IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028CCA8 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::AddOcclusionInformation(
        CBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v3; // rax
  FLOAT left; // xmm0_4
  const struct D2D_SIZE_F *v6; // r9
  bool (__fastcall *v7)(CColorBrush *__hidden, const struct D2D_SIZE_F *, struct D2D_RECT_F *); // rax
  FLOAT width; // xmm2_4
  FLOAT top; // xmm1_4
  FLOAT height; // xmm3_4
  bool IsOpaqueRect; // al
  _DWORD v13[4]; // [rsp+20h] [rbp-38h] BYREF
  struct D2D_RECT_F v14; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)this;
  left = 0.0;
  v6 = a3;
  v14 = 0LL;
  v7 = *(bool (__fastcall **)(CColorBrush *__hidden, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(v3 + 320);
  if ( v7 == CEffectBrush::IsOpaqueRect )
  {
    if ( *((_BYTE *)this + 184) )
    {
      width = a3->width;
      top = 0.0;
      height = a3->height;
      v14.top = 0.0;
      v14.right = width;
      v14.bottom = height;
      v14.left = 0.0;
LABEL_8:
      *(FLOAT *)v13 = left;
      *(FLOAT *)&v13[1] = top;
      *(FLOAT *)&v13[2] = width;
      *(FLOAT *)&v13[3] = height;
      ((void (__fastcall *)(struct COcclusionContext *, _DWORD *, _QWORD, const struct D2D_SIZE_F *))COcclusionContext::AddOcclusionRect)(
        a2,
        v13,
        0LL,
        v6);
    }
  }
  else
  {
    if ( v7 == CColorBrush::IsOpaqueRect )
    {
      IsOpaqueRect = CColorBrush::IsOpaqueRect(this, a3, &v14);
    }
    else if ( v7 == CNineGridBrush::IsOpaqueRect )
    {
      IsOpaqueRect = CNineGridBrush::IsOpaqueRect(this, a3, &v14);
    }
    else
    {
      IsOpaqueRect = v7(this, a3, &v14);
    }
    if ( IsOpaqueRect )
    {
      height = v14.bottom;
      width = v14.right;
      top = v14.top;
      left = v14.left;
      goto LABEL_8;
    }
  }
  return 0LL;
}
