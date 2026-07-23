/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A8F960
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffersWorker @ 0x1407D5060 (CmFcpManagerPublishFeatureUsageDataBuffersWorker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404C2E14 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x14065CC70 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwAlpcDisconnectPort @ 0x14069C200 (ZwAlpcDisconnectPort.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x1406EAF98 (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 *     ExUnsubscribeWnfStateChange @ 0x140A63170 (ExUnsubscribeWnfStateChange.c)
 *     CmFcpConnectToAlpcServer @ 0x140A8FB5C (CmFcpConnectToAlpcServer.c)
 */

NTSTATUS __fastcall CmFcpManagerPublishFeatureUsageDataBuffers(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  int v3; // eax
  NTSTATUS result; // eax
  __int64 v5; // rdx
  volatile signed __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *i; // r14
  HANDLE v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // rsi
  HANDLE PortHandle; // [rsp+60h] [rbp+8h] BYREF

  PortHandle = 0LL;
  KeWaitForSingleObject(a1 + 220, Executive, 0, 0, 0LL);
  v2 = (struct _EX_RUNDOWN_REF *)a1[219];
  if ( v2 )
  {
    ExUnsubscribeWnfStateChange(v2);
    a1[219] = 0LL;
  }
  v3 = CmFcpConnectToAlpcServer(&PortHandle, 0LL);
  if ( v3 == -1073741772 || v3 == -1073740031 )
  {
    result = ZwUpdateWnfStateData(&WNF_CMFC_FEATURE_USAGE_DATA_PUBLISH_READY, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( result < 0 )
    {
LABEL_29:
      v10 = PortHandle;
      goto LABEL_30;
    }
    LOBYTE(v5) = 1;
    v3 = CmFcpConnectToAlpcServer(&PortHandle, v5);
  }
  if ( v3 < 0 || v3 == 258 )
  {
    result = CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
    goto LABEL_29;
  }
  v6 = a1 + 175;
  v7 = KeAbPreAcquire((__int64)(a1 + 175), 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 350, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 175, v7, (__int64)(a1 + 175));
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  for ( i = (__int64 *)a1[170]; i != a1 + 170; i = (__int64 *)*i )
  {
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 175);
    KeAbPostRelease((ULONG_PTR)(a1 + 175));
    v10 = PortHandle;
    if ( (int)CmFcpSendFeatureUsageReportAlpcMessage(PortHandle, i + 4, *((_DWORD *)i + 4)) < 0 )
    {
      CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
      goto LABEL_27;
    }
    *((_DWORD *)i + 6) = i[3] & 0xFFFFFFF8 | 2;
    v11 = KeAbPreAcquire((__int64)(a1 + 175), 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 175, v11, (__int64)(a1 + 175));
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 175);
  KeAbPostRelease((ULONG_PTR)(a1 + 175));
  v10 = PortHandle;
LABEL_27:
  result = CmFcpManagerOnFeatureUsageDataTransferComplete((__int64)a1);
LABEL_30:
  if ( v10 )
  {
    ZwAlpcDisconnectPort(v10, 0);
    return ZwClose(v10);
  }
  return result;
}
