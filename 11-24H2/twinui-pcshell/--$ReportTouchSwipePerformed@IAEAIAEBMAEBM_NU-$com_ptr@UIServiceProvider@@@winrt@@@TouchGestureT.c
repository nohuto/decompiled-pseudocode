/*
 * XREFs of ??$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU?$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureTelemetry@@SAX$$QEAIAEAIAEBM2$$QEA_N$$QEAU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18058E4D0
 * Callers:
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1805923A0 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x180591DA0 (-ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU-$com_ptr@UIServiceProvider@@@win.c)
 *     ?get@?$static_lazy@VTouchGestureTelemetry@@@details@wil@@QEAAPEAVTouchGestureTelemetry@@P6AXXZ@Z @ 0x180592E04 (-get@-$static_lazy@VTouchGestureTelemetry@@@details@wil@@QEAAPEAVTouchGestureTelemetry@@P6AXXZ@Z.c)
 */

__int64 __fastcall TouchGestureTelemetry::ReportTouchSwipePerformed<unsigned int,unsigned int &,float const &,float const &,bool,winrt::com_ptr<IServiceProvider>>(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        char *a5,
        __int64 *a6)
{
  __int64 result; // rax
  __int64 v10; // rcx
  _DWORD *v11; // r10
  __int64 v12; // rcx
  int v13; // r9d
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  result = wil::details::static_lazy<TouchGestureTelemetry>::get(
             a1,
             _lambda_c1686dbf6f369f9bd2670974c78803b0_::_lambda_invoker_cdecl_);
  v11 = *(_DWORD **)(result + 8);
  if ( v11 )
  {
    if ( *v11 )
    {
      wil::details::static_lazy<TouchGestureTelemetry>::get(
        v10,
        _lambda_c1686dbf6f369f9bd2670974c78803b0_::_lambda_invoker_cdecl_);
      v12 = *a6;
      *a6 = 0LL;
      v14[0] = v12;
      LOBYTE(v12) = *a5;
      return TouchGestureTelemetry::ReportTouchSwipePerformed_(v12, *a1, *a2, v13, *a4, *a5, (__int64)v14);
    }
  }
  return result;
}
