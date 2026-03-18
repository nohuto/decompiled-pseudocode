/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140083708
 * Callers:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     _BuildPropList @ 0x140085418 (_BuildPropList.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE(v4, v3, v5)
    && (!IS_USERCRIT_OWNED_AT_ALL(v7, v6, v8) || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
