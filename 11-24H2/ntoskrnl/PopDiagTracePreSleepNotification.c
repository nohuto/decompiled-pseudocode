/*
 * XREFs of PopDiagTracePreSleepNotification @ 0x140AC4D5C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140AC9248 (SshSessionManagerTracePreSleepNotification.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
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
  char v8; // bl
  __int64 v10; // r12
  char v11; // r14
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-A1h]
  int v19; // [rsp+50h] [rbp-71h] BYREF
  int v20; // [rsp+58h] [rbp-69h] BYREF
  int v21; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-51h] BYREF
  int *v23; // [rsp+80h] [rbp-41h]
  __int64 v24; // [rsp+88h] [rbp-39h]
  int *v25; // [rsp+90h] [rbp-31h]
  __int64 v26; // [rsp+98h] [rbp-29h]
  int *v27; // [rsp+A0h] [rbp-21h]
  __int64 v28; // [rsp+A8h] [rbp-19h]
  char *v29; // [rsp+B0h] [rbp-11h]
  __int64 v30; // [rsp+B8h] [rbp-9h]
  int v31; // [rsp+128h] [rbp+67h] BYREF

  v31 = a4;
  v7 = a6;
  v8 = 0;
  v10 = a7;
  v21 = a1;
  v20 = a2;
  v19 = 0;
  if ( PopDiagHandleRegistered )
  {
    v22.Ptr = (ULONGLONG)&v21;
    v19 = a3;
    v23 = &v20;
    *(_QWORD *)&v22.Size = 4LL;
    v25 = &v19;
    v24 = 4LL;
    v27 = &v31;
    v29 = &a5;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PRESLEEP_NOTIFICATION3, 0LL, 5u, &v22);
  }
  PopAcquirePolicyLock(a1, a2);
  v11 = PopLidOpened != 0;
  v12 = PopConsoleExternalDisplayConnected != 0;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v12 )
    {
      LOBYTE(v14) = PopUsb4DisplayPresent != 0 ? 2 : 0;
      v8 = v14 + 1;
    }
    else if ( PopUsb4DisplayPresent )
    {
      v12 = 1;
      v8 = 2;
    }
  }
  PopReleasePolicyLock(v14, v13, v15, v16, UserData);
  return SshSessionManagerTracePreSleepNotification(
           v21,
           v20,
           a3,
           *(_DWORD *)(v7 + 12),
           *(_DWORD *)(v7 + 8),
           v11,
           v10,
           v12,
           v8);
}
