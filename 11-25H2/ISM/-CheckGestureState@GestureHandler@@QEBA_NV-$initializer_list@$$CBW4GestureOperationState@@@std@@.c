/*
 * XREFs of ?CheckGestureState@GestureHandler@@QEBA_NV?$initializer_list@$$CBW4GestureOperationState@@@std@@@Z @ 0x1800957C4
 * Callers:
 *     ?TryResumeGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@_KI@Z @ 0x180141B78 (-TryResumeGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@_KI@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800957FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 */

char __fastcall GestureHandler::CheckGestureState(__int64 a1)
{
  int v1; // eax
  _DWORD **v2; // rdx
  _DWORD *i; // rcx

  v1 = std::_Atomic_storage<enum GestureOperationState,4>::load(a1 + 224);
  for ( i = *v2; i != v2[1]; ++i )
  {
    if ( *i == v1 )
      return 1;
  }
  return 0;
}
