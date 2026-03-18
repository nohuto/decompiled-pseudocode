/*
 * XREFs of RIMArmWatchDog @ 0x1400EF74C
 * Callers:
 *     RIMWatchDog @ 0x14005AC20 (RIMWatchDog.c)
 * Callees:
 *     <none>
 */

char __fastcall RIMArmWatchDog(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 176) )
  {
    UserSessionState = W32GetUserSessionState(v2);
    if ( !*(_BYTE *)(UserSessionState + 170) )
    {
      *(_BYTE *)(W32GetUserSessionState(v3) + 170) = 1;
      v5 = W32GetUserSessionState(v4);
      LOBYTE(UserSessionState) = KeSetTimer(*(PKTIMER *)(v5 + 176), (LARGE_INTEGER)-50000000LL, 0LL);
    }
  }
  return UserSessionState;
}
