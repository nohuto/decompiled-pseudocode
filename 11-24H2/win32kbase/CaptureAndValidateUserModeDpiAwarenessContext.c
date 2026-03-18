/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400451F0
 * Callers:
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14001D4C4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     GreGetStockObject @ 0x140043F10 (GreGetStockObject.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140043FE0 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x140044560 (PhysicalToLogicalDPIPoint.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x140044AB0 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x140045080 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x140045D30 (IsValidKernelDpiAwarenessContext.c)
 */

_DWORD *__fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  _DWORD *result; // rax
  unsigned int v2; // ebx
  _DWORD *v4; // [rsp+58h] [rbp+10h]

  v4 = *(_DWORD **)(a1 + 408);
  result = v4;
  if ( v4[1] )
  {
    v2 = *v4;
    if ( !*v4 || (unsigned int)IsValidKernelDpiAwarenessContext(v2) )
      *(_DWORD *)(a1 + 400) = v2;
    else
      *v4 = 0;
    result = v4;
    v4[1] = 0;
  }
  return result;
}
