/*
 * XREFs of ?IsDetectedOrLostReport@MPCSixDofProcessor@@EEAA_NPEAULegacyInputInfo@@@Z @ 0x1801B4960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::IsDetectedOrLostReport(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  return ((*((_DWORD *)a2 + 17) - 1) & 0xFFFFFFFB) == 0;
}
