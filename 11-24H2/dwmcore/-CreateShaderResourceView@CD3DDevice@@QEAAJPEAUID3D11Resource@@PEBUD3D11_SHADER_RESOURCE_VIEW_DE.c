/*
 * XREFs of ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800643E4
 * Callers:
 *     ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18006423C (-GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_S.c)
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x18010C7A8 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802C8A94 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateShaderResourceView(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        const struct D3D11_SHADER_RESOURCE_VIEW_DESC *a3,
        struct ID3D11ShaderResourceView **a4)
{
  int v5; // eax
  unsigned int v6; // ebx

  *a4 = 0LL;
  if ( *((_DWORD *)this + 278) )
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x6ADu, 0LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct D3D11_SHADER_RESOURCE_VIEW_DESC *))(**((_QWORD **)this + 69) + 56LL))(
           *((_QWORD *)this + 69),
           a2,
           a3);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6B1u, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(this, v6, 0LL);
}
