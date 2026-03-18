/*
 * XREFs of ApiSetEditionInternalSetCursorPos @ 0x1C020684C
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00629A4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01DC274 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01DF570 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     SetInputDelegationModeImpl @ 0x1C01E8E5C (SetInputDelegationModeImpl.c)
 *     ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x1C01EF3E0 (-ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionInternalSetCursorPos(unsigned int a1, unsigned int a2, unsigned int a3))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296C80;
  if ( qword_1C0296C80 )
  {
    result = (__int64 (*)(void))qword_1C0296C80();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296C88;
      if ( qword_1C0296C88 )
        return (__int64 (*)(void))qword_1C0296C88(a1, a2, a3);
    }
  }
  return result;
}
