/*
 * XREFs of HalpIrtAllocateIndex @ 0x1406F5464
 * Callers:
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FD20 (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     RtlFindClearBitsAndSet @ 0x140338AF0 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     RtlFindNextForwardRunClear @ 0x1403DCC50 (RtlFindNextForwardRunClear.c)
 *     HalpIommuAllocateRemappingTableEntry @ 0x14054AB24 (HalpIommuAllocateRemappingTableEntry.c)
 *     HalpIrtAllocateDeviceAperture @ 0x1406F5314 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendRemappingRange @ 0x1406F57D0 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtReleaseDeviceAperture @ 0x1406F5990 (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtAllocateIndex(
        _DWORD *a1,
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
  __int64 v19; // rcx
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
