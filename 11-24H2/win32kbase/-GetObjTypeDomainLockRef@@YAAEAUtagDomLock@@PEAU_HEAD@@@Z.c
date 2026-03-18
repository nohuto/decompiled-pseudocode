/*
 * XREFs of ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAU_HEAD@@@Z @ 0x1401A9890
 * Callers:
 *     <none>
 * Callees:
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140043D80 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

struct tagDomLock *__fastcall GetObjTypeDomainLockRef(struct _HEAD *a1)
{
  if ( a1 && *(_BYTE *)(HMPheFromObject((int *)a1) + 24) == 1 )
    return (struct tagDomLock *)GetDomainLockRef(10LL);
  else
    return (struct tagDomLock *)(W32GetUserSessionState(a1) + 42424);
}
