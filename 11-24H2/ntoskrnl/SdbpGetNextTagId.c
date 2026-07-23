/*
 * XREFs of SdbpGetNextTagId @ 0x140946EF0
 * Callers:
 *     SdbGetNextChild @ 0x140947CD0 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140947DC0 (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x140A73568 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140483CB4 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagDataSize @ 0x1409479E0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140947E60 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int TagHeadSize; // esi
  unsigned int TagDataSize; // eax

  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v4) == 0x20000000 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextTagId", 2826, (unsigned int)"Reading from unfinished list");
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v4);
  if ( !TagHeadSize )
  {
    if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
      return 0x10000000LL;
    return *(unsigned int *)(a1 + 20);
  }
  TagDataSize = SdbGetTagDataSize(a1, v4);
  if ( (*(_DWORD *)(a1 + 2608) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v4 + TagHeadSize + TagDataSize;
}
