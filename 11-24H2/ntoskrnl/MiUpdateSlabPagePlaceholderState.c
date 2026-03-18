/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x140264F54
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x1402241C8 (MiFreePageToSlabAllocator.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x1403A2ED0 (MiGetPageFromSlabAllocator.c)
 *     MiDemoteSlabEntry @ 0x140442F50 (MiDemoteSlabEntry.c)
 *     MiDefragmentSlabWorker @ 0x140686E60 (MiDefragmentSlabWorker.c)
 * Callees:
 *     VslSetPlaceholderPages @ 0x140265064 (VslSetPlaceholderPages.c)
 *     MiAbortCombineScan @ 0x140265104 (MiAbortCombineScan.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiUpdateSlabPagePlaceholderState(int a1, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v9; // edi

  if ( a1 >= 0 )
  {
    v4 = (unsigned int)a1;
    if ( a1 <= 4 && a1 != 2 )
    {
      if ( a4 )
      {
        if ( a3 == 1 )
        {
          v7 = 48 * a2 - 0x220000000000LL;
          MiSetPfnIdentity(v7, 3LL);
          MiAbortCombineScan(v7);
        }
        v8 = 0;
        v9 = *((_DWORD *)MiSlabTypeToMmSlabType + v4);
      }
      else
      {
        if ( a3 == 1 )
          MiSetPfnIdentity(48 * a2 - 0x220000000000LL, 0LL);
        v8 = *((_DWORD *)MiSlabTypeToMmSlabType + v4);
        v9 = 0;
      }
      if ( (MiFlags & 0x4000) != 0 && (int)VslSetPlaceholderPages(a2, a3, v8, v9) < 0 )
        KeBugCheckEx(0x1Au, 0x5150FuLL, a2, (int)v8, (int)v9);
    }
  }
}
