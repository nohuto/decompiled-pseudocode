/*
 * XREFs of ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x180095948
 * Callers:
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180058544 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x180146790 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x180146BB0 (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800959FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 */

__int64 __fastcall GestureHandler::CASGestureState(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // edx
  volatile signed __int32 *v3; // r8
  unsigned __int32 v4; // ecx
  unsigned __int32 v5; // eax
  signed __int32 v6; // ett

  v1 = std::_Atomic_storage<enum GestureOperationState,4>::load(a1 + 224);
  v4 = v1;
  if ( v1 != 4 )
  {
    v6 = v1;
    v5 = _InterlockedCompareExchange(v3, v2, v1);
    if ( v6 != v5 )
      return v5;
  }
  return v4;
}
