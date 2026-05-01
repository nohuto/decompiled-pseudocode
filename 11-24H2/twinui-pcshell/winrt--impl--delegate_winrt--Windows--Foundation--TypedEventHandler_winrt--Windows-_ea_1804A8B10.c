/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_41269503dd0ad4387f409c0b0bf30f63___::Invoke @ 0x1804A8B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x1804AC278 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804AC428 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_41269503dd0ad4387f409c0b0bf30f63___::Invoke(
        __int64 a1)
{
  CAppThumbnailWindow *v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax
  CAppThumbnailWindow *v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+40h] [rbp+8h] BYREF

  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(a1 + 16, &v4);
  try
  {
    v1 = v4;
    if ( v4 )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl)
        && !*((_BYTE *)v1 + 185)
        && *((_QWORD *)v1 + 72)
        && (unsigned int)IsGamingFullScreenExperienceActive(v2) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v1 + 72) + 96LL))(
          *((_QWORD *)v1 + 72),
          1LL,
          1LL);
      }
      CAppThumbnailWindow::Uninitialize(v1);
    }
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
