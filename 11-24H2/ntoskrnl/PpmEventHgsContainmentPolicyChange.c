/*
 * XREFs of PpmEventHgsContainmentPolicyChange @ 0x1405D9324
 * Callers:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404579CC (PpmHeteroHgsEvaluateContainmentDecision.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall PpmEventHgsContainmentPolicyChange(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  char v5; // si
  const EVENT_DESCRIPTOR *v7; // rax
  const EVENT_DESCRIPTOR *v8; // rbx
  unsigned int v10; // [rsp+48h] [rbp-51h] BYREF
  int v11; // [rsp+50h] [rbp-49h] BYREF
  BOOL v12; // [rsp+58h] [rbp-41h] BYREF
  int v13; // [rsp+60h] [rbp-39h] BYREF
  BOOL v14; // [rsp+68h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-21h] BYREF
  int *v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+90h] [rbp-9h]
  int v18; // [rsp+94h] [rbp-5h]
  BOOL *v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A4h] [rbp+Bh]
  int *v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B4h] [rbp+1Bh]
  BOOL *v25; // [rsp+B8h] [rbp+1Fh]
  int v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+C4h] [rbp+2Bh]
  int *v28; // [rsp+C8h] [rbp+2Fh]
  int v29; // [rsp+D0h] [rbp+37h]
  int v30; // [rsp+D4h] [rbp+3Bh]

  v5 = PpmPerfMaxOverrideEnabled;
  v13 = PpmCheckLatencyBoostActive;
  v11 = PpmHeteroPolicy;
  LOBYTE(v7) = PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    v7 = &PPM_ETW_WPS_CONTAINMENT_POLICY_CHANGE_V0;
    v8 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_CONTAINMENT_POLICY_CHANGE_RUNDOWN_V0;
    if ( !a5 )
      v8 = &PPM_ETW_WPS_CONTAINMENT_POLICY_CHANGE_V0;
    if ( PpmEtwRegistered )
    {
      LOBYTE(v7) = EtwEventEnabled(PpmEtwHandle, v8);
      if ( (_BYTE)v7 )
      {
        UserData.Size = 4;
        v17 = 4;
        v20 = 4;
        v12 = v5 != 0;
        v23 = 4;
        v26 = 4;
        v29 = 4;
        UserData.Reserved = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v14 = a4 != 0;
        v10 = ((unsigned int)PpmHeteroHgsContainmentState >> 3) & 1;
        UserData.Ptr = (ULONGLONG)&v10;
        v16 = &v11;
        v19 = &v12;
        v22 = &v13;
        v25 = &v14;
        v28 = &PpmHeteroContainmentPolicy;
        LOBYTE(v7) = EtwWriteEx(PpmEtwHandle, v8, 0LL, 0, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  return (char)v7;
}
