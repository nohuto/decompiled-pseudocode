/*
 * XREFs of ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x1400462B8
 * Callers:
 *     DeleteProperties @ 0x140045EA0 (DeleteProperties.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x140046170 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401BE4D8 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x140133080 (-LockExclusive@tagObjLock@@QEBAXXZ.c)
 */

void __fastcall DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>(
        __int64 a1,
        tagObjLock *a2)
{
  tagObjLock **v3; // rdi
  __int64 UserSessionState; // rax
  tagObjLock *v6; // r8
  bool v7; // zf
  int v8; // ebx

  v3 = (tagObjLock **)(a1 + 16);
  UserSessionState = W32GetUserSessionState(a1);
  v6 = 0LL;
  if ( a2 != (tagObjLock *)(UserSessionState + 42520) )
    v6 = a2;
  v7 = *(_BYTE *)(a1 + 32) == 0;
  *v3 = v6;
  if ( v7 )
  {
    v8 = 0;
    do
    {
      if ( *v3 )
        tagObjLock::LockExclusive(*v3);
      ++v8;
      ++v3;
    }
    while ( !v8 );
    *(_BYTE *)(a1 + 32) = 1;
  }
}
