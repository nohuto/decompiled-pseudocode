/*
 * XREFs of ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18029D468
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x1801806F4 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     _lambda_7e7f8cd3e685741244f76c8bd4111764_::operator() @ 0x1801AA288 (_lambda_7e7f8cd3e685741244f76c8bd4111764_--operator().c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18029D428 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     _lambda_5f246d3d225ef97a552fc7098e7c8139_::operator() @ 0x18049C948 (_lambda_5f246d3d225ef97a552fc7098e7c8139_--operator().c)
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z @ 0x1804AC628 (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z.c)
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x1804BD960 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 *     ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x1804C0C94 (-ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z.c)
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804D5B70 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804D8650 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1804DF700 (-NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x180224BF4 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<MultitaskingViewTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    qword_1808CBE00 = 0LL;
    dword_1808CBE0C = 0;
    v8 = &qword_1808CBDF8;
    qword_1808CBDF8 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`MultitaskingViewTelemetry::Instance'::`2'::wrapper;
    byte_1808CBE08 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
