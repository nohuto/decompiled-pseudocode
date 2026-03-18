/*
 * XREFs of KiIsWinPEBoot @ 0x1405BA2F0
 * Callers:
 *     KiDetermineImportOptimizationEnablement @ 0x1405B9F1C (KiDetermineImportOptimizationEnablement.c)
 *     KiDetermineRetpolineEnablement @ 0x1405B9F64 (KiDetermineRetpolineEnablement.c)
 * Callees:
 *     strstr @ 0x1404FB230 (strstr.c)
 */

bool __fastcall KiIsWinPEBoot(__int64 a1)
{
  const char *v1; // rcx

  v1 = *(const char **)(a1 + 216);
  return v1 && strstr(v1, "MININT") != 0LL;
}
