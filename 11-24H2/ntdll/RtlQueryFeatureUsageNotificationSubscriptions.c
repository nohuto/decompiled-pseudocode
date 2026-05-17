/*
 * XREFs of RtlQueryFeatureUsageNotificationSubscriptions @ 0x1800D5FD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D63CC (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1800D6520 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x180171678 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 */

__int64 __fastcall RtlQueryFeatureUsageNotificationSubscriptions(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int AllFeatureUsageSubscriptionNotificationsFromBufferSet; // ebx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v6 = 0LL;
  AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(a1, a2, &v7, &v6);
  if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
  {
    AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet(
                                                              v6,
                                                              a1,
                                                              v2);
    if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
      AllFeatureUsageSubscriptionNotificationsFromBufferSet = 0;
  }
  if ( v6 )
    RtlpFcBufferManagerDereferenceBuffers(&xmmword_1801D3C88, v6);
  return (unsigned int)AllFeatureUsageSubscriptionNotificationsFromBufferSet;
}
