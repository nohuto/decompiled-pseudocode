/*
 * XREFs of _UnhookWinEvent @ 0x1C003C8C0
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C003C9C0 (NtUserUnhookWinEvent.c)
 * Callees:
 *     DestroyEventHook @ 0x1C003F570 (DestroyEventHook.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@XZ @ 0x1C0120F08 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall UnhookWinEvent(void *a1)
{
  int v2; // edi
  char *v3; // rbx
  tagDomLock *v4; // rcx
  tagDomLock *v6; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+28h] [rbp-40h] BYREF
  char v8; // [rsp+48h] [rbp-20h]

  if ( !tagDomLock::IsLockedExclusive(gDomainWinEventLock) )
    __int2c();
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>(&v6);
  if ( !v8 )
  {
    v2 = 0;
    v3 = &v7;
    do
    {
      v4 = (tagDomLock *)*((_QWORD *)v3 - 1);
      if ( v4 )
      {
        if ( *v3 )
          tagDomLock::LockExclusive(v4);
        else
          tagDomLock::LockShared(v4);
      }
      ++v2;
      v3 += 16;
    }
    while ( !v2 );
    v8 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 || *((struct tagTHREADINFO **)a1 + 2) != PtiCurrentShared() )
  {
    UserSetLastError(6LL);
    if ( v8 && v6 )
    {
      if ( v7 )
        tagDomLock::UnLockExclusive(v6);
      else
        tagDomLock::UnLockShared(v6);
    }
    return 0LL;
  }
  else
  {
    if ( v8 && v6 )
    {
      if ( v7 )
        tagDomLock::UnLockExclusive(v6);
      else
        tagDomLock::UnLockShared(v6);
    }
    DestroyEventHook(a1);
    return 1LL;
  }
}
