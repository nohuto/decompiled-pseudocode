/*
 * XREFs of ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005BED0
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180159EB4 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802DA884 (-Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x18005BA8C (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18005BC84 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::Create(struct IDeviceTextureTarget *a1, struct IRenderTargetBitmap **a2)
{
  unsigned int v3; // ebx
  CRenderTargetBitmap *v5; // rax
  CRenderTargetBitmap *v6; // rax
  CRenderTargetBitmap *v7; // rdi

  v3 = 0;
  *a2 = 0LL;
  v5 = (CRenderTargetBitmap *)MIDL_user_allocate(0x88uLL);
  if ( v5 && (v6 = CRenderTargetBitmap::CRenderTargetBitmap(v5, 0LL), (v7 = v6) != 0LL) )
  {
    (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
    CRenderTargetBitmap::Initialize(v7, a1);
    *a2 = (CRenderTargetBitmap *)((char *)v7 + 80);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x16u, 0LL);
  }
  return v3;
}
