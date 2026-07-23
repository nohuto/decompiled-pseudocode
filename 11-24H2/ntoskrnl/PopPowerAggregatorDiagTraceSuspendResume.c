/*
 * XREFs of PopPowerAggregatorDiagTraceSuspendResume @ 0x140A9D860
 * Callers:
 *     PopPowerAggregatorNotifySuspendResume @ 0x140A9D7B8 (PopPowerAggregatorNotifySuspendResume.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopPowerAggregatorDiagTraceSuspendResume(unsigned __int8 a1, int a2)
{
  int *v2; // rax
  int v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]
  int v9; // [rsp+78h] [rbp+10h] BYREF

  v9 = a2;
  v4 = a1;
  UserData.Ptr = (ULONGLONG)&v4;
  v2 = &v9;
  UserData.Reserved = 0;
  UserData.Size = 4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_SUSPEND_RESUME, 0LL, 2u, &UserData);
  }
  return (char)v2;
}
