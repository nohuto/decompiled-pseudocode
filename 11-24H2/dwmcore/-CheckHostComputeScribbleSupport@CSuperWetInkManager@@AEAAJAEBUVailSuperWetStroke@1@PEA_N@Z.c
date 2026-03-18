/*
 * XREFs of ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z @ 0x180260340
 * Callers:
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180260680 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x180211A8C (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x180211BB0 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z @ 0x180225CF0 (-CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckHostComputeScribbleSupport(
        struct ID3D12Device *this,
        const struct CSuperWetInkManager::VailSuperWetStroke *a2,
        bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  CD3DDevice *v8; // rbx
  int D3D12Device; // eax
  __int64 v10; // rdx
  CD3DDevice *v11; // rcx
  __int64 v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ID3D12Device *v14; // [rsp+40h] [rbp+8h] BYREF
  struct ID3D12CommandQueue *v15; // [rsp+50h] [rbp+18h] BYREF

  v14 = this;
  *a3 = 0;
  LOBYTE(v14) = 0;
  v5 = CSuperWetInkManager::CheckCommonComputeScribbleSupport((CSuperWetInkManager *)this, (bool *)&v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !(_BYTE)v14 )
      return 0LL;
    v14 = 0LL;
    v8 = (CD3DDevice *)*((_QWORD *)a2 + 2);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v14);
    D3D12Device = CD3DDevice::TryGetD3D12Device(v8, &v14);
    v6 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v10 = 784LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)D3D12Device);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
      return v6;
    }
    if ( !v14 )
      goto LABEL_12;
    v11 = (CD3DDevice *)*((_QWORD *)a2 + 2);
    v15 = 0LL;
    D3D12Device = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef(v11, &v15);
    v6 = D3D12Device;
    if ( D3D12Device < 0 )
    {
      v10 = 795LL;
      goto LABEL_10;
    }
    if ( v15 )
    {
      LOBYTE(v12) = 1;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, char *, __int64))(**(_QWORD **)a2 + 312LL))(
             *(_QWORD *)a2,
             *((_QWORD *)a2 + 2),
             (char *)a2 + 32,
             v12) )
      {
        *a3 = 1;
      }
    }
    else
    {
LABEL_12:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
          0LL);
    }
    v6 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x305,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
