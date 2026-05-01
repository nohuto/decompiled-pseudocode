/*
 * XREFs of ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804863A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180167C1C (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18046C894 (--1-$com_ptr_t@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTe.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18046C920 (--1-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHost.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@2@XZ @ 0x18046D388 (-data@-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTip.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180478C4C (-close@-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@Keyboard.c)
 *     ??$HandleInvocationBySystemButton@AEB_NAEB_NAEAU?$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N0AEAU?$atomic@_N@std@@1AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804848E4 (--$HandleInvocationBySystemButton@AEB_NAEB_NAEAU-$atomic@_N@std@@AEAU12@AEAW4ShellRequestType@Te.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@0@XZ @ 0x180485144 (--$open@V-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHosting.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInvocationBySystemButton(
        KeyboardHosting::TabTipAdapterPolicy *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  char v5; // [rsp+60h] [rbp+28h] BYREF
  char IsViewShownInternal; // [rsp+68h] [rbp+30h] BYREF
  _BYTE *v7; // [rsp+70h] [rbp+38h] BYREF
  void *v8; // [rsp+78h] [rbp+40h] BYREF

  *(_DWORD *)a2 = 0;
  IsViewShownInternal = KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(
                          (RTL_SRWLOCK *)this,
                          *((_DWORD *)this + 230));
  v5 = *((_BYTE *)this + 924);
  *((_BYTE *)this + 924) = 1;
  if ( *((_BYTE *)this + 925) && !*((_BYTE *)this + 889) )
    *(_DWORD *)a2 = 1;
  if ( !*(_DWORD *)a2 )
  {
    tip2::open<tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>>(&v8);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v8) )
    {
      tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::data(
        (__int64)&v8,
        (__int64 *)&v7);
      v7[286] = *((_BYTE *)this + 925) == 0;
      v7[287] = *((_BYTE *)this + 889);
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::close((__int64 *)&v7);
      tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>((void **)&v7);
    }
    wil::com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>,wil::err_returncode_policy>(&v8);
  }
  TouchKeyboardExperienceTelemetryLogger::HandleInvocationBySystemButton<bool const &,bool const &,std::atomic<bool> &,std::atomic<bool> &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
    (__int64)&IsViewShownInternal,
    (__int64)&v5,
    (__int64)this + 889,
    (__int64)this + 925);
  return 0LL;
}
