/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$21 @ 0x1806FEF4F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$map@Uhstring@winrt@@U12@@param@winrt@@QEAA@XZ @ 0x1802C688C (--1-$map@Uhstring@winrt@@U12@@param@winrt@@QEAA@XZ.c)
 */

void __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1_::_1_::dtor_21(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 416) = *(_QWORD *)(a2 + 512) + 560LL;
  winrt::param::map<winrt::hstring,winrt::hstring>::~map<winrt::hstring,winrt::hstring>(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 416));
}
