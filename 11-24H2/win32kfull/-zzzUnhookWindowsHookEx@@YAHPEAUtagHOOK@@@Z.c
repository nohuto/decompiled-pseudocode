/*
 * XREFs of ?zzzUnhookWindowsHookEx@@YAHPEAUtagHOOK@@@Z @ 0x140078E64
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x140077210 (NtUserUnhookWindowsHookEx.c)
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x1402847C4 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 * Callees:
 *     FreeHook @ 0x1400837F0 (FreeHook.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x140083B38 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  __int64 v2; // rdx
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  tagDomLock *v9; // [rsp+50h] [rbp-48h] BYREF
  char v10; // [rsp+58h] [rbp-40h]
  char v11; // [rsp+78h] [rbp-20h]

  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v9);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v2);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        5,
        37,
        (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids,
        (char)a1);
    }
    if ( v11 && v9 )
    {
      if ( v10 )
        tagDomLock::UnLockExclusive(v9);
      else
        tagDomLock::UnLockShared(v9);
    }
    return 0LL;
  }
  else
  {
    FreeHook(a1);
    if ( v11 && v9 )
    {
      if ( v10 )
        tagDomLock::UnLockExclusive(v9);
      else
        tagDomLock::UnLockShared(v9);
    }
    return 1LL;
  }
}
