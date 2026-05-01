/*
 * XREFs of winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::find_interface @ 0x1805F9800
 * Callers:
 *     <none>
 * Callees:
 *     winrt::impl::interface_list_IServiceProvider_ICreatingProcess_::find_winrt::impl::find_iid_traits__anonymous_namespace_::ShellExecuteSite___ @ 0x1805F7C24 (winrt--impl--interface_list_IServiceProvider_ICreatingProcess_--find_winrt--impl--find_iid_trait.c)
 */

__int64 __fastcall winrt::implements__anonymous_namespace_::ShellExecuteSite_IServiceProvider_ICreatingProcess_::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 16;
  return winrt::impl::interface_list_IServiceProvider_ICreatingProcess_::find_winrt::impl::find_iid_traits__anonymous_namespace_::ShellExecuteSite___(v3);
}
