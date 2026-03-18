/*
 * XREFs of IsProcessedByInputService @ 0x14008F9EC
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x14008FB9C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1402481C0 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsProcessedByInputService(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 100);
  return (v1 & 0x2000) != 0 || (v1 & 0x4000) != 0 || (v1 & 0x8000) != 0;
}
