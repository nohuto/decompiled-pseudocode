/*
 * XREFs of CmFcManagerRecordFeatureUsage @ 0x14048C624
 * Callers:
 *     RtlRecordFeatureUsage @ 0x14048C600 (RtlRecordFeatureUsage.c)
 * Callees:
 *     RtlAcquireSwapReference @ 0x14021E2E4 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x14021E4BC (RtlReleaseSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x14048C73C (RtlpFcAddFeatureUsageDataToBuffer.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x14048C7E8 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
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
  EffectiveIrql = KeGetEffectiveIrql(a1, a2);
  if ( EffectiveIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v7 = (unsigned int)RtlAcquireSwapReference((__int64 *)qword_140EF74F0);
  v8 = CmFcSystemManager[v7 + 174];
  if ( !v8 )
  {
    RtlReleaseSwapReference(qword_140EF74F0, v7);
    goto LABEL_7;
  }
  v9 = (*(_DWORD *)(v8 + 28) >> 1) + (*(_DWORD *)(v8 + 28) >> 2);
  v10 = RtlpFcAddFeatureUsageDataToBuffer(v8, a2, &v17);
  v11 = dword_140EF7858;
  v12 = v10;
  RtlReleaseSwapReference(qword_140EF74F0, v7);
  if ( (unsigned int)v12 >= v9 || (v13 = v17 + v12, v9 > (unsigned __int64)(v17 + v12)) )
  {
    if ( (v11 & 0x20) == 0 )
      CmFcpManagerArmFeatureUsageProviderFlushNotification(v13, 1LL);
  }
  else
  {
    if ( dword_140EF7888 != 1 )
      goto LABEL_7;
    if ( EffectiveIrql >= 2u )
    {
      if ( EffectiveIrql >= 0xFu )
        goto LABEL_7;
      v14 = 2;
    }
    else
    {
      v14 = dword_140EF7888;
    }
    _m_prefetchw(&dword_140EF788C);
    v15 = _InterlockedOr(&dword_140EF788C, v14);
    v16 = ~v15 & v14;
    if ( (v16 & 1) != 0 )
    {
      CmpWorkItemQueueWork(&stru_140EF7818);
    }
    else if ( (v15 & 1) == 0 && (v16 & 2) != 0 )
    {
      KeInsertQueueDpc(&stru_140EF7748, 0LL, 0LL);
    }
  }
LABEL_7:
  if ( v4 )
    KeLeaveCriticalRegion();
}
