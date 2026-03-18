/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x140046200
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x140044560 (PhysicalToLogicalDPIPoint.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1400456B0 (LogicalToPhysicalDPIPoint.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v8; // r8d
  int v10; // ebx

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1);
  if ( a4 )
    v8 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext((__int64)a1);
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v8 >> 8)) & 0x1FF) != 0 )
  {
    v10 = LogicalToPhysicalDPIPoint((__int64)a1, a2, v8, 0LL);
    return v10 | (unsigned int)PhysicalToLogicalDPIPoint((__int64)a1, a1, CurrentThreadDpiAwarenessContext, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
