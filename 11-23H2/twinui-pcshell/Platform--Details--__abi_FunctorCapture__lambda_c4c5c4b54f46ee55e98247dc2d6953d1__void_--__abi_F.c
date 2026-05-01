/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_ @ 0x18007C4B0
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___ @ 0x18007C3E4 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animati.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x18007C514 (_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_--_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *a1 = &off_180986AC8;
  lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(a1 + 1, a2);
  v4 = a2[1];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
  return a1;
}
