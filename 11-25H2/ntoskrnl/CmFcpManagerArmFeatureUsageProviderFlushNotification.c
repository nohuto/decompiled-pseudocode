/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1403B9F84
 * Callers:
 *     CmFcManagerRecordFeatureUsage @ 0x1403B8E68 (CmFcManagerRecordFeatureUsage.c)
 *     RtlArmFeatureUsageProviderFlushNotification @ 0x1404F2860 (RtlArmFeatureUsageProviderFlushNotification.c)
 *     wil_details_RecordFeatureUsageReporting @ 0x14065C550 (wil_details_RecordFeatureUsageReporting.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x1404F8718 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 */

void __fastcall CmFcpManagerArmFeatureUsageProviderFlushNotification(__int64 a1, char a2, unsigned int a3)
{
  char v4; // al
  char v5; // bl
  unsigned __int8 CurrentIrql; // al

  if ( (a2 & 1) != 0 )
  {
    CurrentIrql = ObGetCurrentIrql();
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentIrql < 0xFu )
        a3 |= 4u;
    }
    else
    {
      a3 |= 2u;
    }
  }
  if ( a3 )
  {
    _m_prefetchw(&dword_140EF7230);
    v4 = _InterlockedOr(&dword_140EF7230, a3);
    v5 = ~v4 & a3;
    if ( (v5 & 2) != 0 )
    {
      CmFcpManagerArmFeatureUsageProviderFlushTimer(CmFcSystemManager);
    }
    else if ( (v5 & 4) != 0 && (v4 & 2) == 0 )
    {
      KeInsertQueueDpc(&stru_140EF70E0, 0LL, 0LL);
    }
  }
}
