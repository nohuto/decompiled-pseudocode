/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x140079418
 * Callers:
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x14007901C (GetWindowNCMetrics.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1400735A0 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1, __int64 a2)
{
  int AppCompatFlags2; // eax

  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, AppCompatFlags2);
}
