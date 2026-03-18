/*
 * XREFs of GetScreenRect @ 0x1C008AFDC
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C008AEE4 (_GetPointerDeviceRects.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C014FD90 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C0151692 (VirtualizeMultiMonDigitizerSize.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AAE3C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetMouseMovePointsEx @ 0x1C01AC10C (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01AFFF4 (xxxInjectTouchInput.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01B95D8 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D1000 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0223A4C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C00AE544 (GetScreenRectForDpi.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetScreenRect(__int64 a1)
{
  unsigned __int16 v2; // bx

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( v2
    && (!*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    v2 = 0;
  }
  GetScreenRectForDpi(a1, v2);
  return a1;
}
