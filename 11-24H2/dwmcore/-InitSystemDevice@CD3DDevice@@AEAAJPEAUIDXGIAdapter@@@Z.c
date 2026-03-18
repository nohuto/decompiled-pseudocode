/*
 * XREFs of ?InitSystemDevice@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@@Z @ 0x1802BA50C
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1801BD550 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x180216BF8 (-CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1802BB160 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@detail.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::InitSystemDevice(CD3DDevice *this, struct IDXGIAdapter *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // ebx
  struct ID3D11Fence *v9; // r8
  int SharedHandleFence; // eax
  struct IDXGIAdapterVtbl *lpVtbl; // rax
  int v12; // eax
  int v13; // eax
  const char *v15; // [rsp+30h] [rbp-18h] BYREF
  int v16; // [rsp+38h] [rbp-10h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 544);
  v4 = *((_QWORD *)this + 68);
  *v2 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 67))(
         *((_QWORD *)this + 67),
         &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
         v2);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xBFu, 0LL);
  }
  else
  {
    v8 = *((_DWORD *)this + 236);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 76);
    v16 = 22;
    v15 = "TokenThreadRenderFence";
    SharedHandleFence = CD3DDevice::CreateSharedHandleFence(
                          this,
                          (const struct CResourceTag *)&v15,
                          v9,
                          (struct ID3D11Fence **)this + 76,
                          (void **)this + 121,
                          (enum D3D11_FENCE_FLAG)(~(_BYTE)v8 & 8));
    v7 = SharedHandleFence;
    if ( SharedHandleFence < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SharedHandleFence, 0xC6u, 0LL);
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetImpl'::`2'::impl) )
    {
      lpVtbl = a2->lpVtbl;
      v17 = 0LL;
      v12 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))lpVtbl->QueryInterface)(
              a2,
              &GUID_1ae9fb77_7181_4326_8c90_8ebc69f0aef8,
              &v17);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xCBu, 0LL);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) - 2;
        if ( v13 )
        {
          if ( v13 == 1 )
            *((_DWORD *)this + 376) = 2;
          else
            *((_DWORD *)this + 376) = 0;
        }
        else
        {
          *((_DWORD *)this + 376) = 1;
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
    }
  }
  return v7;
}
