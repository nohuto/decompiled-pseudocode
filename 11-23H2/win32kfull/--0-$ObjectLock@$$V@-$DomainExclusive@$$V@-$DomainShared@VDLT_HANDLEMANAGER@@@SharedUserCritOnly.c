/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C0120E8C
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011FE30 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@XZ @ 0x1C0120F08 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C01217D8 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 */

__int64 __fastcall SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(
        __int64 a1)
{
  bool v3; // zf
  int v4; // esi
  __int64 v5; // rdi
  tagDomLock *v6; // rcx

  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(a1);
  *(_BYTE *)(a1 + 48) = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v3 = *(_BYTE *)(a1 + 40) == 0;
    *(_BYTE *)(a1 + 48) = 1;
    if ( v3 )
    {
      v4 = 0;
      v5 = a1;
      do
      {
        v6 = *(tagDomLock **)v5;
        if ( *(_QWORD *)v5 )
        {
          if ( *(_BYTE *)(v5 + 8) )
            tagDomLock::LockExclusive(v6);
          else
            tagDomLock::LockShared(v6);
        }
        ++v4;
        v5 += 16LL;
      }
      while ( !v4 );
      *(_BYTE *)(a1 + 40) = 1;
    }
  }
  return a1;
}
