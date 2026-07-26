/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x140166450
 * Callers:
 *     ndisPplIsUseAfterFreeVerifierEnabled @ 0x1400561B0 (ndisPplIsUseAfterFreeVerifierEnabled.c)
 * Callees:
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140141E6C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

bool __fastcall ndisDriverVerifierNdisFlagEnabledForCaller(void *a1)
{
  return MmIsDriverVerifyingByAddress(a1) && ndisDriverVerifierNdisFlagEnabled();
}
