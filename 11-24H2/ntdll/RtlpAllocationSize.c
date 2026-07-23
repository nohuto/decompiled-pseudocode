/*
 * XREFs of RtlpAllocationSize @ 0x180005844
 * Callers:
 *     RtlSetEnvironmentVar @ 0x180004ED0 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x18010DDD0 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x18010E140 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

SIZE_T __fastcall RtlpAllocationSize(void *a1)
{
  return RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
