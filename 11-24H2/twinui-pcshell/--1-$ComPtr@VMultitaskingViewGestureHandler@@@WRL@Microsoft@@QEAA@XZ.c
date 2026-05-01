/*
 * XREFs of ??1?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0C1C
 * Callers:
 *     _MultitaskingViewGestureHandler_CreateInstance_::_1_::dtor$0 @ 0x1806D3C29 (_MultitaskingViewGestureHandler_CreateInstance_--_1_--dtor$0.c)
 *     _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_efc442667d9759efdb33142b8e7099d9___::Invoke_::_1_::dtor$0 @ 0x1806EE6DA (_winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_efc442667d.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::~ComPtr<MultitaskingViewGestureHandler>(
        volatile signed __int32 **a1)
{
  return Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(a1);
}
