/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x14082B2A0
 * Callers:
 *     SdbMergeIsEntryUpdated @ 0x1407F8158 (SdbMergeIsEntryUpdated.c)
 *     SdbFindFirstStringIndexedTag @ 0x14082B0F4 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1408252A4 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1408257B0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbpBinarySearchFirst @ 0x14082B3B4 (SdbpBinarySearchFirst.c)
 *     SdbpBinarySearchUnique @ 0x140A75270 (SdbpBinarySearchUnique.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  __int64 MappedTagData; // rax
  unsigned int v12; // ebx
  __int64 v13; // rbp
  _DWORD *v14; // r9
  int v15; // eax
  _DWORD *v16; // r9
  int v18; // edx

  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801
    && (v10 = (unsigned int)SdbGetTagDataSize(a1, a2, v8, v9) / 0xC,
        MappedTagData = SdbpGetMappedTagData(a1, a2),
        v12 = 0,
        (v13 = MappedTagData) != 0) )
  {
    v14 = a4 + 4;
    if ( (a4[5] & 1) != 0 )
    {
      v15 = SdbpBinarySearchUnique(MappedTagData, v10, a3, v14);
      if ( v15 && *v16 < v10 - 1 )
        v18 = *(_DWORD *)(v13 + 12LL * (unsigned int)(*v16 + 1) + 8);
      else
        v18 = 0;
      a4[2] = v18;
      a4[1] = 0;
    }
    else
    {
      v15 = SdbpBinarySearchFirst(MappedTagData, v10, a3, v14);
    }
    if ( v15 )
      return *(unsigned int *)(v13 + 12LL * (unsigned int)*v16 + 8);
    return v12;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
