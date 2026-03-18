/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C003C1E4
 * Callers:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     _BuildPropList @ 0x1C003C22C (_BuildPropList.c)
 *     NtUserGetProp @ 0x1C0064200 (NtUserGetProp.c)
 *     NtUserRemoveProp @ 0x1C006E080 (NtUserRemoveProp.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00EDB04 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1)
{
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
