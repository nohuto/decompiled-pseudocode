/*
 * XREFs of HalpQueryNumaRangeTableInformation @ 0x140556360
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B5BC60 (HaliQuerySystemInformation.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     memmove @ 0x1406B4940 (memmove.c)
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
