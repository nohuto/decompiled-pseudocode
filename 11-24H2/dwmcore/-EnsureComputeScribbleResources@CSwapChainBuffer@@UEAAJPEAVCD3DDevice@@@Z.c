/*
 * XREFs of ?EnsureComputeScribbleResources@CSwapChainBuffer@@UEAAJPEAVCD3DDevice@@@Z @ 0x18021BB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021F118 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1802889AC (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z @ 0x1802BAE7C (-ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainBuffer::EnsureComputeScribbleResources(CSwapChainBuffer *this, struct CD3DDevice *a2)
{
  struct CComputeScribbleFramebuffer **v2; // rsi
  __int64 v6; // rax
  struct IUnknown *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ID3D12Resource *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct CComputeScribbleFramebuffer **)((char *)this + 112);
  if ( *((_QWORD *)this + 14) )
    return 0LL;
  v6 = *(_QWORD *)this;
  v12 = 0LL;
  v7 = (struct IUnknown *)(*(__int64 (__fastcall **)(CSwapChainBuffer *))(v6 + 152))(this);
  v8 = CD3DDevice::ShareToD3D12(a2, v7, &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(v2);
    v8 = CComputeScribbleFramebuffer::Create(a2, v12, *((_DWORD *)this + 26), v2);
    v9 = v8;
    if ( v8 >= 0 )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
      return 0LL;
    }
    v10 = 155LL;
  }
  else
  {
    v10 = 149LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\global\\SwapChainBuffer.h",
    (const char *)(unsigned int)v8);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v9;
}
