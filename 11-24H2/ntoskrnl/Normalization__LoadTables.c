/*
 * XREFs of Normalization__LoadTables @ 0x14078608C
 * Callers:
 *     RtlpGetNormalization @ 0x14078D4E0 (RtlpGetNormalization.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall Normalization__LoadTables(__int64 a1, unsigned __int16 *a2, unsigned __int64 a3, _DWORD *a4)
{
  char v4; // ch
  char v7; // si^1
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  char v12; // dl
  int v13; // eax
  unsigned __int16 *v14; // rax
  __int64 v15; // rax
  unsigned __int16 *v16; // rcx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r8

  v7 = v4;
  memset_0(a4, 0, 0x78uLL);
  v9 = a3 >> 1;
  if ( a3 >> 1 < a2[26] )
    return 3221225624LL;
  v10 = a2[27];
  if ( v9 < v10 )
    return 3221225624LL;
  v11 = a2[28];
  if ( v9 < v11
    || v9 < a2[29]
    || v9 < a2[30]
    || v9 < a2[31]
    || v9 < a2[32]
    || v9 < a2[33]
    || (_DWORD)v11 - (_DWORD)v10 != 4352 )
  {
    return 3221225624LL;
  }
  *((_QWORD *)a4 + 1) = a2;
  v12 = 0;
  *((_QWORD *)a4 + 2) = a3;
  *a4 = a2[20];
  a4[6] = a2[21];
  a4[7] = a2[22];
  *((_QWORD *)a4 + 4) = &a2[a2[27]];
  *((_QWORD *)a4 + 5) = &a2[a2[28]];
  a4[14] = a2[23];
  *((_QWORD *)a4 + 8) = &a2[a2[29]];
  *((_QWORD *)a4 + 9) = &a2[a2[30]];
  *((_QWORD *)a4 + 10) = &a2[a2[31]];
  v13 = a2[24];
  a4[22] = v13;
  if ( v13 )
  {
    *((_BYTE *)a4 + 112) = 0;
    *((_QWORD *)a4 + 12) = &a2[a2[32]];
    v14 = &a2[a2[33]];
  }
  else
  {
    *((_BYTE *)a4 + 112) = 1;
    v14 = 0LL;
    *((_QWORD *)a4 + 12) = 0LL;
  }
  *((_QWORD *)a4 + 13) = v14;
  v15 = a2[26];
  *(_DWORD *)((char *)a4 + 114) = -1;
  *((_BYTE *)a4 + 118) = -1;
  v16 = &a2[v15];
  *((_QWORD *)a4 + 6) = v16;
  v17 = *(_BYTE *)v16;
  do
  {
    v18 = v17;
    switch ( v17 )
    {
      case 0xD8:
        *((_BYTE *)a4 + 114) = v12;
        break;
      case 0xDC:
        *((_BYTE *)a4 + 115) = v12;
        break;
      case 0xDD:
        *((_BYTE *)a4 + 116) = v12;
        break;
      case 0xE6:
        *((_BYTE *)a4 + 117) = v12;
        break;
      case 0xE7:
        *((_BYTE *)a4 + 118) = v12;
        break;
    }
    v16 = (unsigned __int16 *)((char *)v16 + 1);
    ++v12;
    v17 = *(_BYTE *)v16;
  }
  while ( *(_BYTE *)v16 >= v18 );
  *((_BYTE *)a4 + 113) = (v7 & 1) == 0;
  return 0LL;
}
