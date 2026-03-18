/*
 * XREFs of ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182DE0
 * Callers:
 *     ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@IIIW4Enum@MilBrushMappingMode@@W44MilStretch@@@Z @ 0x180181B80 (-CachedVisualImageUpdate@CChannel@@UEAAJIAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@IIIW4Enum@MilBrushMappi.c)
 *     ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_RECT_F@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x180181E00 (-ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUD2D_RECT_F@@0IIIW4Enum@MilBrushMappingMode@@1IIW.c)
 *     ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x180182AD0 (-EffectGroupUpdate@CChannel@@UEAAJINII@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x180182C60 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z @ 0x1802198B0 (-RedirectVisualSetRedirectedVisual@CChannel@@UEAAJII@Z.c)
 *     ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x18021BDB0 (-CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z.c)
 *     ?MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z @ 0x180222D50 (-MagnifierRenderTargetSetFilterList@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetBlurredWallpaperSurface@CChannel@@UEAAJIIPEBUtagRECT@@@Z @ 0x180227FC0 (-VisualSetBlurredWallpaperSurface@CChannel@@UEAAJIIPEBUtagRECT@@@Z.c)
 *     ?CaptureControllerSetReferenceVisual@CChannel@@UEAAJII@Z @ 0x18026D9D0 (-CaptureControllerSetReferenceVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z @ 0x18026DA70 (-CaptureControllerSetRootVisual@CChannel@@UEAAJII@Z.c)
 *     ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z @ 0x18026DBA0 (-CaptureControllerSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z @ 0x18026E230 (-HolographicInteropTextureSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z @ 0x18026E470 (-MagnifierRenderTargetSetColorTransform@CChannel@@UEAAJII@Z.c)
 *     ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z @ 0x18026E5A0 (-MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z.c)
 *     ?RenderTargetSetRoot@CChannel@@UEAAJII@Z @ 0x18026EAF0 (-RenderTargetSetRoot@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetColorTransform@CChannel@@UEAAJII@Z @ 0x18026F0C0 (-VisualSetColorTransform@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CChannel::CheckOptionalHandle(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 16) + 16LL * (a2 - 1);
    if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 4)
      || !*(_DWORD *)v3
      || !*(_DWORD *)(v3 + 4) )
    {
      goto LABEL_10;
    }
    if ( a3 )
    {
      for ( i = *(unsigned int *)(v3 + 4); (unsigned int)i < 0xC0; LODWORD(i) = dword_1803A0BA0[i] )
      {
        if ( (_DWORD)i == a3 )
          return;
      }
LABEL_10:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA88,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)v3);
    }
  }
}
