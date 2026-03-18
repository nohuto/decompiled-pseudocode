/*
 * XREFs of ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x18005BD3C
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800588A0 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18005C0E8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18005AEE0 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18005B40C (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct IDeviceTextureTarget **a6)
{
  __int128 v8; // xmm0
  int v9; // eax
  bool v10; // cf
  int v11; // eax
  struct ID3D11Texture2D *v12; // rbx
  unsigned int v13; // edi
  int v15; // edx
  int v16; // xmm0_4
  __int64 v17; // rcx
  int v18; // eax
  int v19; // [rsp+28h] [rbp-91h]
  struct ID3D11Texture2D *v20; // [rsp+50h] [rbp-69h] BYREF
  struct ID3D11Texture2D *v21; // [rsp+58h] [rbp-61h] BYREF
  int v22; // [rsp+60h] [rbp-59h]
  int v23; // [rsp+64h] [rbp-55h]
  int v24; // [rsp+68h] [rbp-51h]
  __int64 v25; // [rsp+6Ch] [rbp-4Dh]
  int v26; // [rsp+74h] [rbp-45h]
  struct D2D_SIZE_U pSysMem; // [rsp+80h] [rbp-39h] BYREF
  int v28; // [rsp+88h] [rbp-31h]
  int v29; // [rsp+8Ch] [rbp-2Dh]
  int v30; // [rsp+90h] [rbp-29h]
  int v31; // [rsp+94h] [rbp-25h]
  int v32; // [rsp+98h] [rbp-21h]
  int v33; // [rsp+9Ch] [rbp-1Dh]
  int v34; // [rsp+A0h] [rbp-19h]
  int v35; // [rsp+A4h] [rbp-15h]
  int v36; // [rsp+A8h] [rbp-11h]
  __int128 v37; // [rsp+B0h] [rbp-9h]

  v32 = 0;
  v33 = 0;
  v35 = 0;
  v25 = 0LL;
  v26 = 0;
  *a6 = 0LL;
  v8 = *(_OWORD *)a2;
  pSysMem = (struct D2D_SIZE_U)a3->pSysMem;
  v9 = *(_DWORD *)a4;
  v28 = 1;
  v29 = 1;
  v31 = 1;
  v30 = v9;
  v10 = *((_BYTE *)a5 + 20) != 0;
  v34 = 40;
  v37 = v8;
  v20 = 0LL;
  v36 = v10 ? 0x80000 : 0;
  v11 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&pSysMem, a3, &v20);
  v12 = v20;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v15 = *((_DWORD *)a4 + 2);
    v16 = *((_DWORD *)a5 + 4);
    v17 = *((_QWORD *)this + 23);
    LODWORD(v20) = v30;
    HIDWORD(v20) = *((_DWORD *)a4 + 1);
    v21 = v20;
    v19 = *((_DWORD *)a5 + 2);
    v22 = 1119879168;
    v23 = 1119879168;
    v24 = 1;
    v18 = CDeviceTextureTarget::Create(
            v17,
            (__int64)v12,
            (__int64)&pSysMem,
            (__int64)&v21,
            v15,
            v19,
            v16,
            0,
            (unsigned __int64 *)a6);
    v13 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, v18, 0x4C4u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AFF8, 2u, v11, 0x4B3u, 0LL);
  }
  if ( v12 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v12->lpVtbl->Release)(v12);
  return v13;
}
