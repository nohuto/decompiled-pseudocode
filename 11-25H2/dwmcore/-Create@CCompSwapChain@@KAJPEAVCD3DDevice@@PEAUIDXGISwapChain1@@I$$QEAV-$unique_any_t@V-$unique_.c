/*
 * XREFs of ?Create@CCompSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802D0AF8
 * Callers:
 *     ?CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCCompSwapChain@@@Z @ 0x1802C5C0C (-CreateCompositionSwapChain@CD3DDevice@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTarg.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8E90 (--1-$com_ptr_t@VCCompSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I@Z @ 0x1802D0738 (--0CCompSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChain1@@I$$QEAV-$unique_any_t@V-$unique_sto.c)
 *     ?Initialize@CCompSwapChain@@IEAAJXZ @ 0x1802D0D88 (-Initialize@CCompSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompSwapChain::Create(
        __int64 a1,
        __int64 *a2,
        int a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        CCompSwapChain **a7)
{
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, __int128 *); // rax
  int v13; // eax
  unsigned int v14; // edi
  LPVOID v15; // rax
  __int64 v16; // rax
  CCompSwapChain *v17; // rbx
  int v18; // eax
  __int64 v20; // [rsp+40h] [rbp-68h] BYREF
  __int128 v21; // [rsp+48h] [rbp-60h] BYREF
  __int128 v22; // [rsp+58h] [rbp-50h]
  __int128 v23; // [rsp+68h] [rbp-40h]

  v20 = 0LL;
  *a7 = 0LL;
  v11 = *a2;
  v21 = 0LL;
  v22 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v11 + 144);
  v23 = 0LL;
  v13 = v12(a2, &v21);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1Eu, 0LL);
  }
  else
  {
    v15 = operator new(0x170uLL);
    if ( v15 )
    {
      v16 = CCompSwapChain::CCompSwapChain((__int64)v15, a1, (__int64)a2, a3, a4, a5, a6, SHIDWORD(v22));
      v20 = v16;
      v17 = (CCompSwapChain *)v16;
      if ( v16 )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v16 + 16));
    }
    else
    {
      v17 = 0LL;
    }
    v18 = CCompSwapChain::Initialize(v17);
    v14 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x2Au, 0LL);
    }
    else
    {
      v20 = 0LL;
      *a7 = v17;
    }
  }
  wil::com_ptr_t<CCompSwapChain,wil::err_returncode_policy>::~com_ptr_t<CCompSwapChain,wil::err_returncode_policy>(&v20);
  return v14;
}
