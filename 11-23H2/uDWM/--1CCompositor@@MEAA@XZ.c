/*
 * XREFs of ??1CCompositor@@MEAA@XZ @ 0x1800AE28C
 * Callers:
 *     ??_GCCompositor@@MEAAPEAXI@Z @ 0x1800AE310 (--_GCCompositor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007478 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCompositor::~CCompositor(CCompositor *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &CCompositor::`vftable'{for `Windows::UI::Composition::IInteropCompositorPartnerCallback'};
  *((_QWORD *)this + 1) = &CCompositor::`vftable'{for `CBaseObject'};
  v2 = (__int64 *)((char *)this + 24);
  v3 = *((_QWORD *)this + 3);
  *v2 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(v2);
  *((_QWORD *)this + 1) = &CGlassColorizationResources::`vftable';
}
