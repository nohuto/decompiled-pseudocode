/*
 * XREFs of ?GetTrustLevel@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x18000DE90
 * Callers:
 *     ?GetTrustLevel@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18000DEA0 (-GetTrustLevel@ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPre.c)
 *     ?GetTrustLevel@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18000DEB0 (-GetTrustLevel@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAW4TrustLe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetTrustLevel(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
