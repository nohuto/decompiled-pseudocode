/*
 * XREFs of ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400922FC
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x140092250 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x140041660 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140043D80 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400923C0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 */

__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  int v5; // esi
  tagDomLock *v6; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(9LL);
  *(_BYTE *)(a1 + 8) = 1;
  UserSessionState = W32GetUserSessionState(v2);
  *(_BYTE *)(a1 + 24) = 0;
  v4 = a1;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42424;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = 0;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v6 = *(tagDomLock **)v4;
    if ( !*(_QWORD *)v4 )
      goto LABEL_6;
    if ( *(_BYTE *)(v4 + 8) )
    {
      if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)v6) )
      {
        tagDomLock::LockExclusive(*(tagDomLock **)v4);
        goto LABEL_6;
      }
LABEL_8:
      *(_QWORD *)v4 = 0LL;
      goto LABEL_6;
    }
    if ( tagDomLock::IsLockedExclusive((PERESOURCE *)v6) || tagDomLock::IsLockedShared(*(tagDomLock **)v4) )
      goto LABEL_8;
    ExEnterCriticalRegionAndAcquireResourceShared(**(PERESOURCE **)v4);
LABEL_6:
    ++v5;
    v4 += 16LL;
  }
  while ( !v5 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
