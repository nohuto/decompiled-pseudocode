/*
 * XREFs of ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18029C448
 * Callers:
 *     _lambda_f0f0704f501388b5535c1eee59b56383_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058E100 (_lambda_f0f0704f501388b5535c1eee59b56383_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801F605C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18029C4EC (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18029C538 (-erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@0@XZ @ 0x18058F5FC (--$open@V-$tip_test@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@@tip2@@@tip2@@YA-AV.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18058FCA8 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall TouchGestureProcessor::PointerEventsDetector::ProcessUpEvent(
        TouchGestureProcessor::PointerEventsDetector *this,
        const struct winrt::Windows::UI::Input::PointerPoint *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    LODWORD(v3) = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId(a2);
    std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
      (char *)this + 8,
      &v3);
    if ( !*((_QWORD *)this + 2) )
    {
      *((_WORD *)this + 78) = 0;
      *((_DWORD *)this + 38) = 0;
      if ( *((_QWORD *)this + 18) )
        std::_Func_class<void,>::operator()((__int64)this + 88);
      tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>>>(&v3);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(&v3) )
      {
        if ( v3 )
          tip2::details::shared_data<1,0,0>::complete_without_lock(v3 + 8);
      }
      wil::com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>,wil::err_returncode_policy>(&v3);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgs(this, a2);
  }
}
