/*
 * XREFs of ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x1801C7634
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180244160 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180244530 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180244770 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1802449F0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180247810 (-Uncloak@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::operator() @ 0x1803B6348 (_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--operator().c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_5c1a0d5a7fd3d129c3b08637b61c63e1___::Invoke @ 0x1803BC940 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foun_ea_1803BC940.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___lambda_0519a08fc38090f4f759e59768a110a1___::Invoke @ 0x1803BC9C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803BC9C0.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1803BDB64 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$DoInvoke@V_lambda_54179b263591c018021c5ac3d1707098_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_54179b263591c018021c5ac3d1707098_@@@Z @ 0x1801C766C (--$DoInvoke@V_lambda_54179b263591c018021c5ac3d1707098_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3 = 0LL;
  v4[0] = &v5;
  v4[1] = &v3;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_54179b263591c018021c5ac3d1707098_>(
           a1,
           v4);
}
