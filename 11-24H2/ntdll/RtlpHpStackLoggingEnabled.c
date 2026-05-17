/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x1800DB020
 * Callers:
 *     RtlpHpFreeHeapSlow @ 0x18002B6C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011C8F0 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180142450 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpStackLoggingEnabled(__int64 a1)
{
  return (dword_1801CE8C8 & 1) != 0
      && (dword_1801CE8C8 & 2) != 0
      && NtCurrentPeb()->ProcessHeap
      && a1 != qword_1801D21B8[2 * (unsigned int)dword_1801800C8[BYTE1(RtlpHpEnvHandle)]];
}
