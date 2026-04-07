/*
 * XREFs of ?InsertAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXIAEBUUserResizeVisual@Transitions@Udwm@2@@Z @ 0x1800E982C
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1800E97F0 (-InsertAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResi.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800DEF50 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800E81C8 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E882C (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800F6360 (_CxxThrowException_0.c)
 */

_QWORD *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::InsertAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // r10
  __int64 *v8; // r11
  const struct winrt::impl::slim_source_location *v10; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 48LL;
  if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    v10 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v12);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v10);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1));
  if ( v5 )
  {
    v8 = (__int64 *)(v5 + 8);
    v7 = (__int64 *)(v5 + 8);
  }
  else
  {
    v8 = v7;
  }
  return std::vector<winrt::Udwm::Transitions::UserResizeVisual>::emplace<winrt::Udwm::Transitions::UserResizeVisual const &>(
           v8,
           &v13,
           (winrt::Udwm::Transitions::AnimationCompletedHandler *)(*v7 + 8 * v6),
           a3);
}
