/*
 * XREFs of ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x1802C326C
 * Callers:
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x18028F6F0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x1801C5BB0 (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801D8C2C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802D3A68 (-Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacyStereoSwapChain(
        CD3DDevice *this,
        struct IDXGIOutput *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        unsigned int a6,
        struct CLegacyStereoSwapChain **a7)
{
  int v11; // ebx
  int v12; // r9d
  int v13; // eax
  bool v14; // al
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // edi
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  struct IDXGISwapChainDWM1 *v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  struct RenderTargetInfo *v29; // [rsp+68h] [rbp-98h]
  _DWORD v30[5]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v31; // [rsp+84h] [rbp-7Ch]
  unsigned int v32; // [rsp+8Ch] [rbp-74h]
  int v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+94h] [rbp-6Ch]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  int v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+ACh] [rbp-54h]
  _BYTE v40[40]; // [rsp+C0h] [rbp-40h] BYREF
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+108h] [rbp+8h]

  v29 = a5;
  v28 = 0LL;
  *a7 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  if ( *((_DWORD *)this + 278) )
  {
    v11 = -2003304307;
    v23 = 505;
LABEL_3:
    v12 = v11;
LABEL_29:
    v20 = 3;
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 1500) )
    CD3DDevice::Trim(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v28);
  v13 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
          &v28);
  v11 = v13;
  if ( v13 < 0 )
  {
    v23 = 514;
    goto LABEL_28;
  }
  memset_0(v40, 0, 0xC8uLL);
  v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 32LL))(v28, v40);
  v11 = v13;
  if ( v13 < 0 )
  {
    v23 = 517;
LABEL_28:
    v12 = v13;
    goto LABEL_29;
  }
  if ( !v41 || !v42 )
  {
    v11 = -2003304442;
    v23 = 525;
    goto LABEL_3;
  }
  v30[0] = a3->width;
  v30[1] = a3->height;
  v30[2] = *(_DWORD *)a4;
  v31 = 0LL;
  v30[3] = 1;
  v30[4] = 1;
  v14 = CD3DDevice::UseSwapchainAsShaderInput(this);
  v33 = 0;
  v32 = a6;
  if ( v14 )
    v15 = v16 + 111;
  v17 = v16 + 2;
  v37 = v43;
  v38 = v44;
  HIDWORD(v31) = v15;
  v34 = v16;
  v35 = v16 + 2;
  v36 = v16;
  v39 = 0LL;
  if ( CD3DDevice::UseSwapchainAsShaderInput(this) )
    HIDWORD(v31) = v18 | 0x10;
  v19 = ((__int64 (__fastcall *)(struct IDXGIOutput *, GUID *, __int64 *))a2->lpVtbl->GetParent)(
          a2,
          &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
          &v27);
  v11 = v19;
  if ( v19 < 0 )
  {
    v23 = 561;
    goto LABEL_20;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v27 + 48LL))(
          v27,
          &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
          &v26);
  v11 = v19;
  if ( v19 < 0 )
  {
    v23 = 562;
    goto LABEL_20;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64 *, struct IDXGIOutput *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGISwapChainDWM1 **)))(*(_QWORD *)v26 + 24LL))(
          v26,
          *((_QWORD *)this + 69),
          v30,
          &v37,
          a2,
          &v25);
  v11 = v19;
  if ( v19 < 0 )
  {
    v23 = 569;
    goto LABEL_20;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v24);
  v19 = (**v25)(v25, &GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19, &v24);
  v11 = v19;
  if ( v19 < 0 )
  {
    v23 = 571;
    goto LABEL_20;
  }
  v19 = CLegacyStereoSwapChain::Create(this, (const struct DXGI_OUTPUT_DWM_DESC *)v40, v24, a4, v29, a7);
  v11 = v19;
  if ( v19 < 0 )
  {
    v23 = 579;
LABEL_20:
    v12 = v19;
    v20 = v17;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18038F3B8, v20, v12, v23, 0LL);
  }
  v21 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v11, 2u);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
  return v21;
}
