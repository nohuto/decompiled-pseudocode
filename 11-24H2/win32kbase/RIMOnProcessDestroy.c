/*
 * XREFs of RIMOnProcessDestroy @ 0x14010F0D0
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x14010F140 (RIMUnregisterCurrentProcessForInput.c)
 */

__int64 __fastcall RIMOnProcessDestroy(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *i; // rdx
  __int64 v7; // rax

  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v4 = (_QWORD *)(W32GetUserSessionState(v3) + 120);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    if ( i[2] == a1 )
      *((_BYTE *)i - 6) = 1;
  }
  v7 = W32GetUserSessionState(v5);
  RIMUnlockExclusive(v7 + 56);
  return RIMUnregisterCurrentProcessForInput();
}
