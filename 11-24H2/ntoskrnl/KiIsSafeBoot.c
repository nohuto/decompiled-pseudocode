/*
 * XREFs of KiIsSafeBoot @ 0x1405BB624
 * Callers:
 *     KiDetermineImportOptimizationEnablement @ 0x1405BB398 (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405BB3E0 (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     strstr @ 0x1404FB270 (strstr.c)
 */

bool __fastcall KiIsSafeBoot(__int64 a1)
{
  const char *v1; // rcx

  v1 = *(const char **)(a1 + 216);
  return v1 && strstr(v1, "SAFEBOOT:") != 0LL;
}
