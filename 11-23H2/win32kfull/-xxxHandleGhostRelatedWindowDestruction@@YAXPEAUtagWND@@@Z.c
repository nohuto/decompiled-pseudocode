/*
 * XREFs of ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1C013BED8
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C002F134 (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3C74 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3EF8 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleGhostRelatedWindowDestruction(struct tagWND *a1)
{
  if ( IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow(a1);
  }
  else if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow(a1);
  }
}
