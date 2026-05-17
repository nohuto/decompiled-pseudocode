/*
 * XREFs of RtlpAllocationSize @ 0x1800839C4
 * Callers:
 *     RtlSetEnvironmentVar @ 0x180083050 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x180112B10 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x180112E80 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocationSize(__int64 a1)
{
  return RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
