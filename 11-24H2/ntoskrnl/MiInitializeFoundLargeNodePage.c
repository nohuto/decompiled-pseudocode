/*
 * XREFs of MiInitializeFoundLargeNodePage @ 0x1404F869C
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiConvertActiveLargePageToSmall @ 0x14041F5E8 (MiConvertActiveLargePageToSmall.c)
 *     MiSetPfnOwnedAndActive @ 0x14045B630 (MiSetPfnOwnedAndActive.c)
 */

__int64 __fastcall MiInitializeFoundLargeNodePage(__int64 a1, int a2, char a3)
{
  unsigned __int64 v5; // rbx
  int PfnPageSizeIndex; // ebp
  __int64 result; // rax
  unsigned int v8; // r14d
  __int64 v9; // rbp
  __int16 v10; // di
  char v11; // si
  int v12; // [rsp+20h] [rbp-28h]

  v5 = a1;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  result = MiConvertActiveLargePageToSmall(v5, 1);
  if ( (a2 & 0x40000000) == 0 )
  {
    v8 = (unsigned __int8)BYTE2(*(_DWORD *)(v5 + 32)) >> 6;
    v9 = MiPageSizes[PfnPageSizeIndex];
    v10 = ((a2 & 0x100000) != 0) + 1;
    v11 = a3 | 8;
    do
    {
      LOWORD(v12) = v10;
      result = MiSetPfnOwnedAndActive(v5, v11, -8LL, v8, v12);
      v5 += 48LL;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
