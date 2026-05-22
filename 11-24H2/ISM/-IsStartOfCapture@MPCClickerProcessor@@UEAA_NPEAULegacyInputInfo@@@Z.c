/*
 * XREFs of ?IsStartOfCapture@MPCClickerProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801C4690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCClickerProcessor::IsStartOfCapture(MPCClickerProcessor *this, struct LegacyInputInfo *a2)
{
  return *((_DWORD *)a2 + 17) == 2;
}
