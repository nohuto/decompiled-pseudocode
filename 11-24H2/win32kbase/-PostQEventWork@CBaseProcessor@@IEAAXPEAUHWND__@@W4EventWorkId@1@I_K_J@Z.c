/*
 * XREFs of ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x140123ACC
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140062790 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x14018FBDC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140205FD0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14021D0E8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 * Callees:
 *     EditionPostInputEvent @ 0x140123B50 (EditionPostInputEvent.c)
 */

__int64 __fastcall CBaseProcessor::PostQEventWork(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 result; // rax

  v7 = a3;
  result = *(unsigned int *)(W32GetUserSessionState(a1) + 3296);
  if ( dword_140264868[2 * v7 + 1] == (_DWORD)result )
    return EditionPostInputEvent(dword_140264868[2 * v7], a2, 0, a4, a5, a6);
  return result;
}
