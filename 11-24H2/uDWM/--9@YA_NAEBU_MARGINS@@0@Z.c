/*
 * XREFs of ??9@YA_NAEBU_MARGINS@@0@Z @ 0x1800679A0
 * Callers:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800316D8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052CAC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180099114 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EE790 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator!=(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}
