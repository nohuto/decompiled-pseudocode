/*
 * XREFs of ?Show@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension5@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@3@AEBURect@Foundation@Windows@3@_KAEBUGestureAnimationData@Input@893@@Z @ 0x1805D7404
 * Callers:
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CC610 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension5<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::Show(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _OWORD *a2,
        unsigned int *a3,
        __int128 *a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _BYTE *, _QWORD, __int128 *, __int64, __int128 *); // r10
  int v13; // eax
  __int128 v14; // [rsp+40h] [rbp-39h] BYREF
  __int128 v15; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v16[24]; // [rsp+60h] [rbp-19h] BYREF
  int v17; // [rsp+80h] [rbp+7h] BYREF
  __int128 v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+D0h] [rbp+57h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v21; // [rsp+E0h] [rbp+67h] BYREF

  v9 = *a1;
  if ( v9 )
  {
    v20 = 0LL;
    v10 = (**v9)(v9, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension5>, &v20);
    v11 = v20;
    v21 = v20;
  }
  else
  {
    v10 = 0;
    v21 = 0LL;
    v11 = 0LL;
  }
  *(_DWORD *)v16 = 0;
  *(_OWORD *)&v16[8] = 0LL;
  winrt::check_hresult(&v19, v10, (__int64)v16);
  v17 = 0;
  v18 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int128 *, __int64, __int128 *))(*(_QWORD *)v11 + 48LL);
  v14 = *a6;
  v15 = *a4;
  *(_OWORD *)v16 = *a2;
  v13 = v12(v11, v16, *a3, &v15, a5, &v14);
  winrt::check_hresult((int *)&a6, v13, (__int64)&v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
}
