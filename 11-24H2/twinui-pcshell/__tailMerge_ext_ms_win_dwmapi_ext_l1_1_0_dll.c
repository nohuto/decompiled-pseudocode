/*
 * XREFs of __tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll @ 0x1802D84F5
 * Callers:
 *     __imp_load_DwmGetWindowAttribute @ 0x1802D8574 (__imp_load_DwmGetWindowAttribute.c)
 *     __imp_load_DwmpEndTransitionRequest @ 0x1802D8586 (__imp_load_DwmpEndTransitionRequest.c)
 *     __imp_load_DwmpEndAnimationClock @ 0x1802D8598 (__imp_load_DwmpEndAnimationClock.c)
 *     __imp_load_DwmpBeginTransitionRequest @ 0x1802D85AA (__imp_load_DwmpBeginTransitionRequest.c)
 *     __imp_load_DwmpTransitionWindow @ 0x1802D85BC (__imp_load_DwmpTransitionWindow.c)
 *     __imp_load_DwmpTransitionWindowWithRects @ 0x1802D85CE (__imp_load_DwmpTransitionWindowWithRects.c)
 *     __imp_load_DwmpBeginTransitionRequestWithGUID @ 0x1802D85E0 (__imp_load_DwmpBeginTransitionRequestWithGUID.c)
 *     __imp_load_DwmUnregisterThumbnail @ 0x1802D85F2 (__imp_load_DwmUnregisterThumbnail.c)
 *     __imp_load_DwmpUpdateAccentBlurRect @ 0x1802D8604 (__imp_load_DwmpUpdateAccentBlurRect.c)
 *     __imp_load_DwmSetWindowAttribute @ 0x1802D8616 (__imp_load_DwmSetWindowAttribute.c)
 *     __imp_load_DwmpCreateSharedThumbnailVisual @ 0x1802D8628 (__imp_load_DwmpCreateSharedThumbnailVisual.c)
 *     __imp_load_DwmpQueryWindowThumbnailSourceSize @ 0x1802D863A (__imp_load_DwmpQueryWindowThumbnailSourceSize.c)
 *     __imp_load_DwmpTransitionBitmap @ 0x1802D864C (__imp_load_DwmpTransitionBitmap.c)
 *     __imp_load_DwmShowContact @ 0x1802D865E (__imp_load_DwmShowContact.c)
 *     __imp_load_DwmSetIconicThumbnail @ 0x1802D8670 (__imp_load_DwmSetIconicThumbnail.c)
 *     __imp_load_DwmInvalidateIconicBitmaps @ 0x1802D8682 (__imp_load_DwmInvalidateIconicBitmaps.c)
 *     __imp_load_DwmSetIconicLivePreviewBitmap @ 0x1802D8694 (__imp_load_DwmSetIconicLivePreviewBitmap.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_dwmapi_ext_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
