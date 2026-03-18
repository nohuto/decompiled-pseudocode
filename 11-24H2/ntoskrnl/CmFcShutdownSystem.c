/*
 * XREFs of CmFcShutdownSystem @ 0x1407D5BE4
 * Callers:
 *     CmShutdownSystem0 @ 0x140667980 (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 * Callees:
 *     TlgAggregateFlush @ 0x14069F00C (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x1407E402C (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A90804 (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    if ( !PopShutdownCleanly )
      CmFcpManagerPublishFeatureUsageData(CmFcSystemManager, 0LL);
    TlgAggregateFlush((__int64)&dword_140E09EB0);
  }
}
