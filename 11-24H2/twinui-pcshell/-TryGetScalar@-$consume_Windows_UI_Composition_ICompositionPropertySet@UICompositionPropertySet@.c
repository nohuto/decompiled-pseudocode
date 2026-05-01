/*
 * XREFs of ?TryGetScalar@?$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAM@Z @ 0x1804ABE58
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_508ef90450617154956e0b927fb269e2___::Invoke @ 0x1804A8BB0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1804A8BB0.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::TryGetScalar(
        __int64 **a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  v10 = 0;
  v4 = *a2;
  v8 = 0;
  v5 = *v3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned int *))(v5 + 144))(v3, v4, a3, &v10);
  winrt::check_hresult(&v11, v6, (__int64)&v8);
  return v10;
}
