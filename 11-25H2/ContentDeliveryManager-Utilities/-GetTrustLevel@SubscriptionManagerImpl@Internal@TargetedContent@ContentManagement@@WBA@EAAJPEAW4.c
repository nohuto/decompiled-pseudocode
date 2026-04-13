/*
 * XREFs of ?GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180061E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return ContentManagement::IdentityManager::GetTrustLevel((ContentManagement::IdentityManager *)(a1 - 16), a2);
}
