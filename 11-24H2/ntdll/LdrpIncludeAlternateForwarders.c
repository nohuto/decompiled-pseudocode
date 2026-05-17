/*
 * XREFs of LdrpIncludeAlternateForwarders @ 0x18011EB74
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlpComputePath @ 0x180084760 (RtlpComputePath.c)
 * Callees:
 *     <none>
 */

bool LdrpIncludeAlternateForwarders()
{
  struct _PEB *v0; // rcx

  v0 = NtCurrentPeb();
  return (v0->ProcessParameters->Flags & 0x4000000) != 0 || (v0->NtGlobalFlag2 & 2) != 0;
}
