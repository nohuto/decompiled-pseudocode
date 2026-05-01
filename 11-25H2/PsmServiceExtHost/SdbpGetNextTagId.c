/*
 * XREFs of SdbpGetNextTagId @ 0x180093BB8
 * Callers:
 *     SdbGetFirstChild @ 0x180092070 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009240C (SdbGetNextChild.c)
 *     SdbpGetNextIndexedRecord @ 0x180097930 (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x180097E24 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180098568 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int TagHeadSize; // esi
  unsigned int TagDataSize; // eax

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v2) == 0x20000000 )
  {
    AslLogCallPrintf(1LL);
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v2);
  if ( TagHeadSize )
  {
    TagDataSize = SdbGetTagDataSize(a1, v2);
    if ( (*(_BYTE *)(a1 + 2608) & 1) == 0 )
      TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
    return v2 + TagHeadSize + TagDataSize;
  }
  else
  {
    if ( !(unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline() )
      return *(unsigned int *)(a1 + 20);
    return 0x10000000LL;
  }
}
