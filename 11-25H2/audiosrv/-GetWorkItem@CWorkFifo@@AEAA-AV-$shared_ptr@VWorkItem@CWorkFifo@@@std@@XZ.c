/*
 * XREFs of ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x180086C48
 * Callers:
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180119ACC (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180084CE8 (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800B51EC (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CWorkFifo::GetWorkItem(_QWORD *a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  std::_Ref_count_base *v5; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 18);
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 18));
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 17)
    && !(unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)a1 + 137)
    && a1[16] )
  {
    std::shared_ptr<CXvmPowerReference>::operator=(a2, *(__int64 **)(a1[13] + 8 * (a1[15] & (a1[14] - 1LL))));
    v5 = *(std::_Ref_count_base **)(*(_QWORD *)(a1[13] + 8 * (a1[15] & (a1[14] - 1LL))) + 8LL);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    if ( a1[16]-- == 1LL )
      a1[15] = 0LL;
    else
      ++a1[15];
  }
  _Mtx_unlock(v4);
  return a2;
}
