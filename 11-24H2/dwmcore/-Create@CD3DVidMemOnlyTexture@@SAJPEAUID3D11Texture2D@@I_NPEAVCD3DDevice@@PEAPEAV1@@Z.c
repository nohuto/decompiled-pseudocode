/*
 * XREFs of ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18005D0D8
 * Callers:
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPEAPEAV1@@Z @ 0x18005CC74 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDevice@@PEAX_NIPE.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x18024AD88 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x180043AEC (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18005D224 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::Create(
        struct ID3D11Texture2D *a1,
        unsigned int a2,
        __int64 a3,
        struct CD3DDevice *a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  CD3DResource *v8; // rax
  struct IMILPoolManager *v9; // rdx
  CD3DTexture *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx

  *a5 = 0LL;
  v8 = (CD3DResource *)operator new(0x100uLL);
  v10 = v8;
  if ( v8 )
  {
    LOBYTE(v9) = 1;
    CD3DResource::CD3DResource(v8, v9);
    *(_QWORD *)(v11 + 120) = 0LL;
    *(_QWORD *)v11 = &CD3DVidMemOnlyTexture::`vftable';
    *(_QWORD *)(v11 + 172) = 0LL;
    *(_DWORD *)(v11 + 180) = 0;
    *(_QWORD *)(v11 + 192) = 0LL;
    *(_QWORD *)(v11 + 200) = 0LL;
    *(_QWORD *)(v11 + 208) = 0LL;
    *(_QWORD *)(v11 + 216) = 0LL;
    *(_QWORD *)(v11 + 224) = 0LL;
    *(_QWORD *)(v11 + 232) = 0LL;
    *(_QWORD *)(v11 + 240) = 0LL;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v11 + 8));
    v12 = CD3DTexture::Init(v10, (struct CD3DDevice *)((char *)a4 + 1120), a1, a2);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x10Bu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xCBu, 0LL);
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC3u, 0LL);
  }
  return v13;
}
