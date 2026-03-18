/*
 * XREFs of ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCCompSwapChain@@@Z @ 0x1802C5C0C
 * Callers:
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18028BB84 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800FFCE0 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800FFFEC (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180142A00 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802D0AF8 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateCompositionSwapChain(
        CD3DDevice *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        unsigned int a5,
        struct CCompSwapChain **a6)
{
  int v9; // ebx
  int DXGIFactory; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, void *, struct D2D_SIZE_U *, _QWORD, __int64 *); // rdi
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+20h] [rbp-79h]
  void *v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  __int64 v18; // [rsp+50h] [rbp-49h] BYREF
  struct IDXGIFactory5 *v19; // [rsp+58h] [rbp-41h] BYREF
  struct D2D_SIZE_U v20; // [rsp+60h] [rbp-39h] BYREF
  int v21; // [rsp+68h] [rbp-31h]
  int v22; // [rsp+6Ch] [rbp-2Dh]
  __int64 v23; // [rsp+70h] [rbp-29h]
  int v24; // [rsp+78h] [rbp-21h]
  __int64 v25; // [rsp+7Ch] [rbp-1Dh]
  int v26; // [rsp+84h] [rbp-15h]
  int v27; // [rsp+88h] [rbp-11h]
  int v28; // [rsp+8Ch] [rbp-Dh]

  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  *a6 = 0LL;
  v16 = 0LL;
  if ( !*((_DWORD *)this + 278) )
  {
    v20 = *a2;
    v21 = *(_DWORD *)a3;
    v25 = 3LL;
    v26 = 3;
    v27 = *((_DWORD *)a3 + 1);
    v22 = 0;
    v23 = 1LL;
    v24 = 32;
    v28 = 0;
    DXGIFactory = CDisplayManager::GetDXGIFactory(this, &v19);
    v9 = DXGIFactory;
    if ( DXGIFactory < 0 )
    {
      v15 = 962;
    }
    else
    {
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      DXGIFactory = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, GUID *, __int64 *))v19->lpVtbl->QueryInterface)(
                      v19,
                      &GUID_41e7d1f2_a591_4f7b_a2e5_fa9c843e1c12,
                      &v18);
      v9 = DXGIFactory;
      if ( DXGIFactory < 0 )
      {
        v15 = 963;
      }
      else
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &v16,
          0LL);
        DXGIFactory = DCompositionCreateSurfaceHandle(3LL, 0LL, &v16);
        v9 = DXGIFactory;
        if ( DXGIFactory < 0 )
        {
          v15 = 967;
        }
        else
        {
          v11 = v18;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, struct D2D_SIZE_U *, _QWORD, __int64 *))(*(_QWORD *)v18 + 24LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v17);
          DXGIFactory = v12(v11, *((_QWORD *)this + 69), v16, &v20, 0LL, &v17);
          v9 = DXGIFactory;
          if ( DXGIFactory < 0 )
          {
            v15 = 973;
          }
          else
          {
            DXGIFactory = CCompSwapChain::Create(
                            (_DWORD)this,
                            v17,
                            v28,
                            (unsigned int)&v16,
                            (__int64)a3,
                            (__int64)a4,
                            (__int64)a6);
            v9 = DXGIFactory;
            if ( DXGIFactory >= 0 )
              goto LABEL_16;
            v15 = 982;
          }
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, DXGIFactory, v15, 0LL);
    goto LABEL_16;
  }
  v9 = -2003304307;
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18031ECF8, 2u, -2003304307, 0x3ABu, 0LL);
LABEL_16:
  v13 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 2u);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  return v13;
}
