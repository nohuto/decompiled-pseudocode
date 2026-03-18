/*
 * XREFs of InitiatePTPMouseProcessing @ 0x1400F7C60
 * Callers:
 *     ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x1400F7C30 (-PostProcessInput@CHidInput@@EEAAJXZ.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x14020F3E0 (-OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

LONG __fastcall InitiatePTPMouseProcessing(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  return KeSetEvent(*(PRKEVENT *)(UserSessionState + 16824), 1, 0);
}
