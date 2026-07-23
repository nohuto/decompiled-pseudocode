/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x1409451F0
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 *     SdbFindFirstStringIndexedTag @ 0x140945304 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     SdbpBinarySearchFirst @ 0x14094514C (SdbpBinarySearchFirst.c)
 *     SdbpGetMappedTagData @ 0x1409474D4 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1409479E0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbpBinarySearchUnique @ 0x140A71814 (SdbpBinarySearchUnique.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned int v6; // esi
  unsigned int v8; // r14d
  __int64 MappedTagData; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  int *v12; // r9
  int v13; // eax
  _DWORD *v14; // r9
  const char *v16; // r9
  int v17; // r8d
  int v18; // edx

  v6 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2, a3, a4) != 0x9801 )
  {
    v16 = "The tag 0x%lx is not an index tag";
    v17 = 689;
LABEL_9:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetFirstIndexedRecord", v17, (_DWORD)v16);
    return 0LL;
  }
  v8 = (unsigned int)SdbGetTagDataSize(a1, v6) / 0xC;
  MappedTagData = SdbpGetMappedTagData(a1, v6);
  v10 = 0;
  v11 = MappedTagData;
  if ( !MappedTagData )
  {
    v16 = "Failed to get the pointer to index data, index tagid 0x%lx";
    v17 = 698;
    goto LABEL_9;
  }
  v12 = a4 + 4;
  if ( (a4[5] & 1) != 0 )
  {
    v13 = SdbpBinarySearchUnique(MappedTagData, v8, a3, v12);
    if ( v13 && *v14 < v8 - 1 )
      v18 = *(_DWORD *)(v11 + 12LL * (unsigned int)(*v14 + 1) + 8);
    else
      v18 = 0;
    a4[2] = v18;
    a4[1] = 0;
  }
  else
  {
    v13 = SdbpBinarySearchFirst(MappedTagData, v8, a3, v12);
  }
  if ( v13 )
    return *(unsigned int *)(v11 + 12LL * (unsigned int)*v14 + 8);
  return v10;
}
