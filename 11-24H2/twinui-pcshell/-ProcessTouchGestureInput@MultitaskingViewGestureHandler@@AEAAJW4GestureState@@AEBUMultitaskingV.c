/*
 * XREFs of ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049F200
 * Callers:
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049D280 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049DA5C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049FB30 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ??$InProcessInput@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z @ 0x1800AC99C (--$InProcessInput@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x1801806F4 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F49F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801F4FA4 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18025A668 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1802ABD30 (-TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@M.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18049CF70 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ProcessTouchGestureInput(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v5; // r10
  int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v10; // edx
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(*(_DWORD *)(a1 + 128), *(_DWORD *)(a1 + 132));
  if ( a2 == 3 )
    v6 = *(_DWORD *)(a1 + 228);
  else
    v6 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v4, *(_BYTE *)v5, *(_DWORD *)(v5 + 4));
  v12 = a2;
  v11 = v6;
  MultitaskingViewTelemetry::InProcessInput<unsigned int,unsigned int>(&v11, &v12);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    v7);
  if ( MultitaskingViewGestureHandler::TryStartGlobalOperation(a1, a2, v6) )
    return 0LL;
  switch ( v6 )
  {
    case 0:
      goto LABEL_19;
    case 1:
      v10 = 2;
      goto LABEL_20;
    case 2:
      goto LABEL_21;
    case 3:
      v10 = 3;
      goto LABEL_20;
    case 4:
LABEL_19:
      v10 = 0;
      goto LABEL_20;
    case 5:
LABEL_16:
      v10 = 1;
LABEL_20:
      MultitaskingViewGestureHandler::AnimationComplete(a1, v10);
      goto LABEL_21;
  }
  if ( v6 != 6 && v6 != 7 )
  {
    if ( v6 != 8 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs((unsigned int)(v6 - 7), v8);
      goto LABEL_21;
    }
    goto LABEL_16;
  }
LABEL_21:
  if ( !*(_DWORD *)(a1 + 160) )
  {
    if ( *(_QWORD *)(a1 + 96) == *(_QWORD *)(a1 + 104) || v6 != 3 )
      return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v6, 0LL);
    *(_DWORD *)(a1 + 160) = 3;
  }
  v6 = 0;
  return MultitaskingViewGestureHandler::ActivateGestureAction(a1, v6, 0LL);
}
