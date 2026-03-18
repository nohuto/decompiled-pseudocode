/*
 * XREFs of IPostQuitMessage @ 0x1401BC764
 * Callers:
 *     _PostQuitMessage @ 0x1401BC740 (_PostQuitMessage.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x14022F338 (-TerminateDesktopThreads@@YAXXZ.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  EtwTraceWakePump(a1, 0LL, 18LL);
  _InterlockedOr((volatile signed __int32 *)(a1 + 528), 0x40000000u);
  *(_DWORD *)(a1 + 624) = a2;
  SetWakeBit(a1, 264LL);
  return 1LL;
}
