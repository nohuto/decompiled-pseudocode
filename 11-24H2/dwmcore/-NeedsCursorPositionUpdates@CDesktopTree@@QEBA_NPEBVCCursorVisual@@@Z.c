/*
 * XREFs of ?NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18028B0A0
 * Callers:
 *     ?UpdateNotificationMode@CCursorVisual@@QEAAXXZ @ 0x180290BB8 (-UpdateNotificationMode@CCursorVisual@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsSoftwareCursor@COverlayContext@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18026C78C (-IsSoftwareCursor@COverlayContext@@QEBA_NPEBVCCursorVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDesktopTree::NeedsCursorPositionUpdates(CDesktopTree *this, const struct CCursorVisual *a2)
{
  int (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  const struct CCursorVisual **v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 306);
  v4 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 307);
  while ( v2 != v4 )
  {
    v5 = *v2;
    v8 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v8);
    if ( (**v5)(v5, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v8) < 0
      || (v6 = (const struct CCursorVisual **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 72LL))(v8)) == 0LL
      || COverlayContext::IsSoftwareCursor(v6, a2) )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
      return 1;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
    ++v2;
  }
  return 0;
}
