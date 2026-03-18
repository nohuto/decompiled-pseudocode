/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140082A28
 * Callers:
 *     xxxLoadHmodIndex @ 0x140082390 (xxxLoadHmodIndex.c)
 *     ?UnlinkHook@@YAXPEAUtagHOOK@@@Z @ 0x1400842D0 (-UnlinkHook@@YAXPEAUtagHOOK@@@Z.c)
 *     MapDesktop @ 0x14016A320 (MapDesktop.c)
 *     xxxDoSysExpunge @ 0x1401785EC (xxxDoSysExpunge.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(PERESOURCE *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE(v4, v3, v5)
    && (!IS_USERCRIT_OWNED_AT_ALL(v7, v6, v8) || ExIsResourceAcquiredExclusiveLite(*a1) != 1) )
  {
    __int2c();
  }
}
