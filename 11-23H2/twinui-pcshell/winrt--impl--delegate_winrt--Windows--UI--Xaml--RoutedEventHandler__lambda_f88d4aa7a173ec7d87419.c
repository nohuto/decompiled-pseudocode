/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___::Invoke @ 0x18065B730
 * Callers:
 *     <none>
 * Callees:
 *     ?StartInvokeAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065C6A4 (-StartInvokeAnimation@TouchEdgeGripperWindow@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___::Invoke(
        __int64 a1)
{
  TouchEdgeGripperWindow *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(TouchEdgeGripperWindow **)(a1 + 8);
  try
  {
    TouchEdgeGripperWindow::StartInvokeAnimation(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
