/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x14048C7E8
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x14048C624 (CmFcManagerRecordFeatureUsage.c)
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404F2A10 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x140666790 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8498 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 */

void __fastcall CmFcpManagerArmFeatureUsageProviderFlushNotification(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // al
  char v5; // bl
  unsigned __int8 EffectiveIrql; // al

  if ( (a2 & 1) != 0 )
  {
    EffectiveIrql = KeGetEffectiveIrql(a1, a2);
    if ( EffectiveIrql >= 2u )
    {
      if ( EffectiveIrql < 0xFu )
        a3 |= 4u;
    }
    else
    {
      a3 |= 2u;
    }
  }
  if ( a3 )
  {
    _m_prefetchw(&dword_140EF7858);
    v4 = _InterlockedOr(&dword_140EF7858, a3);
    v5 = ~v4 & a3;
    if ( (v5 & 2) != 0 )
    {
      CmFcpManagerArmFeatureUsageProviderFlushTimer(CmFcSystemManager);
    }
    else if ( (v5 & 4) != 0 && (v4 & 2) == 0 )
    {
      KeInsertQueueDpc(&stru_140EF7708, 0LL, 0LL);
    }
  }
}
