/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x140093130
 * Callers:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x140041720 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x140085E5C (xxxProcessTSFEvent.c)
 */

void __fastcall xxxFlushDeferredWindowEvents(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  unsigned int CurrentThreadId; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rdx
  bool v11; // zf

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42384)) != 1 )
    __int2c();
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = (__int64 *)(W32GetUserSessionState(v5, v4) + 70864);
  v8 = *v6;
  while ( (__int64 *)v8 != v6 )
  {
    v9 = *(_DWORD *)(v8 + 56);
    if ( (v9 & 2) != 0 && *(_DWORD *)(v8 + 48) == CurrentThreadId )
    {
      v10 = v9 & 0xFFFFFFFD;
      v11 = *(_DWORD *)(v8 + 24) == 0;
      *(_DWORD *)(v8 + 56) = v10;
      if ( v11 )
        xxxProcessNotifyWinEvent(v8, v10, v7);
      else
        xxxProcessTSFEvent((struct tagNOTIFY *)v8, v10);
      v8 = *v6;
    }
    else
    {
      v8 = *(_QWORD *)v8;
    }
  }
}
