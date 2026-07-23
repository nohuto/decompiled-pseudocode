/*
 * XREFs of RtlQueryFeatureUsageNotificationSubscriptions @ 0x1800A0430
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18009F69C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x180173678 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 */

NTSTATUS __cdecl RtlQueryFeatureUsageNotificationSubscriptions(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS Subscriptions,
        PSIZE_T SubscriptionCount)
{
  PSIZE_T v2; // rsi
  NTSTATUS AllFeatureUsageSubscriptionNotificationsFromBufferSet; // ebx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = SubscriptionCount;
  LOBYTE(SubscriptionCount) = 1;
  v6 = 0LL;
  AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(
                                                            (__int64)Subscriptions,
                                                            (__int64)SubscriptionCount,
                                                            &v7,
                                                            &v6);
  if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
  {
    AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet(
                                                              v6,
                                                              Subscriptions,
                                                              v2);
    if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
      AllFeatureUsageSubscriptionNotificationsFromBufferSet = 0;
  }
  if ( v6 )
    RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&xmmword_1801D5CE8, v6);
  return AllFeatureUsageSubscriptionNotificationsFromBufferSet;
}
