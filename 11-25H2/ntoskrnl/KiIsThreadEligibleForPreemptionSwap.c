/*
 * XREFs of KiIsThreadEligibleForPreemptionSwap @ 0x140312170
 * Callers:
 *     KiHeteroAttemptPreemptionSwap @ 0x140311FF4 (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadEligibleForPreemptionSwap(_DWORD *a1)
{
  return !a1[1] && a1[2] == 1 && (unsigned int)(a1[3] - 1) <= 1 && a1[5] == 0;
}
