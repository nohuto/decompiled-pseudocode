/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1801F605C
 * Callers:
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18029C448 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_8ee7d66042e48d98bb41283a1a194426___::Invoke @ 0x1804A8C50 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1804A8C50.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1804AB400 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     _lambda_9d63f5b83c4626ea321dd6f3d651c13d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058DF2C (_lambda_9d63f5b83c4626ea321dd6f3d651c13d_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x180595C00 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x1806591AC (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x1801F6086LL);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
