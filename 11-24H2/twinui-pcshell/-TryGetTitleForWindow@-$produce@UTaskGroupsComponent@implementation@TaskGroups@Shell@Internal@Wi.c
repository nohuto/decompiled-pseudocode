/*
 * XREFs of ?TryGetTitleForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180212150
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?TryGetTitleForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUhstring@7@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180212198 (-TryGetTitleForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost>::TryGetTitleForWindow(
        volatile signed __int32 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *TitleForWindow; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  *a3 = 0LL;
  try
  {
    TitleForWindow = (__int64 *)winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetTitleForWindow();
    v5 = *TitleForWindow;
    *TitleForWindow = 0LL;
    *a3 = v5;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v8);
  }
  return result;
}
