/*
 * XREFs of ?GetWidgetsAppProcessId@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805D33C4
 * Callers:
 *     _lambda_769b61f6f6b2eb7f998a18e0401ed182_::operator() @ 0x1805CBF40 (_lambda_769b61f6f6b2eb7f998a18e0401ed182_--operator().c)
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CC610 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::GetWidgetsAppProcessId(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF
  __int64 v10; // [rsp+70h] [rbp+28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+30h] BYREF

  v8 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v10 = 0LL;
    v2 = (**v1)(v1, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>, &v10);
    v3 = v10;
    v11 = v10;
  }
  else
  {
    v2 = 0;
    v11 = 0LL;
    v3 = 0LL;
  }
  v6 = 0;
  v7 = 0LL;
  winrt::check_hresult(&v9, v2, (__int64)&v6);
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
  winrt::check_hresult(&v9, v4, (__int64)&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return v8;
}
