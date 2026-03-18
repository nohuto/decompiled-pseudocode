/*
 * XREFs of vInitMapper @ 0x1C03B3380
 * Callers:
 *     <none>
 * Callees:
 *     InitializeFontSignatures @ 0x1C03B31F8 (InitializeFontSignatures.c)
 *     InitializeDefaultFamilyFonts @ 0x1C03B3AEC (InitializeDefaultFamilyFonts.c)
 */

__int64 __fastcall vInitMapper(__int64 a1)
{
  InitializeFontSignatures(a1);
  return InitializeDefaultFamilyFonts();
}
