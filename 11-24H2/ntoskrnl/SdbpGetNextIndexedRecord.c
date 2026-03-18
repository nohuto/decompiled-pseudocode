/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x140A79268
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x140807CC8 (SdbMergeIsEntryUpdated.c)
 *     SdbGetDatabaseMatchEx @ 0x14095D42C (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextStringIndexedTag @ 0x140A79128 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindMatchingName @ 0x140A79168 (SdbpFindMatchingName.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x14095F430 (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x14095FA14 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x14095FF20 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 MappedTagData; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int TagDataSize; // eax
  __int64 v10; // r8
  const char *v12; // r9
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // rcx
  unsigned int NextTagId; // edi
  __int16 TagFromTagID; // si
  __int16 v18; // ax

  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 )
  {
    v12 = "The tag 0x%lx is not an index tag";
    v13 = 758LL;
    goto LABEL_7;
  }
  MappedTagData = SdbpGetMappedTagData(a1, a2);
  if ( !MappedTagData )
  {
    v12 = "Failed to get pointer to the index data tagid x%lx";
    v13 = 765LL;
LABEL_7:
    AslLogCallPrintf(1LL, (__int64)"SdbpGetNextIndexedRecord", v13, (__int64)v12);
    return 0LL;
  }
  if ( (a3[5] & 1) != 0 )
  {
    v14 = a3[1];
    if ( !v14 )
      v14 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
    NextTagId = SdbpGetNextTagId(a1, v14, v7, v8);
    TagFromTagID = SdbGetTagFromTagID(a1, v14);
    v18 = SdbGetTagFromTagID(a1, NextTagId);
    if ( v18 && (v18 & 0xF000) == 0x7000 && v18 == TagFromTagID && NextTagId != a3[2] )
    {
      a3[1] = NextTagId;
      return NextTagId;
    }
    return 0LL;
  }
  TagDataSize = SdbGetTagDataSize(a1, a2, v7, v8);
  v10 = (unsigned int)a3[4];
  if ( (_DWORD)v10 == TagDataSize / 0xC - 1 )
    return 0LL;
  v15 = (unsigned int)(v10 + 1);
  if ( *(_QWORD *)(MappedTagData + 12 * v10) != *(_QWORD *)(MappedTagData + 12 * v15) )
    return 0LL;
  a3[4] = v15;
  return *(unsigned int *)(MappedTagData + 12 * v15 + 8);
}
