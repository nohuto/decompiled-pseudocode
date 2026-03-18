/*
 * XREFs of ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x18005C898
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x18005C778 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 *     ??0CSecondaryCrossAdapterDirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x1802DA230 (--0CSecondaryCrossAdapterDirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Text.c)
 *     ??0CSecondaryCrossAdapterIndirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x1802DA3F0 (--0CSecondaryCrossAdapterIndirectBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Te.c)
 * Callees:
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18005B864 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CSecondaryD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        int a8)
{
  CD2DBitmap::CD2DBitmap(a1, a2, 0LL, a4, a5, a6, a7, a8, 0);
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_QWORD *)(a1 + 248) = a3;
  *(_QWORD *)(a1 + 256) = a1 + 264;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)a1 = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
  *(_QWORD *)(a1 + 72) = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 80) = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 88) = &CSecondaryCrossAdapterIndirectBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 96) = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
  return a1;
}
