/*
 * XREFs of UnlockDesktopSysMenu @ 0x1C009D69C
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A1D48 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     UnlockDesktopMenu @ 0x1C009D6C0 (UnlockDesktopMenu.c)
 */

__int64 __fastcall UnlockDesktopSysMenu(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 40LL) &= ~0x80u;
  return UnlockDesktopMenu();
}
