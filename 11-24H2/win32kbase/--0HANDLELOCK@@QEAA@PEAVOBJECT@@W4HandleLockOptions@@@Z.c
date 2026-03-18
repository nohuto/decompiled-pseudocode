/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAVOBJECT@@W4HandleLockOptions@@@Z @ 0x140030770
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HANDLELOCK::HANDLELOCK(__int64 a1, _DWORD *a2, unsigned int a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle(a1, (unsigned __int16)*a2 | (*a2 >> 8) & 0xFF0000u, a3);
  return a1;
}
