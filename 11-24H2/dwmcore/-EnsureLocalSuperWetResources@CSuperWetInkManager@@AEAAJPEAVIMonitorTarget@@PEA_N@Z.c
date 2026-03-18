/*
 * XREFs of ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180218BB0
 * Callers:
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1802189A4 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x180211A8C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x180211B14 (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x180211BB0 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QEAA_NXZ @ 0x180260AB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableInkInVRR@@@details@wil@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::EnsureLocalSuperWetResources(
        struct ID3D12Device *this,
        struct IMonitorTarget *a2,
        bool *a3)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rsi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  CD3DDevice *v11; // rsi
  int D3D12Device; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct ID3D12Device *v16; // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+60h] [rbp+40h] BYREF
  struct ID3D12CommandQueue *v18; // [rsp+68h] [rbp+48h] BYREF

  v16 = this;
  *a3 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableInkInVRR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DisableInkInVRR>::GetImpl'::`2'::impl)
    || !(*(unsigned __int8 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 176LL))(a2) )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 224LL))(a2);
    v17 = 0LL;
    v7 = v6;
    v8 = (**v6)(v6, &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f, &v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CA,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_29:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
      return v9;
    }
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[5])(v7);
    v16 = 0LL;
    v11 = (CD3DDevice *)v10;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v16);
    D3D12Device = CD3DDevice::TryGetD3D12Device(v11, &v16);
    v9 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v13 = 720LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)D3D12Device);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      goto LABEL_29;
    }
    if ( !v16 )
      goto LABEL_18;
    v18 = 0LL;
    D3D12Device = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v11, &v18);
    v9 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v13 = 729LL;
      goto LABEL_10;
    }
    if ( !v18 )
      goto LABEL_18;
    v18 = 0LL;
    D3D12Device = CD3DDevice::GetDirectInkSuperWetRendererNoRef(
                    v11,
                    (struct IDCompositionDirectInkSuperWetRenderer **)&v18);
    v9 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v13 = 738LL;
      goto LABEL_10;
    }
    if ( v18 )
    {
      D3D12Device = (*(__int64 (__fastcall **)(__int64, struct IMonitorTarget *))(*(_QWORD *)v17 + 40LL))(v17, a2);
      v9 = D3D12Device;
      if ( D3D12Device < 0 )
      {
        v13 = 746LL;
        goto LABEL_10;
      }
      if ( !CCommonRegistryData::EnableFrontBufferRenderChecks
        || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17) )
      {
        *a3 = 1;
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
          McTemplateU0t_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
            5LL);
        LOBYTE(v14) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 64LL))(v17, v14);
        *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17) + 49) = 1;
      }
    }
    else
    {
LABEL_18:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    v9 = 0;
    goto LABEL_29;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      21LL);
  return 0LL;
}
