/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1C009AB80
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C000E09C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserGetClipCursor @ 0x1C01444D0 (NtUserGetClipCursor.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C000967C (ScaleDPIRect.c)
 *     Is_MonitorFromRectSupported @ 0x1C000B650 (Is_MonitorFromRectSupported.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x1C005A3D8 (GetMonitorRectForDpi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(__m128i *a1, __m128i *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned __int16 v10; // di
  __m128i v11; // [rsp+30h] [rbp-28h] BYREF
  __m128i v12; // [rsp+40h] [rbp-18h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromRectSupported() < 0 )
  {
    result = 0LL;
    *a1 = *a2;
  }
  else
  {
    if ( a4 && (v9 = *a4) != 0 || (!qword_1C0296050 ? (v9 = 0LL) : (v9 = qword_1C0296050(a2, 2LL, 18LL)), a4) )
      *a4 = v9;
    GetMonitorRectForDpi(&v11, v9, 0);
    v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    GetMonitorRectForDpi(&v12, v9, v10);
    ScaleDPIRect(a1, a2, v10, *(_WORD *)(*(_QWORD *)(v9 + 40) + 60LL), v12.m128i_i64[0], v11.m128i_i64[0]);
    return 1LL;
  }
  return result;
}
