/*
 * XREFs of FreeThreadsWinEvents @ 0x140084F90
 * Callers:
 *     <none>
 * Callees:
 *     DestroyEventHook @ 0x1400849F0 (DestroyEventHook.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_WINEVENT@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400850E4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_WINEVENT@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     DestroyNotify @ 0x140085190 (DestroyNotify.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall FreeThreadsWinEvents(__int64 a1)
{
  unsigned int CurrentThreadId; // r14d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 UserSessionState; // rbp
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rbx
  tagDomLock *v12; // [rsp+20h] [rbp-48h] BYREF
  char v13; // [rsp+28h] [rbp-40h]
  char v14; // [rsp+48h] [rbp-20h]

  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(&v12);
  UserSessionState = W32GetUserSessionState(v4, v3);
  v7 = *(__int64 **)(UserSessionState + 70864);
  if ( v7 != (__int64 *)(UserSessionState + 70864) )
  {
    do
    {
      v8 = (__int64 *)*v7;
      if ( *((_DWORD *)v7 + 12) == CurrentThreadId && !v7[8]
        || (v9 = v7[8], v9 == a1)
        || (*((_DWORD *)v7 + 6) || *(_QWORD *)(v7[2] + 16) == a1) && !v9 )
      {
        if ( (v7[7] & 4) == 0 )
          DestroyNotify(v7);
      }
      v7 = v8;
    }
    while ( v8 != (__int64 *)(UserSessionState + 70864) );
  }
  v10 = *(_QWORD *)(UserSessionState + 70848);
  if ( v10 )
  {
    do
    {
      v11 = *(_QWORD *)(v10 + 24);
      if ( *(_QWORD *)(v10 + 16) == a1 )
        DestroyEventHook((struct _HEAD *)v10, v5);
      v10 = v11;
    }
    while ( v11 );
  }
  if ( v14 && v12 )
  {
    if ( v13 )
      tagDomLock::UnLockExclusive(v12);
    else
      tagDomLock::UnLockShared(v12);
  }
}
