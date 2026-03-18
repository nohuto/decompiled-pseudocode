/*
 * XREFs of ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401BE4D8
 * Callers:
 *     DestroyBaseWindow @ 0x1401BE600 (DestroyBaseWindow.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x1400462B8 (--$vInitAndLock@UtagObjLock@@@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainS.c)
 *     ??0?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAA@AEAUtagObjLock@@@Z @ 0x14010F000 (--0-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainSharedBase@$$V@@IEAA@AEAUtag.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@@QEAA@XZ @ 0x1401BE4A8 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DeleteBaseWindowProperties(struct tagBWND *a1)
{
  tagObjLock *v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  _BYTE v9[40]; // [rsp+28h] [rbp-50h] BYREF

  v1 = (tagObjLock *)*((_QWORD *)a1 + 10);
  v3 = 0LL;
  DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::ObjectLockBase<tagObjLock>((__int64)v9);
  DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>((__int64)v9, v1);
  LockRefactorStagingAssertOwned(*((struct _KTHREAD ***)a1 + 10));
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 + 4);
    v6 = (__int64 *)(v4 + 8);
    if ( *(_DWORD *)(v4 + 4) )
    {
      do
      {
        if ( (*((_WORD *)v6 + 5) & 0x8001) == 0x8001 )
        {
          v7 = *v6;
          if ( v3 )
            *(_QWORD *)(v7 + 8) = v3;
          v3 = v7;
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 166);
        }
        v6 += 2;
        --v5;
      }
      while ( v5 );
    }
    GreDeleteFastMutex(*(char **)(*((_QWORD *)a1 + 10) + 24LL));
    *(_QWORD *)(*((_QWORD *)a1 + 10) + 24LL) = 0LL;
  }
  DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)v9);
  if ( v3 )
  {
    do
    {
      v8 = *(_QWORD *)(v3 + 8);
      (**(void (__fastcall ***)(__int64))v3)(v3);
      v3 = v8;
    }
    while ( v8 );
  }
}
