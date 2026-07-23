/*
 * XREFs of PpmEventStaticPolicyRundownEx @ 0x140765838
 * Callers:
 *     PpmEventStaticPolicyRundown @ 0x140AC8358 (PpmEventStaticPolicyRundown.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PpmEventStaticPolicyRundownEx()
{
  int v0; // ecx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v5; // [rsp+50h] [rbp-B0h]
  __int64 v6; // [rsp+58h] [rbp-A8h]
  int *v7; // [rsp+60h] [rbp-A0h]
  __int64 v8; // [rsp+68h] [rbp-98h]
  int *v9; // [rsp+70h] [rbp-90h]
  __int64 v10; // [rsp+78h] [rbp-88h]
  int *v11; // [rsp+80h] [rbp-80h]
  __int64 v12; // [rsp+88h] [rbp-78h]
  int *v13; // [rsp+90h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-68h]
  int *v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  int *v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+B8h] [rbp-48h]
  int *v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]
  int *v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  int *v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  __int16 *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  int *v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  int *v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  int *v31; // [rsp+120h] [rbp+20h]
  __int64 v32; // [rsp+128h] [rbp+28h]

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_STATIC_POLICY_RUNDOWN) )
  {
    v0 = PpmPerfQosTransitionHysteresisOverride;
    UserData.Ptr = (ULONGLONG)&PpmPerfBoostAtGuaranteed;
    v1 = 0;
    v5 = &PpmPerfIdealAggressiveIncreaseThreshold;
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = &PpmPerfSingleStepSize;
    v6 = 4LL;
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v0 = PpmPerfQosTransitionHysteresis;
    v9 = &PpmPerfCalculateActualUtilization;
    v11 = &PpmPerfArtificialDomainEnabled;
    v13 = &v1;
    v15 = &PpmParkSmtUnparkingPolicy;
    v17 = &PpmParkMultiparkGranularity;
    v19 = &PpmPerfQosManageIdleProcessors;
    v21 = &v2;
    v23 = &PpmHeteroFavoredCoreRotationTimeoutMs;
    v25 = &PpmParkGranularity;
    v3 = (unsigned __int8)PpmParkUnparkCores;
    v27 = &v3;
    v29 = &PpmHeteroMultiCoreClassesEnabled;
    v31 = &PpmHeteroMultiClassParkingEnabled;
    v2 = v0;
    v8 = 4LL;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 2LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    EtwWrite(PpmEtwHandle, &PPM_ETW_STATIC_POLICY_RUNDOWN, 0LL, 0xFu, &UserData);
  }
}
