/*
 * XREFs of ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801C8224
 * Callers:
 *     ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x1801C54F0 (-CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE.c)
 *     ?CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z @ 0x1801C6C34 (-CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z.c)
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802C66B4 (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x1802D1300 (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802D17C8 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802E0D74 (-EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800427D4 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        unsigned __int64 *a8)
{
  unsigned int v12; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-89h]
  unsigned __int64 v18; // [rsp+58h] [rbp-51h] BYREF
  int v19; // [rsp+60h] [rbp-49h]
  int v20; // [rsp+64h] [rbp-45h]
  int v21; // [rsp+68h] [rbp-41h]
  __int64 v22; // [rsp+6Ch] [rbp-3Dh]
  int v23; // [rsp+74h] [rbp-35h]
  __int128 v24; // [rsp+78h] [rbp-31h] BYREF
  __int128 v25; // [rsp+88h] [rbp-21h]
  __int64 v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+A0h] [rbp-9h]

  v22 = 0LL;
  v23 = 0;
  v26 = 0LL;
  *a8 = 0LL;
  v27 = 0;
  v24 = 0LL;
  v25 = 0LL;
  if ( *(_DWORD *)(a1 + 1112) )
  {
    v12 = -2003304307;
    v17 = 1274;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v12, v17, 0LL);
    return v12;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 80LL))(a2, &v24);
  if ( (v26 & 0x20) == 0 )
  {
    v12 = -2147024809;
    v17 = 1279;
    goto LABEL_3;
  }
  v18 = __PAIR64__(a3, v25);
  v14 = 1;
  v19 = 1119879168;
  v20 = 1119879168;
  if ( (v26 & 8) == 0 )
    v14 = 3;
  v15 = *(_QWORD *)(a1 + 184);
  v21 = v14;
  v16 = CDeviceTextureTarget::Create(v15, a2, (__int64)&v24, (__int64)&v18, a4, a5, a6, a7, a8);
  v12 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, v16, 0x515u, 0LL);
  return v12;
}
