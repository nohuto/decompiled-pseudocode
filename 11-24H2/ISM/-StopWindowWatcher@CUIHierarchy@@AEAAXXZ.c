/*
 * XREFs of ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AA1F0
 * Callers:
 *     ??1CUIHierarchy@@AEAA@XZ @ 0x180094020 (--1CUIHierarchy@@AEAA@XZ.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Stop@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AA1AC (-Stop@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatche.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CUIHierarchy::StopWindowWatcher(CUIHierarchy *this)
{
  __int64 *v2; // rdi
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 *)((char *)this + 72);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
    *((_QWORD *)this + 9),
    *((_QWORD *)this + 7));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 88LL))(*v2, *((_QWORD *)this + 5));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 104LL))(*v2, *((_QWORD *)this + 6));
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Stop(v2);
  v3[0] = 0LL;
  if ( v2 != v3 )
  {
    if ( *v2 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
    *v2 = 0LL;
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)v3);
}
