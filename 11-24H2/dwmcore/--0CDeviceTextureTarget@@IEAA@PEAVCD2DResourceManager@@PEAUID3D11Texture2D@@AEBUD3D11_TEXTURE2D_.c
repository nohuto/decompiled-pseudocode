/*
 * XREFs of ??0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NI@Z @ 0x18005B2DC
 * Callers:
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x1802CD7E0 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18005B864 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 */

__int64 __fastcall CDeviceTextureTarget::CDeviceTextureTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10)
{
  __int64 result; // rax

  CD2DBitmap::CD2DBitmap(a1, a2, 0LL, a3, a4, a5, a6, a7, a10);
  *(_QWORD *)a1 = &CDeviceTextureTarget::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
  *(_QWORD *)(a1 + 72) = &CDeviceTextureTarget::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(a1 + 80) = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(a1 + 88) = &CDeviceTextureTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(a1 + 96) = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)(a1 + 240) = &CDeviceTextureTarget::`vftable'{for `IDeviceResource's `IDeviceTexture'};
  *(_QWORD *)(a1 + 248) = &CDeviceTextureTarget::`vftable'{for `IPixelFormat's `IDeviceTexture'};
  *(_QWORD *)(a1 + 256) = &CDeviceTextureTarget::`vftable'{for `IDeviceResource's `IDeviceTarget'};
  *(_QWORD *)(a1 + 264) = &CDeviceTextureTarget::`vftable'{for `IPixelFormat's `IDeviceTarget'};
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_BYTE *)(a1 + 289) = a9;
  result = a1;
  *(_DWORD *)(a1 + 284) = a8;
  *(_DWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 288) = 0;
  *(_WORD *)(a1 + 290) = 1;
  *(_BYTE *)(a1 + 292) = 0;
  return result;
}
