/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::MinimizeWindows_::_1_::catch$1 @ 0x180649288
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::MinimizeWindows_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 56) = *winrt::to_hresult((_DWORD *)(a2 + 56));
  return 0LL;
}
