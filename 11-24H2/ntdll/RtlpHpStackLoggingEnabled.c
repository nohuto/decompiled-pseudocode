/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x1800D5580
 * Callers:
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180140600 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpStackLoggingEnabled(__int64 a1)
{
  return (dword_1801CD8B8 & 1) != 0
      && (dword_1801CD8B8 & 2) != 0
      && NtCurrentPeb()->ProcessHeap
      && a1 != qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[BYTE1(RtlpHpEnvHandle)]];
}
