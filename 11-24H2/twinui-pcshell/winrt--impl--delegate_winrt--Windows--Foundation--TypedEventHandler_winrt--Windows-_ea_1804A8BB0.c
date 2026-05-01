/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_508ef90450617154956e0b927fb269e2___::Invoke @ 0x1804A8BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C98C8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?TryGetScalar@?$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAM@Z @ 0x1804ABE58 (-TryGetScalar@-$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804AC428 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_508ef90450617154956e0b927fb269e2___::Invoke(
        __int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-30h]
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF
  float v6; // [rsp+60h] [rbp+8h] BYREF

  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(a1 + 16, &v3);
  try
  {
    v1 = v3;
    if ( v3 )
    {
      v6 = 0.0;
      winrt::param::hstring::hstring((winrt::param::hstring *)v5, L"flickProgress");
      winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::TryGetScalar(
        v1 + 400,
        v5,
        &v6);
      std::_Func_class<void,bool>::operator()(v1 + 192, v6 == 1.0);
    }
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    v6 = *(float *)winrt::to_hresult(&v6);
    return LODWORD(v6);
  }
  return result;
}
