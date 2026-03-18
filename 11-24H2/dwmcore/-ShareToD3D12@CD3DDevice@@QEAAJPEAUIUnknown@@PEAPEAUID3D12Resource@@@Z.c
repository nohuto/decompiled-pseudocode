/*
 * XREFs of ?ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z @ 0x1802BAE7C
 * Callers:
 *     ?EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z @ 0x18021BB80 (-EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1802BA304 (-GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::ShareToD3D12(CD3DDevice *this, struct IUnknown *a2, struct ID3D12Resource **a3)
{
  unsigned int D3D12DeviceNoRef; // ebx
  __int64 v6; // rdx
  struct ID3D12Device *v7; // rsi
  struct IUnknownVtbl *lpVtbl; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, _QWORD, void **); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D12Device *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v18; // [rsp+78h] [rbp+38h] BYREF

  v16 = 0LL;
  D3D12DeviceNoRef = CD3DDevice::GetD3D12DeviceNoRef(this, &v16);
  if ( (D3D12DeviceNoRef & 0x80000000) == 0 )
  {
    v7 = v16;
    if ( !v16 )
    {
      D3D12DeviceNoRef = -2003292404;
      v6 = 1500LL;
      goto LABEL_3;
    }
    lpVtbl = a2->lpVtbl;
    v15 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a2,
           &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
           &v15);
    D3D12DeviceNoRef = v9;
    if ( v9 >= 0 )
    {
      v10 = v15;
      v18 = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v15 + 104LL);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &v18,
        0LL);
      v12 = v11(v10, 0LL, 0x10000000LL, 0LL, &v18);
      D3D12DeviceNoRef = v12;
      if ( v12 >= 0 )
      {
        v12 = ((__int64 (__fastcall *)(struct ID3D12Device *, void *, GUID *, struct ID3D12Resource **))v7->lpVtbl->OpenSharedHandle)(
                v7,
                v18,
                &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
                a3);
        D3D12DeviceNoRef = v12;
        if ( v12 >= 0 )
        {
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v18);
          D3D12DeviceNoRef = 0;
          goto LABEL_14;
        }
        v13 = 1515LL;
      }
      else
      {
        v13 = 1511LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v12);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E0,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_14:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
    return D3D12DeviceNoRef;
  }
  v6 = 1496LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
    (const char *)D3D12DeviceNoRef);
  return D3D12DeviceNoRef;
}
