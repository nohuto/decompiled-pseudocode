/*
 * XREFs of ExpTimerInitialization @ 0x140C42C88
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObCreateObjectType @ 0x1406FBAA0 (ObCreateObjectType.c)
 */

bool ExpTimerInitialization()
{
  unsigned int v0; // edi
  int v1; // ebx
  unsigned int v2; // r8d
  int *v3; // rdx
  unsigned int v4; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  __int16 v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+38h] [rbp-31h]
  __int128 v9; // [rsp+3Ch] [rbp-2Dh]
  int v10; // [rsp+4Ch] [rbp-1Dh]
  int v11; // [rsp+54h] [rbp-15h]
  int v12; // [rsp+5Ch] [rbp-Dh]
  void *v13; // [rsp+78h] [rbp+Fh]

  v0 = 0;
  qword_140EFA658 = (__int64)&ExpWakeTimerList;
  ExpWakeTimerLock = 0LL;
  ExpWakeTimerList = (__int64)&ExpWakeTimerList;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Timer");
  memset_0(&v7, 0, 0x78uLL);
  v7 = 120;
  v8 = 256;
  v11 = 512;
  v12 = 328;
  v10 = 2031619;
  v9 = ExpTimerMapping;
  v13 = ExpDeleteTimer;
  v1 = ObCreateObjectType(&DestinationString, &v7, 0LL, (__int64)&ExTimerObjectType);
  if ( v1 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IRTimer");
    v12 = 168;
    v13 = ExpDeleteTimer2;
    v1 = ObCreateObjectType(&DestinationString, &v7, 0LL, (__int64)&ExpIRTimerObjectType);
    ExpTimerFreedCookie = ExGenRandom(0);
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
    v2 = ExpAusterityResilientTimerComponentMask;
    ExAusterityResilientTimersEnabled = 1;
    if ( ExpAusterityResilientTimerComponentMask )
    {
      v3 = (int *)&unk_140E09364;
      do
      {
        v4 = v2 >> v0++;
        *v3 = v4 & 1;
        v3 += 6;
      }
      while ( v0 < 0x14 );
    }
  }
  return v1 >= 0;
}
