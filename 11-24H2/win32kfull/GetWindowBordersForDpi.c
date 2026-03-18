/*
 * XREFs of GetWindowBordersForDpi @ 0x140074F80
 * Callers:
 *     FindNCHit @ 0x14006C5C4 (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x14006DE80 (xxxMNFindWindowFromPoint.c)
 *     GetWindowBorders @ 0x14006E4E8 (GetWindowBorders.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x140074CFC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxCalcCaptionButton @ 0x14010B4E8 (xxxCalcCaptionButton.c)
 *     xxxGetMenuBarInfo @ 0x1401B04B0 (xxxGetMenuBarInfo.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1401B1824 (xxxMNRecomputeBarIfNeeded.c)
 *     MNPositionSysMenu @ 0x140202B2C (MNPositionSysMenu.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140073428 (GetWindowBordersForDpiWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // ebx
  unsigned int AppCompatFlags2; // eax
  __int64 v8; // r8

  v6 = a2;
  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2);
  return GetWindowBordersForDpiWithCompatFlags2(a1, v6, v8, 0, a5, AppCompatFlags2);
}
