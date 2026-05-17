/*
 * XREFs of RtlQueryFeatureUsageNotificationSubscriptions @ 0x1800A0430
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18009F69C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x180173678 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 */

__int64 __fastcall RtlQueryFeatureUsageNotificationSubscriptions(__int64 a1, __int64 a2)
{
  int AllFeatureUsageSubscriptionNotificationsFromBufferSet; // ebx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(a1, 1, &v7, &v6);
  if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
  {
    AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet(
                                                              v6,
                                                              a1,
                                                              a2);
    if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
      AllFeatureUsageSubscriptionNotificationsFromBufferSet = 0;
  }
  if ( v6 )
    RtlpFcBufferManagerDereferenceBuffers((volatile signed __int64 *)&xmmword_1801D5CE8, v6);
  return (unsigned int)AllFeatureUsageSubscriptionNotificationsFromBufferSet;
}
