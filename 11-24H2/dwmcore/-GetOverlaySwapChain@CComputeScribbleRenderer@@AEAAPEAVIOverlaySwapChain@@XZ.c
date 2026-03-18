/*
 * XREFs of ?GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ @ 0x1801C59B0
 * Callers:
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801C4EF8 (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ @ 0x1801C5014 (-GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801C5790 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C5A40 (-Resolve@CMILCOMWeakRef@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IOverlaySwapChain *__fastcall CComputeScribbleRenderer::GetOverlaySwapChain(CComputeScribbleRenderer *this)
{
  CMILCOMWeakRef *v1; // rcx
  __int64 (__fastcall *v2)(CMILCOMWeakRef *__hidden, const struct _GUID *, void **); // rax
  int v3; // eax
  __int64 v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (CMILCOMWeakRef *)*((_QWORD *)this + 2);
  v2 = *(__int64 (__fastcall **)(CMILCOMWeakRef *__hidden, const struct _GUID *, void **))(*(_QWORD *)v1 + 24LL);
  if ( v2 == CMILCOMWeakRef::Resolve )
    v3 = CMILCOMWeakRef::Resolve(v1, &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97, &v6);
  else
    v3 = v2(v1, &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97, &v6);
  if ( v3 < 0 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v6);
    return 0LL;
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 280LL))(v6);
    if ( v6 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    return (struct IOverlaySwapChain *)v4;
  }
}
