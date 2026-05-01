/*
 * XREFs of ?Show@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension@UIDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@AEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@3@AEBURect@Foundation@Windows@3@@Z @ 0x1802819B4
 * Callers:
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CC610 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension>::Show(
        __int64 **a1,
        __int128 *a2,
        unsigned int *a3,
        __int128 *a4)
{
  __int128 v4; // xmm1
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 (__fastcall *v9)(__int64 *, __int128 *, __int64, __int128 *); // rax
  unsigned int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-28h] BYREF
  __int128 v15; // [rsp+58h] [rbp-20h]
  char v16; // [rsp+80h] [rbp+8h] BYREF

  v4 = *a2;
  v5 = *a1;
  v6 = *a3;
  v14 = 0;
  v15 = 0LL;
  v7 = *v5;
  v8 = *a4;
  v13 = v4;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int128 *))(v7 + 56);
  v12 = v8;
  v10 = v9(v5, &v13, v6, &v12);
  return winrt::check_hresult(&v16, v10, &v14);
}
