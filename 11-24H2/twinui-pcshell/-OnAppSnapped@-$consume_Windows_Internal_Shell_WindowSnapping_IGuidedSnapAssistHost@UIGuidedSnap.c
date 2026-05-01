/*
 * XREFs of ?OnAppSnapped@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_KAEBURect@Foundation@Windows@3@@Z @ 0x180223600
 * Callers:
 *     _lambda_6853a53403c5e70a089bec5311ff3126_::operator() @ 0x180223478 (_lambda_6853a53403c5e70a089bec5311ff3126_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistHost<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistHost>::OnAppSnapped(
        __int64 **a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  char v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  v8 = 0;
  v9 = 0LL;
  v4 = *v3;
  v7 = *a3;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *))(v4 + 72))(v3, a2, &v7);
  return winrt::check_hresult(&v10, v5, &v8);
}
