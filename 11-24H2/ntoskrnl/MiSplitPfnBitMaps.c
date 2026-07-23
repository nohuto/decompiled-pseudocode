/*
 * XREFs of MiSplitPfnBitMaps @ 0x1407FB5D0
 * Callers:
 *     MiSplitPfnBitMapsForPartitionHierarchy @ 0x14068C5C4 (MiSplitPfnBitMapsForPartitionHierarchy.c)
 *     MiCreatePfnBitMaps @ 0x1407FAF3C (MiCreatePfnBitMaps.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14026C5E4 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitPfnBitMaps(ULONG *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  unsigned int v6; // esi
  unsigned int i; // edi
  unsigned __int64 v8; // r13
  unsigned int j; // ebp
  unsigned __int64 v10; // r8
  unsigned __int64 v12; // [rsp+68h] [rbp+10h]

  v3 = a3;
  if ( a2 + a3 > (unsigned __int64)(qword_140E2DD20 + 1) )
    return 0LL;
  v6 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v8 = ((v3 - 1 + MiPageSizes[i] + a2) & (unsigned __int64)~(MiPageSizes[i] - 1)) / MiPageSizes[i];
    if ( !(unsigned int)MiSplitBitmapPages(8LL) )
      return 0LL;
    if ( v8 > *(_QWORD *)&a1[4 * i + 4082] )
      *(_QWORD *)&a1[4 * i + 4082] = v8;
    v3 = a3;
  }
  if ( a1 == &MiSystemPartition && !(unsigned int)MiSplitBitmapPages(8LL) || !(unsigned int)MiSplitBitmapPages(8LL) )
    return 0LL;
  for ( j = 0; j < 3; ++j )
  {
    v10 = 1LL << MiLargePageCoalesceCandidateBitmapShifts[j];
    v12 = ((v10 + a2 + a3 - 1) & ~(v10 - 1)) / v10;
    if ( !(unsigned int)MiSplitBitmapPages(8LL) )
      return 0LL;
    if ( v12 > *(_QWORD *)&a1[4 * j + 4098] )
      *(_QWORD *)&a1[4 * j + 4098] = v12;
  }
  if ( !(unsigned int)MiSplitBitmapPages(8LL) )
    return 0LL;
  if ( a1 != &MiSystemPartition )
    return 1LL;
  LOBYTE(v6) = (unsigned int)MiSplitBitmapPages(8LL) != 0;
  return v6;
}
