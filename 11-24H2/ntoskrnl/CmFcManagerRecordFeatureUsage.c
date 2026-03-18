/*
 * XREFs of CmFcManagerRecordFeatureUsage @ 0x1403A6974
 * Callers:
 *     RtlRecordFeatureUsage @ 0x1403A7560 (RtlRecordFeatureUsage.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     RtlAcquireSwapReference @ 0x1403A4E34 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403A500C (RtlReleaseSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x1403A68B0 (CmpWorkItemQueueWork.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x1403A6A8C (RtlpFcAddFeatureUsageDataToBuffer.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1403A6B5C (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 */

void __fastcall CmFcManagerRecordFeatureUsage(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  unsigned __int8 EffectiveIrql; // di
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int v10; // eax
  char v11; // bl
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned int v14; // edx
  char v15; // al
  char v16; // dl
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = a3;
  v4 = 0;
  EffectiveIrql = KeGetEffectiveIrql();
  if ( EffectiveIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v7 = (unsigned int)RtlAcquireSwapReference(qword_140EF72B0);
  v8 = CmFcSystemManager[v7 + 165];
  if ( !v8 )
  {
    RtlReleaseSwapReference(qword_140EF72B0, v7);
    goto LABEL_7;
  }
  v9 = (*(_DWORD *)(v8 + 28) >> 1) + (*(_DWORD *)(v8 + 28) >> 2);
  v10 = RtlpFcAddFeatureUsageDataToBuffer(v8, a2, &v17);
  v11 = dword_140EF75D0;
  v12 = v10;
  RtlReleaseSwapReference(qword_140EF72B0, v7);
  if ( (unsigned int)v12 >= v9 || (v13 = v17 + v12, v9 > (unsigned __int64)(v17 + v12)) )
  {
    if ( (v11 & 0x20) == 0 )
      CmFcpManagerArmFeatureUsageProviderFlushNotification(v13, 1LL);
  }
  else
  {
    if ( dword_140EF7600 != 1 )
      goto LABEL_7;
    if ( EffectiveIrql >= 2u )
    {
      if ( EffectiveIrql >= 0xFu )
        goto LABEL_7;
      v14 = 2;
    }
    else
    {
      v14 = dword_140EF7600;
    }
    _m_prefetchw(&dword_140EF7604);
    v15 = _InterlockedOr(&dword_140EF7604, v14);
    v16 = ~v15 & v14;
    if ( (v16 & 1) != 0 )
    {
      CmpWorkItemQueueWork(&stru_140EF7590);
    }
    else if ( (v15 & 1) == 0 && (v16 & 2) != 0 )
    {
      KeInsertQueueDpc(&stru_140EF74C0, 0LL, 0LL);
    }
  }
LABEL_7:
  if ( v4 )
    KeLeaveCriticalRegion();
}
