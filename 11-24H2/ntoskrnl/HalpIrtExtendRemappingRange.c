/*
 * XREFs of HalpIrtExtendRemappingRange @ 0x1406FF200
 * Callers:
 *     HalpInitializeInterruptRemappingBspLate @ 0x1406FEBC8 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x1406FEE94 (HalpIrtAllocateIndex.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpIrtExtendRemappingRange(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int *Pool2; // rbp
  char v4; // si
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = a1;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  if ( a1 >= 0x20 || a1 && (HalpIrtAllocationFlags & 8) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    Pool2 = (unsigned int *)ExAllocatePool2(
                              0x100uLL,
                              4 * ((unsigned int)(HalpIrtEntriesPerRange + 31) >> 5),
                              0x696C6148u);
    if ( Pool2 )
    {
      BitMapHeader.SizeOfBitMap = HalpIrtEntriesPerRange;
      v4 = 1;
      BitMapHeader.Buffer = Pool2;
      RtlClearAllBits(&BitMapHeader);
      ExAcquireFastMutex(&HalpIrtLock);
      if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v2) )
      {
        ++HalpIrtAllocatedRanges;
        v4 = 0;
        *(&HalpIrtRanges + v2) = BitMapHeader;
      }
      KeReleaseGuardedMutex(&HalpIrtLock);
      if ( v4 )
        ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
