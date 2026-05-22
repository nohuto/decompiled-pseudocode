/*
 * XREFs of ?IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801BD180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCClickerProcessor::IsEndOfCapture(MPCClickerProcessor *this, struct LegacyInputInfo *a2)
{
  return (unsigned int)(*((_DWORD *)a2 + 17) - 4) <= 1;
}
