/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x14014B9F0
 * Callers:
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x14014B9AC (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HRGN *a1)
{
  HRGN v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreDeleteObject(v2);
    *a1 = 0LL;
  }
}
