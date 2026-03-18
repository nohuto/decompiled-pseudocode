/*
 * XREFs of GetWindowFrameMetricForDpi @ 0x140079440
 * Callers:
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     GetWindowNCMetrics @ 0x14007901C (GetWindowNCMetrics.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x140049EF0 (GetAppCompatFlags2.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x14007946C (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpi(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int AppCompatFlags2; // eax
  int v4; // ecx

  v2 = a2;
  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2);
  return GetWindowFrameMetricForDpiWithCompatFlags2(v4, v2, AppCompatFlags2);
}
