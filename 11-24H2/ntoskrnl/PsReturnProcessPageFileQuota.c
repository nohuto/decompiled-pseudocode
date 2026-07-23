/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1409DFFA0
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1404234A0 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x14027CC50 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(__int64 **)(a1 + 760), a1, 2, a2);
  return result;
}
