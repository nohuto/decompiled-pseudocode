/*
 * XREFs of ??1CaptureBitsResponse@@MEAA@XZ @ 0x18018DBE8
 * Callers:
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18018D03C (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1802175AC (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 *     ??_GCaptureBitsResponse@@MEAAPEAXI@Z @ 0x18021FA00 (--_GCaptureBitsResponse@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC (--1COcclusionContext@@QEAA@XZ.c)
 */

void __fastcall CaptureBitsResponse::~CaptureBitsResponse(CaptureBitsResponse *this)
{
  __int64 *v2; // rdi
  const void *v3; // rcx
  void *v4; // rcx

  v2 = (__int64 *)((char *)this + 1968);
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 246);
  v3 = (const void *)*((_QWORD *)this + 244);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (void *)*((_QWORD *)this + 243);
  if ( v4 )
    CloseHandle(v4);
  _InterlockedDecrement(&CaptureBitsResponse::s_cOutstandingCaptures);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  COcclusionContext::~COcclusionContext((CaptureBitsResponse *)((char *)this + 72));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>((CDrawListCache **)this + 5);
}
