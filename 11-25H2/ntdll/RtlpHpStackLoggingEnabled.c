/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x1800D83B0
 * Callers:
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180143B40 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpStackLoggingEnabled(__int64 a1)
{
  return (dword_1801D0918 & 1) != 0
      && (dword_1801D0918 & 2) != 0
      && NtCurrentPeb()->ProcessHeap
      && a1 != qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]];
}
