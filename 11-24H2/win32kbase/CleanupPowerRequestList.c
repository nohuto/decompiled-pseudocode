/*
 * XREFs of CleanupPowerRequestList @ 0x140151360
 * Callers:
 *     CleanupResources @ 0x1401B7088 (CleanupResources.c)
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1400E9AF0 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401AD8F0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1401AD9E8 (-CleanupPowerWatchdog@@YAXPEAPEAX@Z.c)
 */

void __fastcall CleanupPowerRequestList(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  struct tagPOWERREQUEST *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  *(_DWORD *)(W32GetUserSessionState(a1) + 2732) = 1;
  if ( *(_QWORD *)(W32GetUserSessionState(v1) + 520) )
  {
    UserSessionState = W32GetUserSessionState(v2);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 520));
    *(_QWORD *)(W32GetUserSessionState(v4) + 520) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v2) + 512) )
  {
    while ( 1 )
    {
      v5 = UnqueuePowerRequest();
      if ( !v5 )
        break;
      CancelPowerRequest(v5);
    }
    v7 = W32GetUserSessionState(v6);
    CleanupPowerWatchdog((void **)(v7 + 544));
    v9 = W32GetUserSessionState(v8);
    CleanupPowerWatchdog((void **)(v9 + 552));
  }
}
