/*
 * XREFs of ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x140083B14
 * Callers:
 *     FreeHook @ 0x1400837F0 (FreeHook.c)
 *     ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x140083BA0 (-lock@-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$.c)
 *     ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x140085384 (-lock@-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursi.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x140283A7C (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagDomLock::IsLockedShared(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(*this) != 0;
}
