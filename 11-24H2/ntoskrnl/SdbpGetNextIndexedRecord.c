/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x140A73568
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 *     SdbGetDatabaseMatchEx @ 0x140944EEC (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextStringIndexedTag @ 0x140A73428 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindMatchingName @ 0x140A73468 (SdbpFindMatchingName.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x140946EF0 (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x1409474D4 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1409479E0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 MappedTagData; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int TagDataSize; // eax
  __int64 v10; // r8
  unsigned int v12; // esi
  __int64 v13; // rcx
  unsigned int NextTagId; // edi
  __int16 TagFromTagID; // si
  __int16 v16; // ax

  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 || (MappedTagData = SdbpGetMappedTagData(a1, a2)) == 0 )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpGetNextIndexedRecord");
    return 0LL;
  }
  if ( (a3[5] & 1) != 0 )
  {
    v12 = a3[1];
    if ( !v12 )
      v12 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
    NextTagId = SdbpGetNextTagId(a1, v12, v7, v8);
    TagFromTagID = SdbGetTagFromTagID(a1, v12);
    v16 = SdbGetTagFromTagID(a1, NextTagId);
    if ( v16 && (v16 & 0xF000) == 0x7000 && v16 == TagFromTagID && NextTagId != a3[2] )
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
  v13 = (unsigned int)(v10 + 1);
  if ( *(_QWORD *)(MappedTagData + 12 * v10) != *(_QWORD *)(MappedTagData + 12 * v13) )
    return 0LL;
  a3[4] = v13;
  return *(unsigned int *)(MappedTagData + 12 * v13 + 8);
}
