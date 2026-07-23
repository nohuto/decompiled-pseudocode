/*
 * XREFs of RtlFindClearRuns @ 0x1403E2BF0
 * Callers:
 *     RtlFindLongestRunClear @ 0x1405E5620 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  PRTL_BITMAP_RUN v4; // r12
  ULONG v5; // r14d
  unsigned int v6; // r8d
  unsigned int *Buffer; // r10
  unsigned int v8; // edx
  ULONG v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rdi
  ULONG v13; // r13d
  int v14; // r11d
  unsigned __int8 v15; // r9
  __int64 v16; // rsi
  ULONG v17; // edi
  unsigned __int8 j; // r9
  ULONG v19; // r8d
  BOOLEAN v20; // dl
  signed int v21; // r15d
  __int64 v22; // rbp
  _RTL_BITMAP_RUN *i; // r14
  unsigned __int8 *v24; // rsi
  __int64 v25; // r14
  int v26; // r12d
  char k; // r15
  ULONG v28; // ebp
  signed int v29; // ebp
  __int64 v30; // rsi
  _RTL_BITMAP_RUN *m; // r8
  signed int v32; // r8d
  __int64 v33; // r9
  _RTL_BITMAP_RUN *n; // rdx
  __int64 v36; // rcx
  _RTL_BITMAP_RUN *v37; // rdx
  unsigned int v38; // [rsp+0h] [rbp-58h]
  unsigned int SizeOfBitMap; // [rsp+4h] [rbp-54h]
  ULONG v40; // [rsp+60h] [rbp+8h]

  v4 = RunArray;
  v5 = SizeOfRunArray;
  Buffer = BitMapHeader->Buffer;
  v8 = BitMapHeader->SizeOfBitMap & 7;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = BitMapHeader->SizeOfBitMap;
  v38 = v8;
  v9 = 0;
  v10 = (BitMapHeader->SizeOfBitMap >> 3) + (v8 != 0);
  v40 = 0;
  v11 = 0;
  LODWORD(v12) = 0;
  v13 = 0;
  v14 = 0;
  while ( v11 < v10 )
  {
    v15 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( v11 == v10 - 1 && v8 )
      v15 |= byte_140012870[v6 & 7];
    if ( !v15 )
    {
      LODWORD(v12) = v12 + 8;
      goto LABEL_6;
    }
    v16 = *((unsigned __int8 *)RtlpBitsClearLow + v15);
    v17 = v16 + v12;
    if ( v17 )
    {
      if ( v9 < v5 )
      {
        v40 = ++v9;
LABEL_13:
        v20 = LocateLongestRuns;
        v21 = v9 - 2;
        if ( LocateLongestRuns )
        {
          v22 = v21;
          for ( i = &v4[v21 + 1]; v22 >= 0 && i[-1].NumberOfBits < v17; --i )
          {
            --v21;
            --v22;
            *i = i[-1];
          }
          v9 = v40;
          v5 = SizeOfRunArray;
          v20 = LocateLongestRuns;
        }
        v4[v21 + 1].NumberOfBits = v17;
        v4[v21 + 1].StartingIndex = v13;
        if ( !v20 && v9 >= v5 )
          return v9;
        goto LABEL_8;
      }
      if ( v4[v9 - 1].NumberOfBits < v17 )
        goto LABEL_13;
    }
LABEL_8:
    v12 = *((unsigned __int8 *)RtlpBitsClearHigh + v15);
    v13 = v14 - v12 + 8;
    for ( j = *((_BYTE *)&qword_140012878 - v12) | byte_14002BBD0[v16] | v15; ; j |= k )
    {
      v19 = v9;
      if ( j == 0xFF )
        break;
      v24 = (unsigned __int8 *)RtlpBitsClearAnywhere + j;
      if ( v9 >= v5 && v4[v9 - 1].NumberOfBits >= *v24 )
        break;
      v25 = *v24;
      v26 = 0;
      for ( k = byte_14002BBD0[v25]; ((unsigned __int8)k & j) != 0; ++v26 )
        k *= 2;
      v28 = v9 + 1;
      if ( v19 >= SizeOfRunArray )
        v28 = v19;
      v40 = v28;
      v29 = v28 - 2;
      if ( LocateLongestRuns )
      {
        v30 = v29;
        for ( m = &RunArray[v29 + 1]; v30 >= 0 && m[-1].NumberOfBits < (unsigned int)v25; --m )
        {
          --v29;
          --v30;
          *m = m[-1];
        }
      }
      v36 = v29;
      v9 = v40;
      v37 = &RunArray[v36];
      v37[1].NumberOfBits = v25;
      v5 = SizeOfRunArray;
      v37[1].StartingIndex = v14 + v26;
      if ( !LocateLongestRuns && v40 >= SizeOfRunArray )
        return v9;
      v4 = RunArray;
    }
    LOBYTE(v6) = SizeOfBitMap;
    v8 = v38;
LABEL_6:
    ++v11;
    v14 += 8;
  }
  if ( (_DWORD)v12 )
  {
    if ( v9 < v5 )
    {
      ++v9;
      goto LABEL_33;
    }
    if ( v4[v9 - 1].NumberOfBits < (unsigned int)v12 )
    {
LABEL_33:
      v32 = v9 - 2;
      if ( LocateLongestRuns )
      {
        v33 = v32;
        for ( n = &v4[v32 + 1]; v33 >= 0 && n[-1].NumberOfBits < (unsigned int)v12; --n )
        {
          --v32;
          --v33;
          *n = n[-1];
        }
      }
      v4[v32 + 1].NumberOfBits = v12;
      v4[v32 + 1].StartingIndex = v13;
    }
  }
  return v9;
}
