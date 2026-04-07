/*
 * XREFs of ??$as@UITransitionAnimationVisualNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18004C22C
 * Callers:
 *     ??$as@UITransitionAnimationVisualNative@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x18004A4A8 (--$as@UITransitionAnimationVisualNative@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004A680 (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x18004AF40 (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18004B008 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x18004BD94 (-CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AUAnimatedTran.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@3@@Z @ 0x18004C1BC (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transi.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, __int64 *, __int64 *); // rax
  unsigned int v4; // eax
  int v6; // [rsp+28h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    v9 = 0LL;
    v6 = 0;
    v3 = *a2;
    v7 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_v<ITransitionAnimationVisualNative>, &v9);
    winrt::check_hresult(&v8, v4, &v6);
    winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::abi_guard::abi_guard(
      a1,
      v9);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
