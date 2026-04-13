/*
 * XREFs of ?GetTrustLevel@IdentityManager@ContentManagement@@UEAAJPEAW4TrustLevel@@@Z @ 0x180033610
 * Callers:
 *     ?GetTrustLevel@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180033620 (-GetTrustLevel@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDA@.c)
 *     ?GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180043FF0 (-GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WCI@EAAJPE.c)
 *     ?GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180061E00 (-GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::IdentityManager::GetTrustLevel(
        ContentManagement::IdentityManager *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
