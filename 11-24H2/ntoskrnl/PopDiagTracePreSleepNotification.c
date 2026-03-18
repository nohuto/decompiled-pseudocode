/*
 * XREFs of PopDiagTracePreSleepNotification @ 0x140AC7308
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140ACB60C (SshSessionManagerTracePreSleepNotification.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopDiagTracePreSleepNotification(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rsi
  __int64 v9; // r15
  char v10; // di
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-91h]
  int v18; // [rsp+40h] [rbp-71h] BYREF
  int v19; // [rsp+48h] [rbp-69h] BYREF
  int v20; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+60h] [rbp-51h] BYREF
  int *v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h]
  int *v24; // [rsp+80h] [rbp-31h]
  __int64 v25; // [rsp+88h] [rbp-29h]
  int *v26; // [rsp+90h] [rbp-21h]
  __int64 v27; // [rsp+98h] [rbp-19h]
  char *v28; // [rsp+A0h] [rbp-11h]
  __int64 v29; // [rsp+A8h] [rbp-9h]
  int v30; // [rsp+118h] [rbp+67h] BYREF

  v30 = a4;
  v7 = a6;
  v9 = a7;
  v20 = a1;
  v19 = a2;
  v18 = 0;
  if ( PopDiagHandleRegistered )
  {
    v21.Ptr = (ULONGLONG)&v20;
    v18 = a3;
    v22 = &v19;
    *(_QWORD *)&v21.Size = 4LL;
    v24 = &v18;
    v23 = 4LL;
    v26 = &v30;
    v28 = &a5;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 4LL;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PRESLEEP_NOTIFICATION3, 0LL, 5u, &v21);
  }
  PopAcquirePolicyLock(a1, a2);
  v10 = PopLidOpened != 0;
  v11 = PopConsoleExternalDisplayConnected != 0;
  PopReleasePolicyLock(v13, v12, v14, v15, UserData);
  return SshSessionManagerTracePreSleepNotification(
           v20,
           v19,
           a3,
           *(_DWORD *)(v7 + 12),
           *(_DWORD *)(v7 + 8),
           v10,
           v9,
           v11);
}
