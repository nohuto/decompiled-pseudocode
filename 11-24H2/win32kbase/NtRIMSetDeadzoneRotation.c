/*
 * XREFs of NtRIMSetDeadzoneRotation @ 0x1401D4F60
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 */

__int64 __fastcall NtRIMSetDeadzoneRotation(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  v1 = a1;
  if ( !IsInputThread(a1) )
    return 5LL;
  UserSessionState = W32GetUserSessionState(v2);
  RIMLockExclusive(UserSessionState + 40);
  *(_DWORD *)(W32GetUserSessionState(v5) + 272) = v1;
  v7 = W32GetUserSessionState(v6);
  RIMUnlockExclusive(v7 + 40);
  return 0LL;
}
