/*
 * XREFs of SBCtlSetup @ 0x1C0229654
 * Callers:
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0228410 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     xxxDoScrollMenu @ 0x1C022969C (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 * Callees:
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     CalcSBStuff2 @ 0x1C00E1FF4 (CalcSBStuff2.c)
 */

INT __fastcall SBCtlSetup(__int64 a1)
{
  const struct tagWND *v2; // rcx
  int v4[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(const struct tagWND **)a1;
  *(_OWORD *)v4 = 0LL;
  GetRect(v2, (__int64)v4, 17);
  return CalcSBStuff2((int *)(a1 + 16), v4, (int *)(a1 + 16), *(_DWORD *)(a1 + 8));
}
