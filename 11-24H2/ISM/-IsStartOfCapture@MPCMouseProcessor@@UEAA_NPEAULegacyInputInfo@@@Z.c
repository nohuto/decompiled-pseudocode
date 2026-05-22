/*
 * XREFs of ?IsStartOfCapture@MPCMouseProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801C22A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::IsStartOfCapture(MPCMouseProcessor *this, struct LegacyInputInfo *a2)
{
  return (*((_BYTE *)this + 5260) & 0x70) != 0;
}
