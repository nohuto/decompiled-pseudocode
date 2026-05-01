/*
 * XREFs of _lambda_0d6ddfb9cb28f2ff155e4d8a1128ccbc_::operator() @ 0x18058C7E8
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18058D188 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x1801903A8 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z @ 0x18058B074 (-DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ??$DoesFullScreenWindowDisableTouch@AEBH@TouchEdgeGestureTelemetry@@SAXAEBH@Z @ 0x18058C04C (--$DoesFullScreenWindowDisableTouch@AEBH@TouchEdgeGestureTelemetry@@SAXAEBH@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_0d6ddfb9cb28f2ff155e4d8a1128ccbc_::operator()(_QWORD *a1)
{
  bool DoesMonitorSuppressGestures; // di
  BOOL v3; // [rsp+30h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v4; // [rsp+38h] [rbp+10h] BYREF

  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
    *a1 + 96LL,
    (__int64 *)&v4);
  DoesMonitorSuppressGestures = TouchGestureHelper::DoesMonitorSuppressGestures((IUnknown *)v4);
  v3 = DoesMonitorSuppressGestures;
  TouchEdgeGestureTelemetry::DoesFullScreenWindowDisableTouch<int const &>(&v3);
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v4);
  return DoesMonitorSuppressGestures;
}
