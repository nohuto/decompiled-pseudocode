/*
 * XREFs of ??1?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x18009B1F0
 * Callers:
 *     _GestureServices::GestureServices_::_1_::dtor$5 @ 0x1801C84D9 (_GestureServices--GestureServices_--_1_--dtor$5.c)
 *     _GestureServices::GestureServices_::_1_::dtor$6 @ 0x1801C84EF (_GestureServices--GestureServices_--_1_--dtor$6.c)
 *     _InjectionRawInputProvider::Create_::_1_::dtor$0 @ 0x1801CE9CF (_InjectionRawInputProvider--Create_--_1_--dtor$0.c)
 *     _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$0 @ 0x1801D13DC (_InputInjectionClientProxy--InjectTouchInput_--_1_--dtor$0.c)
 *     _InputInjectionClientProxy::OnDisconnected_::_1_::dtor$0 @ 0x1801D1412 (_InputInjectionClientProxy--OnDisconnected_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::ShellGesturesProcessor_::_1_::dtor$1 @ 0x1801D147E (_ShellGesturesProcessor--ShellGesturesProcessor_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<KernelContextProvider>::~ComPtr<KernelContextProvider>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return InputContext::Release((InputContext *)(result + 8));
  }
  return result;
}
