/*
 * XREFs of ?PrelaunchDelay@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802759C8
 * Callers:
 *     _lambda_e4e3b38ea4e4911517cc25fd51baafe0_::operator() @ 0x1805CCC08 (_lambda_e4e3b38ea4e4911517cc25fd51baafe0_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::PrelaunchDelay(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  unsigned int v3; // eax
  __int64 (__fastcall ***v4)(_QWORD, void *, __int64 *); // rcx
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v8; // [rsp+20h] [rbp-20h] BYREF
  __int128 v9; // [rsp+28h] [rbp-18h]
  char v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v4 = *a1;
  if ( v4 )
  {
    v11 = 0LL;
    v3 = (**v4)(v4, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>, &v11);
    v5 = v11;
    v12 = v11;
  }
  else
  {
    v12 = 0LL;
    v5 = 0LL;
  }
  v8 = 0;
  v9 = 0LL;
  winrt::check_hresult(&v10, v3, &v8);
  v8 = 0;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, a2);
  winrt::check_hresult(&v10, v6, &v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  return a2;
}
