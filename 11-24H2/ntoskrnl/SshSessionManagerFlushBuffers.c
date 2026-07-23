/*
 * XREFs of SshSessionManagerFlushBuffers @ 0x140766288
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 */

void SshSessionManagerFlushBuffers()
{
  char *v0; // rax
  signed __int8 v1; // cf
  char *v2; // rbx
  bool v3; // bl
  char *v4; // rax
  char *v5; // rbx
  NTSTATUS v6; // edi
  char *v7; // rax
  char *v8; // rbx
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+10h] BYREF

  v0 = (char *)KeAbPreAcquire((__int64)&stru_140F05E88, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05E88, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F05E88, v0, (__int64)&stru_140F05E88);
  if ( v2 )
    v2[10] = 1;
  v3 = PortHandle != 0LL;
  SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05E88);
  if ( v3 )
  {
    v4 = (char *)KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL);
    v5 = v4;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v4, (__int64)&SshpSessionManagerLock);
    if ( v5 )
      v5[10] = 1;
    do
    {
      if ( !(_DWORD)dword_140F060C8 )
        break;
      Timeout.QuadPart = (unsigned int)Feature_SleepStudySlimControlEtl__private_featureState;
      if ( (Feature_SleepStudySlimControlEtl__private_featureState & 0x10) == 0 )
      {
        Timeout.LowPart = Feature_SleepStudySlimControlEtl__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor,
          Feature_SleepStudySlimControlEtl__private_featureState | 1,
          3);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          Timeout.LowPart,
          3,
          (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor);
      }
      if ( !FileHandle )
        break;
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
      Timeout.QuadPart = -10000000LL;
      v6 = KeWaitForSingleObject(&stru_140F060B0, Executive, 0, 0, &Timeout);
      v7 = (char *)KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
      v1 = _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL);
      v8 = v7;
      if ( v1 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v7, (__int64)&SshpSessionManagerLock);
      if ( v8 )
        v8[10] = 1;
    }
    while ( v6 >= 0 );
    Timeout.QuadPart = (unsigned int)Feature_SleepStudySlimControlEtl__private_featureState;
    if ( (Feature_SleepStudySlimControlEtl__private_featureState & 0x10) == 0 )
    {
      Timeout.LowPart = Feature_SleepStudySlimControlEtl__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor,
        Feature_SleepStudySlimControlEtl__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        Timeout.LowPart,
        3,
        (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor);
    }
    if ( FileHandle )
    {
      ZwClose(FileHandle);
      FileHandle = 0LL;
    }
    SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
    Timeout.QuadPart = (unsigned int)Feature_SleepStudySlimControlEtl__private_featureState;
    if ( (Feature_SleepStudySlimControlEtl__private_featureState & 0x10) == 0 )
    {
      Timeout.LowPart = Feature_SleepStudySlimControlEtl__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor,
        Feature_SleepStudySlimControlEtl__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        Timeout.LowPart,
        3,
        (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor);
    }
  }
}
