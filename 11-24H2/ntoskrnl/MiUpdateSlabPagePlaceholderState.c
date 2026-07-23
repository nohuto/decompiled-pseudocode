/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x1403A9C00
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 *     MiFreePageToSlabAllocator @ 0x140250F18 (MiFreePageToSlabAllocator.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiDemoteSlabEntry @ 0x14043BE9C (MiDemoteSlabEntry.c)
 *     MiDefragmentSlabWorker @ 0x140687F90 (MiDefragmentSlabWorker.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     VslSetPlaceholderPages @ 0x1403A9D10 (VslSetPlaceholderPages.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
          MiSetPfnIdentity(v7, 3u);
          MiAbortCombineScan(v7);
        }
        v8 = 0;
        v9 = *((_DWORD *)MiSlabTypeToMmSlabType + v4);
      }
      else
      {
        if ( a3 == 1 )
          MiSetPfnIdentity(48 * a2 - 0x220000000000LL, 0);
        v8 = *((_DWORD *)MiSlabTypeToMmSlabType + v4);
        v9 = 0;
      }
      if ( (MiFlags & 0x4000) != 0 && (int)VslSetPlaceholderPages(a2, a3, v8, v9) < 0 )
        KeBugCheckEx(0x1Au, 0x5150FuLL, a2, (int)v8, (int)v9);
    }
  }
}
