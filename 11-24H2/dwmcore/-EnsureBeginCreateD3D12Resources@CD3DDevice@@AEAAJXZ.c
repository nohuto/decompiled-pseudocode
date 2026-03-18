/*
 * XREFs of ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x180211C70
 * Callers:
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x180211A8C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x180211B14 (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x180211BB0 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1802BA304 (-GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180192EEC (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801A23F0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18024936C (--1-$out_param_t@V-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_191f22beafe1d8c746b7911051c53f5d___ @ 0x1802B8094 (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_191f22beafe1d8c746b7911051c53f5d___.c)
 *     _lambda_191f22beafe1d8c746b7911051c53f5d_::__lambda_191f22beafe1d8c746b7911051c53f5d_ @ 0x1802B8BC4 (_lambda_191f22beafe1d8c746b7911051c53f5d_--__lambda_191f22beafe1d8c746b7911051c53f5d_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::EnsureBeginCreateD3D12Resources(CD3DDevice *this)
{
  char *v1; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int started; // ebx
  int DirectInkFactory; // eax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF
  char *v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IDCompositionDirectInkFactoryPartner *v15; // [rsp+70h] [rbp+20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  v1 = (char *)this + 1064;
  if ( *((_QWORD *)this + 133) )
    return 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 67);
  v5 = *v4;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v5 + 56))(v4, &v16);
  started = v6;
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((CD3DDevice *)((char *)this + 16), &v15);
    started = DirectInkFactory;
    if ( DirectInkFactory >= 0 )
    {
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
        &v9,
        &v16);
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
        &v10,
        (__int64 *)&v15);
      v12 = 0LL;
      v11 = v1;
      v13 = 1;
      started = CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_191f22beafe1d8c746b7911051c53f5d___(&v9, &v12);
      wil::details::out_param_t<std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>>::~out_param_t<std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>>(&v11);
      if ( started >= 0 )
      {
        lambda_191f22beafe1d8c746b7911051c53f5d_::__lambda_191f22beafe1d8c746b7911051c53f5d_(&v9);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)started);
      lambda_191f22beafe1d8c746b7911051c53f5d_::__lambda_191f22beafe1d8c746b7911051c53f5d_(&v9);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x594,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)DirectInkFactory);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x591,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
  return (unsigned int)started;
}
