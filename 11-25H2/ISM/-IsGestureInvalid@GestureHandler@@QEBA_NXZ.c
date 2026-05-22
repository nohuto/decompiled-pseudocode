/*
 * XREFs of ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x180095778
 * Callers:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x1800585F8 (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ @ 0x180144B64 (-SendAnimationEndedIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180144BD8 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180144D54 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800957FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 */

char __fastcall GestureHandler::IsGestureInvalid(GestureHandler *this)
{
  int v1; // eax
  char *i; // rcx
  _DWORD v4[2]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h] BYREF

  v4[0] = 3;
  v4[1] = 4;
  v1 = std::_Atomic_storage<enum GestureOperationState,4>::load((char *)this + 224);
  for ( i = (char *)v4; i != &v5; i += 4 )
  {
    if ( *(_DWORD *)i == v1 )
      return 1;
  }
  return 0;
}
