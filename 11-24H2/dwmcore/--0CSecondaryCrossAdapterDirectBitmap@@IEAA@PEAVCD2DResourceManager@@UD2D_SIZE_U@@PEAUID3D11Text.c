/*
 * XREFs of ??0CSecondaryCrossAdapterDirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x1802DA230
 * Callers:
 *     ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802DA2B0 (-Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11T.c)
 * Callees:
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x18005C898 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D1.c)
 */

_QWORD *__fastcall CSecondaryCrossAdapterDirectBitmap::CSecondaryCrossAdapterDirectBitmap(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        int a8)
{
  CSecondaryD2DBitmap::CSecondaryD2DBitmap((__int64)a1, a2, a3, a4, a5, a6, a7, a8);
  *a1 = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
  a1[9] = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IDeviceResource'};
  a1[10] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
  a1[11] = &CSecondaryCrossAdapterIndirectBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  a1[12] = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
  return a1;
}
