/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C003D958
 * Callers:
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1C003D6B0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     xxxDoSysExpunge @ 0x1C003D730 (xxxDoSysExpunge.c)
 *     xxxLoadHmodIndex @ 0x1C0122AD0 (xxxLoadHmodIndex.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(const struct tagDomLock *this)
{
  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive(this)) )
  {
    __int2c();
  }
}
