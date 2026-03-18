/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400610DC
 * Callers:
 *     HandleInputDestDestruction @ 0x140060EC8 (HandleInputDestDestruction.c)
 *     ?IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400613F4 (-IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x140095228 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400DEA90 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1401868B8 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x140205820 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14021D0E8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputDest::operator==(int *a1, __int64 a2)
{
  int v4; // ecx
  int v5; // eax
  char v6; // cl
  bool v7; // zf

  v4 = *a1;
  if ( !v4 && !*(_DWORD *)a2 )
  {
    LOBYTE(v5) = 1;
    return v5;
  }
  v5 = v4 & *(_DWORD *)a2;
  if ( !v5 )
    return v5;
  v6 = 1;
  if ( (v5 & 1) != 0 )
  {
    if ( a1[2] != *(_DWORD *)(a2 + 8) )
      goto LABEL_9;
    v7 = a1[3] == *(_DWORD *)(a2 + 12);
LABEL_8:
    if ( v7 )
    {
LABEL_10:
      LOBYTE(v5) = v6;
      return v5;
    }
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  if ( (v5 & 2) != 0 )
  {
    if ( a1[8] != *(_DWORD *)(a2 + 32) || a1[9] != *(_DWORD *)(a2 + 36) )
      goto LABEL_9;
    v7 = *((_QWORD *)a1 + 3) == *(_QWORD *)(a2 + 24);
    goto LABEL_8;
  }
  if ( (v5 & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 463LL);
  LOBYTE(v5) = *((_QWORD *)a1 + 10) == *(_QWORD *)(a2 + 80);
  return v5;
}
