/*
 * XREFs of ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x18005A2D4
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18005D3C0 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1801D0020 (-VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagREC.c)
 *     ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXXZ @ 0x1801F70B0 (-MarkFullDirty@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ @ 0x180205270 (-MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ.c)
 *     ?MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ @ 0x1802D6F80 (-MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802D8E60 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CWICBitmapRealization@@UEAAXXZ @ 0x1802D95C0 (-MarkFullDirty@CWICBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18005B278 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 */

void __fastcall CD2DBitmapCache::MarkFullInvalid(CD2DBitmapCache *this)
{
  __int64 v1; // rax
  int v2; // edi
  int v3; // r11d
  int v4; // r10d
  int v5; // r9d
  _DWORD *v6; // rdx
  __int64 v7; // rdi
  __int64 i; // rbx

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 24);
    v3 = *(_DWORD *)(v1 + 32);
    v4 = *(_DWORD *)(v1 + 28);
    v5 = *(_DWORD *)(v1 + 36);
    if ( v2 >= v3 || v4 >= v5 )
    {
      **(_DWORD **)(v1 + 40) = 0;
    }
    else
    {
      v6 = *(_DWORD **)(v1 + 40);
      *v6 = 2;
      v6[1] = v2;
      v6[2] = v3;
      v6[3] = v4;
      v6[4] = 16;
      v6[7] = v2;
      v6[8] = v3;
      v6[5] = v5;
      v6[6] = 16;
    }
  }
  v7 = *((_QWORD *)this + 7);
  for ( i = *((_QWORD *)this + 6); i != v7; i += 8LL )
    CRegion::SetRectangle(
      (CRegion *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 256LL),
      (const struct MilRectU *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 240LL));
}
