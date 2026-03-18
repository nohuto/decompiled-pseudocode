/*
 * XREFs of CmFcpManagerDrainUsageNotifications @ 0x140A3082C
 * Callers:
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x1407D474C (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerRetryUsageNotificationsWorker @ 0x1407D5200 (CmFcpManagerRetryUsageNotificationsWorker.c)
 *     CmFcpManagerSoftwareHiveReady @ 0x1407D52C0 (CmFcpManagerSoftwareHiveReady.c)
 *     CmFcpManagerDrainUsageNotificationsWorker @ 0x140A30780 (CmFcpManagerDrainUsageNotificationsWorker.c)
 * Callees:
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403B7F5C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403B8688 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x14065CCCC (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     RtlUpdateSwapReference @ 0x140A308D0 (RtlUpdateSwapReference.c)
 *     RtlpFcDrainDelayedUsageReportBuffer @ 0x140A30940 (RtlpFcDrainDelayedUsageReportBuffer.c)
 */

__int64 __fastcall CmFcpManagerDrainUsageNotifications(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // edx
  __int64 result; // rax
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0;
  v5 = (_QWORD *)(a1 + 376);
  v6 = *v5 & 1LL;
  RtlUpdateSwapReference(v5, ((_BYTE)v6 - 1) & 1, a3);
  RtlpFcBufferManagerReferenceBuffers(a1 + 136, (__int64)&v12, &v11);
  v7 = v11;
  LOBYTE(v8) = a2;
  RtlpFcDrainDelayedUsageReportBuffer(
    *(_QWORD *)(a1 + 8 * v6 + 416),
    v8,
    *(_QWORD *)(v11 + 56),
    *(_QWORD *)(v11 + 64),
    (__int64)&v10);
  result = RtlpFcBufferManagerDereferenceBuffers(a1 + 136, v7);
  if ( v10 )
    return CmFcpManagerArmFeatureUsageRetryTimer(a1);
  return result;
}
