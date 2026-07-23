/*
 * XREFs of RtlAreBitsSet @ 0x1800F7980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  unsigned int *Buffer; // rcx
  char v6; // r11
  unsigned int *v7; // rdx
  unsigned int v8; // r10d
  unsigned int *v9; // rbx
  int v11; // eax

  if ( StartingIndex < BitMapHeader->SizeOfBitMap )
  {
    if ( Length <= 1 )
    {
      if ( Length == 1 )
        return _bittest(
                 (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
                 StartingIndex & 0x1F);
      return 0;
    }
    if ( BitMapHeader->SizeOfBitMap - StartingIndex >= Length )
    {
      Buffer = BitMapHeader->Buffer;
      v6 = StartingIndex + Length - 1;
      v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
      v8 = *v7;
      v9 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
      if ( v7 == v9 )
        return ((0xFFFFFFFF >> (32 - Length) << StartingIndex) & v8) == 0xFFFFFFFF >> (32 - Length) << StartingIndex;
      if ( ((-1 << StartingIndex) & v8) == -1 << StartingIndex )
      {
        while ( 1 )
        {
          v11 = *++v7;
          if ( v7 == v9 )
            break;
          if ( v11 != -1 )
            return 0;
        }
        return ((0xFFFFFFFF >> ~v6) & v11) == 0xFFFFFFFF >> ~v6;
      }
    }
  }
  return 0;
}
