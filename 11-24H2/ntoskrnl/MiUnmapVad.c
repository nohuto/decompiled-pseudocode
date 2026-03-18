/*
 * XREFs of MiUnmapVad @ 0x1408E5280
 * Callers:
 *     MiDeletePartialVad @ 0x1403CDE5C (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x1408E5224 (MiCleanVad.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x14044BF3C (MiReadVadFlags2.c)
 *     MiLogMapFileEvent @ 0x1408E2B54 (MiLogMapFileEvent.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     PfCheckDeprioritizeFile @ 0x1408E5C40 (PfCheckDeprioritizeFile.c)
 */

__int64 __fastcall MiUnmapVad(_QWORD *P)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  ULONG_PTR v5; // rax
  __int64 v6; // r14
  _KPROCESS *Process; // rcx

  if ( (MiReadVadFlags2((__int64)P) & 2) != 0 )
  {
    v4 = **(_QWORD **)(v2 + 72);
    v5 = MiReferenceControlAreaFile(v4);
    v6 = *(_QWORD *)(v5 + 24);
    MiDereferenceControlAreaFile(v4, v5);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
      PfCheckDeprioritizeFile(
        Process,
        HIDWORD(Process[1].CpuPartitionList.Blink),
        v6,
        (*((unsigned int *)P + 7) | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
      - (*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
      + 1);
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && P[9] )
    MiLogMapFileEvent((__int64)P, 1062);
  return MiDeleteVad(P);
}
