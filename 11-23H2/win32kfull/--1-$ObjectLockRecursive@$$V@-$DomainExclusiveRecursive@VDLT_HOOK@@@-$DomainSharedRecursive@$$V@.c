/*
 * XREFs of ??1?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C01399C8
 * Callers:
 *     zzzUnhookWindowsHookEx @ 0x1C003D1C4 (zzzUnhookWindowsHookEx.c)
 *     NtUserSetWinEventHook @ 0x1C003F0B0 (NtUserSetWinEventHook.c)
 *     FreeHook @ 0x1C003F9E0 (FreeHook.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::~ObjectLockRecursive<>(
        __int64 a1)
{
  tagDomLock *v2; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = *(tagDomLock **)a1;
    if ( v2 )
    {
      if ( *(_BYTE *)(a1 + 8) )
        tagDomLock::UnLockExclusive(v2);
      else
        tagDomLock::UnLockShared(v2);
    }
    *(_BYTE *)(a1 + 40) = 0;
  }
}
