/*
 * XREFs of ?_Xlen@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@CAXXZ @ 0x180122AE8
 * Callers:
 *     ?_Growmap@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18012288C (-_Growmap@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@.c)
 * Callees:
 *     <none>
 */

void __noreturn std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
