/*
 * XREFs of MiUnmapVad @ 0x1408B4E4C
 * Callers:
 *     MiDeletePartialVad @ 0x1402A3A10 (MiDeletePartialVad.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x1408B4DF0 (MiCleanVad.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     PfCheckDeprioritizeFile @ 0x1408B5CCC (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x140903AB0 (MiLogMapFileEvent.c)
 */

__int64 __fastcall MiUnmapVad(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v10; // rbx
  ULONG_PTR v11; // rax
  __int64 v12; // r14
  _KPROCESS *Process; // rcx

  if ( (MiReadVadFlags2(a1) & 2) != 0 )
  {
    v10 = **(_QWORD **)(v6 + 72);
    v11 = MiReferenceControlAreaFile(v10);
    v12 = *(_QWORD *)(v11 + 24);
    MiDereferenceControlAreaFile(v10, v11);
    Process = KeGetCurrentThread()->ApcState.Process;
    v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0 )
    {
      if ( (unsigned int)PfCheckDeprioritizeFile(
                           Process,
                           HIDWORD(Process[1].CpuPartitionList.Blink),
                           v12,
                           v8
                         - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                         + 1) )
        a3 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(a1 + 72) )
    MiLogMapFileEvent(a1, 1062LL, v7, v8);
  return MiDeleteVad(a1, a2, a3);
}
