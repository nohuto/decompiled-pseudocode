/*
 * XREFs of rimDestroyDeadzone @ 0x140125368
 * Callers:
 *     RIMInitializeDeadzone @ 0x140124D60 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1401E0D90 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1401254D0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void __fastcall rimDestroyDeadzone(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 40);
  if ( *(_QWORD *)(W32GetUserSessionState(v2) + 256) )
  {
    v4 = W32GetUserSessionState(v3);
    RIMDeadzone::Release(*(RIMDeadzone **)(v4 + 256));
    v3 = *(_QWORD *)(W32GetUserSessionState(v5) + 256);
    if ( !*(_DWORD *)(v3 + 4) )
    {
      v6 = W32GetUserSessionState(v3);
      GreDeleteFastMutex(*(char **)(v6 + 256));
      *(_QWORD *)(W32GetUserSessionState(v7) + 256) = 0LL;
    }
  }
  v8 = W32GetUserSessionState(v3);
  RIMUnlockExclusive(v8 + 40);
}
