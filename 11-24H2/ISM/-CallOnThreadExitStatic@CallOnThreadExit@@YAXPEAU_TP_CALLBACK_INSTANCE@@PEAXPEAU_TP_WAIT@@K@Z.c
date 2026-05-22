/*
 * XREFs of ?CallOnThreadExitStatic@CallOnThreadExit@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z @ 0x180130D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18000AB8C (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180015E94 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??R?$_Func_class@XW4CallbackReason@CallOnThreadExit@@@std@@QEBAXW4CallbackReason@CallOnThreadExit@@@Z @ 0x180130CCC (--R-$_Func_class@XW4CallbackReason@CallOnThreadExit@@@std@@QEBAXW4CallbackReason@CallOnThreadExi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef@@@details@wil@@QEAA_NXZ @ 0x1801315A0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CallOnThreadExit::CallOnThreadExitStatic(
        PTP_CALLBACK_INSTANCE Instance,
        HMODULE *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  __int64 v6; // rdx

  std::_Mutex_base::lock((std::_Mutex_base *)&unk_180250E60);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InputHostCallOnThreadExitModuleRef>::GetImpl'::`2'::impl) )
  {
    FreeLibraryWhenCallbackReturns(Instance, Context[10]);
    Context[10] = 0LL;
  }
  std::_Func_class<void,enum CallOnThreadExit::CallbackReason>::operator()((__int64)Context);
  std::_Func_class<void,>::~_Func_class<void,>((__int64)Context, v6);
  _Mtx_unlock((_Mtx_t)&unk_180250E60);
}
