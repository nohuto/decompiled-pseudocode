/*
 * XREFs of WINRT_IMPL_CoTaskMemAlloc @ 0x18009C8F0
 * Callers:
 *     ?GetIids@?$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DE9C0 (-GetIids@-$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResiz.c)
 *     ?GetIids@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800E0E30 (-GetIids@-$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?GetIids@?$produce_base@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800E0ED0 (-GetIids@-$produce_base@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@U.c)
 *     ?GetIids@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@@UITransitionStateNativePrivate@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800E6EB0 (-GetIids@-$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransition.c)
 *     ?GetIids@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800E8F40 (-GetIids@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall WINRT_IMPL_CoTaskMemAlloc(SIZE_T cb)
{
  return CoTaskMemAlloc(cb);
}
