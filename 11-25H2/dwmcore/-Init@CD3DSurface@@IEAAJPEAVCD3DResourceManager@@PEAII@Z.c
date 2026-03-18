/*
 * XREFs of ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802D1D14
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1802D1AB4 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x18006F178 (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1801888A8 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801C7F48 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180200A38 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x1802061CC (-CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x1802D1BDC (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DSurface::Init(
        CD3DSurface *this,
        struct CD3DResourceManager *a2,
        struct IDXGIResource *a3,
        int a4)
{
  __int64 v5; // rcx
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // r8d
  int PixelFormatColorSpace; // eax
  bool v11; // cc
  const struct D3D11_RENDER_TARGET_VIEW_DESC *v12; // r8
  bool v13; // cc
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v14; // r8
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  struct IDXGIResource *v19; // [rsp+80h] [rbp+30h] BYREF
  int v20; // [rsp+88h] [rbp+38h] BYREF

  v20 = a4;
  v19 = a3;
  v5 = *((_QWORD *)this + 16);
  v19 = 0LL;
  v20 = 0;
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 140);
  if ( !*((_DWORD *)this + 38) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x9Du, 0LL);
    goto LABEL_25;
  }
  v8 = *((_DWORD *)this + 39);
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 46) = (unsigned int)HasAlphaChannel(v8) != 0 ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v9, (enum DXGI_COLOR_SPACE_TYPE *)this + 47);
  v7 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v16 = 176;
    goto LABEL_24;
  }
  *((_DWORD *)this + 28) = (*(__int64 (__fastcall **)(CD3DSurface *))(*(_QWORD *)this + 120LL))(this);
  *((_BYTE *)this + 118) = 1;
  *((_QWORD *)this + 5) = a2;
  CD3DResourceManager::RegisterResource(a2, this);
  PixelFormatColorSpace = CD3DSurface::GetDXGIResource(this, &v19);
  v7 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v16 = 190;
    goto LABEL_24;
  }
  PixelFormatColorSpace = ((__int64 (__fastcall *)(struct IDXGIResource *, int *))v19->lpVtbl->GetUsage)(v19, &v20);
  v7 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v16 = 192;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, PixelFormatColorSpace, v16, 0LL);
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 172) & 0x20) != 0 && (v20 & 0x100) == 0 )
  {
    v11 = *((_DWORD *)this + 38) <= 1u;
    v17 = 0LL;
    LODWORD(v18) = 0;
    if ( !v11 )
    {
      LODWORD(v17) = *((_DWORD *)this + 39);
      HIDWORD(v17) = *((_DWORD *)this + 34);
      *(_QWORD *)((char *)&v17 + 4) = 5LL;
      LODWORD(v18) = 1;
    }
    v12 = (const struct D3D11_RENDER_TARGET_VIEW_DESC *)&v17;
    if ( v11 )
      v12 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateRenderTargetView(
                              *(CD3DDevice **)(*((_QWORD *)this + 5) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v12,
                              (struct ID3D11RenderTargetView **)this + 24);
    v7 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v16 = 216;
      goto LABEL_24;
    }
  }
  if ( (*((_BYTE *)this + 172) & 8) != 0 )
  {
    v13 = *((_DWORD *)this + 38) <= 1u;
    v17 = 0LL;
    v18 = 0LL;
    if ( !v13 )
    {
      LODWORD(v17) = *((_DWORD *)this + 39);
      HIDWORD(v17) = *((_DWORD *)this + 37);
      LODWORD(v18) = *((_DWORD *)this + 34);
      *(_QWORD *)((char *)&v17 + 4) = 5LL;
      HIDWORD(v18) = 1;
    }
    v14 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v17;
    if ( v13 )
      v14 = 0LL;
    PixelFormatColorSpace = CD3DDevice::CreateShaderResourceView(
                              *(CD3DDevice **)(*((_QWORD *)this + 5) + 80LL),
                              *((struct ID3D11Resource **)this + 16),
                              v14,
                              (struct ID3D11ShaderResourceView **)this + 25);
    v7 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      v16 = 238;
      goto LABEL_24;
    }
  }
LABEL_25:
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>((__int64)v19);
  return v7;
}
