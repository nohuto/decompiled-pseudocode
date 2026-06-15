/*
 * XREFs of ??$construct@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@1@QEAV?$shared_ptr@VWorkItem@CWorkFifo@@@1@AEBV31@@Z @ 0x18011F8CC
 * Callers:
 *     ?push_back@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@VWorkItem@CWorkFifo@@@2@@Z @ 0x180122B08 (-push_back@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::shared_ptr<CWorkFifo::WorkItem>>>::construct<std::shared_ptr<CWorkFifo::WorkItem>,std::shared_ptr<CWorkFifo::WorkItem> const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = a3[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a2 = *a3;
  result = a3[1];
  a2[1] = result;
  return result;
}
