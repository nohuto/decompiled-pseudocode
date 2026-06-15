/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800311F0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180015840 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x18002F864 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180031C08 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180031C14 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, __int64 *Context, PTP_WORK Work)
{
  __int64 v5; // rdi

  v5 = Context[2];
  std::_Mutex_base::lock((std::_Mutex_base *)(v5 + 88));
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(v5 + 80) )
    std::_Func_class<void,>::operator()(*Context);
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  _WorkTask::`scalar deleting destructor'((_WorkTask *)Context);
  CloseThreadpoolWork(Work);
}
