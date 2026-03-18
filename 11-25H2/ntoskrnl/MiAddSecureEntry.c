/*
 * XREFs of MiAddSecureEntry @ 0x1408F8CA0
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateVad @ 0x1408F92F8 (MiAllocateVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 *     MiCloneNoChange @ 0x140A40E40 (MiCloneNoChange.c)
 * Callees:
 *     MiInsertVadEvent @ 0x1402A33D8 (MiInsertVadEvent.c)
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14041A410 (MmGetCurrentProcessorColor.c)
 *     MiLocateExclusiveSecure @ 0x1404819D0 (MiLocateExclusiveSecure.c)
 */

__int64 __fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v11; // rdi

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(0x40uLL, 0x58uLL, 1699966285, CurrentProcessorColor | 0x80000000);
  v11 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  *(_DWORD *)(PoolMm + 80) = 2;
  *(_QWORD *)(PoolMm + 8) = a2;
  *(_QWORD *)(PoolMm + 16) = a3;
  if ( (a4 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 8;
    goto LABEL_8;
  }
  if ( (a4 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0xA;
    goto LABEL_8;
  }
  if ( (a4 & 2) != 0 )
  {
    LODWORD(a2) = a2 | 9;
LABEL_8:
    *(_DWORD *)(PoolMm + 8) = a2;
  }
  if ( (a5 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 0x20;
    *(_DWORD *)(PoolMm + 8) = a2;
  }
  if ( (a5 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0x40;
    *(_DWORD *)(PoolMm + 8) = a2;
  }
  if ( (a5 & 8) != 0 )
  {
    LODWORD(a2) = a2 | 0x80;
    *(_DWORD *)(PoolMm + 8) = a2;
  }
  if ( a4 < 0 )
  {
    LODWORD(a2) = a2 | 4;
    *(_DWORD *)(PoolMm + 8) = a2;
  }
  if ( (a4 & 0x40000000) != 0 )
  {
    LODWORD(a2) = a2 | 0x10;
    *(_DWORD *)(PoolMm + 8) = a2;
  }
  if ( (a4 & 0x20000000) != 0 )
    *(_DWORD *)(PoolMm + 8) = a2 | 0x100;
  MiInsertVadEvent(a1, (unsigned __int64 *)PoolMm, 1);
  MiSetVadFlags(a1, 1LL, 1);
  return v11;
}
