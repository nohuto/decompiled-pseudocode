/*
 * XREFs of ExpTimerInitialization @ 0x140C44DD8
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 */

bool ExpTimerInitialization()
{
  unsigned int v0; // edi
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // r8d
  int *v6; // rdx
  unsigned int v7; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  __int16 v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+38h] [rbp-31h]
  __int128 v12; // [rsp+3Ch] [rbp-2Dh]
  int v13; // [rsp+4Ch] [rbp-1Dh]
  int v14; // [rsp+54h] [rbp-15h]
  int v15; // [rsp+5Ch] [rbp-Dh]
  void *v16; // [rsp+78h] [rbp+Fh]

  v0 = 0;
  qword_140EFA978 = (__int64)&ExpWakeTimerList;
  ExpWakeTimerLock = 0LL;
  ExpWakeTimerList = (__int64)&ExpWakeTimerList;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Timer");
  memset_0(&v10, 0, 0x78uLL);
  v10 = 120;
  v11 = 256;
  v14 = 512;
  v15 = 328;
  v13 = 2031619;
  v12 = ExpTimerMapping;
  v16 = ExpDeleteTimer;
  v1 = ObCreateObjectType(&DestinationString, &v10, 0LL, (__int64)&ExTimerObjectType);
  if ( v1 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IRTimer");
    v15 = 168;
    v16 = ExpDeleteTimer2;
    v1 = ObCreateObjectType(&DestinationString, &v10, 0LL, (__int64)&ExpIRTimerObjectType);
    ExpTimerFreedCookie = ExGenRandom(0, v2, v3, v4);
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
    *(_DWORD *)&DestinationString.Length = Feature_AusterityResilientTimers__private_featureState;
    if ( (Feature_AusterityResilientTimers__private_featureState & 0x10) == 0 )
    {
      *(_DWORD *)&DestinationString.Length = Feature_AusterityResilientTimers__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_AusterityResilientTimers__private_descriptor,
        Feature_AusterityResilientTimers__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        DestinationString.Length,
        3,
        (__int64)&Feature_AusterityResilientTimers__private_descriptor);
    }
    v5 = ExpAusterityResilientTimerComponentMask;
    ExAusterityResilientTimersEnabled = 1;
    if ( ExpAusterityResilientTimerComponentMask )
    {
      v6 = (int *)&unk_140E093D4;
      do
      {
        v7 = v5 >> v0++;
        *v6 = v7 & 1;
        v6 += 6;
      }
      while ( v0 < 0x14 );
    }
  }
  return v1 >= 0;
}
