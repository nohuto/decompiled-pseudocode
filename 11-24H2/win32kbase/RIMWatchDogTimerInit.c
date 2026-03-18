/*
 * XREFs of RIMWatchDogTimerInit @ 0x1401D38C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 88);
  v4 = W32GetUserSessionState(v3);
  if ( a1 )
  {
    *(_QWORD *)(v4 + 176) = a1;
  }
  else
  {
    *(_QWORD *)(v4 + 176) = 0LL;
    *(_BYTE *)(W32GetUserSessionState(v5) + 170) = 0;
  }
  v6 = W32GetUserSessionState(v5);
  RIMUnlockExclusive(v6 + 88);
}
