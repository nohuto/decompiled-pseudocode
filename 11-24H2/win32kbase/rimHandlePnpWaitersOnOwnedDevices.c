/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x14017DFC4
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14014F08C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x14019C4C4 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD **v7; // r14
  _QWORD *i; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  char v13; // r12
  bool v14; // r13
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  RIMLockExclusive(UserSessionState + 56);
  v7 = (_QWORD **)(W32GetUserSessionState(v5) + 136);
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (__int64)(i + 13);
    if ( i == (_QWORD *)16 )
      v9 = 48LL;
    v6 = *(unsigned int *)v9;
    if ( (_DWORD)v6 == v2 || v2 == 2 && (_DWORD)v6 == 3 )
    {
      v10 = (__int64)(i + 47);
      v6 = 320LL;
      if ( i == (_QWORD *)16 )
        v10 = 320LL;
      if ( *(_QWORD *)v10 == v3 )
      {
        v11 = (__int64)(i + 28);
        if ( i == (_QWORD *)16 )
          v11 = 168LL;
        if ( (*(_DWORD *)v11 & 0x10) != 0 )
        {
          v12 = (__int64)(i + 44);
          if ( i == (_QWORD *)16 )
            v12 = 296LL;
          if ( !*(_QWORD *)v12 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1637LL);
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v13 = 0;
          }
          v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v3 = a1;
          }
          else
          {
            v15 = W32GetUserSessionState(32LL);
            LOBYTE(v16) = v14;
            LOBYTE(v17) = v13;
            v3 = a1;
            WPP_RECORDER_AND_TRACE_SF_qqq(*((_QWORD *)WPP_GLOBAL_Control + 3), v17, v16, *(_QWORD *)(v15 + 19392));
            v2 = a2;
          }
          *(_DWORD *)v11 &= ~0x10u;
          v18 = (__int64)(i + 49);
          if ( i == (_QWORD *)16 )
            v18 = 336LL;
          KeSetEvent(*(PRKEVENT *)v18, 1, 0);
        }
      }
    }
  }
  v19 = W32GetUserSessionState(v6);
  RIMUnlockExclusive(v19 + 56);
}
