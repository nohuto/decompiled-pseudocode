/*
 * XREFs of ?Set@CHitTestState@@QEAAXAEBVCInputDest@@IHH@Z @ 0x1C01E0650
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D95B4 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C01DF228 (-GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C01B53CC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CHitTestState::Set(CHitTestState *this, const struct CInputDest *a2, int a3, char a4, char a5)
{
  unsigned int v9; // eax

  if ( (*((_DWORD *)this + 31) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 57);
  *((_DWORD *)this + 31) |= 4u;
  CInputDest::operator=((__int64)this, (__int64)a2);
  v9 = *((_DWORD *)this + 31) & 0xFFFFFFFC;
  *((_DWORD *)this + 30) = a3;
  *((_DWORD *)this + 31) = a4 & 1 | v9 | (2 * (a5 & 1));
}
