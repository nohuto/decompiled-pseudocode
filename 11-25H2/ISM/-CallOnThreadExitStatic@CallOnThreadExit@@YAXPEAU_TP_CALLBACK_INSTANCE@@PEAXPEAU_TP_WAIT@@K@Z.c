/*
 * XREFs of ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x18012EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800BBD08 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CallOnThreadExit::CallOnThreadExitStatic(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  __int64 v5; // rdx

  std::_Mutex_base::lock((std::_Mutex_base *)&unk_180246E98);
  std::_Func_class<void,>::operator()(Context);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(Context, v5);
  _Mtx_unlock((_Mtx_t)&unk_180246E98);
}
