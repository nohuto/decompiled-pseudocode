/*
 * XREFs of PpmEventQosSupport @ 0x140A88084
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventQosSupport(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  BOOL v4; // [rsp+30h] [rbp-40h] BYREF
  BOOL v5; // [rsp+34h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  BOOL *v7; // [rsp+48h] [rbp-28h]
  int v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+54h] [rbp-1Ch]
  int *v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+64h] [rbp-Ch]

  v1 = &PPM_ETW_QOS_SUPPORT_CHANGED;
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_QOS_SUPPORT_RUNDOWN;
  if ( !a1 )
    v2 = &PPM_ETW_QOS_SUPPORT_CHANGED;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      UserData.Size = 4;
      v8 = 4;
      v4 = PpmPerfSchedulerDirectedPerfStatesSupported != 0;
      v11 = 4;
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v5 = PpmPerfQosEnabled != 0;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = &v5;
      v10 = &PpmPerfQosDisableReasons;
      LOBYTE(v1) = EtwWrite(PpmEtwHandle, v2, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}
