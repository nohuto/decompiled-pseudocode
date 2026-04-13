/*
 * XREFs of ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180044E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::Release(__int64 a1, volatile int *a2)
{
  return ContentManagement::ContentDeliveryManagerConfigurationStatics::Release(a1 - 8, a2);
}
