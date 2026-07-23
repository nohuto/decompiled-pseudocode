/*
 * XREFs of KiIsThreadEligibleForPreemptionSwap @ 0x140415900
 * Callers:
 *     KiHeteroAttemptPreemptionSwap @ 0x14041576C (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadEligibleForPreemptionSwap(_DWORD *a1)
{
  return !a1[1] && a1[2] == 1 && (unsigned int)(a1[3] - 1) <= 1 && a1[5] == 0;
}
