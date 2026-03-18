/*
 * XREFs of ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800422D4
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800DB068 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 * Callees:
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180042530 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800427D4 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z @ 0x180042D80 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateScratchRenderTargetBitmap(
        CD3DDevice *this,
        const struct D2D_SIZE_U *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        const struct RenderTargetInfo *a4,
        struct CScratchRenderTargetBitmap **a5)
{
  int v6; // eax
  struct ID3D11Texture2D *v9; // rdi
  struct IDeviceTextureTarget *v10; // rbx
  int pSysMem; // eax
  int v12; // eax
  unsigned int v13; // esi
  UINT SysMemPitch; // ecx
  int v15; // xmm0_4
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // esi
  unsigned int v22; // [rsp+20h] [rbp-B1h]
  struct IDeviceTextureTarget *v23; // [rsp+50h] [rbp-81h] BYREF
  struct ID3D11Texture2D *v24; // [rsp+58h] [rbp-79h] BYREF
  __int64 v25; // [rsp+60h] [rbp-71h]
  int v26; // [rsp+6Ch] [rbp-65h]
  __int64 v27; // [rsp+70h] [rbp-61h] BYREF
  int v28; // [rsp+78h] [rbp-59h]
  int v29; // [rsp+7Ch] [rbp-55h]
  int v30; // [rsp+80h] [rbp-51h]
  __int64 v31; // [rsp+84h] [rbp-4Dh]
  int v32; // [rsp+8Ch] [rbp-45h]
  struct D2D_SIZE_U v33; // [rsp+90h] [rbp-41h] BYREF
  int v34; // [rsp+98h] [rbp-39h]
  int v35; // [rsp+9Ch] [rbp-35h]
  int v36; // [rsp+A0h] [rbp-31h]
  __int64 v37; // [rsp+A4h] [rbp-2Dh]
  int v38; // [rsp+ACh] [rbp-25h]
  __int64 v39; // [rsp+B0h] [rbp-21h]
  int v40; // [rsp+B8h] [rbp-19h]
  const char *v41; // [rsp+C0h] [rbp-11h]
  int v42; // [rsp+C8h] [rbp-9h]
  int v43; // [rsp+CCh] [rbp-5h]

  v41 = "DWM Scratch Rendertarget";
  v6 = v26;
  v24 = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  v42 = 24;
  v43 = v6;
  v31 = 0LL;
  v32 = 0;
  if ( *((_DWORD *)this + 278) )
  {
    v13 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, -2003304307, 0x655u, 0LL);
  }
  else
  {
    v33 = *a2;
    pSysMem = (int)a3->pSysMem;
    v38 = 0;
    v36 = pSysMem;
    LOBYTE(pSysMem) = *((_BYTE *)a4 + 20);
    v34 = 1;
    v35 = 1;
    v37 = 1LL;
    v39 = 40LL;
    v40 = (_BYTE)pSysMem != 0 ? 0x80000 : 0;
    v12 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v33, a3, &v24);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v12, 0x664u, 0LL);
      v9 = v24;
    }
    else
    {
      SysMemPitch = a3->SysMemPitch;
      v15 = *((_DWORD *)a4 + 4);
      LODWORD(v25) = v36;
      HIDWORD(v25) = HIDWORD(a3->pSysMem);
      v27 = v25;
      v16 = *((_DWORD *)a4 + 2);
      v30 = 1;
      v9 = v24;
      v22 = SysMemPitch;
      v17 = *((_QWORD *)this + 23);
      v28 = 1119879168;
      v29 = 1119879168;
      v18 = CDeviceTextureTarget::Create(v17, v24, &v33, &v27, v22, v16, v15, 0, &v23);
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v18, 0x675u, 0LL);
        v10 = v23;
      }
      else
      {
        v10 = v23;
        v19 = CScratchRenderTargetBitmap::Create(v23, a5);
        v13 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031ECF8, 2u, v19, 0x679u, 0LL);
      }
    }
  }
  v20 = CD3DDevice::TranslateDXGIorD3DErrorInContext(this, v13, 0LL);
  if ( v10 )
    (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v9->lpVtbl->Release)(v9);
  return v20;
}
