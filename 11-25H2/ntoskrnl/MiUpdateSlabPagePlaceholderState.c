/*
 * XREFs of MiUpdateSlabPagePlaceholderState @ 0x1403B79B4
 * Callers:
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiFreePageToSlabAllocator @ 0x1403B7474 (MiFreePageToSlabAllocator.c)
 *     MiDemoteSlabEntry @ 0x1403B7C60 (MiDemoteSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 *     MiDefragmentSlabWorker @ 0x14067B5D0 (MiDefragmentSlabWorker.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     VslSetPlaceholderPages @ 0x1403B7AC4 (VslSetPlaceholderPages.c)
 *     MiAbortCombineScan @ 0x1403B7B64 (MiAbortCombineScan.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
