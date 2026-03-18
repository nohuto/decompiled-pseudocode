/*
 * XREFs of GetWindowBorders @ 0x1C00E2338
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00E1260 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00E28A0 (xxxDrawWindowFrame.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223B2C (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C0238C64 (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C00E236C (GetWindowBordersForDpi.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 */

__int64 __fastcall GetWindowBorders(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  int DpiForSystem; // eax
  int v5; // r8d
  int v6; // r9d

  v2 = a2;
  v3 = a1;
  DpiForSystem = GetDpiForSystem(a1, a2);
  return GetWindowBordersForDpi(v3, v2, v5, v6, DpiForSystem);
}
