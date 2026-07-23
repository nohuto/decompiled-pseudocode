/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A7ABB4
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffersWorker @ 0x1407E54A0 (CmFcpManagerPublishFeatureUsageDataBuffersWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404BCE2C (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140667030 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwAlpcDisconnectPort @ 0x1406A8470 (ZwAlpcDisconnectPort.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x1406F47FC (CmFcpManagerOnFeatureUsageDataTransferComplete.c)
 *     ExUnsubscribeWnfStateChange @ 0x140A5D360 (ExUnsubscribeWnfStateChange.c)
 *     CmFcpConnectToAlpcServer @ 0x140A7ADE0 (CmFcpConnectToAlpcServer.c)
 */

NTSTATUS __fastcall CmFcpManagerPublishFeatureUsageDataBuffers(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  int v3; // eax
  NTSTATUS result; // eax
  __int64 v5; // rdx
  HANDLE v6; // rsi
  volatile signed __int64 *v7; // rdi
  char *v8; // rax
  char *v9; // rbx
  __int64 *i; // r14
  char *v11; // rax
  char *v12; // rsi
  HANDLE PortHandle; // [rsp+60h] [rbp+8h] BYREF

  PortHandle = 0LL;
  KeWaitForSingleObject(a1 + 229, Executive, 0, 0, 0LL);
  v2 = (struct _EX_RUNDOWN_REF *)a1[228];
  if ( v2 )
  {
    ExUnsubscribeWnfStateChange(v2);
    a1[228] = 0LL;
  }
  v3 = CmFcpConnectToAlpcServer(&PortHandle, 0LL);
  if ( v3 == -1073741772 || v3 == -1073740031 )
  {
    result = ZwUpdateWnfStateData(&WNF_CMFC_FEATURE_USAGE_DATA_PUBLISH_READY, 0LL, 0, 0LL, 0LL, 0, 0);
    if ( result < 0 )
    {
LABEL_5:
      v6 = PortHandle;
      goto LABEL_6;
    }
    LOBYTE(v5) = 1;
    v3 = CmFcpConnectToAlpcServer(&PortHandle, v5);
  }
  if ( v3 < 0 || v3 == 258 )
  {
    result = CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
    goto LABEL_5;
  }
  v7 = a1 + 184;
  v8 = (char *)KeAbPreAcquire((__int64)(a1 + 184), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 368, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 184, v8, (__int64)(a1 + 184));
  if ( v9 )
    v9[10] = 1;
  for ( i = (__int64 *)a1[179]; i != a1 + 179; i = (__int64 *)*i )
  {
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 184);
    KeAbPostRelease((ULONG_PTR)(a1 + 184));
    v6 = PortHandle;
    if ( (int)CmFcpSendFeatureUsageReportAlpcMessage(PortHandle, i + 4, *((_DWORD *)i + 4)) < 0 )
    {
      CmFcpManagerArmFeatureUsageProviderPublishTimer((__int64)a1);
      goto LABEL_30;
    }
    *((_DWORD *)i + 6) = i[3] & 0xFFFFFFF8 | 2;
    v11 = (char *)KeAbPreAcquire((__int64)(a1 + 184), 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 184, v11, (__int64)(a1 + 184));
    if ( v12 )
      v12[10] = 1;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 184);
  KeAbPostRelease((ULONG_PTR)(a1 + 184));
  v6 = PortHandle;
LABEL_30:
  result = CmFcpManagerOnFeatureUsageDataTransferComplete((__int64)a1);
LABEL_6:
  if ( v6 )
  {
    ZwAlpcDisconnectPort(v6, 0);
    return ZwClose(v6);
  }
  return result;
}
