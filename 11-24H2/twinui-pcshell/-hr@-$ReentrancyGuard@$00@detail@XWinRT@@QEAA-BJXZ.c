/*
 * XREFs of ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x1804266A8
 * Callers:
 *     ?Clear@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18041DBD0 (-Clear@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispla.c)
 *     ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x180420260 (-InsertAtInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windo.c)
 *     ?RemoveAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x180422DE0 (-RemoveAtInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windo.c)
 *     ?ReplaceAll@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1804230C0 (-ReplaceAll@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UD.c)
 *     ?SetAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1804237E0 (-SetAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispla.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::detail::ReentrancyGuard<1>::hr(unsigned int *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( (int)v2 < 0 )
    RoOriginateError(v2, 0LL);
  return *a1;
}
