/*
 * XREFs of ?CornerRadius@?$consume_Windows_UI_Xaml_Controls_IBorder@UIBorder@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU0Xaml@UI@Windows@3@@Z @ 0x180598218
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180598574 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_IBorder<winrt::Windows::UI::Xaml::Controls::IBorder>::CornerRadius(
        __int64 **a1,
        __int128 *a2)
{
  __int128 v2; // xmm1
  __int64 *v3; // rcx
  __int128 v4; // xmm0
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  _OWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2[1];
  v3 = *a1;
  v8 = 0;
  v9 = 0LL;
  v4 = *a2;
  v5 = *v3;
  v10[1] = v2;
  v10[0] = v4;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v5 + 104))(v3, v10);
  return winrt::check_hresult(&v11, v6, (__int64)&v8);
}
