/*
 * XREFs of HalpQueryNumaRangeTableInformation @ 0x1405565A0
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6CB90 (HaliQuerySystemInformation.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HalpQueryNumaRangeTableInformation(void *a1, size_t Size, unsigned int *a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  KIRQL v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // eax

  v5 = Size;
  v6 = 0;
  v7 = ExAcquireSpinLockShared(&HalpNumaMemoryRangeLock);
  v8 = 16 * (HalpNumaMemoryRangeCount + 1);
  if ( a3 )
  {
    if ( HalpNumaMemoryRangeCount )
    {
      v9 = 16 * (HalpNumaMemoryRangeCount + 1);
      if ( v8 > v5 )
        v9 = v5;
      if ( v5 )
        memmove(a1, HalpNumaMemoryRanges, v9);
    }
    else
    {
      v8 = 0;
    }
    *a3 = v8;
  }
  else if ( HalpNumaMemoryRanges )
  {
    if ( v5 >= 8 )
      v5 = 8;
    memmove(a1, &HalpNumaMemoryRanges, v5);
  }
  else
  {
    v6 = -1073741275;
  }
  ExReleaseSpinLockShared(&HalpNumaMemoryRangeLock, v7);
  return v6;
}
