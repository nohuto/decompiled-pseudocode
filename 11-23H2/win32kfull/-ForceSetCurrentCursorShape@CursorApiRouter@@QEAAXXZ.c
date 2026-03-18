/*
 * XREFs of ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C001D788
 * Callers:
 *     EditionActivateMitInput @ 0x1C001C980 (EditionActivateMitInput.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C001CF84 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1C00C2A00 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     SetPointer @ 0x1C002D490 (SetPointer.c)
 */

void __fastcall CursorApiRouter::ForceSetCurrentCursorShape(CursorApiRouter *this)
{
  SetPointer(byte_1C035F0E7 == 0);
}
