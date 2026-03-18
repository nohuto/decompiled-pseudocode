/*
 * XREFs of CmFcShutdownSystem @ 0x1407C6490
 * Callers:
 *     CmShutdownSystem0 @ 0x14065C07C (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14065C2F0 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x140693C6C (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x1407D474C (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8D96C (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    if ( !PopShutdownCleanly )
      CmFcpManagerPublishFeatureUsageData(CmFcSystemManager, 0LL);
    TlgAggregateFlush((__int64)&dword_140E09DD0);
  }
}
