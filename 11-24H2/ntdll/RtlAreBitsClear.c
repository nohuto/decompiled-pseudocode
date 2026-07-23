/*
 * XREFs of RtlAreBitsClear @ 0x1800F43B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  BOOLEAN result; // al
  unsigned int *Buffer; // rcx
  char v6; // r10
  unsigned int *v7; // rdx
  unsigned int v8; // ebx
  unsigned int *v9; // r11
  unsigned int *v11; // rdx
  unsigned int v12; // r9d

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length > 1 )
  {
    if ( BitMapHeader->SizeOfBitMap - StartingIndex >= Length )
    {
      Buffer = BitMapHeader->Buffer;
      v6 = StartingIndex + Length - 1;
      v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
      v8 = *v7;
      v9 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
      if ( v7 == v9 )
        return (v8 & (0xFFFFFFFF >> (32 - Length) << StartingIndex)) == 0;
      if ( (v8 & (-1 << StartingIndex)) != 0 )
        return 0;
      v11 = v7 + 1;
      result = 0;
      while ( 1 )
      {
        v12 = *v11;
        if ( v11 == v9 )
          break;
        if ( v12 )
          return result;
        ++v11;
      }
      return (v12 & (0xFFFFFFFF >> ~v6)) == 0;
    }
    return 0;
  }
  if ( Length != 1 )
    return 0;
  return !_bittest(
            (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
            StartingIndex & 0x1F);
}
