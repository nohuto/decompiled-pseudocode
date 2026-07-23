/*
 * XREFs of SdbpMergeAreTagValuesEqual @ 0x1408087D4
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     toupper @ 0x1404FD460 (toupper.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     SdbpGetMappedTagData @ 0x1409474D4 (SdbpGetMappedTagData.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409479E0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpMergeAreTagValuesEqual(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v7; // esi
  __int16 TagFromTagID; // bp
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // ax
  int v13; // ecx
  SIZE_T TagDataSize; // rbp
  const void *MappedTagData; // rsi
  const void *v16; // rax
  bool v18; // zf
  _WORD *StringTagPtr; // rsi
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // ecx
  int v23; // ebx

  v4 = 0;
  v5 = a4;
  v7 = a2;
  if ( !(_DWORD)a2 || !(_DWORD)a4 )
  {
    v18 = (_DWORD)a2 == (_DWORD)a4;
    goto LABEL_25;
  }
  TagFromTagID = SdbGetTagFromTagID(a1, a2, a3, a4);
  v12 = SdbGetTagFromTagID(a3, v5, v10, v11);
  if ( TagFromTagID != v12 )
    return 0LL;
  v13 = TagFromTagID & 0xF000;
  if ( v13 == 4096 )
  {
    v18 = (v12 & 0xF000) == 4096;
    goto LABEL_25;
  }
  if ( v13 == 24576 || v13 == 0x8000 )
  {
    if ( (((v12 & 0xF000) - 24576) & 0xDFFF) != 0 )
      return 0LL;
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, v7);
    v20 = SdbGetStringTagPtr(a3, v5);
    if ( StringTagPtr && v20 )
    {
      v21 = v20 - (_QWORD)StringTagPtr;
      while ( 1 )
      {
        v22 = *(unsigned __int16 *)((char *)StringTagPtr + v21);
        if ( !*StringTagPtr )
          break;
        v23 = toupper(v22);
        if ( toupper((unsigned __int16)*StringTagPtr) != v23 )
          return 0LL;
        ++StringTagPtr;
      }
      v18 = (_WORD)v22 == 0;
    }
    else
    {
      v18 = StringTagPtr == (_WORD *)v20;
    }
    goto LABEL_25;
  }
  TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v7);
  if ( TagDataSize != (unsigned int)SdbGetTagDataSize(a3, v5) )
    return 0LL;
  MappedTagData = (const void *)SdbpGetMappedTagData(a1, v7);
  v16 = (const void *)SdbpGetMappedTagData(a3, v5);
  if ( TagDataSize && (!MappedTagData || !v16) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpMergeAreTagValuesEqual",
      889,
      (unsigned int)"SdbpGetMappedTagData returned null data pointer for data with size > 0. Null returned for %s");
    return 0LL;
  }
  v18 = TagDataSize == RtlCompareMemory(MappedTagData, v16, TagDataSize);
LABEL_25:
  LOBYTE(v4) = v18;
  return v4;
}
