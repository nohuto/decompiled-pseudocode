/*
 * XREFs of ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801D7FC0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180055A90 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180056B20 (-CollectOcclusion@CVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOpaqueRect@CColorBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801D80D0 (-IsOpaqueRect@CColorBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801D8120 (-IsOpaqueRect@CNineGridBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180298118 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::AddOcclusionInformation(
        CBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v3; // rax
  FLOAT left; // xmm0_4
  bool (__fastcall *v6)(CColorBrush *__hidden, const struct D2D_SIZE_F *, struct D2D_RECT_F *); // rax
  FLOAT width; // xmm2_4
  FLOAT top; // xmm1_4
  FLOAT height; // xmm3_4
  bool IsOpaqueRect; // al
  _DWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  struct D2D_RECT_F v13; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)this;
  left = 0.0;
  v13 = 0LL;
  v6 = *(bool (__fastcall **)(CColorBrush *__hidden, const struct D2D_SIZE_F *, struct D2D_RECT_F *))(v3 + 320);
  if ( v6 == CEffectBrush::IsOpaqueRect )
  {
    if ( *((_BYTE *)this + 184) )
    {
      width = a3->width;
      top = 0.0;
      height = a3->height;
      v13.top = 0.0;
      v13.right = width;
      v13.bottom = height;
      v13.left = 0.0;
LABEL_8:
      *(FLOAT *)v12 = left;
      *(FLOAT *)&v12[1] = top;
      *(FLOAT *)&v12[2] = width;
      *(FLOAT *)&v12[3] = height;
      COcclusionContext::AddOcclusionRect(a2, v12, 0LL);
    }
  }
  else
  {
    if ( v6 == CColorBrush::IsOpaqueRect )
    {
      IsOpaqueRect = CColorBrush::IsOpaqueRect(this, a3, &v13);
    }
    else if ( v6 == CNineGridBrush::IsOpaqueRect )
    {
      IsOpaqueRect = CNineGridBrush::IsOpaqueRect(this, a3, &v13);
    }
    else
    {
      IsOpaqueRect = v6(this, a3, &v13);
    }
    if ( IsOpaqueRect )
    {
      height = v13.bottom;
      width = v13.right;
      top = v13.top;
      left = v13.left;
      goto LABEL_8;
    }
  }
  return 0LL;
}
