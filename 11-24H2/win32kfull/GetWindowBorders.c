/*
 * XREFs of GetWindowBorders @ 0x14006E4E8
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x14006CB5C (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x140074F80 (GetWindowBordersForDpi.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 */

__int64 __fastcall GetWindowBorders(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  int DpiForSystem; // eax
  int v7; // r8d
  int v8; // r9d

  v4 = a2;
  v5 = a1;
  DpiForSystem = GetDpiForSystem(a1, a2, a3, a4);
  return GetWindowBordersForDpi(v5, v4, v7, v8, DpiForSystem);
}
