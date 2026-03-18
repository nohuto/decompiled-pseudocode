/*
 * XREFs of ?SetAlphaMode@CCompSwapChain@@QEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802C742C
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180281524 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompSwapChain::SetAlphaMode(CCompSwapChain *this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 28) != a2 )
  {
    v5 = 0LL;
    *((_DWORD *)this + 28) = a2;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 8))(
           *((_QWORD *)this + 8),
           &GUID_7652c85a_0df5_4567_bcdd_8176a332b99b,
           &v5) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, a2);
    v4 = *((_QWORD *)this + 10);
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 16) + 136LL))(v4 + 16, a2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v5);
  }
}
