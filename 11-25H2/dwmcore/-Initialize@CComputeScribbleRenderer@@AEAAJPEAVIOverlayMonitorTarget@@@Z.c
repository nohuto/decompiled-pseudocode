/*
 * XREFs of ?Initialize@CComputeScribbleRenderer@@AEAAJPEAVIOverlayMonitorTarget@@@Z @ 0x1802908BC
 * Callers:
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVIMonitorTarget@@PEAPEAV1@@Z @ 0x1802907AC (-Create@CComputeScribbleRenderer@@SAJPEAVIMonitorTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18021D26C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18021D2F4 (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1802906B4 (--1-$out_param_t@V-$unique_ptr@VCComputeScribbleScheduler@@U-$default_delete@VCComputeScribbleSc.c)
 *     ?Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAPEAV1@@Z @ 0x180293204 (-Create@CComputeScribbleScheduler@@SAJPEAVCComputeScribbleRenderer@@PEAVIOverlaySwapChain@@PEAUI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleRenderer::Initialize(
        CComputeScribbleRenderer *this,
        __int64 (__fastcall ***a2)(struct IOverlayMonitorTarget *, GUID *, __int64 *))
{
  struct IOverlaySwapChain *v4; // r14
  __int64 (__fastcall **v6)(struct IOverlayMonitorTarget *, GUID *, __int64 *); // rax
  int HighPriorityComputeCommandQueueNoRef; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, char *); // rsi
  unsigned __int64 v12; // r9
  CD3DDevice *v13; // rax
  CD3DDevice *v14; // rdi
  __int64 *v15; // [rsp+30h] [rbp-20h] BYREF
  struct CComputeScribbleScheduler *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF
  struct IDCompositionDirectInkSuperWetRenderer *v20; // [rsp+90h] [rbp+40h] BYREF
  struct ID3D12CommandQueue *v21; // [rsp+98h] [rbp+48h] BYREF

  v4 = (struct IOverlaySwapChain *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IOverlayMonitorTarget *, GUID *, __int64 *)))(*a2)[35])(a2);
  if ( !v4 )
    return 2291662854LL;
  v6 = *a2;
  v19 = 0LL;
  HighPriorityComputeCommandQueueNoRef = (*v6)(
                                           (struct IOverlayMonitorTarget *)a2,
                                           &GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc,
                                           &v19);
  v8 = HighPriorityComputeCommandQueueNoRef;
  if ( HighPriorityComputeCommandQueueNoRef < 0 )
  {
    v9 = 118LL;
LABEL_7:
    v12 = (unsigned int)HighPriorityComputeCommandQueueNoRef;
    goto LABEL_8;
  }
  v10 = v19;
  v11 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 24LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
  HighPriorityComputeCommandQueueNoRef = v11(v10, (char *)this + 16);
  v8 = HighPriorityComputeCommandQueueNoRef;
  if ( HighPriorityComputeCommandQueueNoRef < 0 )
  {
    v9 = 119LL;
    goto LABEL_7;
  }
  v13 = (CD3DDevice *)(*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)v4 + 40LL))(v4);
  v21 = 0LL;
  v14 = v13;
  HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v13, &v21);
  v8 = HighPriorityComputeCommandQueueNoRef;
  if ( HighPriorityComputeCommandQueueNoRef < 0 )
  {
    v9 = 132LL;
    goto LABEL_7;
  }
  v20 = 0LL;
  HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetDirectInkSuperWetRendererNoRef(v14, &v20);
  v8 = HighPriorityComputeCommandQueueNoRef;
  if ( HighPriorityComputeCommandQueueNoRef < 0 )
  {
    v9 = 135LL;
    goto LABEL_7;
  }
  v16 = 0LL;
  v15 = (__int64 *)((char *)this + 32);
  v17 = 1;
  v8 = CComputeScribbleScheduler::Create(this, v4, v21, v20, &v16);
  wil::details::out_param_t<std::unique_ptr<CComputeScribbleScheduler>>::~out_param_t<std::unique_ptr<CComputeScribbleScheduler>>(&v15);
  if ( v8 >= 0 )
  {
    v8 = 0;
    goto LABEL_16;
  }
  v12 = (unsigned int)v8;
  v9 = 147LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
    (const char *)v12);
LABEL_16:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
  return (unsigned int)v8;
}
