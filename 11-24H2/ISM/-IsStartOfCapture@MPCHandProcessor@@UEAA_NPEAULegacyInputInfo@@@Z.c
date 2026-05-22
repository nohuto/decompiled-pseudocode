/*
 * XREFs of ?IsStartOfCapture@MPCHandProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1800C0290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCHandProcessor::IsStartOfCapture(MPCHandProcessor *this, struct LegacyInputInfo *a2)
{
  return (*(_DWORD *)a2 & 0x662600) != 0 && *((_DWORD *)a2 + 16) == 2;
}
