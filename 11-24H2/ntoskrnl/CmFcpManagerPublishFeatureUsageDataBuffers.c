/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A80154
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffersWorker @ 0x1407E4ED0 (CmFcpManagerPublishFeatureUsageDataBuffersWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404C183C (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140668740 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwAlpcDisconnectPort @ 0x1406A74D0 (ZwAlpcDisconnectPort.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x1406F67FC (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 *     ExUnsubscribeWnfStateChange @ 0x140A64A60 (ExUnsubscribeWnfStateChange.c)
 *     CmFcpConnectToAlpcServer @ 0x140A80380 (CmFcpConnectToAlpcServer.c)
 */

NTSTATUS __fastcall CmFcpManagerPublishFeatureUsageDataBuffers(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  int v3; // eax
  NTSTATUS result; // eax
  __int64 v5; // rdx
  HANDLE v6; // rsi
  volatile signed __int64 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 *i; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  Handle = 0LL;
  KeWaitForSingleObject(a1 + 220, Executive, 0, 0, 0LL);
  v2 = (struct _EX_RUNDOWN_REF *)a1[219];
  if ( v2 )
  {
    ExUnsubscribeWnfStateChange(v2);
    a1[219] = 0LL;
  }
  v3 = CmFcpConnectToAlpcServer(&Handle, 0LL);
  if ( v3 == -1073741772 || v3 == -1073740031 )
  {
    result = ZwUpdateWnfStateData((__int64)&WNF_CMFC_FEATURE_USAGE_DATA_PUBLISH_READY, 0LL);
    if ( result < 0 )
    {
LABEL_5:
      v6 = Handle;
      goto LABEL_6;
    }
    LOBYTE(v5) = 1;
    v3 = CmFcpConnectToAlpcServer(&Handle, v5);
  }
  if ( v3 < 0 || v3 == 258 )
  {
    result = CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
    goto LABEL_5;
  }
  v7 = a1 + 175;
  v8 = KeAbPreAcquire((__int64)(a1 + 175), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 350, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 175, (__int64)v8, (__int64)(a1 + 175));
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  for ( i = (__int64 *)a1[170]; i != a1 + 170; i = (__int64 *)*i )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 175);
    KeAbPostRelease((ULONG_PTR)(a1 + 175));
    v6 = Handle;
    if ( (int)CmFcpSendFeatureUsageReportAlpcMessage((__int64)Handle, (__int64)(i + 4), *((_DWORD *)i + 4)) < 0 )
    {
      CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
      goto LABEL_30;
    }
    *((_DWORD *)i + 6) = i[3] & 0xFFFFFFF8 | 2;
    v11 = KeAbPreAcquire((__int64)(a1 + 175), 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 175, (__int64)v11, (__int64)(a1 + 175));
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 175);
  KeAbPostRelease((ULONG_PTR)(a1 + 175));
  v6 = Handle;
LABEL_30:
  result = CmFcpManagerOnFeatureUsageDataTransferComplete((__int64)a1);
LABEL_6:
  if ( v6 )
  {
    ZwAlpcDisconnectPort((__int64)v6, 0LL);
    return ZwClose(v6);
  }
  return result;
}
