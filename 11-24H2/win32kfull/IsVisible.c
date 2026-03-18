/*
 * XREFs of IsVisible @ 0x140036A48
 * Callers:
 *     xxxSetScrollBar @ 0x140032F08 (xxxSetScrollBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140036838 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1400973D0 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     SpbCheckRect @ 0x140097868 (SpbCheckRect.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxEnableWndSBArrows @ 0x1401E1A30 (xxxEnableWndSBArrows.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 *     RestoreSpb @ 0x1402AF460 (RestoreSpb.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1402F2700 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsVisible(__int64 a1)
{
  __int64 i; // rdx
  __int64 v2; // rax
  char v3; // r8

  for ( i = a1; i; i = *(_QWORD *)(i + 104) )
  {
    v2 = *(_QWORD *)(i + 40);
    v3 = *(_BYTE *)(v2 + 31);
    if ( (v3 & 0x10) == 0 || (v3 & 0x20) != 0 && i != a1 )
      return 0LL;
    if ( (*(_WORD *)(v2 + 42) & 0x2FFF) == 0x29D )
      break;
  }
  return 1LL;
}
