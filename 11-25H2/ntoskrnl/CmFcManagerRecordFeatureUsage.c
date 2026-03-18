/*
 * XREFs of CmFcManagerRecordFeatureUsage @ 0x1403B8E68
 * Callers:
 *     RtlRecordFeatureUsage @ 0x1403BA010 (RtlRecordFeatureUsage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     RtlAcquireSwapReference @ 0x1403B8A54 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403B8C2C (RtlReleaseSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x1403B8F90 (RtlpFcAddFeatureUsageDataToBuffer.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1403B9F84 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 */

void __fastcall CmFcManagerRecordFeatureUsage(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned int v9; // eax
  char v10; // bl
  __int64 v11; // r15
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v14; // edx
  char v15; // al
  char v16; // dl
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = a3;
  v4 = 0;
  CurrentIrql = ObGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v6 = (unsigned int)RtlAcquireSwapReference(qword_140EF6F10);
  v7 = CmFcSystemManager[v6 + 165];
  if ( !v7 )
  {
    RtlReleaseSwapReference(qword_140EF6F10, v6);
    goto LABEL_7;
  }
  v8 = (*(_DWORD *)(v7 + 28) >> 1) + (*(_DWORD *)(v7 + 28) >> 2);
  v9 = RtlpFcAddFeatureUsageDataToBuffer(v7, a2, &v17);
  v10 = dword_140EF7230;
  v11 = v9;
  RtlReleaseSwapReference(qword_140EF6F10, v6);
  if ( (unsigned int)v11 >= v8 || (v12 = v17 + v11, v8 > (unsigned __int64)(v17 + v11)) )
  {
    if ( (v10 & 0x20) == 0 )
      CmFcpManagerArmFeatureUsageProviderFlushNotification(v12, 1LL);
  }
  else
  {
    if ( dword_140EF7260 != 1 )
      goto LABEL_7;
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentIrql >= 0xFu )
        goto LABEL_7;
      v14 = 2;
    }
    else
    {
      v14 = dword_140EF7260;
    }
    _m_prefetchw(&dword_140EF7264);
    v15 = _InterlockedOr(&dword_140EF7264, v14);
    v16 = ~v15 & v14;
    if ( (v16 & 1) != 0 )
    {
      CmpWorkItemQueueWork(&stru_140EF71F0);
    }
    else if ( (v15 & 1) == 0 && (v16 & 2) != 0 )
    {
      KeInsertQueueDpc(&stru_140EF7120, 0LL, 0LL);
    }
  }
LABEL_7:
  if ( v4 )
    KeLeaveCriticalRegion();
}
