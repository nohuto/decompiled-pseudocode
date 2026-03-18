/*
 * XREFs of UnlockDesktopSysMenu @ 0x140282D08
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     UnlockDesktopMenu @ 0x1402C89AC (UnlockDesktopMenu.c)
 */

__int64 __fastcall UnlockDesktopSysMenu(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 40LL) &= ~0x80u;
  return UnlockDesktopMenu(a1);
}
