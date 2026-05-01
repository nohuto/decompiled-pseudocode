/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_75f2985bf69ff4a05611e28552fa3ff7___::Invoke @ 0x180599880
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x1805994A8 (-DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?GripperDismissAnimationEnded@TouchEdgeGestureTelemetry@@SAXXZ @ 0x18059969C (-GripperDismissAnimationEnded@TouchEdgeGestureTelemetry@@SAXXZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_75f2985bf69ff4a05611e28552fa3ff7___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  TouchEdgeGestureTelemetry::GripperDismissAnimationEnded(a1);
  try
  {
    TouchEdgeGripperWindow::DestroyXamlWindow(*(TouchEdgeGripperWindow **)(a1 + 16));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
