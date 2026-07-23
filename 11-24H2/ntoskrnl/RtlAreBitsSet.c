/*
 * XREFs of RtlAreBitsSet @ 0x140441BC0
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 *     MiReserveExistingDriverPtes @ 0x140A6AEB8 (MiReserveExistingDriverPtes.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  unsigned int *Buffer; // rcx
  char v5; // r11
  unsigned int *v6; // rdx
  unsigned int v7; // r10d
  unsigned int *v8; // rbx
  int v9; // eax

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return _bittest(
               (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
               StartingIndex & 0x1F);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v5 = StartingIndex + Length - 1;
  v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v7 = *v6;
  v8 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
  if ( v6 != v8 )
  {
    if ( ((-1 << StartingIndex) & v7) == -1 << StartingIndex )
    {
      while ( 1 )
      {
        v9 = *++v6;
        if ( v6 == v8 )
          break;
        if ( v9 != -1 )
          return 0;
      }
      return ((0xFFFFFFFF >> ~v5) & v9) == 0xFFFFFFFF >> ~v5;
    }
    return 0;
  }
  return ((0xFFFFFFFF >> (32 - Length) << StartingIndex) & v7) == 0xFFFFFFFF >> (32 - Length) << StartingIndex;
}
