/*
 * XREFs of _lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator() @ 0x18049CE0C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_abbb930ddb92e06fa07b01ae54ef43e0__void_bool_::_Do_call @ 0x1804A0200 (std--_Func_impl_no_alloc__lambda_abbb930ddb92e06fa07b01ae54ef43e0__void_bool_--_Do_call.c)
 * Callees:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x1801806F4 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     ??1?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAA@XZ @ 0x1802CE854 (--1-$unique_ptr@VMinimizeAnimationSystemStateOverride@@U-$default_delete@VMinimizeAnimationSyste.c)
 *     ??$?4U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18049B244 (--$-4U-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@-$unique_ptr@VMinimizeA.c)
 *     ??$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA?AV?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@0@$$QEAH@Z @ 0x18049BB9C (--$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA-AV-$unique_ptr@VMinimizeAnim.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049CF70 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?MinimizeAnimationCompletedCallback@MultitaskingViewTelemetry@@SAXXZ @ 0x18049EF5C (-MinimizeAnimationCompletedCallback@MultitaskingViewTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator()(__int64 *a1, char a2)
{
  __int64 *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  MultitaskingViewTelemetry::MinimizeAnimationCompletedCallback();
  v6 = 0LL;
  if ( a2 )
  {
    v7 = 0;
    v4 = std::make_unique<MinimizeAnimationSystemStateOverride,int,0>(&v8, &v7);
    std::unique_ptr<MinimizeAnimationSystemStateOverride>::operator=<std::default_delete<MinimizeAnimationSystemStateOverride>,0>(
      &v6,
      v4);
    std::unique_ptr<MinimizeAnimationSystemStateOverride>::~unique_ptr<MinimizeAnimationSystemStateOverride>(&v8);
  }
  MultitaskingViewGestureHandler::ActivateGestureAction(*a1, a2 != 0 ? 3 : 0, 0LL);
  if ( !a2 )
    MultitaskingViewGestureHandler::AnimationComplete(*a1, 0LL);
  std::unique_ptr<MinimizeAnimationSystemStateOverride>::operator=<std::default_delete<MinimizeAnimationSystemStateOverride>,0>(
    (__int64 *)(*a1 + 264),
    &v6);
  return std::unique_ptr<MinimizeAnimationSystemStateOverride>::~unique_ptr<MinimizeAnimationSystemStateOverride>(&v6);
}
