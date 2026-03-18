/*
 * XREFs of ??0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800293A0
 * Callers:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x180029038 (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCEffectBrush@@PEBVCV.c)
 * Callees:
 *     ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800295A8 (--0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::CTreeEffectLayer(
        __int64 a1,
        const struct D2D_POINTANDSIZE_L *a2,
        __int128 *a3,
        struct IRenderTargetBitmap *a4,
        __int64 a5,
        __int128 *a6,
        int a7)
{
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 result; // rax

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a2, a4);
  v9 = *a3;
  *(_QWORD *)a1 = &CTreeEffectLayer::`vftable';
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 248) = a5;
  *(_OWORD *)(a1 + 228) = v9;
  *(_QWORD *)(a1 + 256) = 0LL;
  v10 = *a6;
  result = a1;
  *(_DWORD *)(a1 + 280) = a7;
  *(_OWORD *)(a1 + 264) = v10;
  return result;
}
