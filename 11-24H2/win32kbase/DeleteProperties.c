/*
 * XREFs of DeleteProperties @ 0x140045EA0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140045260 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??$vInitAndLock@UtagObjLock@@@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@IEAAXAEAUtagObjLock@@@Z @ 0x1400462B8 (--$vInitAndLock@UtagObjLock@@@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainS.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DeleteProperties(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // r14d
  __int64 i; // rbx
  __int16 v9; // cx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  char v14; // [rsp+28h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-30h]
  char v16; // [rsp+40h] [rbp-20h]
  char v17; // [rsp+48h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 144);
  v3 = 0LL;
  v14 = 0;
  v16 = 0;
  v13 = W32GetUserSessionState(a1) + 42424;
  v15 = 0LL;
  v17 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v17 = 1;
    DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::vInitAndLock<tagObjLock>(&v13, v1);
  }
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144));
  result = *(_QWORD *)(a1 + 144);
  v6 = *(_QWORD *)(result + 24);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    for ( i = v6 + 8; v7; --v7 )
    {
      v9 = *(_WORD *)(i + 10);
      if ( (v9 & 1) != 0 )
      {
        if ( (v9 & 0x8001) == 0x8001 )
        {
          v10 = *(_QWORD **)i;
          if ( v3 )
            v10[1] = v3;
          v3 = v10;
        }
        else if ( (v9 & 8) != 0 )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 136LL), 0, *(PVOID *)i);
        }
        else if ( (v9 & 4) == 0 )
        {
          GreDeleteFastMutex(*(char **)i);
        }
      }
      i += 16LL;
    }
    GreDeleteFastMutex(*(char **)(*(_QWORD *)(a1 + 144) + 24LL));
    result = *(_QWORD *)(a1 + 144);
    *(_QWORD *)(result + 24) = 0LL;
    if ( v16 && v17 )
    {
      if ( (_QWORD)v15 )
        result = RIMUnlockExclusive(v15, v11);
      v16 = 0;
    }
    if ( v3 )
    {
      do
      {
        v12 = (_QWORD *)v3[1];
        result = (*(__int64 (__fastcall **)(_QWORD *))*v3)(v3);
        v3 = v12;
      }
      while ( v12 );
    }
  }
  else if ( v16 && v17 )
  {
    if ( (_QWORD)v15 )
      return RIMUnlockExclusive(v15, v4);
  }
  return result;
}
