/*
 * XREFs of PpmEventHeteroPolicy @ 0x140A7C764
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventHeteroPolicy(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  unsigned __int64 v4; // [rsp+30h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-59h] BYREF
  int *v6; // [rsp+50h] [rbp-49h]
  __int64 v7; // [rsp+58h] [rbp-41h]
  int *v8; // [rsp+60h] [rbp-39h]
  __int64 v9; // [rsp+68h] [rbp-31h]
  void *v10; // [rsp+70h] [rbp-29h]
  __int64 v11; // [rsp+78h] [rbp-21h]
  int *v12; // [rsp+80h] [rbp-19h]
  __int64 v13; // [rsp+88h] [rbp-11h]
  void *v14; // [rsp+90h] [rbp-9h]
  __int64 v15; // [rsp+98h] [rbp-1h]
  int *v16; // [rsp+A0h] [rbp+7h]
  __int64 v17; // [rsp+A8h] [rbp+Fh]
  int *v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  int *v20; // [rsp+C0h] [rbp+27h]
  __int64 v21; // [rsp+C8h] [rbp+2Fh]
  unsigned __int64 *v22; // [rsp+D0h] [rbp+37h]
  __int64 v23; // [rsp+D8h] [rbp+3Fh]

  v1 = &PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED;
  v4 = 0LL;
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_HETEROGENEOUS_POLICIES_RUNDOWN;
  if ( !a1 )
    v2 = &PPM_ETW_HETEROGENEOUS_POLICIES_CHANGED;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      UserData.Ptr = (ULONGLONG)&PpmHeteroPolicy;
      v6 = &PopHeteroSystem;
      v8 = &KiDesiredHeteroCpuPolicy;
      v10 = &unk_140FC5474;
      v12 = &KiDynamicHeteroCpuPolicyMask;
      v14 = &unk_140FC5464;
      v16 = KiDynamicHeteroCpuPolicy;
      v18 = &KiDynamicHeteroCpuPolicyImportantPriority;
      v20 = &KiDynamicHeteroCpuPolicyExpectedRuntime;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = 4LL;
      v9 = 4LL;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v4 = v4 & 0xFFFFFFFFFFF800LL | PpmHeteroHgsEnabled & 1 | (2
                                                              * (PpmHeteroHgsThreadEnabled & 1 | (2
                                                                                                * (PpmHeteroHgsThreadDisabled & 1 | (2 * (PpmHeteroHgsDynamicUpdateEnabled & 1 | (2 * (PpmHeteroHgsDynamicUpdateReasonEnabled & 1 | (2 * (PpmHeteroHgsParkingEnabled & 1 | (2 * (PpmHeteroHgsParkingHintEnabled & 1 | (2 * (PpmHeteroHgsContainmentState & 2 | PpmHeteroHgsContainmentState & 4 | PpmHeteroHgsEePerfHintsIndependentEnabled & 1 | ((unsigned __int64)(unsigned __int8)PpmHeteroHgsVendor << 53) | (8 * (PpmHeteroWpsContainmentEnumOverride & 1 | ((unsigned __int64)(PpmHeteroHgsCapabilityBits & 0xF) << 46)))))))))))))))));
      v22 = &v4;
      v23 = 8LL;
      LOBYTE(v1) = EtwWrite(PpmEtwHandle, v2, 0LL, 0xAu, &UserData);
    }
  }
  return (char)v1;
}
