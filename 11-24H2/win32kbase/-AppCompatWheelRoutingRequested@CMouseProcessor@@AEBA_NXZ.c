/*
 * XREFs of ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x14021BE4C
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021C120 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x14010982C (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1401098F4 (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x140110B6C (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CMouseProcessor::AppCompatWheelRoutingRequested(CMouseProcessor *this)
{
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  char v2; // bl
  __int64 v3; // rdi
  char HasThreadRequestedHittestMouseWheelRouting; // al
  char v5; // r8

  MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread((__int64)this);
  v2 = 0;
  v3 = (__int64)MouseWheelForegroundThread;
  if ( MouseWheelForegroundThread )
  {
    anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)MouseWheelForegroundThread);
    HasThreadRequestedHittestMouseWheelRouting = anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(v3);
    if ( v5 )
    {
      if ( HasThreadRequestedHittestMouseWheelRouting )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5053);
      else
        v2 = 1;
    }
    LOBYTE(MouseWheelForegroundThread) = v2;
  }
  return (char)MouseWheelForegroundThread;
}
