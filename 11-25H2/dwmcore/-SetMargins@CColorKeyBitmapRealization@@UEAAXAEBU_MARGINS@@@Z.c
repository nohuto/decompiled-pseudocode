/*
 * XREFs of ?SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z @ 0x180104FA0
 * Callers:
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x180104764 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CColorKeyBitmapRealization::SetMargins(CColorKeyBitmapRealization *this, const struct _MARGINS *a2)
{
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL));
    v4 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v4);
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v3)(v3, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, &v4) >= 0 )
      (*(void (__fastcall **)(__int64, const struct _MARGINS *))(*(_QWORD *)v4 + 120LL))(v4, a2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
