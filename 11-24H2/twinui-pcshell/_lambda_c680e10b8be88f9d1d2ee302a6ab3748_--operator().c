/*
 * XREFs of _lambda_c680e10b8be88f9d1d2ee302a6ab3748_::operator() @ 0x180361E18
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___::Run @ 0x1803642C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$?RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEBW4GameBarWindowState@4561@@Z @ 0x180361774 (--$-RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWin.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57648583@@@details@wil@@QEAA_NXZ @ 0x180364ED4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57648583@@@details@wil@@QEAA_NXZ.c)
 *     ?get@?$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180365178 (-get@-$weak_ref@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c680e10b8be88f9d1d2ee302a6ab3748_::operator()(RTL_SRWLOCK **a1)
{
  const char *v3; // r9
  _QWORD *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  __int64 result; // rax
  const char *v7; // r9
  bool v8; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57648583>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57648583>::GetImpl'::`2'::impl) )
  {
    winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::get(
      a1 + 1,
      &v10);
    try
    {
      v4 = v10;
      if ( v10 )
      {
        v5 = *a1 + 10;
        if ( v5->Ptr )
          winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::operator()<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>(
            v5,
            (__int64)*a1,
            (unsigned int *)a1 + 4);
      }
      if ( v4 )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v10);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x388,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
                             v3);
    }
  }
  else
  {
    try
    {
      v8 = *(_QWORD *)winrt::weak_ref<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::get(
                        a1 + 1,
                        &v10)
        && (*a1)[10].Ptr;
      if ( v10 )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v10);
      if ( v8 )
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::operator()<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>(
          *a1 + 10,
          (__int64)*a1,
          (unsigned int *)a1 + 4);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x388,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
                             v7);
    }
  }
  return result;
}
