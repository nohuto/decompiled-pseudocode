/*
 * XREFs of ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x18004D930
 * Callers:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x18004DA14 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     ?Release@?$root_implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@impl@winrt@@QEAAIXZ @ 0x18004DA4C (-Release@-$root_implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UU.c)
 *     ?subtract_final_reference@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAIXZ @ 0x18004DBB4 (-subtract_final_reference@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResize.c)
 *     ?Release@?$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18004DC50 (-Release@-$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ?Release@?$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x18004DD40 (-Release@-$root_implements@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitio.c)
 *     ?subtract_final_reference@?$root_implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@impl@winrt@@IEAAIXZ @ 0x18004DE20 (-subtract_final_reference@-$root_implements@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@wi.c)
 *     ?Release@?$root_implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationTransition@3456@@impl@winrt@@QEAAIXZ @ 0x18004DF70 (-Release@-$root_implements@UScreenRotationTransition@implementation@Private@Transitions@Udwm@win.c)
 *     ?Release@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18004E100 (-Release@-$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800DF38C (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18004CC78 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::Release(void *a1)
{
  unsigned __int32 v2; // edi
  const struct std::nothrow_t *v4; // rdx

  v2 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)a1 + 28));
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--((__int64)&`winrt::get_module_lock'::`2'::s_lock);
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v4);
  }
  return v2;
}
