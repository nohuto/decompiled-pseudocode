/*
 * XREFs of ?GetTrustLevel@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x180044140
 * Callers:
 *     ?GetTrustLevel@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180044150 (-GetTrustLevel@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAW4TrustL.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180044160 (-GetTrustLevel@ContentManagementService@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x180044170 (-GetTrustLevel@ContentManagementService@ContentManagement@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x180044180 (-GetTrustLevel@ContentManagementService@ContentManagement@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x180044190 (-GetTrustLevel@ContentManagementService@ContentManagement@@WEI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x1800441A0 (-GetTrustLevel@ContentManagementService@ContentManagement@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WFI@EAAJPEAW4TrustLevel@@@Z @ 0x1800441B0 (-GetTrustLevel@ContentManagementService@ContentManagement@@WFI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@ContentManagementService@ContentManagement@@WGA@EAAJPEAW4TrustLevel@@@Z @ 0x1800441C0 (-GetTrustLevel@ContentManagementService@ContentManagement@@WGA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180099F30 (-GetTrustLevel@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@Co.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::GetTrustLevel(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
