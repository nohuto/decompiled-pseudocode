/*
 * XREFs of RtlArmFeatureUsageProviderFlushNotification @ 0x1404F2860
 * Callers:
 *     CmInitSystem0 @ 0x140C370C8 (CmInitSystem0.c)
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1403B9F84 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 */

void __fastcall RtlArmFeatureUsageProviderFlushNotification(__int64 a1, char a2)
{
  _m_prefetchw((const void *)(a1 + 100));
  CmFcpManagerArmFeatureUsageProviderFlushNotification(
    a1,
    a2,
    (_InterlockedOr((volatile signed __int32 *)(a1 + 100), 1u) & 1) == 0);
}
