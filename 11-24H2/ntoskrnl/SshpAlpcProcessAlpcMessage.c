/*
 * XREFs of SshpAlpcProcessAlpcMessage @ 0x140767E0C
 * Callers:
 *     SshpAlpcMessageCallback @ 0x140767C20 (SshpAlpcMessageCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14048939C (SSHSupportReleasePushLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053CAC4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053CB54 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1406A7330 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1406A7350 (ZwAlpcCancelMessage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SshpAlpcProcessMessage @ 0x140768068 (SshpAlpcProcessMessage.c)
 */

__int64 __fastcall SshpAlpcProcessAlpcMessage(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  _QWORD *v11; // rax
  signed __int8 v12; // cf
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  HANDLE v16; // rbx
  unsigned __int8 v18; // [rsp+50h] [rbp-59h]
  char v19[16]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-9h]

  v3 = 0;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (*(unsigned __int16 *)(a1 + 4) & 0xFFFF00FF) - 1;
  if ( !v6 )
    goto LABEL_23;
  v7 = v6 - 1;
  if ( !v7 || (v8 = v7 - 1) == 0 )
  {
    if ( (v5 & 0x2000) != 0 )
      return (unsigned int)ZwAlpcCancelMessage(SshpAlpcContext, 0LL);
LABEL_23:
    SshpAlpcProcessMessage(a1, v5, a2);
    return v3;
  }
  v9 = v8 - 2;
  if ( v9 && (v10 = v9 - 1) != 0 )
  {
    if ( v10 == 4 )
    {
      memset_0(v19, 0, 0x48uLL);
      v20 = 64LL;
      v11 = KeAbPreAcquire((__int64)&stru_140F05BA8, 0LL);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05BA8, 0LL);
      v13 = v11;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&stru_140F05BA8, (__int64)v11, (__int64)&stru_140F05BA8);
      if ( v13 )
        *((_BYTE *)v13 + 10) = 1;
      if ( (int)ZwAlpcAcceptConnectPort((__int64)&qword_140F05BB0, SshpAlpcContext) >= 0 )
      {
        if ( (Feature_SleepStudySlimControlEtl__private_featureState & 0x10) == 0 )
        {
          v18 = Feature_SleepStudySlimControlEtl__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor,
            Feature_SleepStudySlimControlEtl__private_featureState | 1,
            3);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v18,
            3,
            (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor);
        }
      }
      else
      {
        ZwAlpcAcceptConnectPort((__int64)&qword_140F05BB0, SshpAlpcContext);
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05BA8);
    }
  }
  else
  {
    v14 = KeAbPreAcquire((__int64)&stru_140F05BA8, 0LL);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05BA8, 0LL);
    v15 = v14;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(&stru_140F05BA8, (__int64)v14, (__int64)&stru_140F05BA8);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    v16 = qword_140F05BB0;
    qword_140F05BB0 = 0LL;
    SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05BA8);
    ZwClose(v16);
  }
  return v3;
}
