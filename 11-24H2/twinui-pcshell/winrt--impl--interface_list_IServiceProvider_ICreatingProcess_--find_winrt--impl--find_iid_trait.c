/*
 * XREFs of winrt::impl::interface_list_IServiceProvider_ICreatingProcess_::find_winrt::impl::find_iid_traits__anonymous_namespace_::ShellExecuteSite___ @ 0x1805F7C24
 * Callers:
 *     winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::find_interface @ 0x1805F9800 (winrt--implements__anonymous_namespace_--ShellExecuteSite_IServiceProvider_ICreatingProcess_--fi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list_IServiceProvider_ICreatingProcess_::find_winrt::impl::find_iid_traits__anonymous_namespace_::ShellExecuteSite___(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<ICreatingProcess> && v1[1] == 0x44D242634CF3568ALL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return 0LL;
}
