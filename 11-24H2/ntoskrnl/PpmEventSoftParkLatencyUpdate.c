/*
 * XREFs of PpmEventSoftParkLatencyUpdate @ 0x1405D6F30
 * Callers:
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventSoftParkLatencyUpdate(char a1, char a2, int a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  BOOL v7; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]
  int v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = a3;
  v3 = &PPM_ETW_SOFT_PARK_LATENCY_UPDATE;
  v4 = (const EVENT_DESCRIPTOR *)PPM_ETW_HIGH_PERF_SOFT_PARK_LATENCY_RUNDOWN;
  if ( !a1 )
    v4 = &PPM_ETW_SOFT_PARK_LATENCY_UPDATE;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Size = 4;
      v10 = 4;
      UserData.Reserved = 0;
      v11 = 0;
      v7 = a2 != 0;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = &v12;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, v4, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
