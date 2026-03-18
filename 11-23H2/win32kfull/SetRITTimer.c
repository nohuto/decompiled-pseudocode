/*
 * XREFs of SetRITTimer @ 0x1C0086450
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00863AC (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF38C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00F0570 (zzzUpdateCursorImage.c)
 *     ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013CC80 (-xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ShowAutorunCursor @ 0x1C01A88E0 (ShowAutorunCursor.c)
 *     EditionSetAccessibilityTimer @ 0x1C01F5940 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0244AC4 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00EFF30 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(int a1, int a2, int a3, int a4)
{
  return InternalSetTimer(0, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
