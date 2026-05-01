/*
 * XREFs of ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18057FA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800BD4D0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x1800BD578 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180222F9C (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?Current@TaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802B2790 (-Current@TaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ.c)
 *     ?CreateInstanceAsync@TaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ @ 0x1802B81AC (-CreateInstanceAsync@TaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@SA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x18057D2D4 (--$wait_for_completed@U-$IAsyncOperation@UIDataSourceAdapter@Multitasking@ComposableShell@Intern.c)
 *     ?InitializeDataAsync@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18057E2B4 (-InitializeDataAsync@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  __int64 *v2; // rax
  _QWORD *v3; // rdi
  unsigned int v4; // eax
  enum AsyncStatus v5; // edx
  __int64 (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, __int64 *, __int64 *); // rbx
  struct IUnknown *v8; // rdx
  void **v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp+28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+30h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+80h] [rbp+38h] BYREF
  __int64 v17; // [rsp+88h] [rbp+40h] BYREF

  LODWORD(v14) = 0;
  if ( *((_QWORD *)this + 12) )
  {
    if ( *((_DWORD *)this + 62) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateAltTabFilterSetting((RTL_SRWLOCK *)this - 6);
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync((__int64)this - 48, &v14);
    v2 = winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataModel::Current(&v14);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 69, v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    v3 = winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter::CreateInstanceAsync(&v17);
    v4 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::UI::Shell::WindowTabDataModel>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v3);
    if ( !v4 )
      v4 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>>(
             v3,
             v5);
    winrt::impl::check_status_canceled((winrt::impl *)v4, v5);
    v16 = 0LL;
    LODWORD(v14) = 4;
    v6 = (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v3;
    v12 = 0;
    v13 = 0LL;
    v7 = (*v6)[8];
    v9 = winrt::put_abi((winrt *)&v16, v8);
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *), void **))v7)(v6, v9);
    winrt::check_hresult((int *)&v15, v10, (__int64)&v12);
    if ( v16 )
    {
      v15 = 0LL;
      v12 = 0;
      v13 = 0LL;
      v11 = (**v16)(
              v16,
              &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>,
              &v15);
      winrt::check_hresult((int *)&v14, v11, (__int64)&v12);
      v14 = v15;
    }
    else
    {
      v14 = 0LL;
    }
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 70, &v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  }
}
