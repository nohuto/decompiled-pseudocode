/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1409EC190
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140434620 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x1403C6990 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(__int64 **)(a1 + 760), a1, 2, a2);
  return result;
}
