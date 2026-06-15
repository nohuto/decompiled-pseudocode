/*
 * XREFs of ?TimerCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180015B80
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180015B4C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::TimerCallback(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_TIMER Timer)
{
  __int64 v4; // rdi

  v4 = Context[3];
  std::_Mutex_base::lock((std::_Mutex_base *)(v4 + 88));
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(v4 + 80) )
    std::_Func_class<void,>::operator()(Context[1]);
  _Mtx_unlock((_Mtx_t)(v4 + 88));
}
