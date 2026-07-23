/*
 * XREFs of RtlpAllocationSize @ 0x1800ABD54
 * Callers:
 *     RtlSetEnvironmentVar @ 0x1800AB3E0 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x180115850 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x180115E10 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

SIZE_T __fastcall RtlpAllocationSize(void *a1)
{
  return RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
