/*
 * XREFs of ??0CComputeScribbleFramebuffer@@AEAA@PEAVCD3DDevice@@PEAUID3D12Resource@@I@Z @ 0x1802887F8
 * Callers:
 *     ?Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z @ 0x1802889AC (-Create@CComputeScribbleFramebuffer@@SAJPEAVCD3DDevice@@PEAUID3D12Resource@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x18021CD6C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CComputeScribbleFramebuffer *__fastcall CComputeScribbleFramebuffer::CComputeScribbleFramebuffer(
        CComputeScribbleFramebuffer *this,
        struct CD3DDevice *a2,
        struct ID3D12Resource *a3,
        int a4)
{
  CComputeScribbleFramebuffer *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CComputeScribbleFramebuffer::`vftable';
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    (_QWORD *)this + 2,
    (__int64)a2);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D12Resource *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = (char *)this + 104;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 168) = 0;
  *((_QWORD *)this + 22) = (char *)this + 184;
  *((_DWORD *)this + 46) = 0;
  result = this;
  *((_QWORD *)this + 31) = 0LL;
  *((_BYTE *)this + 256) = 0;
  *((_DWORD *)this + 65) = a4;
  return result;
}
