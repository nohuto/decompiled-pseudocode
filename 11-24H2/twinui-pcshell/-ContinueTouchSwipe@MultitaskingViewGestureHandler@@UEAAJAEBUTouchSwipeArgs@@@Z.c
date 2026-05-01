/*
 * XREFs of ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049D280
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1801805BC (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F49F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801F4FA4 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18025A668 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A6EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ??$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z @ 0x1802B6A10 (--$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18049F200 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ContinueTouchSwipe(
        MultitaskingViewGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  int v4; // eax
  int MultitaskingViewState; // esi
  __int64 v6; // rdx
  int v8; // eax
  int v9; // esi
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  bool v14; // cl
  float v15; // edx
  bool v16; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  char v18; // [rsp+58h] [rbp+38h] BYREF
  int v19; // [rsp+5Ch] [rbp+3Ch]
  float v20; // [rsp+60h] [rbp+40h] BYREF
  int v21; // [rsp+68h] [rbp+48h] BYREF

  if ( ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) != 0 || *(_DWORD *)a2 == 3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x139,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 2LL);
    v4 = (int)*((float *)a2 + 2);
    v19 = 0;
    v18 = 0;
    *((_DWORD *)this + 28) += v4;
    *((_DWORD *)this + 29) += (int)*((float *)a2 + 3);
    MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                              (MultitaskingViewGestureHandler *)((char *)this - 16),
                              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v18);
    if ( MultitaskingViewState < 0 )
    {
      v6 = 322LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)MultitaskingViewState);
      return (unsigned int)MultitaskingViewState;
    }
    v8 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
           *((_DWORD *)this + 28),
           *((_DWORD *)this + 29));
    v9 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v8, v18, v19);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
      1u,
      3u,
      v10);
    if ( v9 != 3 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
        (__int64)&`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
        1u,
        v11,
        v12);
      if ( v9 != 8 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
          1u,
          3u,
          v13);
        if ( !*((_BYTE *)this + 232) )
        {
          v14 = *((_BYTE *)a2 + 24) && v9 == 1 && *((_DWORD *)a2 + 1) == 3;
          *((_BYTE *)this + 208) = v14;
          *((_DWORD *)this + 53) = v14 ? v9 : 0;
          v15 = *(float *)a2;
          if ( *(_DWORD *)a2 != 1 && !v14 )
          {
            MultitaskingViewState = MultitaskingViewGestureHandler::ProcessTouchGestureInput(
                                      (char *)this - 16,
                                      2LL,
                                      &v18);
            if ( MultitaskingViewState < 0 )
            {
              v6 = 348LL;
              goto LABEL_5;
            }
            v15 = *(float *)a2;
          }
          v16 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
          v20 = v15;
          v18 = !v16;
          v21 = 2;
          MultitaskingViewTelemetry::SwipeGestureState<unsigned int,int,bool>(&v21, (int *)&v20, &v18);
        }
      }
    }
    return 0LL;
  }
}
