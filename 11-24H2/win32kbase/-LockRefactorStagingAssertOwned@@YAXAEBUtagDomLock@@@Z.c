/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140041F94
 * Callers:
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x140041660 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140042D80 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(PERESOURCE *this)
{
  if ( !*(_DWORD *)(W32GetUserSessionState(this) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || !tagDomLock::IsLockedExclusive(this)) )
  {
    __int2c();
  }
}
