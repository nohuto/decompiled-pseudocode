/*
 * XREFs of RtlpAllocationSize @ 0x1800ABD54
 * Callers:
 *     RtlSetEnvironmentVar @ 0x1800AB3E0 (RtlSetEnvironmentVar.c)
 *     RtlSetCurrentEnvironment @ 0x180115850 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x180115E10 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocationSize(__int64 a1)
{
  return RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
