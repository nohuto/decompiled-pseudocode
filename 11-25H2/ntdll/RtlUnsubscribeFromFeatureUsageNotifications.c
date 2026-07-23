/*
 * XREFs of RtlUnsubscribeFromFeatureUsageNotifications @ 0x180148A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnsubscribeFromFeatureUsageNotifications(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS SubscriptionDetails,
        SIZE_T SubscriptionCount)
{
  return RtlpFcUpdateUsageSubscriptions((__int64)SubscriptionDetails, SubscriptionCount, 1u);
}
