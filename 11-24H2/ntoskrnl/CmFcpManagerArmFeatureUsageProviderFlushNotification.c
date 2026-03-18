/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1403A6B5C
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x1403A6974 (CmFcManagerRecordFeatureUsage.c)
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404F5110 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x140667E50 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404FABB8 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 */

void __fastcall CmFcpManagerArmFeatureUsageProviderFlushNotification(__int64 a1, char a2, unsigned int a3)
{
  char v4; // al
  char v5; // bl
  unsigned __int8 EffectiveIrql; // al

  if ( (a2 & 1) != 0 )
  {
    EffectiveIrql = KeGetEffectiveIrql();
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
    _m_prefetchw(&dword_140EF75D0);
    v4 = _InterlockedOr(&dword_140EF75D0, a3);
    v5 = ~v4 & a3;
    if ( (v5 & 2) != 0 )
    {
      CmFcpManagerArmFeatureUsageProviderFlushTimer(CmFcSystemManager);
    }
    else if ( (v5 & 4) != 0 && (v4 & 2) == 0 )
    {
      KeInsertQueueDpc(&stru_140EF7480, 0LL, 0LL);
    }
  }
}
