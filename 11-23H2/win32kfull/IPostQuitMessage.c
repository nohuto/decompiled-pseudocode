/*
 * XREFs of IPostQuitMessage @ 0x1C00721A8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C0071874 (-TerminateDesktopThreads@@YAXXZ.c)
 *     NtUserPostQuitMessage @ 0x1C0072160 (NtUserPostQuitMessage.c)
 *     _PostQuitMessage @ 0x1C0139FA0 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C01190C0 (SetWakeBit.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  EtwTraceWakePump(a1, 0LL, 18LL, a4);
  *(_DWORD *)(a1 + 488) |= 0x40000000u;
  *(_DWORD *)(a1 + 584) = a2;
  SetWakeBit(a1, 264LL);
  return 1LL;
}
