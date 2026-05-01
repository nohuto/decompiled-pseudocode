/*
 * XREFs of _lambda_e144cef1f387178a308841941c02025f_::__lambda_e144cef1f387178a308841941c02025f_ @ 0x180653FD0
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x180654770 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::dtor$42 @ 0x180654BE3 (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--dtor$42.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___::Release @ 0x180655570 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationComplete_ea_180655570.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_e144cef1f387178a308841941c02025f_::__lambda_e144cef1f387178a308841941c02025f_(__int64 a1)
{
  __int64 *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (__int64 *)(a1 + 48);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 32);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  if ( *(_QWORD *)(a1 + 8) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 8));
}
