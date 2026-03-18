/*
 * XREFs of DestroyEventHook @ 0x1400849F0
 * Callers:
 *     FreeThreadsWinEvents @ 0x140084F90 (FreeThreadsWinEvents.c)
 *     _UnhookWinEvent @ 0x140085268 (_UnhookWinEvent.c)
 * Callees:
 *     ??0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z @ 0x140082ADC (--0IdentifyPrimaryDestroyTarget@@QEAA@PEAU_HEAD@@@Z.c)
 *     RemoveHmodDependency @ 0x140083EF8 (RemoveHmodDependency.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x140084538 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14008495C (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall DestroyEventHook(struct _HEAD *a1, __int64 a2)
{
  int v3; // edi
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  struct _HEAD **i; // rcx
  struct _HEAD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  tagDomLock *v14; // rcx
  _DWORD *v15; // r8
  int v16; // r9d
  unsigned int v17; // r10d
  int v18; // ecx
  _BYTE v19[8]; // [rsp+20h] [rbp-40h] BYREF
  tagDomLock *v20; // [rsp+28h] [rbp-38h] BYREF
  char v21; // [rsp+30h] [rbp-30h]
  char v22; // [rsp+50h] [rbp-10h]

  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42384)) != 1 )
    __int2c();
  v7 = W32GetUserSessionState(v6, v5);
  IdentifyPrimaryDestroyTarget::IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)v19, a1);
  *((_DWORD *)a1 + 10) |= 1u;
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v20);
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)&v20);
  if ( (unsigned int)HMMarkObjectDestroy(a1) )
  {
    if ( v22 && v20 )
    {
      if ( v21 )
        tagDomLock::UnLockExclusive(v20);
      else
        tagDomLock::UnLockShared(v20);
    }
    for ( i = (struct _HEAD **)(v7 + 70848); ; i = (struct _HEAD **)((char *)v9 + 24) )
    {
      v9 = *i;
      if ( !*i )
        break;
      if ( v9 == a1 )
      {
        *i = (struct _HEAD *)*((_QWORD *)a1 + 3);
        break;
      }
    }
    v10 = *(_QWORD *)(v7 + 70848);
    while ( v10 )
    {
      v15 = &unk_14034F084;
      v16 = 0;
      v17 = 0;
      do
      {
        if ( *(v15 - 1) > *(_DWORD *)(v10 + 36) )
          break;
        i = (struct _HEAD **)++v17;
        if ( (unsigned int)(*((_DWORD *)&unk_14034F080 + 2 * v17) - 1) >= *(_DWORD *)(v10 + 32) )
          v16 |= *v15;
        v15 += 2;
      }
      while ( v17 < 0xF );
      v10 = *(_QWORD *)(v10 + 24);
      v3 |= v16;
    }
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(i, 0LL) + 19928) + 1892LL) = v3;
    v18 = *((_DWORD *)a1 + 18);
    if ( v18 >= 0 )
      RemoveHmodDependency(v18);
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v20);
    DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)&v20);
    HMFreeObject(a1);
    if ( v22 )
    {
      v14 = v20;
      if ( v20 )
      {
        if ( v21 )
          tagDomLock::UnLockExclusive(v20);
        else
          tagDomLock::UnLockShared(v20);
      }
    }
    if ( v19[0] )
      *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19824) = 0LL;
  }
  else
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&v20);
    if ( v19[0] )
      *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19824) = 0LL;
  }
}
