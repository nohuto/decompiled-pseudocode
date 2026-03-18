/*
 * XREFs of ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x1802C7B08
 * Callers:
 *     ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802C7878 (-Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_.c)
 *     ?SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z @ 0x1802C8238 (-SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x1802C8080 (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompSwapChain::Initialize(CCompSwapChain *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  int v6; // eax
  int v7; // eax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, char *); // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = CCompSwapChain::ResetBackBuffer(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x39u, 0LL);
  }
  else
  {
    v4 = *((_QWORD *)this + 8);
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v4 + 72LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v9);
    v6 = v5(v4, (unsigned int)(*((_DWORD *)this + 36) - 1), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v9);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x3Du, 0LL);
    }
    else
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
      v7 = (**v9)(v9, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 96);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x3Fu, 0LL);
      }
      else
      {
        **((_DWORD **)this + 28) = 0;
        **((_DWORD **)this + 37) = 0;
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  return v3;
}
