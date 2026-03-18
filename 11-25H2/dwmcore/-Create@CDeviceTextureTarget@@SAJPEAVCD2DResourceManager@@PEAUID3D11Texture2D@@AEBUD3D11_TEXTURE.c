/*
 * XREFs of ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800427D4
 * Callers:
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800408A0 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800422D4 (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801C8224 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180220E44 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 * Callees:
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x1800429C0 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x180042C24 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CDeviceTextureTarget::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        char a8,
        unsigned __int64 *a9)
{
  _QWORD *v13; // rbx
  int v14; // eax
  unsigned int v15; // edi

  *a9 = 0LL;
  if ( (*(_BYTE *)(a3 + 32) & 0x20) != 0 )
  {
    v13 = MIDL_user_allocate(0x128uLL);
    if ( v13 )
    {
      CD2DBitmap::CD2DBitmap(v13, a1, 0LL, a2, a3, a4, a5, a6, 0);
      *v13 = &CDeviceTextureTarget::`vftable'{for `IDeviceResourceMethodsT<CD2DResource,ID2DBitmap>'};
      v13[9] = &CDeviceTextureTarget::`vftable'{for `IDeviceResource'};
      v13[10] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat'};
      v13[11] = &CDeviceTextureTarget::`vftable'{for `ID2DBitmapCacheSource'};
      v13[12] = &CSecondaryCrossAdapterDirectBitmap::`vftable'{for `IBitmapUnlock'};
      v13[30] = &CDeviceTextureTarget::`vftable'{for `IDeviceResource's `IDeviceTexture'};
      v13[31] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat's `IDeviceTexture'};
      v13[32] = &CDeviceTextureTarget::`vftable'{for `IDeviceResource's `IDeviceTarget'};
      v13[33] = &CDeviceTextureTarget::`vftable'{for `IPixelFormat's `IDeviceTarget'};
      v13[34] = 0LL;
      *((_DWORD *)v13 + 70) = 0;
      *((_BYTE *)v13 + 289) = a8;
      *((_DWORD *)v13 + 71) = a7;
      *((_BYTE *)v13 + 288) = 0;
      *((_WORD *)v13 + 145) = 1;
      *((_BYTE *)v13 + 292) = 0;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 1));
      v14 = CDeviceTextureTarget::Initialize((CDeviceTextureTarget *)v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2Bu, 0LL);
        CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease((struct CMILPoolResource *)v13);
      }
      else
      {
        *a9 = (unsigned __int64)(v13 + 30) & -(__int64)(v13 != 0LL);
      }
    }
    else
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x29u, 0LL);
    }
  }
  else
  {
    v15 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292287, 0x1Eu, 0LL);
  }
  return v15;
}
