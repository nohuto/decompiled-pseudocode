/*
 * XREFs of ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x180594400
 * Callers:
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x18058B530 (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 * Callees:
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x18022E6C4 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::SuppressionRegions(
        __int64 a1,
        __int128 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64); // r9
  __int64 v5; // r10
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0;
  v10 = 0LL;
  v8 = *a2;
  v2 = winrt::get_abi<unsigned int const>(&v8);
  v6 = v4(v5, *(unsigned int *)(v3 + 8), v2);
  return winrt::check_hresult(&v11, v6, (__int64)&v9);
}
