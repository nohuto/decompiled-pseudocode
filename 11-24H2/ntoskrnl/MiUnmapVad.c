/*
 * XREFs of MiUnmapVad @ 0x140895E38
 * Callers:
 *     MiDeletePartialVad @ 0x1402675A0 (MiDeletePartialVad.c)
 *     MiCleanVad @ 0x140895DDC (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiLogMapFileEvent @ 0x140919704 (MiLogMapFileEvent.c)
 *     PfCheckDeprioritizeFile @ 0x1409DCA6C (PfCheckDeprioritizeFile.c)
 */

void __fastcall MiUnmapVad(unsigned __int8 *P, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  ULONG_PTR v8; // rax
  __int64 v9; // r14
  _KPROCESS *Process; // rcx

  if ( (MiReadVadFlags2((__int64)P) & 2) != 0 )
  {
    v7 = **(_QWORD **)(v4 + 72);
    v8 = MiReferenceControlAreaFile(v7);
    v9 = *(_QWORD *)(v8 + 24);
    MiDereferenceControlAreaFile(v7, v8);
    Process = KeGetCurrentThread()->ApcState.Process;
    v6 = *((unsigned int *)P + 7) | ((unsigned __int64)P[33] << 32);
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      PfCheckDeprioritizeFile(
        Process,
        HIDWORD(Process[1].CpuPartitionList.Blink),
        v9,
        v6 - (*((unsigned int *)P + 6) | ((unsigned __int64)P[32] << 32)) + 1);
  }
  if ( (PerfGlobalGroupMask[0] & 0x8000) != 0 && *((_QWORD *)P + 9) )
    MiLogMapFileEvent(P, 1062LL, v5, v6);
  MiDeleteVad(P, a2);
}
