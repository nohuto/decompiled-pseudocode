/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x140172CE0
 * Callers:
 *     ndisPplIsUseAfterFreeVerifierEnabled @ 0x140071390 (ndisPplIsUseAfterFreeVerifierEnabled.c)
 * Callees:
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x14014CB3C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

bool __fastcall ndisDriverVerifierNdisFlagEnabledForCaller(void *a1)
{
  return MmIsDriverVerifyingByAddress(a1) && ndisDriverVerifierNdisFlagEnabled();
}
