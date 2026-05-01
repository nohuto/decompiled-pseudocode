/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x1800977B8
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180097588 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpBinarySearchFirst @ 0x180097714 (SdbpBinarySearchFirst.c)
 *     SdbGetTagDataSize @ 0x180097E24 (SdbGetTagDataSize.c)
 *     SdbpGetMappedTagData @ 0x18009836C (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned int v9; // ebp
  __int64 MappedTagData; // rax
  unsigned int v11; // ebx
  __int64 v12; // r14
  int v13; // r10d
  int *v14; // r9
  int v15; // eax
  int v16; // r8d
  int v17; // r11d
  int v18; // eax
  int v19; // ecx
  unsigned int *v20; // r9

  v6 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801
    || (v9 = (unsigned int)SdbGetTagDataSize(a1, v6) / 0xC,
        MappedTagData = SdbpGetMappedTagData(a1, v6),
        v11 = 0,
        (v12 = MappedTagData) == 0) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v13 = 1;
  v14 = (int *)(a4 + 16);
  if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
  {
    v18 = SdbpBinarySearchFirst(MappedTagData, v9, a3, v14);
    goto LABEL_22;
  }
  *v14 = -1;
  v15 = -1;
  v16 = 0;
  v17 = v9 - 1;
  if ( (int)(v9 - 1) < 0 )
  {
LABEL_12:
    if ( v16 - v17 <= 1 )
      v13 = 0;
    else
      *v14 = v15;
    v18 = v13;
    if ( v13 && *v14 < v9 - 1 )
    {
      v19 = *(_DWORD *)(v12 + 12LL * (unsigned int)(*v14 + 1) + 8);
      v18 = v13;
      goto LABEL_16;
    }
  }
  else
  {
    while ( 1 )
    {
      v15 = (v17 + v16) / 2;
      if ( v15 < 0 || v15 >= v9 )
        break;
      if ( a3 > *(_QWORD *)(v12 + 12LL * v15) || (v17 = v15 - 1, a3 >= *(_QWORD *)(v12 + 12LL * v15)) )
        v16 = v15 + 1;
      if ( v17 < v16 )
        goto LABEL_12;
    }
    v18 = 0;
  }
  v19 = 0;
LABEL_16:
  *(_DWORD *)(a4 + 8) = v19;
  v20 = (unsigned int *)(a4 + 16);
  *(_DWORD *)(a4 + 4) = 0;
LABEL_22:
  if ( v18 )
    return *(unsigned int *)(v12 + 12LL * *v20 + 8);
  return v11;
}
