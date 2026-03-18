/*
 * XREFs of ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18005B864
 * Callers:
 *     ??0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NI@Z @ 0x18005B2DC (--0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18005B40C (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x18005C898 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D1.c)
 *     ?CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1802CD1A8 (-CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x18005B96C (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::CD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r8
  __int128 v14; // xmm1
  __int64 result; // rax

  CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(
    a1,
    a2);
  *(_QWORD *)(v12 + 40) = v11;
  *(_QWORD *)v12 = &CD2DBitmap::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
  *(_QWORD *)(v12 + 72) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v12 + 80) = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(v12 + 88) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(v12 + 96) = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
  *(_BYTE *)(v12 + 48) = 0;
  *(_BYTE *)(v12 + 49) = v13;
  *(_BYTE *)(v12 + 50) = 0;
  *(_QWORD *)(v12 + 104) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_OWORD *)(a1 + 144) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a5 + 32);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a5 + 40);
  *(_OWORD *)(a1 + 192) = *a6;
  v14 = a6[1];
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 224) = a7;
  *(_DWORD *)(a1 + 228) = a8;
  *(_DWORD *)(a1 + 232) = a9;
  result = a1;
  *(_OWORD *)(a1 + 208) = v14;
  return result;
}
