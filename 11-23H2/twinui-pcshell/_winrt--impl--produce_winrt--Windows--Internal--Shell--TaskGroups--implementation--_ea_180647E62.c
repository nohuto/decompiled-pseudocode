/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::GetWindowInformation_::_1_::catch$8 @ 0x180647E62
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x180390514 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::GetWindowInformation_::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 56) = *winrt::to_hresult((_DWORD *)(a2 + 56));
  return 0LL;
}
