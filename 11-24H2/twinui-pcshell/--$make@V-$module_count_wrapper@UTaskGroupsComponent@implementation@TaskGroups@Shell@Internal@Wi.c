/*
 * XREFs of ??$make@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1802BD650
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180149830 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups.c)
 * Callees:
 *     ??0?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1801494C0 (--0-$heap_implements@V-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shel.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 *__fastcall winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>,>(
        unsigned __int64 *a1)
{
  winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *v2; // rax
  void *v4; // [rsp+40h] [rbp+8h]

  v4 = operator new(0x270uLL);
  memset_0(v4, 0, 0x270uLL);
  v2 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>((winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *)v4);
  *a1 = ((unsigned __int64)v2 + 40) & -(__int64)(v2 != 0LL);
  return a1;
}
