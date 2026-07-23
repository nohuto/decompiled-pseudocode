/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1800D9B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int SizeOfBitMap; // edi
  ULONG v4; // ebx
  unsigned int *Buffer; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // r10d
  unsigned int *v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  int v12; // r10d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  ULONG v15; // edx
  unsigned int v16; // r8d
  __int64 v18; // rcx
  unsigned int v19; // ebx
  unsigned int v20; // ecx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0;
  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  else
  {
    Buffer = BitMapHeader->Buffer;
    v7 = (unsigned __int64)FromIndex >> 5;
    v8 = Buffer[v7];
    v9 = &Buffer[v7];
    v10 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    v11 = (unsigned __int64)(v9 + 1);
    v12 = ((1 << (FromIndex & 0x1F)) - 1) | v8;
    while ( 1 )
    {
      v13 = ~v12;
      if ( v13 )
        break;
      if ( v11 > v10 )
        goto LABEL_11;
      v12 = v9[1];
      ++v9;
      v11 += 4LL;
    }
    _BitScanForward64((unsigned __int64 *)&v14, v13);
    v15 = v14 + 32 * (v9 - Buffer);
    if ( v15 > SizeOfBitMap )
    {
LABEL_11:
      v15 = SizeOfBitMap;
      goto LABEL_12;
    }
    v16 = ~(v13 | ((1 << v14) - 1));
    while ( 1 )
    {
      if ( v16 )
      {
        _BitScanForward64((unsigned __int64 *)&v18, v16);
        goto LABEL_14;
      }
      if ( (unsigned __int64)(v9 + 1) > v10 )
        break;
      v16 = v9[1];
      ++v9;
    }
    LODWORD(v18) = 32;
LABEL_14:
    v19 = SizeOfBitMap;
    v20 = 32 * (v9 - Buffer) + v18;
    if ( v20 <= SizeOfBitMap )
      v19 = v20;
    v4 = v19 - v15;
LABEL_12:
    *StartingRunIndex = v15;
    return v4;
  }
}
