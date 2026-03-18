/*
 * XREFs of ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802DBBA4
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802D9CD8 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002E7F0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180042530 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801B5020 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180220E44 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?PostInteropTextureInitialize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802D8C14 (-PostInteropTextureInitialize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?PostInteropTextureResize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802D8C60 (-PostInteropTextureResize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ??$As@UIDXGIResource1@@@?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIResource1@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802DB80C (--$As@UIDXGIResource1@@@-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802DC5C8 (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicInteropTexture::EnsureRenderBuffers(
        RTL_SRWLOCK *this,
        struct CD3DDevice *a2,
        enum DXGI_FORMAT a3)
{
  int v6; // edi
  int Ptr; // edx
  unsigned int Ptr_high; // ecx
  char *v9; // rax
  char *v10; // r14
  unsigned int v11; // r14d
  struct D3D11_SUBRESOURCE_DATA *v12; // r8
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct IRenderTargetBitmap **v16; // r8
  int v17; // r9d
  int v18; // xmm0_4
  _DWORD *v19; // rax
  int v20; // ecx
  int RenderTargetBitmap; // eax
  CHolographicInteropTaskQueue **v22; // rcx
  struct ID3D11Texture2D *v24; // [rsp+40h] [rbp-49h] BYREF
  __int64 v25; // [rsp+48h] [rbp-41h] BYREF
  int v26; // [rsp+54h] [rbp-35h]
  _DWORD v27[5]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v28; // [rsp+74h] [rbp-15h]
  int v29; // [rsp+7Ch] [rbp-Dh]
  __int64 v30; // [rsp+80h] [rbp-9h]
  int v31; // [rsp+88h] [rbp-1h]
  const char *v32; // [rsp+90h] [rbp+7h]
  int v33; // [rsp+98h] [rbp+Fh]
  int v34; // [rsp+9Ch] [rbp+13h]

  v24 = 0LL;
  v25 = 0LL;
  if ( !LOBYTE(this[268].Ptr) )
  {
    v6 = -2147024875;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024875, 0x1E6u, 0LL);
LABEL_34:
    CHolographicInteropTexture::ReleaseResources((CHolographicInteropTexture *)this);
    goto LABEL_35;
  }
  v6 = 0;
  if ( !BYTE1(this[269].Ptr) )
  {
    Ptr = (int)this[270].Ptr;
    if ( (unsigned int)(Ptr - 1) > 0x3FFF || (Ptr_high = HIDWORD(this[270].Ptr)) == 0 || Ptr_high > 0x4000 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1F1u, 0LL);
      goto LABEL_34;
    }
    v27[1] = Ptr_high;
    v32 = "Holographic Interop texture";
    v34 = v26;
    v33 = 27;
    v27[0] = Ptr;
    v27[2] = 1;
    v27[3] = 1;
    v27[4] = a3;
    v28 = 1LL;
    v29 = 0;
    v30 = 40LL;
    v31 = 2050;
    AcquireSRWLockExclusive(this + 290);
    v9 = (char *)operator new[](0x68uLL);
    if ( v9 )
    {
      *(_QWORD *)v9 = 1LL;
      v10 = v9 + 8;
      `vector constructor iterator'(v9 + 8, 96LL, 1LL, CHolographicInteropTexture::RenderBuffer::RenderBuffer);
    }
    else
    {
      v10 = 0LL;
    }
    this[266].Ptr = v10;
    v11 = 0;
    HIDWORD(this[269].Ptr) = 1;
    while ( v11 < HIDWORD(this[269].Ptr) )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      v13 = CD3DDevice::CreateTexture(a2, (const struct DWM_TEXTURE2D_DESC *)v27, v12, &v24);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x20Fu, 0LL);
        goto LABEL_27;
      }
      v14 = Microsoft::WRL::ComPtr<ID3D11Texture2D>::As<IDXGIResource1>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v24,
              &v25);
      v6 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x211u, 0LL);
        goto LABEL_27;
      }
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v25 + 104LL))(
              v25,
              0LL,
              0x80000000LL,
              0LL,
              (__int64)this[266].Ptr + 96 * v11 + 8);
      v6 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x217u, 0LL);
        goto LABEL_27;
      }
      if ( IsDXGIColorSpaceHDR((enum DXGI_COLOR_SPACE_TYPE)(a3 == DXGI_FORMAT_R16G16B16A16_FLOAT)) )
        v18 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      else
        v18 = 0;
      v19 = this[11].Ptr;
      if ( *((_QWORD *)v19 + 5) )
        v20 = v19[16];
      else
        v20 = -6;
      RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap((__int64)a2, (__int64 *)v24, 1u, v17, v20, v18, v16);
      v6 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, RenderTargetBitmap, 0x221u, 0LL);
LABEL_27:
        ReleaseSRWLockExclusive(this + 290);
        goto LABEL_34;
      }
      ++v11;
    }
    ReleaseSRWLockExclusive(this + 290);
    v22 = (CHolographicInteropTaskQueue **)this[11].Ptr;
    if ( BYTE2(this[269].Ptr) )
    {
      CHolographicManager::PostInteropTextureResize(v22, (struct CHolographicInteropTexture *)this);
    }
    else
    {
      BYTE2(this[269].Ptr) = 1;
      CHolographicManager::PostInteropTextureInitialize(v22, (struct CHolographicInteropTexture *)this);
    }
    BYTE1(this[269].Ptr) = 1;
    if ( v6 < 0 )
      goto LABEL_34;
  }
LABEL_35:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  return (unsigned int)v6;
}
