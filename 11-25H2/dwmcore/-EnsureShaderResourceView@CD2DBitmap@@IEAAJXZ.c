/*
 * XREFs of ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x1801483E8
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801462F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x180148150 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180148520 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x18014A240 (-GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?GetShaderResourceView@CDeviceTextureTarget@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x1801DFF00 (-GetShaderResourceView@CDeviceTextureTarget@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18018C0C0 (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180200A38 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::EnsureShaderResourceView(CD2DBitmap *this)
{
  __int64 *v1; // r14
  unsigned int v3; // ebx
  int v5; // eax
  bool v6; // cc
  CD3DDevice *v7; // rbx
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v8; // r8
  int ShaderResourceView; // eax
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v11)(struct IBitmapResource *, __int64 **); // rbx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 *v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  v1 = (__int64 *)((char *)this + 112);
  if ( *((_QWORD *)this + 14) )
    return 0;
  if ( !*((_QWORD *)this + 13) )
  {
    v3 = -2003292412;
    v16 = 585;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v16, 0LL);
    return v3;
  }
  v5 = *((_DWORD *)this + 44);
  if ( (v5 & 0x400000) != 0 )
  {
    v19 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(this);
    v11 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 **))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v19);
    v12 = v11(StockBlackBitmap, &v19);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x23Au, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CD2DBitmap *, __int128 *))(*(_QWORD *)this + 64LL))(this, &v17);
      *((_QWORD *)&v17 + 1) = 0xFFFFFFFFLL;
      v18 = 0LL;
      v13 = *v19;
      v20 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v13 + 96))(v19, &v17, &v20);
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x242u, 0LL);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 128LL))(v20);
        wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(v1, v15);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
    return v3;
  }
  if ( (v5 & 8) == 0 )
  {
    v3 = -2003292287;
    v16 = 562;
    goto LABEL_14;
  }
  v6 = *((_DWORD *)this + 39) <= 1u;
  v17 = 0LL;
  v18 = 0LL;
  if ( !v6 )
  {
    LODWORD(v17) = *((_DWORD *)this + 40);
    HIDWORD(v17) = *((_DWORD *)this + 38);
    LODWORD(v18) = *((_DWORD *)this + 58);
    *(_QWORD *)((char *)&v17 + 4) = 5LL;
    HIDWORD(v18) = 1;
  }
  v7 = (CD3DDevice *)(*(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)this + 40LL))(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  v8 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)&v17;
  if ( *((_DWORD *)this + 39) <= 1u )
    v8 = 0LL;
  ShaderResourceView = CD3DDevice::CreateShaderResourceView(
                         v7,
                         *((struct ID3D11Resource **)this + 13),
                         v8,
                         (struct ID3D11ShaderResourceView **)v1);
  v3 = ShaderResourceView;
  if ( ShaderResourceView < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShaderResourceView, 0x22Eu, 0LL);
  return v3;
}
