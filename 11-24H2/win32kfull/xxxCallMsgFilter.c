/*
 * XREFs of xxxCallMsgFilter @ 0x1400655D0
 * Callers:
 *     NtUserCallMsgFilter @ 0x140066350 (NtUserCallMsgFilter.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxSendMenuSelect @ 0x14009E36C (xxxSendMenuSelect.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallMsgFilter(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v8; // ebx
  unsigned int DLT; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edi
  char *v16; // rbx
  tagDomLock *v17; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-40h]
  char v19; // [rsp+28h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  char v21; // [rsp+38h] [rbp-28h]
  __int64 v22; // [rsp+40h] [rbp-20h]
  char v23; // [rsp+48h] [rbp-18h]
  char v24; // [rsp+50h] [rbp-10h]

  v2 = a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 576 || ((v6 - 281) & 0xFFFFFFFD) == 0 )
    return 0LL;
  DLT = DLT_HOOK::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v19 = 0;
  v21 = 0;
  v20 = W32GetUserSessionState(v11, v10) + 42424;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v13, v12, v14) )
  {
    v24 = 1;
    v15 = 0;
    v16 = &v19;
    do
    {
      v17 = (tagDomLock *)*((_QWORD *)v16 - 1);
      if ( v17 )
      {
        if ( *v16 )
          tagDomLock::LockExclusive(v17);
        else
          tagDomLock::LockShared(v17);
      }
      ++v15;
      v16 += 16;
    }
    while ( !v15 );
    v23 = 1;
  }
  if ( ((*(_BYTE *)(v5 + 720) | *(_BYTE *)(**(_QWORD **)(v5 + 504) + 16LL)) & 0x80u) != 0
    && (unsigned int)xxxCallHook(v2, 0LL, a1, 6) )
  {
    if ( v24 && v23 && DomainLockRef )
    {
      if ( v19 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return 1LL;
  }
  else
  {
    if ( ((*(_BYTE *)(v5 + 720) | *(_BYTE *)(**(_QWORD **)(v5 + 504) + 16LL)) & 1) == 0 )
    {
      if ( v24 && v23 && DomainLockRef )
      {
        if ( v19 )
          tagDomLock::UnLockExclusive(DomainLockRef);
        else
          tagDomLock::UnLockShared(DomainLockRef);
      }
      return 0LL;
    }
    v8 = xxxCallHook(v2, 0LL, a1, -1);
    if ( v24 && v23 && DomainLockRef )
    {
      if ( v19 )
        tagDomLock::UnLockExclusive(DomainLockRef);
      else
        tagDomLock::UnLockShared(DomainLockRef);
    }
    return v8;
  }
}
