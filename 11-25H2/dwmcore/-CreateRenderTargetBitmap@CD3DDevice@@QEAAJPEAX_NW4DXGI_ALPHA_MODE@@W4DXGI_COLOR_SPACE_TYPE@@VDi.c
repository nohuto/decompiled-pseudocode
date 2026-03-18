/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802C5E60
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18028F1B0 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800431D0 (-OpenSharedTexture@CD3DDevice@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180220E44 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        struct IRenderTargetBitmap **a8)
{
  unsigned int v11; // ebx
  struct D3D11_SUBRESOURCE_DATA *v12; // r8
  int RenderTargetBitmap; // eax
  unsigned int v15; // [rsp+20h] [rbp-78h]
  struct ID3D11Texture2D *v16; // [rsp+40h] [rbp-58h] BYREF
  struct D3D11_TEXTURE2D_DESC v17; // [rsp+48h] [rbp-50h] BYREF

  v16 = 0LL;
  *a8 = 0LL;
  if ( !*(_DWORD *)(a1 + 1112) )
  {
    memset(&v17, 0, sizeof(v17));
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v16);
    RenderTargetBitmap = CD3DDevice::OpenSharedTexture((__int64 **)a1, &v17, v12, a2, 0, &v16);
    v11 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v15 = 1183;
    }
    else
    {
      RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap(a1, (__int64 *)v16, a4, a5, a6, a7, a8);
      v11 = RenderTargetBitmap;
      if ( RenderTargetBitmap >= 0 )
        goto LABEL_8;
      v15 = 1190;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, RenderTargetBitmap, v15, 0LL);
    goto LABEL_8;
  }
  v11 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, -2003304307, 0x497u, 0LL);
LABEL_8:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  return v11;
}
