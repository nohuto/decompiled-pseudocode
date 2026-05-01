/*
 * XREFs of _lambda_508ef90450617154956e0b927fb269e2_::operator()_winrt::Windows::Foundation::IInspectable_const_&_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_const_&_ @ 0x180554670
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_508ef90450617154956e0b927fb269e2___::Invoke @ 0x180559660 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180559660.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800522CC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?TryGetScalar@?$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAM@Z @ 0x18055CCD4 (-TryGetScalar@-$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18055D070 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_508ef90450617154956e0b927fb269e2_::operator()_winrt::Windows::Foundation::IInspectable_const___winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_const___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-30h]
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(a1, &v4);
  v3 = v4;
  if ( v4 )
  {
    LODWORD(v7) = 0;
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"flickProgress", 13);
    winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::TryGetScalar(
      v3 + 400,
      v6,
      &v7);
    std::_Func_class<void,bool>::operator()(v3 + 192, *(float *)&v7 == 1.0);
  }
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
