/*
 * XREFs of ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x14014B9AC
 * Callers:
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x14014B9F0 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 */

void __fastcall DestroyAllDPIMETRICSFonts(HFONT *a1)
{
  DestroyFont(a1 + 5);
  DestroyFont(a1 + 1);
  DestroyFont(a1 + 7);
  DestroyFont(a1 + 8);
  DestroyFont(a1 + 9);
}
