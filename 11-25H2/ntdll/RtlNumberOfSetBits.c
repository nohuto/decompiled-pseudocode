/*
 * XREFs of RtlNumberOfSetBits @ 0x1800F4AC0
 * Callers:
 *     TpSetPoolThreadCpuSets @ 0x18003B1A0 (TpSetPoolThreadCpuSets.c)
 *     RtlNumberOfClearBits @ 0x1800F4A90 (RtlNumberOfClearBits.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int SizeOfBitMap; // ebp
  unsigned int *Buffer; // r8
  unsigned int v3; // edx
  unsigned int v4; // esi
  ULONG v5; // r10d
  int v6; // r9d
  unsigned int v7; // ebx
  unsigned int v8; // r11d
  int v9; // edx
  int v10; // edi
  unsigned int v11; // edx
  int i; // r9d
  char v13; // cl
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  char v19; // cl

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v3 = BitMapHeader->SizeOfBitMap >> 3;
  v4 = BitMapHeader->SizeOfBitMap & 7;
  v5 = 0;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v3 + (v4 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) > (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v10 = 0;
    v8 = v3 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v11 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v3 - (8 - (_BYTE)v6)) & 7;
    v10 = v9 + 1;
    if ( !v4 )
      v10 = v9;
    v11 = v7 - v10 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v13 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v7 - 1 && v4 )
      v13 &= byte_180194138[SizeOfBitMap & 7];
    ++i;
    v5 += RtlpBitsClearTotal[(unsigned __int8)~v13];
  }
  if ( v11 )
  {
    v15 = ((v11 - 1) >> 3) + 1;
    v16 = v15;
    i += 8 * v15;
    do
    {
      v17 = *(_QWORD *)Buffer;
      Buffer += 2;
      v5 += __popcnt(v17);
      --v16;
    }
    while ( v16 );
  }
  if ( v10 )
  {
    v18 = v7 - 1;
    do
    {
      v19 = *(_BYTE *)Buffer;
      Buffer = (unsigned int *)((char *)Buffer + 1);
      if ( i == v18 && (SizeOfBitMap & 7) != 0 )
        v19 &= byte_180194138[SizeOfBitMap & 7];
      ++i;
      v5 += RtlpBitsClearTotal[(unsigned __int8)~v19];
      --v10;
    }
    while ( v10 );
  }
  return v5;
}
