/*
 * XREFs of ?push_back@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x180122B08
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180070498 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$construct@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@1@QEAV?$shared_ptr@VWorkItem@CWorkFifo@@@1@AEBV31@@Z @ 0x18011F8CC (--$construct@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEBV12@@-$_Default_allocator_traits@V-$all.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18012288C (-_Growmap@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@.c)
 */

__int64 __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::push_back(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdi
  LPVOID v6; // rax
  __int64 result; // rax

  v3 = a1;
  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Growmap(a1);
  v4 = v3[2] - 1LL;
  v3[3] &= v4;
  v5 = v4 & (v3[4] + v3[3]);
  if ( !*(_QWORD *)(v3[1] + 8 * v5) )
  {
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    a1 = (_QWORD *)v3[1];
    a1[v5] = v6;
  }
  result = std::_Default_allocator_traits<std::allocator<std::shared_ptr<CWorkFifo::WorkItem>>>::construct<std::shared_ptr<CWorkFifo::WorkItem>,std::shared_ptr<CWorkFifo::WorkItem> const &>(
             (__int64)a1,
             *(_QWORD **)(v3[1] + 8 * v5),
             a2);
  ++v3[4];
  return result;
}
