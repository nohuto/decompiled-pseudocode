/*
 * XREFs of MiInitializeFoundLargeNodePage @ 0x1404F5EE8
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiConvertActiveLargePageToSmall @ 0x14038A558 (MiConvertActiveLargePageToSmall.c)
 *     MiSetPfnOwnedAndActive @ 0x14045C318 (MiSetPfnOwnedAndActive.c)
 */

__int64 __fastcall MiInitializeFoundLargeNodePage(__int64 a1, int a2, char a3)
{
  unsigned __int64 v5; // rbx
  int PfnPageSizeIndex; // ebp
  __int64 result; // rax
  int v8; // r14d
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
