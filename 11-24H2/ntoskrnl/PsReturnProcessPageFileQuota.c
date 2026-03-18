/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1409E5710
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140430F60 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1408E3010 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C640 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(__int64 **)(a1 + 760), a1, 2, a2);
  return result;
}
