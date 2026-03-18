/*
 * XREFs of ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1402A55C8
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EvaluateArrangeState(__int64 a1)
{
  __int64 DesktopWindow; // rax
  const struct tagWND *v2; // rcx
  char v4; // dl

  DesktopWindow = GetDesktopWindow(a1);
  if ( *((_QWORD *)v2 + 13) != DesktopWindow )
    return 4LL;
  v4 = *(_BYTE *)(*((_QWORD *)v2 + 5) + 31LL);
  if ( (v4 & 0x20) != 0 )
    return 3LL;
  if ( (v4 & 1) != 0 )
    return 0LL;
  return 2 - (unsigned int)IsArranged(v2);
}
