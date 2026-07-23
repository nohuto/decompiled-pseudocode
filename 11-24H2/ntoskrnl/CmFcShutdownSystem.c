/*
 * XREFs of CmFcShutdownSystem @ 0x1407D60D4
 * Callers:
 *     CmShutdownSystem0 @ 0x140666270 (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406664E4 (CmShutdownSystem2.c)
 * Callees:
 *     Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline @ 0x140666738 (Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     CmFcDebugUninitialize @ 0x14066737C (CmFcDebugUninitialize.c)
 *     TlgAggregateFlush @ 0x1406A00BC (TlgAggregateFlush.c)
 *     CmFcManagerDrainAllFeatureUsageNotifications @ 0x1407E457C (CmFcManagerDrainAllFeatureUsageNotifications.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8CF00 (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcShutdownSystem(int a1)
{
  if ( a1 == 1 )
  {
    CmFcManagerDrainAllFeatureUsageNotifications();
    if ( !PopShutdownCleanly )
      CmFcpManagerPublishFeatureUsageData(CmFcSystemManager, 0LL);
    TlgAggregateFlush((__int64)&dword_140E09F20);
    if ( (unsigned int)Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline() )
      CmFcDebugUninitialize();
  }
}
