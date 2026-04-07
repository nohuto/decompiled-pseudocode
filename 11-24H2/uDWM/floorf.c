/*
 * XREFs of floorf @ 0x18009C474
 * Callers:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017F60 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002C1C0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     PacksRGBColor @ 0x18002C7E0 (PacksRGBColor.c)
 *     sRGBColorToscRGBColor @ 0x18002C940 (sRGBColorToscRGBColor.c)
 *     ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800352FC (-CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18006AA30 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     DwmpCalculateColorizationColor @ 0x180071CB4 (DwmpCalculateColorizationColor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
