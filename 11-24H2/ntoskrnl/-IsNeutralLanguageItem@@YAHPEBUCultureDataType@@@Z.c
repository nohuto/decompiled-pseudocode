/*
 * XREFs of ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1404C1500
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x1404B167C (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1404B8AB8 (DownLevelLanguageNameToLangID.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNeutralLanguageItem(const struct CultureDataType *a1)
{
  return *((_DWORD *)a1 + 3) == 124 && *((_WORD *)a1 + 4) != 127;
}
