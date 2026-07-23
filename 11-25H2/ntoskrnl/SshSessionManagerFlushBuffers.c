/*
 * XREFs of SshSessionManagerFlushBuffers @ 0x1407568A8
 * Callers:
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     SSHSupportReleasePushLockExclusive @ 0x140489C20 (SSHSupportReleasePushLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A294 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A324 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 */

void SshSessionManagerFlushBuffers()
{
  __int64 *v0; // rax
  signed __int8 v1; // cf
  __int64 *v2; // rbx
  bool v3; // bl
  __int64 *v4; // rax
  __int64 *v5; // rbx
  NTSTATUS v6; // edi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  LARGE_INTEGER Timeout; // [rsp+58h] [rbp+10h] BYREF

  v0 = KeAbPreAcquire((__int64)&stru_140F05788, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05788, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F05788, v0, (__int64)&stru_140F05788);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  v3 = PortHandle != 0LL;
  SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05788);
  if ( v3 )
  {
    v4 = KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL);
    v5 = v4;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v4, (__int64)&SshpSessionManagerLock);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    do
    {
      if ( !(_DWORD)dword_140F059C8 )
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
      v6 = KeWaitForSingleObject(&stru_140F059B0, Executive, 0, 0, &Timeout);
      v7 = KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
      v1 = _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL);
      v8 = v7;
      if ( v1 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v7, (__int64)&SshpSessionManagerLock);
      if ( v8 )
        *((_BYTE *)v8 + 10) = 1;
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
