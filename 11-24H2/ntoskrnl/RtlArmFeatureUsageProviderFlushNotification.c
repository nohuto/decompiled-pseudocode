/*
 * XREFs of RtlArmFeatureUsageProviderFlushNotification @ 0x1404F2A10
 * Callers:
 *     CmFcInitSystem1 @ 0x140C4C340 (CmFcInitSystem1.c)
 * Callees:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x14048C7E8 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 */

void __fastcall RtlArmFeatureUsageProviderFlushNotification(__int64 a1, __int64 a2)
{
  _m_prefetchw((const void *)(a1 + 100));
  CmFcpManagerArmFeatureUsageProviderFlushNotification(
    a1,
    a2,
    (_InterlockedOr((volatile signed __int32 *)(a1 + 100), 1u) & 1) == 0);
}
