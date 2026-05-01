/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07___::Release @ 0x1801B22A0
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07___::Release(
        void *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)a1 + 6);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    if ( *((_QWORD *)a1 + 2) )
      winrt::com_ptr<XamlLauncher>::unconditional_release_ref((__int64 *)a1 + 2);
    operator delete(a1, 0x20uLL);
  }
  return v2;
}
