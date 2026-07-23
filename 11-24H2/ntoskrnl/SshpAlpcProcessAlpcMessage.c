/*
 * XREFs of SshpAlpcProcessAlpcMessage @ 0x14076802C
 * Callers:
 *     SshpAlpcMessageCallback @ 0x140767E40 (SshpAlpcMessageCallback.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14053A44C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1406A82D0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1406A82F0 (ZwAlpcCancelMessage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SshpAlpcProcessMessage @ 0x140768288 (SshpAlpcProcessMessage.c)
 */

__int64 __fastcall SshpAlpcProcessAlpcMessage(PPORT_MESSAGE ConnectionRequest, PALPC_CONTEXT_ATTR MessageContext)
{
  unsigned int v3; // edi
  __int16 Type; // dx
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rbx
  char *v9; // rax
  char *v10; // rbx
  HANDLE v11; // rbx
  unsigned __int8 v13; // [rsp+50h] [rbp-59h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-51h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+90h] [rbp-19h] BYREF

  v3 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  Type = ConnectionRequest->u2.s2.Type;
  *(&ObjectAttributes.Attributes + 1) = 0;
  switch ( (unsigned __int8)Type )
  {
    case 1u:
      goto LABEL_23;
    case 2u:
    case 3u:
      if ( (Type & 0x2000) != 0 )
        return (unsigned int)ZwAlpcCancelMessage(SshpAlpcContext, 0, MessageContext);
LABEL_23:
      SshpAlpcProcessMessage(ConnectionRequest);
      return v3;
    case 5u:
    case 6u:
      v9 = (char *)KeAbPreAcquire((__int64)&stru_140F05E88, 0LL);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05E88, 0LL);
      v10 = v9;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F05E88, v9, (__int64)&stru_140F05E88);
      if ( v10 )
        v10[10] = 1;
      v11 = PortHandle;
      PortHandle = 0LL;
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05E88);
      ZwClose(v11);
      break;
    case 0xAu:
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      memset_0(&PortAttributes, 0, sizeof(PortAttributes));
      PortAttributes.MaxMessageLength = 64LL;
      v6 = (char *)KeAbPreAcquire((__int64)&stru_140F05E88, 0LL);
      v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140F05E88, 0LL);
      v8 = v6;
      if ( v7 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F05E88, v6, (__int64)&stru_140F05E88);
      if ( v8 )
        v8[10] = 1;
      if ( ZwAlpcAcceptConnectPort(
             &PortHandle,
             SshpAlpcContext,
             0,
             &ObjectAttributes,
             &PortAttributes,
             0LL,
             ConnectionRequest,
             0LL,
             PortHandle == 0LL) >= 0 )
      {
        if ( (Feature_SleepStudySlimControlEtl__private_featureState & 0x10) == 0 )
        {
          v13 = Feature_SleepStudySlimControlEtl__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor,
            Feature_SleepStudySlimControlEtl__private_featureState | 1,
            3);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v13,
            3,
            (__int64)&Feature_SleepStudySlimControlEtl__private_descriptor);
        }
      }
      else
      {
        ZwAlpcAcceptConnectPort(
          &PortHandle,
          SshpAlpcContext,
          0,
          &ObjectAttributes,
          &PortAttributes,
          0LL,
          ConnectionRequest,
          0LL,
          0);
      }
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140F05E88);
      break;
  }
  return v3;
}
