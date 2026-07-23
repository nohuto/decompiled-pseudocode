/*
 * XREFs of HalpIrtAllocateIndex @ 0x1406FEE94
 * Callers:
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FEA0 (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     RtlFindNextForwardRunClear @ 0x1403C3BB0 (RtlFindNextForwardRunClear.c)
 *     HalpIommuAllocateRemappingTableEntry @ 0x14054AD28 (HalpIommuAllocateRemappingTableEntry.c)
 *     HalpIrtAllocateDeviceAperture @ 0x1406FED44 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendRemappingRange @ 0x1406FF200 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtReleaseDeviceAperture @ 0x1406FF3C0 (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtAllocateIndex(
        unsigned int *a1,
        ULONG a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int *a7)
{
  ULONG v7; // ebp
  int RemappingTableEntry; // ebx
  int v11; // r12d
  unsigned int v12; // r14d
  __int64 v13; // rdx
  _RTL_BITMAP *v14; // r15
  ULONG ClearBitsAndSet; // esi
  ULONG v16; // edx
  ULONG NextForwardRunClear; // eax
  ULONG v18; // ebx
  unsigned int v19; // ecx
  char v21; // [rsp+40h] [rbp-48h]
  ULONG StartingRunIndex; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-40h]

  v7 = 0;
  v21 = 0;
  StartingRunIndex = 0;
  RemappingTableEntry = 0;
  if ( a7 )
    v11 = *a7;
  else
    v11 = 0;
  if ( !HalpIrtTotalEntries )
  {
    *a1 = 0;
    return (unsigned int)RemappingTableEntry;
  }
  if ( (HalpIrtAllocationFlags & 4) != 0 )
  {
    RemappingTableEntry = HalpIrtAllocateDeviceAperture(a3, a4, a2, v11, &StartingRunIndex);
    if ( RemappingTableEntry < 0 )
      return (unsigned int)RemappingTableEntry;
    v7 = StartingRunIndex;
    v21 = 1;
  }
  v12 = v7 / HalpIrtAperturesPerRange;
  ExAcquireFastMutex(&HalpIrtLock);
  if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v12) )
  {
    KeReleaseGuardedMutex(&HalpIrtLock);
    RemappingTableEntry = HalpIrtExtendRemappingRange(v12, v13);
    if ( RemappingTableEntry < 0 )
      goto LABEL_28;
    ExAcquireFastMutex(&HalpIrtLock);
  }
  v14 = &HalpIrtRanges + v12;
  if ( (HalpIrtAllocationFlags & 1) != 0 )
  {
    v16 = HalpIrtEntriesPerDeviceAperture * v7 % HalpIrtEntriesPerRange;
    v23 = v16 + HalpIrtEntriesPerDeviceAperture - 1;
    ClearBitsAndSet = -1;
    while ( 1 )
    {
      StartingRunIndex = v16;
      NextForwardRunClear = RtlFindNextForwardRunClear(v14, v16, &StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( NextForwardRunClear >= a2 )
      {
        v18 = -a2 & (a2 + StartingRunIndex - 1);
        if ( v18 - StartingRunIndex < NextForwardRunClear && NextForwardRunClear + StartingRunIndex - v18 >= a2 )
        {
          if ( v18 + a2 - 1 <= v23 )
          {
            RtlSetBits(v14, v18, a2);
            ClearBitsAndSet = v18;
          }
          break;
        }
      }
      v16 = NextForwardRunClear + StartingRunIndex;
    }
  }
  else
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v14, a2, 0);
  }
  KeReleaseGuardedMutex(&HalpIrtLock);
  if ( ClearBitsAndSet == -1 )
  {
    RemappingTableEntry = -1073741670;
  }
  else
  {
    RemappingTableEntry = 0;
    v19 = HalpIrtEntriesPerRange * v12 + ClearBitsAndSet;
    *a1 = v19;
    if ( v11 != 3 )
      return (unsigned int)RemappingTableEntry;
    if ( (HalpIrtAllocationFlags & 2) == 0 )
      return (unsigned int)RemappingTableEntry;
    RemappingTableEntry = HalpIommuAllocateRemappingTableEntry(v19, a2, a3, a4, a7[14], a5, a6);
    if ( RemappingTableEntry >= 0 )
      return (unsigned int)RemappingTableEntry;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(v14, ClearBitsAndSet, a2);
    KeReleaseGuardedMutex(&HalpIrtLock);
    *a1 = -1;
  }
LABEL_28:
  if ( v21 )
    HalpIrtReleaseDeviceAperture(v7, a2);
  return (unsigned int)RemappingTableEntry;
}
