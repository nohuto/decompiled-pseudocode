/*
 * XREFs of RtlNumberOfSetBitsInRange @ 0x1404BD140
 * Callers:
 *     RtlNumberOfClearBitsInRange @ 0x1405DC0D0 (RtlNumberOfClearBitsInRange.c)
 *     KiTpIsExcludedKernelTracepointLocation @ 0x140731ED0 (KiTpIsExcludedKernelTracepointLocation.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v4; // r9d
  ULONG v5; // r10d
  char *v6; // r8
  ULONG v7; // r11d
  __int64 v8; // rdi
  ULONG v9; // esi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char v13; // dl
  int v14; // edx
  unsigned __int8 v15; // cl
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // cl

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return -1;
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return -1;
  v4 = 0;
  if ( !Length )
    return -1;
  v5 = StartingIndex >> 3;
  v6 = (char *)BitMapHeader->Buffer + (StartingIndex >> 3);
  v7 = (Length + StartingIndex - 1) >> 3;
  v8 = StartingIndex & 7;
  v9 = (Length + StartingIndex - 1) & 7;
  if ( StartingIndex >> 3 == v7 )
    return *((unsigned __int8 *)RtlpBitsClearTotal
           + (unsigned __int8)~(*v6 & byte_1400127F8[v8] & byte_14002B070[v9 + 1]));
  if ( (((unsigned __int8)Length | (unsigned __int8)StartingIndex) & 0x3F) != 0 )
  {
    if ( (StartingIndex & 7) != 0 )
    {
      v13 = *v6++;
      ++v5;
      v4 = *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(v13 & byte_1400127F8[v8]));
    }
    v14 = 8 - (v5 & 7);
    if ( (v14 & 0xFFFFFFF7) != 0 )
    {
      do
      {
        if ( v5 >= v7 )
          break;
        ++v5;
        v15 = ~*v6++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + v15);
        --v14;
      }
      while ( v14 );
    }
    while ( (unsigned __int64)v5 + 8 <= v7 )
    {
      v16 = *(_QWORD *)v6;
      v6 += 8;
      v4 += __popcnt(v16);
      v5 += 8;
    }
    if ( v5 < v7 )
    {
      v17 = v7 - v5;
      do
      {
        v18 = *v6++;
        v4 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v18);
        --v17;
      }
      while ( v17 );
    }
    return v4 + *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~(*v6 & byte_14002B070[v9 + 1]));
  }
  else
  {
    v11 = ((Length - 1) >> 6) + 1;
    do
    {
      v12 = *(_QWORD *)v6;
      v6 += 8;
      v4 += __popcnt(v12);
      --v11;
    }
    while ( v11 );
    return v4;
  }
}
