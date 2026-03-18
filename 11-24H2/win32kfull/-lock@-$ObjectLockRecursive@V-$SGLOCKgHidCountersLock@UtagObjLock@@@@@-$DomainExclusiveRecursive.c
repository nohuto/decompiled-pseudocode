/*
 * XREFs of ?lock@?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x14026BE94
 * Callers:
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x1401AF090 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 * Callees:
 *     <none>
 */

void __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::lock(
        __int64 a1)
{
  int v2; // esi
  struct _KTHREAD ***v3; // rbx
  struct _KTHREAD **v4; // rcx

  if ( !*(_BYTE *)(a1 + 32) )
  {
    v2 = 0;
    v3 = (struct _KTHREAD ***)(a1 + 16);
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        if ( KeGetCurrentThread() == v4[1] )
          *v3 = 0LL;
        else
          tagObjLock::LockExclusive((tagObjLock *)v4);
      }
      ++v2;
      ++v3;
    }
    while ( !v2 );
    *(_BYTE *)(a1 + 32) = 1;
  }
}
