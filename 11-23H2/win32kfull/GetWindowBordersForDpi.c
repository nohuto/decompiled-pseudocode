/*
 * XREFs of GetWindowBordersForDpi @ 0x1C00E236C
 * Callers:
 *     FindNCHit @ 0x1C008C04C (FindNCHit.c)
 *     GetWindowBorders @ 0x1C00E2338 (GetWindowBorders.c)
 *     MNPositionSysMenu @ 0x1C01FED34 (MNPositionSysMenu.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02173E0 (xxxMNFindWindowFromPoint.c)
 *     xxxCalcCaptionButton @ 0x1C022B520 (xxxCalcCaptionButton.c)
 *     xxxGetMenuBarInfo @ 0x1C02304BC (xxxGetMenuBarInfo.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0238870 (xxxMNRecomputeBarIfNeeded.c)
 * Callees:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00EB23C (GetWindowBordersForDpiWithCompatFlags2.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetWindowBordersForDpi(int a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 ThreadWin32Thread; // rax
  int v8; // r8d
  int v9; // eax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x9900u )
    v9 = 0;
  else
    v9 = *(_DWORD *)(ThreadWin32Thread + 648);
  return GetWindowBordersForDpiWithCompatFlags2(a1, a2, v8, 0, a5, v9);
}
