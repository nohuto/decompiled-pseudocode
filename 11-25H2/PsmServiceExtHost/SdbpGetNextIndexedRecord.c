/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x180097930
 * Callers:
 *     SdbpFindMatchingDWORD @ 0x180097BA4 (SdbpFindMatchingDWORD.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbpGetNextTagId @ 0x180093BB8 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x180097E24 (SdbGetTagDataSize.c)
 *     SdbpGetMappedTagData @ 0x18009836C (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 MappedTagData; // rdi
  unsigned int v8; // esi
  unsigned int NextTagId; // edi
  __int16 TagFromTagID; // si
  __int16 v11; // ax
  unsigned int TagDataSize; // eax
  __int64 v13; // r8
  __int64 v14; // rcx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 || (MappedTagData = SdbpGetMappedTagData(a1, v4)) == 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v4);
    v13 = *(unsigned int *)(a3 + 16);
    if ( (_DWORD)v13 != TagDataSize / 0xC - 1 )
    {
      v14 = (unsigned int)(v13 + 1);
      if ( *(_QWORD *)(MappedTagData + 12 * v13) == *(_QWORD *)(MappedTagData + 12 * v14) )
      {
        *(_DWORD *)(a3 + 16) = v14;
        return *(unsigned int *)(MappedTagData + 12 * v14 + 8);
      }
    }
    return 0LL;
  }
  v8 = *(_DWORD *)(a3 + 4);
  if ( !v8 )
    v8 = *(_DWORD *)(MappedTagData + 12LL * *(unsigned int *)(a3 + 16) + 8);
  NextTagId = SdbpGetNextTagId(a1, v8);
  TagFromTagID = SdbGetTagFromTagID(a1, v8);
  v11 = SdbGetTagFromTagID(a1, NextTagId);
  if ( !v11 || (v11 & 0xF000) != 0x7000 || v11 != TagFromTagID || NextTagId == *(_DWORD *)(a3 + 8) )
    return 0LL;
  *(_DWORD *)(a3 + 4) = NextTagId;
  return NextTagId;
}
