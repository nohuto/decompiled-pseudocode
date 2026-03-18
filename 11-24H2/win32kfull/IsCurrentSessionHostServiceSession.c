/*
 * XREFs of IsCurrentSessionHostServiceSession @ 0x1401F63F0
 * Callers:
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1401F6094 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 *     EditionInitializeWppLogging @ 0x14020F9A0 (EditionInitializeWppLogging.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     ?InitiateWin32kCleanup@@YAXXZ @ 0x140272F14 (-InitiateWin32kCleanup@@YAXXZ.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1402EA548 (--0InkProcessor@@AEAA@XZ.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EA648 (--1InkProcessor@@AEAA@XZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 */

_BOOL8 IsCurrentSessionHostServiceSession()
{
  int CurrentWin32kSessionId; // ebx
  int CurrentServiceSessionId; // ecx
  _BOOL8 result; // rax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  result = 0LL;
  if ( CurrentWin32kSessionId == CurrentServiceSessionId )
    return CurrentServiceSessionId == 0;
  return result;
}
