/*
 * XREFs of SdbMergeIsEntryUpdated @ 0x140807CC8
 * Callers:
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140805F44 (SdbpIsEntryIdAvailableInOtherDb.c)
 * Callees:
 *     SdbFindParentTagFromAncestors @ 0x140805908 (SdbFindParentTagFromAncestors.c)
 *     __SdbpFindTagFromAncestors @ 0x140805A90 (__SdbpFindTagFromAncestors.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140808094 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetFirstIndexedRecord @ 0x14095D730 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x14095F0F8 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x14095F4E4 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14095F588 (SdbReadWORDTag.c)
 *     SdbpGetMappedTagData @ 0x14095FA14 (SdbpGetMappedTagData.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x14095FF20 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409606E4 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbpGetNextIndexedRecord @ 0x140A79268 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbMergeIsEntryUpdated(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v6; // edi
  int TagFromTagID; // r12d
  __int64 v9; // rdx
  unsigned __int64 i; // rcx
  unsigned __int16 *v11; // rsi
  unsigned __int16 v12; // r15
  unsigned int FirstTag; // r13d
  const char *v14; // r9
  int v15; // r8d
  unsigned int TagFromAncestors; // eax
  unsigned int ParentTagFromAncestors; // eax
  unsigned int v18; // r12d
  unsigned int m; // eax
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int j; // eax
  unsigned int v23; // esi
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // r12d
  int v28; // eax
  __int64 IndexKeyFromString; // rax
  unsigned int k; // eax
  unsigned int v31; // eax
  int v32; // [rsp+20h] [rbp-40h]
  __int128 v33; // [rsp+30h] [rbp-30h] BYREF
  __int128 v34; // [rsp+40h] [rbp-20h]
  PCWSTR StringTagPtr; // [rsp+50h] [rbp-10h]
  unsigned int v36; // [rsp+A0h] [rbp+40h]

  StringTagPtr = 0LL;
  v6 = a2;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a1 || !a3 )
    return a3 != 0 ? -1073741585 : -1073741583;
  if ( !(_DWORD)a2 )
    return 3221225712LL;
  if ( !a4 )
    return 3221225714LL;
  *a4 = 0;
  TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2, a3, a4);
  v9 = 0LL;
  for ( i = 0LL; i < 0x15E; i += 10LL )
  {
    if ( *(_WORD *)((char *)qword_14003CC20 + i) == (_WORD)TagFromTagID )
    {
      v11 = (unsigned __int16 *)qword_14003CC20 + 5 * v9;
      if ( v11 )
      {
        v12 = v11[1];
        if ( v12 )
        {
          if ( (TagFromTagID & 0xF000) == 0x7000 )
          {
            FirstTag = SdbFindFirstTag(a1, v6, v12);
            if ( FirstTag )
            {
              TagFromAncestors = _SdbpFindTagFromAncestors(a3, 2LL, 28751LL, 30724LL);
              v36 = TagFromAncestors;
              if ( TagFromAncestors )
              {
                for ( j = SdbFindFirstTag(a3, TagFromAncestors, 30723LL); ; j = SdbFindNextTag(a3, v36, v23) )
                {
                  v23 = j;
                  if ( !j )
                    break;
                  v24 = SdbFindFirstTag(a3, j, 14338LL);
                  if ( !v24 )
                    return 3221225816LL;
                  if ( (_WORD)TagFromTagID == (unsigned __int16)SdbReadWORDTag(a3, v24, 0LL) )
                  {
                    v25 = SdbFindFirstTag(a3, v23, 14339LL);
                    if ( !v25 )
                      return 3221225816LL;
                    if ( v12 == (unsigned __int16)SdbReadWORDTag(a3, v25, 0LL) )
                    {
                      WORD6(v33) = v12;
                      v26 = SdbFindFirstTag(a3, v23, 16406LL);
                      DWORD1(v34) = SdbReadDWORDTag(a3, v26, 0LL);
                      v27 = SdbFindFirstTag(a3, v23, 38913LL);
                      if ( !v27 )
                      {
                        AslLogCallPrintf(
                          1,
                          (unsigned int)"SdbMergeIsEntryUpdated",
                          3110,
                          (unsigned int)"Encountered an index without a TAG_INDEX_BITS entry 0x%08X");
                        return 3221225816LL;
                      }
                      LODWORD(v33) = v27;
                      v28 = v12 & 0xF000;
                      if ( v28 == 24576 || v28 == 0x8000 )
                      {
                        StringTagPtr = (PCWSTR)SdbGetStringTagPtr(a1, FirstTag);
                        IndexKeyFromString = SdbMakeIndexKeyFromStringEx(StringTagPtr);
                      }
                      else
                      {
                        if ( v28 != 36864 )
                        {
                          AslLogCallPrintf(
                            1,
                            (unsigned int)"SdbMergeIsEntryUpdated",
                            3137,
                            (unsigned int)"Encountered a merge entry key not a string or guid %x");
                          return 3221225701LL;
                        }
                        if ( (unsigned int)SdbGetTagDataSize(a1, FirstTag) != 16 )
                        {
                          v14 = "Original entry 0x%08X has bad GUID size";
                          v15 = 3118;
                          goto LABEL_16;
                        }
                        StringTagPtr = (PCWSTR)SdbpGetMappedTagData(a1, FirstTag);
                        IndexKeyFromString = *(_QWORD *)StringTagPtr ^ *((_QWORD *)StringTagPtr + 1);
                      }
                      *((_QWORD *)&v34 + 1) = IndexKeyFromString;
                      for ( k = SdbpGetFirstIndexedRecord(a3, v27, IndexKeyFromString, &v33, v32);
                            ;
                            k = SdbpGetNextIndexedRecord(a3, (unsigned int)v33, &v33) )
                      {
                        v20 = k;
                        if ( !k )
                          break;
                        v31 = SdbFindFirstTag(a3, k, v12);
                        if ( v31 && (unsigned int)SdbpMergeAreTagValuesEqual(a1, FirstTag, a3, v31) )
                        {
LABEL_48:
                          *a4 = v20;
                          return 0LL;
                        }
                      }
                      return 3221226021LL;
                    }
                    v32 = TagFromTagID;
                    AslLogCallPrintf(
                      1,
                      (unsigned int)"SdbMergeIsEntryUpdated",
                      3099,
                      (unsigned int)"Encountered an index with an unexpected key for tag %x");
                  }
                }
              }
              else
              {
                ParentTagFromAncestors = SdbFindParentTagFromAncestors(a3, (__int64)(v11 + 2));
                v18 = ParentTagFromAncestors;
                if ( ParentTagFromAncestors )
                {
                  for ( m = SdbFindFirstTag(a3, ParentTagFromAncestors, *v11); ; m = SdbFindNextTag(a3, v18, v20) )
                  {
                    v20 = m;
                    if ( !m )
                      break;
                    v21 = SdbFindFirstTag(a3, m, v12);
                    if ( (unsigned int)SdbpMergeAreTagValuesEqual(a1, FirstTag, a3, v21) )
                      goto LABEL_48;
                  }
                }
              }
            }
            else
            {
              v14 = "Original entry 0x%08X missing merge id key";
              v15 = 3065;
LABEL_16:
              AslLogCallPrintf(3, (unsigned int)"SdbMergeIsEntryUpdated", v15, (_DWORD)v14);
            }
          }
        }
      }
      return 3221226021LL;
    }
    ++v9;
  }
  return 3221226021LL;
}
